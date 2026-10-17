// ---------------------------------------------------------------------------
// libpatch.so -- hybrid patch library (goal: rounds capped at 100, see PROGRESS)
//
//   original libcocos2dcpp.so : untouched, does almost everything
//   this library              : loaded first by Java, patches a FEW functions
//
// Hook kinds implemented here:
//   * hw_hook_install_tramp(target, replace, copy_len)  -- 8-byte jump + trampoline
//        (use when the target's prologue is >= 8 bytes of whole instructions;
//         the replacement may call the trampoline to run the ORIGINAL code)
//   * hw_write_jump4(at, dest)                          -- 4-byte Thumb-2 b.w
//        (use for the tiny 6-byte setters; 2 bytes of the original remain and are
//         harmless because they are the original `bx lr`)
//        The T4 encoding below was validated against a real assembled sample:
//        `b .` must produce the bytes  ff f7 fe bf.
// ---------------------------------------------------------------------------

#include <stdint.h>
#include <stddef.h>
#include <dlfcn.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <pthread.h>
#include <string.h>
#include <vector>
#include <sys/mman.h>

extern "C" int __android_log_print(int prio, const char *tag, const char *fmt, ...);
#define PATCH_LOG(...) __android_log_print(4 /*INFO*/, "dsh_patch", __VA_ARGS__)
#define PATCH_EXPORT extern "C" __attribute__((visibility("default")))

static volatile unsigned long g_hooks_ok = 0;
static volatile unsigned long g_hooks_fail = 0;
static volatile unsigned long g_c_forced_true = 0;

PATCH_EXPORT void hw_patch_dumpCounters()
{
    PATCH_LOG("COUNTERS hooks_ok=%lu hooks_fail=%lu forced_true=%lu",
              g_hooks_ok, g_hooks_fail, g_c_forced_true);
}

// ---------------------------------------------------------------------------
// lazy resolution + memory helpers
// ---------------------------------------------------------------------------
static void *patch_handle()
{
    static void *s_h = 0;
    if (s_h == 0)
    {
        s_h = dlopen("libcocos2dcpp.so", RTLD_NOW | RTLD_GLOBAL);
        if (s_h == 0) { s_h = dlopen("libcocos2dcpp.so", RTLD_LAZY); }
    }
    return s_h;
}

template <typename T>
static T patch_sym_env(const char *name)
{
    void *h = patch_handle();
    void *p = h ? dlsym(h, name) : 0;
    if (p == 0) { PATCH_LOG("dlsym MISS: %s", name); }
    return (T)p;
}

static int hw_make_writable(void *addr, size_t len)
{
    long page = sysconf(_SC_PAGESIZE);
    uintptr_t start = ((uintptr_t)addr) & ~(uintptr_t)(page - 1);
    uintptr_t end = (((uintptr_t)addr + len) + page - 1) & ~(uintptr_t)(page - 1);
    return mprotect((void *)start, (size_t)(end - start), PROT_READ | PROT_WRITE | PROT_EXEC) == 0;
}

// ---------------------------------------------------------------------------
// 8-byte jump (ARM or Thumb source) + trampoline
// ---------------------------------------------------------------------------
#define HW_JUMP_LEN 8

static int hw_write_jump8(void *at, void *dest, int thumb)
{
    unsigned char p[8];
    uintptr_t d = ((uintptr_t)dest) | 1;
    if (thumb) { p[0] = 0xDF; p[1] = 0xF8; p[2] = 0x00; p[3] = 0xF0; }
    else       { p[0] = 0x04; p[1] = 0xF0; p[2] = 0x1F; p[3] = 0xE5; }
    p[4] = (unsigned char)(d & 0xFF);         p[5] = (unsigned char)((d >> 8) & 0xFF);
    p[6] = (unsigned char)((d >> 16) & 0xFF); p[7] = (unsigned char)((d >> 24) & 0xFF);
    if (!hw_make_writable(at, 8)) { return -1; }
    memcpy(at, p, 8);
    __builtin___clear_cache((char *)at, (char *)at + 8);
    return 0;
}

static void *hw_hook_install_tramp(void *target, void *replace, int copy_len)
{
    if (target == 0 || replace == 0 || copy_len < HW_JUMP_LEN) { return 0; }
    int thumb = (((uintptr_t)target) & 1) != 0;
    unsigned char *entry = (unsigned char *)(((uintptr_t)target) & ~(uintptr_t)1);

    size_t total = (size_t)copy_len + HW_JUMP_LEN;
    unsigned char *tramp = (unsigned char *)mmap(0, total, PROT_READ | PROT_WRITE | PROT_EXEC,
                                                 MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (tramp == MAP_FAILED) { return 0; }
    memcpy(tramp, entry, (size_t)copy_len);
    if (hw_write_jump8(tramp + copy_len, (void *)((uintptr_t)entry + copy_len), thumb) != 0)
    { munmap(tramp, total); return 0; }
    if (hw_write_jump8(entry, replace, thumb) != 0) { munmap(tramp, total); return 0; }
    g_hooks_ok++;
    PATCH_LOG("hook8+trampoline OK: %p -> %p (tramp=%p copy=%d thumb=%d)",
              entry, replace, tramp, copy_len, thumb);
    return tramp;
}

// ---------------------------------------------------------------------------
// 4-byte Thumb-2 b.w  (T4 encoding, validated: `b .` == ff f7 fe bf)
// ---------------------------------------------------------------------------
static uint32_t hw_encode_bw(intptr_t pc, intptr_t dest)
{
    int32_t imm = (int32_t)(dest - pc);          /* pc = address of the b.w + 4 */
    uint32_t S = (uint32_t)((imm >> 24) & 1);
    uint32_t imm10 = (uint32_t)((imm >> 12) & 0x3FF);
    uint32_t imm11 = (uint32_t)((imm >> 1) & 0x7FF);
    uint32_t I1 = (uint32_t)((imm >> 23) & 1);
    uint32_t I2 = (uint32_t)((imm >> 22) & 1);
    uint32_t J1 = (~(I1 ^ S)) & 1;
    uint32_t J2 = (~(I2 ^ S)) & 1;
    uint32_t h1 = 0xF000u | (S << 10) | imm10;
    uint32_t h2 = 0xB800u | (J1 << 13) | (J2 << 11) | imm11;
    return (h2 << 16) | h1;                       /* little-endian memory order */
}

/* runtime self-check of the encoder (must print "OK") */
static void hw_selfcheck_bw(void)
{
    uint32_t w = hw_encode_bw(0 + 4, 0);          /* `b .` at address 0 */
    unsigned char b[4];
    memcpy(b, &w, 4);
    if (b[0] == 0xFF && b[1] == 0xF7 && b[2] == 0xFE && b[3] == 0xBF)
    { PATCH_LOG("b.w encoder selfcheck OK (ff f7 fe bf)"); }
    else
    { PATCH_LOG("b.w encoder selfcheck FAILED: %02x %02x %02x %02x", b[0], b[1], b[2], b[3]); }
}

static int hw_write_jump4(void *at, void *dest)
{
    intptr_t pc = (intptr_t)at + 4;
    intptr_t d = (intptr_t)dest | 1;
    intptr_t delta = d - pc;
    if (delta < 0) { delta = -delta; }
    if (delta > 0xF00000) { PATCH_LOG("jump4: too far (%p -> %p)", at, dest); return -2; }
    uint32_t w = hw_encode_bw(pc, d);
    if (!hw_make_writable(at, 4)) { return -1; }
    memcpy(at, &w, 4);
    __builtin___clear_cache((char *)at, (char *)at + 4);
    return 0;
}

// ---------------------------------------------------------------------------
// replacement bodies
// ---------------------------------------------------------------------------
/* --- 礼包 UI tick: unchanged behaviour, calls the original through --- */
static void *g_tramp_onegift_tick = 0;
static volatile unsigned long g_c_onegift_tick = 0;
static void hw_onegift_tick(void *self, float dt)
{
    if ((++g_c_onegift_tick % 30) == 1) { PATCH_LOG("HOOK BLOneGiftUI::tick n=%lu", g_c_onegift_tick); }
    if (g_tramp_onegift_tick) { ((void (*)(void *, float))g_tramp_onegift_tick)(self, dt); }
}

/* --- DataManager flag setters: FORCE TRUE (the switches the user asked for) --- */
static void hw_setISShowGift(void *self, int v)      { g_c_forced_true++; *(unsigned char *)((intptr_t)self + 0x68) = 1; }
static void hw_setISShowSevenDay(void *self, int v)  { g_c_forced_true++; *(unsigned char *)((intptr_t)self + 0x6c) = 1; }
static void hw_setISBuyVip(void *self, int v)        { g_c_forced_true++; *(unsigned char *)((intptr_t)self + 0x91) = 1; }

// ---------------------------------------------------------------------------
// two-stage hook for TINY targets (e.g. the 6-byte DataManager setters):
//   target(4 bytes b.w) -> STUB allocated NEAR the target -> full 8-byte jump -> replace
// The stub is placed within +-16MB of the target so the 4-byte b.w can reach it.
// ---------------------------------------------------------------------------
/* R361: config files live in the app-specific external dir on modern Android --
   writing to /sdcard root throws EPERM (scoped storage) even with the permission
   granted. Try the app dir first, then fall back to the legacy /sdcard location so
   older installs keep working. */
#define HW_CFG_DIR   "/data/data/com.DBGame.DiabloLOL/files/"
#define HW_CFG_DIR2  "/storage/emulated/0/Android/data/com.DBGame.DiabloLOL/files/"
static FILE *hw_cfg(const char *name, const char *mode)
{
    char p[256];
    snprintf(p, sizeof(p), "%s%s", HW_CFG_DIR, name);
    FILE *f = fopen(p, mode);
    if (f != 0) { return f; }
    snprintf(p, sizeof(p), "%s%s", HW_CFG_DIR2, name);
    f = fopen(p, mode);
    if (f != 0) { return f; }
    snprintf(p, sizeof(p), "/sdcard/%s", name);
    return fopen(p, mode);
}
static void hw_cfg_path(char *out, size_t n, const char *name)
{
    snprintf(out, n, "%s%s", HW_CFG_DIR, name);   /* private dir: always writable */
}
static void *hw_alloc_near(void *target)
{
    long page = sysconf(_SC_PAGESIZE);
    uintptr_t base = ((uintptr_t)target) & ~(uintptr_t)(page - 1);
    for (int i = 1; i <= 8192; i++)
    {
        for (int s = 0; s < 2; s++)
        {
            intptr_t off = (intptr_t)i * page * (s ? -1 : 1);
            void *hint = (void *)(base + off);
            /* R244 FIX: never MAP_FIXED here -- that would unmap whatever already lives at
               that address (it did: the original .so's pages => 13 crash lines). Use
               MAP_FIXED_NOREPLACE so the kernel refuses instead of clobbering. */
#ifndef MAP_FIXED_NOREPLACE
#define MAP_FIXED_NOREPLACE 0x100000
#endif
            void *p = mmap(hint, (size_t)page, PROT_READ | PROT_WRITE | PROT_EXEC,
                           MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
            if (p == MAP_FAILED || p != hint)     /* refused (already mapped) => skip */
            {
                if (p != MAP_FAILED) { munmap(p, (size_t)page); }
                continue;
            }
            intptr_t d = (intptr_t)p - (intptr_t)target;
            if (d < 0) { d = -d; }
            if (d < 0xF00000) { return p; }     /* inside b.w range */
            munmap(p, (size_t)page);
        }
    }
    return 0;
}

static int hw_hook_install_near(void *target, void *replace)
{
    unsigned char *entry = (unsigned char *)(((uintptr_t)target) & ~(uintptr_t)1);
    void *stub = hw_alloc_near(entry);
    if (stub == 0) { PATCH_LOG("alloc_near FAILED for %p", entry); return -3; }
    if (hw_write_jump8(stub, replace, 1) != 0) { PATCH_LOG("stub jump8 FAILED"); return -4; }
    if (hw_write_jump4(entry, stub) != 0) { PATCH_LOG("entry jump4 FAILED"); return -5; }
    g_hooks_ok++;
    PATCH_LOG("hook4+nearStub OK: %p -> stub %p -> %p", entry, stub, replace);
    return 0;
}

// ---------------------------------------------------------------------------
// install
// ---------------------------------------------------------------------------
/* ---- capture the BLMainUIMenu instance (no create()/singleton exists) ---- */
static void *g_mainuimenu = 0;
static void *g_tramp_mainuimenu_ctor = 0;
static void *hw_mainuimenu_delayed(void *)
{
    for (int i = 0; i < 100; i++) { usleep(100 * 1000); }
    if (g_mainuimenu)
    {
        typedef void (*fn_initOneGift)(void *);
        fn_initOneGift f = patch_sym_env<fn_initOneGift>("_ZN12BLMainUIMenu11initOneGiftEv");
        if (f) { PATCH_LOG("calling initOneGift on captured menu %p", g_mainuimenu); f(g_mainuimenu); }
        else   { PATCH_LOG("initOneGift symbol MISSING"); }
    }
    return 0;
}
static void hw_mainuimenu_ctor(void *self)
{
    if (g_tramp_mainuimenu_ctor) { ((void (*)(void *))g_tramp_mainuimenu_ctor)(self); }
    g_mainuimenu = self;
    PATCH_LOG("captured BLMainUIMenu instance = %p", self);
    pthread_t dt;
    if (pthread_create(&dt, 0, hw_mainuimenu_delayed, 0) == 0) { pthread_detach(dt); }
}
PATCH_EXPORT void hw_patch_start()
{
    static int s_done = 0;
    if (s_done) { return; }
    s_done = 1;

    hw_selfcheck_bw();

    /* 1) 礼包 UI tick (long prologue -> 8-byte jump + trampoline) */
    void *pGiftTick = patch_sym_env<void *>("_ZN11BLOneGiftUI4tickEf");
    if (pGiftTick)
    {
        /* R254 DISABLED: prologue contains `beq` (PC-relative) and our trampoline does not relocate, */
        /* so this call-through hook is unsafe until relocation exists. Installing nothing here. */
        (void)pGiftTick;
        if (g_tramp_onegift_tick == 0) { g_hooks_fail++; }
    }
    else { g_hooks_fail++; }

    /* 2) the three switches (6-byte setters -> 4-byte b.w) */
    /* R247 DISABLED: forcing the DataManager IS-show flags to 1 BROKE the main menu layout
       (those flags select which UI branch is built, they are not simple show/hide switches).
       Empty table = no switch hooks until we know the real gating condition. */
    /* R247 DISABLED: forcing the DataManager IS-show flags to 1 BROKE the main-menu layout
       (those flags select which UI branch is built -- not simple show/hide switches).
       Nothing is installed here until the real gating condition is known. */
    struct { const char *name; void *repl; } table[1];
    const unsigned table_count = 0;
    for (unsigned i = 0; i < table_count; ++i)
    {
        void *t = patch_sym_env<void *>(table[i].name);
        if (t == 0) { g_hooks_fail++; continue; }
        int rc = hw_hook_install_near((void *)t, table[i].repl);
        if (rc == 0)
        {
            g_hooks_ok++;
            PATCH_LOG("hook4 OK: %s @%p -> %p", table[i].name, t, table[i].repl);
        }
        else
        {
            g_hooks_fail++;
            PATCH_LOG("hook4 FAILED(rc=%d): %s @%p", rc, table[i].name, t);
        }
    }

    /* R252 DISABLED: hooking BLMainUIMenu's ctor CRASHED (1 line). Reason: its first 10 bytes
       contain `bl CCLayer::C2Ev` -- a PC-relative instruction -- and our trampoline copies bytes
       verbatim, so the copied `bl` jumped to a wrong place. A trampoline must relocate PC-relative
       instructions (or we must pick targets whose prologue has none). See PROGRESS R252. */
    hw_patch_dumpCounters();
}

static void *hw_patch_thread(void *)
{
    for (int i = 0; i < 600; i++)
    {
        void *h = dlopen("libcocos2dcpp.so", RTLD_NOW | RTLD_GLOBAL);
        if (h != 0) { PATCH_LOG("original loaded after %d tries", i); hw_patch_start(); return 0; }
        usleep(100 * 1000);
    }
    PATCH_LOG("original never appeared");
    return 0;
}

__attribute__((constructor)) static void hw_patch_ctor()
{
    PATCH_LOG("libpatch loaded -- starting installer thread");
    pthread_t t;
    if (pthread_create(&t, 0, hw_patch_thread, 0) == 0) { pthread_detach(t); }
}

// ===========================================================================
// capture4 (R271): safe instance capture for BLMainUIMenu.
//
// BLMainUIMenu::initOneGift has its first PC-relative command (`bl`) at offset 6,
// so an 8-byte copy would slice an instruction (that crashed us in R251). Its first
// 4 bytes are PC-free, and 4 bytes (a b.w) are enough to redirect. Layout we build
// at runtime, NEAR the target:
//
//   +0 : the original first 4 bytes            (so the original preamble really runs)
//   +4 : ldr r12, [pc, #0]                     -> r12 = return point
//   +8 : .word entry+4                         (the return point, written by us)
//   +12: 8-byte absolute jump -> hw_cap4_stub  (our existing hw_write_jump8, no range limit)
//
// hw_cap4_stub records r0 (the instance) and then `bx r12` -> the original continues
// at entry+4. NOTE: the asm references NO global symbol (R264/R265/R270 all failed on
// exactly that: -O3 + --gc-sections dropped a symbol only the asm string mentioned, and
// making it extern produced "R_ARM_ABS32 cannot be used ..."). r12 removes that class
// of bug completely.
// ===========================================================================
static void *hw_cap4_instance = 0;          /* C++-only state: never named by asm */

/* After we know the menu instance, wait for the menu to finish building, then
   actively construct the gift entry (the user wants it visible at all times). */
static void *hw_cap4_delayed(void *)
{
    for (int i = 0; i < 100; i++) { usleep(100 * 1000); }      /* ~10 s */
    if (hw_cap4_instance != 0)
    {
        typedef void (*fn_initOneGift)(void *);
        fn_initOneGift f = patch_sym_env<fn_initOneGift>("_ZN12BLMainUIMenu11initOneGiftEv");
        if (f) { PATCH_LOG("calling initOneGift() on %p", hw_cap4_instance); f(hw_cap4_instance); }
        else   { PATCH_LOG("initOneGift symbol MISSING"); }
    }
    return 0;
}

extern "C" void hw_cap4_record(void *self)
{
    if (hw_cap4_instance == 0)
    {
        hw_cap4_instance = self;
        PATCH_LOG("captured BLMainUIMenu = %p", self);
        pthread_t t;
        if (pthread_create(&t, 0, hw_cap4_delayed, 0) == 0) { pthread_detach(t); }
    }
}

__attribute__((naked)) void hw_cap4_stub(void)
{
    __asm volatile(
        "push {r0, r1, r2, r3, lr}\n"
        "bl   hw_cap4_record\n"
        "pop  {r0, r1, r2, r3, lr}\n"
        "bx   r12\n");                       /* r12 = entry+4, placed there by our stub */
}

static void *hw_cap4_thread(void *)
{
    for (int i = 0; i < 600; i++)
    {
        void *h = dlopen("libcocos2dcpp.so", RTLD_NOW | RTLD_GLOBAL);
        if (h != 0)
        {
            void *pTarget = dlsym(h, "_ZN12BLMainUIMenu11initOneGiftEv");
            PATCH_LOG("capture4: initOneGift target=%p", pTarget);
            if (pTarget != 0)
            {
                unsigned char *entry = (unsigned char *)(((uintptr_t)pTarget) & ~(uintptr_t)1);
                void *stub = hw_alloc_near(entry);
                if (stub == 0) { PATCH_LOG("capture4: alloc_near FAILED %p", entry); return 0; }

                unsigned char *s = (unsigned char *)stub;
                memcpy(s, entry, 4);                        /* +0 : original preamble */
                s[4] = 0xDF; s[5] = 0xF8; s[6] = 0x00; s[7] = 0xC0;   /* ldr.w r12,[pc,#0] */
                uintptr_t cont = (uintptr_t)entry + 4;
                memcpy(s + 8, &cont, 4);                    /* +8 : the return point */
                if (hw_write_jump8(s + 12, (void *)&hw_cap4_stub, 1) != 0)
                { PATCH_LOG("capture4: stub jump FAILED"); return 0; }
                if (hw_write_jump4(entry, stub) != 0)
                { PATCH_LOG("capture4: entry jump FAILED"); return 0; }
                PATCH_LOG("capture4 OK: %p -> stub %p (cont=%p)", entry, stub, (void *)cont);
            }
            return 0;
        }
        usleep(100 * 1000);
    }
    return 0;
}

__attribute__((constructor)) static void hw_cap4_ctor()
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_cap4_thread, 0) == 0) { pthread_detach(t); }
}

// ===========================================================================
// item granting (objective 3): the Java menu writes a config file, we act on it.
//
//   /sdcard/dsh_items.txt     one entry per line:   <itemId> <count>
//
// We call the game's own entry points (mined in R234):
//   DataManager::shareDataManager()      _ZN11DataManager16shareDataManagerEv
//   DataManager::createItemData(int)     _ZN11DataManager14createItemDataEi
//   addItem(std::vector<int>)            _Z7addItemSt6vectorIiSaIiEE
// std::vector<int> is 3 pointers (begin/end/cap); we build it by hand so we do not
// depend on libc++ allocation across the ABI boundary.
// ===========================================================================
#include <stdio.h>      /* FILE, fopen, fscanf  (R276 fix) */
#include <stdlib.h>     /* calloc               (R276 fix) */

/* Keep the item-granting code alive (R277): it must have a real call-site,
   otherwise --gc-sections drops it (that is exactly what R276 observed).
   Self-contained: own forward declaration + own thread + own constructor, so
   there is no declaration-order or call-site problem (same pattern as capture4). */
static int hw_grant_items_from_config(void);

/* ---- multi-target capture (R280) -------------------------------------------
   One naked stub + one record function PER target: no slot register, no
   hand-computed literal offsets (R279 proved those are easy to get wrong), and
   the stub layout is exactly the one verified byte-by-byte in R272/R273:
       [4 bytes of the target prologue][ldr.w r12,[pc,#0]][.word entry+4][8-byte jump]
   Each stub records r0 (= this) and then `bx r12` -> the original continues.
   The asm still references NO global symbol (R271's fix stays intact).
   Targets verified PC-free in their first 4 bytes in R278.
--------------------------------------------------------------------------- */
static void *g_i_gift = 0, *g_i_fail = 0, *g_i_signed = 0, *g_i_live = 0;
static void *g_i_vip = 0, *g_i_gui = 0, *g_i_eui = 0, *g_i_tip = 0, *g_i_scene = 0, *g_i_btn = 0;

#define HW_REC(fn, slot, label) \
    extern "C" void fn(void *s) { if (slot == 0) { slot = s; PATCH_LOG("captured " label " = %p", s); } }
HW_REC(rec_gift,   g_i_gift,   "initOneGift")
HW_REC(rec_fail,   g_i_fail,   "initFailGift")
HW_REC(rec_signed, g_i_signed, "initSigned(7d)")
HW_REC(rec_live,   g_i_live,   "initLiveness(card)")
HW_REC(rec_vip,    g_i_vip,    "requestVip")
HW_REC(rec_gui,    g_i_gui,    "BLOneGiftUI")
HW_REC(rec_eui,    g_i_eui,    "EquipGiftUI")
HW_REC(rec_tip,    g_i_tip,    "onUpdateTip(menu)")
HW_REC(rec_btn,    g_i_btn,    "onBtnClick(menu)")
static volatile unsigned long g_scene_calls = 0;
/* R348: addItem() creates cocos2d/UI objects, so it MUST run on the GL thread.
   CCDirector::drawScene() runs there every frame -- hook it and burn down the
   pending grant list from inside the real render loop. */
static void hw_grant_items_on_gl(void);
static volatile int g_pending_grant = 0;
static volatile int g_grant_done = 0;
extern "C" void rec_draw(void *dir)
{
    (void)dir;
    if (g_pending_grant == 0 || g_grant_done != 0) { return; }
    g_grant_done = 1;                                  /* put it once only */
    PATCH_LOG("draw: on GL thread -- running pending grant now");
    hw_grant_items_on_gl();
    PATCH_LOG("draw: grant finished");
}

static void hw_grant_items_on_gl(void)
{
    FILE *fp = hw_cfg("dsh_items.txt", "r");
    if (fp == 0) { PATCH_LOG("draw: no /sdcard/dsh_items.txt -- nothing to grant"); return; }
    typedef void *(*fn_share2)(void);
    typedef void (*fn_addItem2)(void *);
    fn_share2  fShare = patch_sym_env<fn_share2>("_ZN11DataManager16shareDataManagerEv");
    fn_addItem2 fAdd  = patch_sym_env<fn_addItem2>("_Z7addItemSt6vectorIiSaIiEE");
    PATCH_LOG("draw: share=%p addItem=%p", (void *)fShare, (void *)fAdd);
    if (fShare == 0 || fAdd == 0) { fclose(fp); return; }
    int id = 0, cnt = 0, granted = 0;
    while (fscanf(fp, "%d %d", &id, &cnt) == 2)
    {
        if (id <= 0) { continue; }
        if (cnt <= 0) { cnt = 1; }
        if (cnt > 99) { cnt = 99; }
        std::vector<int> vec((size_t)cnt, id);
        PATCH_LOG("draw: addItem(id=%d x%d) on GL thread", id, cnt);
        fAdd((void *)&vec);
        ++granted;
    }
    fclose(fp);
    PATCH_LOG("draw: granted %d entries", granted);
}

#define HW_REC_SCENE(fn, slot, label) \
    extern "C" void fn(void *s) { if (slot == 0) { slot = s; PATCH_LOG("captured " label " = %p", s); } \
    if ((++g_scene_calls % 300) == 1) { PATCH_LOG("scene tick alive n=%lu", g_scene_calls); } }
HW_REC_SCENE(rec_scene, g_i_scene, "BLGameScene(tick)")

#define HW_STUB(name, fn) \
    extern "C" __attribute__((naked)) void name(void) { \
        __asm volatile("push {r0, r1, r2, r3, r4, lr}\n" \
                       "mov  r4, r12\n" \
                       "bl   " #fn "\n" \
                       "pop  {r0, r1, r2, r3, r4, lr}\n" \
                       "bx   r4\n"); }
HW_STUB(stub_gift,   rec_gift)
HW_STUB(stub_fail,   rec_fail)
HW_STUB(stub_signed, rec_signed)
HW_STUB(stub_live,   rec_live)
HW_STUB(stub_vip,    rec_vip)
HW_STUB(stub_gui,    rec_gui)
HW_STUB(stub_eui,    rec_eui)
HW_STUB(stub_tip,   rec_tip)
HW_STUB(stub_btn,   rec_btn)
HW_STUB(stub_plist_enc,  rec_plist_enc)
HW_STUB(stub_plist_dec,  rec_plist_dec)
HW_STUB(stub_plist_wr,   rec_plist_write)
HW_STUB(stub_aescbc, rec_aescbc)
HW_STUB(stub_recv, rec_recv)
HW_STUB(stub_http_resp, rec_http_resp)
HW_STUB(stub_evpdec, rec_evpdec)
HW_STUB(stub_evpenc, rec_evpenc)
HW_STUB(stub_sqlprep, rec_sql_db)
HW_STUB(stub_sqlexec, rec_sql_db)
HW_STUB(stub_draw,  rec_draw)
HW_STUB(stub_scene, rec_scene)

/* build the verified 20-byte stub and redirect the target to it */
static int hw_arm_patch(void *target, void *thumb_handler);   /* forward decl (R441) */

/* R442: decide whether the target is ARM or Thumb state and pick the right patcher.
   ELF symbol addresses for Thumb functions have bit0 set; ARM functions do not. The
   Thumb capture4 rewrite would corrupt ARM code, which is exactly what happened to
   AES_set_decrypt_key (it stayed unpatched and the key was never captured). */
static int hw_cap4_one(void *h, const char *sym, void *stubfn)
{
    void *pTarget = dlsym(h, sym);
    if (pTarget == 0) { PATCH_LOG("cap4: MISS %s", sym); return -1; }

    if ((((uintptr_t)pTarget) & 1) == 0)
    {
        PATCH_LOG("cap4: %s is ARM-state -> arm patcher", sym);
        return hw_arm_patch((void *)(((uintptr_t)pTarget) & ~(uintptr_t)3), stubfn);
    }

    unsigned char *entry = (unsigned char *)(((uintptr_t)pTarget) & ~(uintptr_t)1);
    unsigned char *s = (unsigned char *)hw_alloc_near(entry);
    if (s == 0) { PATCH_LOG("cap4: alloc_near FAILED %p", entry); return -2; }
    memcpy(s, entry, 4);                                  /* +0 : original preamble */
    s[4] = 0xDF; s[5] = 0xF8; s[6] = 0x00; s[7] = 0xC0;   /* +4 : ldr.w r12,[pc,#0]  (verified R273) */
    uintptr_t cont = (uintptr_t)entry + 4;
    memcpy(s + 8, &cont, 4);                              /* +8 : return point */
    if (hw_write_jump8(s + 12, stubfn, 1) != 0) { return -3; }
    if (hw_write_jump4(entry, s) != 0) { return -4; }
    PATCH_LOG("cap4 OK: %s @%p -> stub %p", sym, entry, s);
    return 0;
}

/* ============================================================================
   R371 EVP key dump -- recover the AES key the game uses for its save files.
     EVP_DecryptInit_ex(ctx, cipher, impl, key, iv)
       r0=ctx  r1=cipher  r2=impl  r3=key   (iv is the 5th arg, on the stack)
   The stub preserves r0-r3, so a 4-argument recorder can read the key pointer.
   Output: <cfg-dir>/dsh_keys.txt, one line per event.
   ========================================================================== */
static void hw_dump_key(const char *tag, void *keyPtr, int keyLen)
{
    if (keyPtr == 0) { PATCH_LOG("evp: %s key=NULL (skipped)", tag); return; }
    if (keyLen != 16 && keyLen != 24 && keyLen != 32) { keyLen = 16; }
    char path[256];
    hw_cfg_path(path, sizeof(path), "dsh_keys.txt");
    FILE *f = fopen(path, "a");
    if (f == 0) { PATCH_LOG("evp: %s cannot open dsh_keys.txt", tag); return; }
    const unsigned char *k = (const unsigned char *)keyPtr;
    fprintf(f, "%s key=", tag);
    for (int n = 0; n < keyLen; n++) { fprintf(f, "%02x", k[n]); }
    fprintf(f, "\n");
    fclose(f);
    PATCH_LOG("evp: %s key captured (%d bytes) -> dsh_keys.txt", tag, keyLen);
}
extern "C" void rec_evpdec(void *a, void *b, void *c, void *key)
{
    (void)a; (void)b; (void)c;
    hw_dump_key("DECRYPT", key, 16);
}
extern "C" void rec_evpenc(void *a, void *b, void *c, void *key)
{
    (void)a; (void)b; (void)c;
    hw_dump_key("ENCRYPT", key, 16);
}

/* ============================================================================
   R376 open tracer -- find WHO reads/writes the save files.
   We hook libc open()/openat(), filter on the filename, and record the CALLER
   return address (LR) so the call site can be mapped back to a function.
   A dedicated naked stub is used because the generic one only forwards r0.
     r0,r1,r2,r3,r4,lr are pushed;  [sp+20] holds the original LR
   Output: <cfg-dir>/dsh_open.txt  --  "<path> lr=0x........"  per hit.
   ========================================================================== */
static volatile unsigned g_open_hits = 0;

extern "C" void rec_open(const char *path, unsigned lr, unsigned sp_words)
{
    (void)sp_words;
    if (path == 0) { return; }
    if (strstr(path, "lol.plist") == 0 &&
        strstr(path, "diablo.plist") == 0 &&
        strstr(path, "Data.plist") == 0 &&
        strstr(path, "dsh_") == 0) { return; }
    ++g_open_hits;
    char f[256];
    hw_cfg_path(f, sizeof(f), "dsh_open.txt");
    FILE *o = fopen(f, "a");
    if (o == 0) { PATCH_LOG("open: hit but cannot write dsh_open.txt"); return; }
    fprintf(o, "%s lr=0x%08x\n", path, lr);
    fclose(o);
    PATCH_LOG("open: %s  lr=0x%08x  (#%u)", path, lr, g_open_hits);
}

extern "C" void rec_openat(const char *path, unsigned lr)
{
    rec_open(path, lr, 0);
}

/* open(path, flags, mode): r0 = path, lr = caller */
extern "C" __attribute__((naked)) void stub_open(void)
{
    __asm volatile("push {r0, r1, r2, r3, r4, lr}\n"
                   "mov  r4, r12\n"
                   "ldr  r1, [sp, #20]\n"        /* original LR */
                   "bl   rec_open\n"
                   "pop  {r0, r1, r2, r3, r4, lr}\n"
                   "bx   r4\n");
}

/* openat(dirfd, path, flags, mode): r0 = dirfd, r1 = path, lr = caller */
extern "C" __attribute__((naked)) void stub_openat(void)
{
    __asm volatile("push {r0, r1, r2, r3, r4, lr}\n"
                   "mov  r4, r12\n"
                   "mov  r2, r1\n"               /* path  -> r1 (already) */
                   "ldr  r2, [sp, #20]\n"        /* LR    -> r2 */
                   "bl   rec_openat\n"
                   "pop  {r0, r1, r2, r3, r4, lr}\n"
                   "bx   r4\n");
}

/* ============================================================================
   R377 memory dump -- the memory-modification route.
   Our library lives inside the game process, so we can simply read its heap.
   Trigger: <cfg-dir>/dsh_mem.txt exists. We then
     1) dump the DataManager object as hex (+ offsets), and
     2) scan it for the values currently shown in the UI (10000 = copper,
        100 = diamonds) so the field offsets can be identified offline.
   Output: <cfg-dir>/dsh_mem.txt (hex dump + hint lines).
   ========================================================================== */
static void hw_mem_dump(void)
{
    typedef void *(*fn_share)(void);
    fn_share fShare = patch_sym_env<fn_share>("_ZN11DataManager16shareDataManagerEv");
    if (fShare == 0) { PATCH_LOG("mem: shareDataManager missing"); return; }
    void *dm = fShare();
    PATCH_LOG("mem: DataManager = %p", dm);
    if (dm == 0) { return; }

    char path[256];
    hw_cfg_path(path, sizeof(path), "dsh_mem.txt");
    FILE *f = fopen(path, "w");
    if (f == 0) { PATCH_LOG("mem: cannot open dsh_mem.txt"); return; }

    const int kLen = 4096;                       /* object header + fields */
    unsigned char *p = (unsigned char *)dm;
    fprintf(f, "DataManager = %p, dumping %d bytes\n", dm, kLen);
    for (int off = 0; off < kLen; off += 16) {
        fprintf(f, "%04x: ", off);
        for (int k = 0; k < 16; k++) { fprintf(f, "%02x ", p[off + k]); }
        fprintf(f, " |");
        for (int k = 0; k < 16; k++) {
            unsigned char c = p[off + k];
            fprintf(f, "%c", (c >= 32 && c < 127) ? c : 0x2e);
        }
        fprintf(f, "|\n");
    }

    /* scan for the numbers visible in the UI */
    const int want[] = { 10000, 100, 383, 188, 25 };
    for (unsigned w = 0; w < sizeof(want) / sizeof(want[0]); ++w) {
        for (int off = 0; off + 4 <= kLen; off += 4) {
            int v = 0;
            memcpy(&v, p + off, 4);
            if (v == want[w]) { fprintf(f, "HIT %d at +0x%03x\n", v, off); }
        }
    }
    fclose(f);
    PATCH_LOG("mem: dump written to dsh_mem.txt");
}

static void *hw_mem_thread(void *)
{
    for (int i = 0; i < 250; i++) { usleep(100 * 1000); }     /* ~25 s */
    FILE *en = hw_cfg("dsh_mem.txt", "r");
    if (en == 0) { PATCH_LOG("mem: disabled (no dsh_mem.txt)"); return 0; }
    fclose(en);
    hw_mem_dump();
    return 0;
}
__attribute__((constructor)) static void hw_mem_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_mem_thread, 0) == 0) { pthread_detach(t); }
}

/* ============================================================================
   R381 sqlite handle -- the real data layer.
   The game keeps its data in an IN-MEMORY SQLite database (we found the
   "CREATE TABLE chest (...)" statement sitting in DataManager memory), so the
   cleanest way in is to talk SQLite itself instead of hooking per-frame code.

   sqlite3_open / sqlite3_open_v2 are called exactly once at startup, so hooking
   them is safe. From the callback we grab the sqlite3* handle, remember it, and
   later run arbitrary SQL against the live database:
       SELECT ...  to inspect,  UPDATE/INSERT ... to change state.
   ========================================================================== */
static void *g_db = 0;                       /* sqlite3* captured from open() */
static volatile int g_db_count = 0;

typedef int  (*fn_exec)(void *db, const char *sql, void *cb, void *arg, char **err);
typedef int  (*fn_prep)(void *db, const char *sql, int n, void **stmt, const char **tail);
typedef int  (*fn_step)(void *stmt);
typedef int  (*fn_colint)(void *stmt, int col);
typedef const unsigned char *(*fn_coltext)(void *stmt, int col);
typedef int  (*fn_colcount)(void *stmt);
typedef int  (*fn_colname)(void *stmt, int col);
typedef const char *(*fn_colnamep)(void *stmt, int col);
typedef int  (*fn_finalize)(void *stmt);

/* sqlite3_prepare_v2(db, sql, ...) and sqlite3_exec(db, sql, ...) both take the
   database handle as their FIRST argument, so hooking either one hands us the
   live sqlite3* for free. sqlite3_open cannot be used for this: at entry the
   out-parameter has not been written yet. */
extern "C" void rec_sql_db(void *db)
{
    if (db == 0) { return; }
    if (g_db == 0)
    {
        g_db = db;
        ++g_db_count;
        PATCH_LOG("sqlite: db handle captured = %p", db);
    }
}

/* run one statement, dumping up to `maxRows` rows to the given FILE */
static void hw_sql_dump(FILE *f, void *db, const char *sql, int maxRows)
{
    fn_prep fPrep = patch_sym_env<fn_prep>("sqlite3_prepare_v2");
    fn_step fStep = patch_sym_env<fn_step>("sqlite3_step");
    fn_colint fColI = patch_sym_env<fn_colint>("sqlite3_column_int");
    fn_coltext fColT = patch_sym_env<fn_coltext>("sqlite3_column_text");
    fn_colcount fColC = patch_sym_env<fn_colcount>("sqlite3_column_count");
    fn_colnamep fColN = patch_sym_env<fn_colnamep>("sqlite3_column_name");
    fn_finalize fFin = patch_sym_env<fn_finalize>("sqlite3_finalize");
    if (fPrep == 0 || fStep == 0 || fFin == 0) { fprintf(f, "-- sqlite API missing\n"); return; }
    fprintf(f, "SQL> %s\n", sql);
    void *st = 0;
    if (fPrep(db, sql, -1, &st, 0) != 0 || st == 0) { fprintf(f, "-- prepare failed\n"); return; }
    int cols = fColC ? fColC(st) : 0;
    int rows = 0;
    for (;;) {
        int rc = fStep(st);
        if (rc != 100) { break; }              /* 100 = SQLITE_ROW, 101 = DONE */
        fprintf(f, "  [");
        for (int c = 0; c < cols; c++) {
            const char *nm = fColN ? fColN(st, c) : "?";
            const unsigned char *tx = fColT ? fColT(st, c) : 0;
            fprintf(f, "%s%s=%s", c ? " " : "", nm ? nm : "?", tx ? (const char *)tx : "NULL");
            (void)fColI;
        }
        fprintf(f, "]\n");
        if (++rows >= maxRows) { fprintf(f, "  ... (truncated)\n"); break; }
    }
    fFin(st);
    fprintf(f, "-- %d row(s)\n\n", rows);
}

static void hw_sql_report(void)
{
    if (g_db == 0) { PATCH_LOG("sql: no db handle captured"); return; }
    char path[256];
    hw_cfg_path(path, sizeof(path), "dsh_sql.txt");
    FILE *f = fopen(path, "w");
    if (f == 0) { PATCH_LOG("sql: cannot write dsh_sql.txt"); return; }
    fprintf(f, "sqlite3 handle = %p\n\n", g_db);
    hw_sql_dump(f, g_db, "SELECT name,sql FROM sqlite_master WHERE type='table'", 40);
    fclose(f);
    PATCH_LOG("sql: schema written to dsh_sql.txt");
}

static void *hw_sql_thread(void *)
{
    for (int i = 0; i < 300; i++) { usleep(100 * 1000); }      /* ~30 s */
    FILE *en = hw_cfg("dsh_sql.txt", "r");
    if (en == 0) { PATCH_LOG("sql: disabled (no dsh_sql.txt trigger)"); return 0; }
    fclose(en);
    hw_sql_report();
    return 0;
}
__attribute__((constructor)) static void hw_sql_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_sql_thread, 0) == 0) { pthread_detach(t); }
}

/* ============================================================================
   R382 probe backpack -- walk DataManager+0x1C.
   DataManager::getBackPackItemNum(int) @0x44c8b8 starts with
       ldr r0, [r0, #0x1c]      <-- a manager object
       ldr r3, [r0] ; ldr r3, [r3, #0x50] ; blx r3
   so DataManager+0x1C points at the object that owns the backpack. We read that
   pointer and dump the first 256 bytes of it (virtual table + member pointers)
   so we can identify the CCArray holding the items.
   Trigger: <cfg-dir>/dsh_bp.txt
   ========================================================================== */
static void hw_bp_probe(void)
{
    typedef void *(*fn_share)(void);
    fn_share fShare = patch_sym_env<fn_share>("_ZN11DataManager16shareDataManagerEv");
    if (fShare == 0) { PATCH_LOG("bp: shareDataManager missing"); return; }
    void *dm = fShare();
    if (dm == 0) { PATCH_LOG("bp: DataManager null"); return; }

    unsigned char *p = (unsigned char *)dm;
    void *mgr = 0;
    memcpy(&mgr, p + 0x1c, 4);
    PATCH_LOG("bp: DataManager=%p  [+0x1c]=%p", dm, mgr);

    char path[256];
    hw_cfg_path(path, sizeof(path), "dsh_bp.txt");
    FILE *f = fopen(path, "w");
    if (f == 0) { PATCH_LOG("bp: cannot write dsh_bp.txt"); return; }
    fprintf(f, "DataManager=%p  [+0x1c]=%p\n\n", dm, mgr);

    if (mgr != 0) {
        unsigned char *m = (unsigned char *)mgr;
        void *vt = 0; memcpy(&vt, m, 4);
        fprintf(f, "manager vtable = %p\n", vt);
        for (int off = 0; off < 256; off += 16) {
            fprintf(f, "%04x: ", off);
            for (int k = 0; k < 16; k++) { fprintf(f, "%02x ", m[off + k]); }
            fprintf(f, "\n");
        }
    }
    /* R385 api query -- use the game's own accessors instead of guessing offsets.
       DataManager::getBackPackItemNum(int) @0x44c8b8 is a public API that returns how
       many of an item the backpack holds. Calling it is what the game itself does, so
       it cannot corrupt anything, and it tells us whether a grant actually landed. */
    {
        typedef int (*fn_num)(void *, int);
        fn_num fNum = patch_sym_env<fn_num>("_ZN11DataManager18getBackPackItemNumEi");
        fprintf(f, "\ngetBackPackItemNum = %p\n", (void *)fNum);
        if (fNum) {
            const int probe[] = { 1, 2, 3, 100, 101, 110, 121 };
            for (unsigned k = 0; k < sizeof(probe)/sizeof(probe[0]); ++k) {
                int n = fNum(dm, probe[k]);
                fprintf(f, "  item %d -> count %d\n", probe[k], n);
            }
        }
    }

    /* R385b replicate what the game does to reach the item container (read-only). */
    {
        unsigned char *m3 = (unsigned char *)mgr;
        void *vt = 0; memcpy(&vt, m3, 4);
        fprintf(f, "\nmanager=%p vtable=%p\n", mgr, vt);
        if (vt && mgr) {
            typedef void *(*vfn)(void *);
            void **v = (void **)vt;
            vfn f50 = (vfn)v[0x50 / 4];
            fprintf(f, "  vtable[0x50]=%p\n", (void *)f50);
            if (f50) {
                void *a = f50(mgr);
                fprintf(f, "  -> a=%p\n", a);
                if (a) {
                    void *vt2 = 0; memcpy(&vt2, a, 4);
                    void **v2 = (void **)vt2;
                    vfn f18 = (vfn)v2[0x18 / 4];
                    fprintf(f, "    vtable[0x18]=%p\n", (void *)f18);
                    if (f18) {
                        void *b2 = f18(a);
                        fprintf(f, "    -> b=%p\n", b2);
                        if (b2) {
                            unsigned arr = 0;
                            memcpy(&arr, (unsigned char *)b2 + 0x14, 4);
                            fprintf(f, "    b+0x14 (item container)=0x%08x\n", arr);
                        }
                    }
                }
            }
        }
    }
    fclose(f);
    PATCH_LOG("bp: probe written to dsh_bp.txt");
}

static void *hw_bp_thread(void *)
{
    for (int i = 0; i < 300; i++) { usleep(100 * 1000); }
    FILE *en = hw_cfg("dsh_bp.txt", "r");
    if (en == 0) { PATCH_LOG("bp: disabled (no dsh_bp.txt trigger)"); return 0; }
    fclose(en);
    hw_bp_probe();
    return 0;
}
__attribute__((constructor)) static void hw_bp_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_bp_thread, 0) == 0) { pthread_detach(t); }
}

/* ============================================================================
   R386 grant via backpack -- actually put items INTO the backpack.

   Verified chain (mirrors DataManager::getBackPackItemNum @0x44c8b8):
       DataManager + 0x1C              -> manager object
       manager->vtable[0x50/4](mgr)    -> a
       a->vtable[0x18/4](a)            -> b        ("b + 0x14" is the item array,
                                                    NULL while the bag is empty)
   b is the BackPackData. With b we can call the game's own data-layer API:
       BackPackData::addItemData(ItemData*, bool)    @0x4764b0
   which just forwards to addItemData(ItemData*, bool, int) @0x475a58 with r3 = 0.
   No UI, no rendering, no per-frame code -- safe from an auxiliary thread.

   Trigger: <cfg-dir>/dsh_grant.txt   lines of "<itemId> <count>".
   Verification: DataManager::getBackPackItemNum(itemId) before/after.
   ========================================================================== */
static void *hw_resolve_backpack(void *dm)
{
    if (dm == 0) { return 0; }
    unsigned char *p = (unsigned char *)dm;
    void *mgr = 0;
    memcpy(&mgr, p + 0x1c, 4);
    if (mgr == 0) { PATCH_LOG("grant: DataManager[+0x1c] is null"); return 0; }

    void *vt = 0;
    memcpy(&vt, mgr, 4);
    if (vt == 0) { PATCH_LOG("grant: manager vtable null"); return 0; }

    typedef void *(*vfn)(void *);
    vfn f50 = (vfn)((void **)vt)[0x50 / 4];
    if (f50 == 0) { PATCH_LOG("grant: vtable[0x50] null"); return 0; }
    void *a = f50(mgr);
    if (a == 0) { PATCH_LOG("grant: step a null"); return 0; }

    void *vt2 = 0;
    memcpy(&vt2, a, 4);
    if (vt2 == 0) { PATCH_LOG("grant: a vtable null"); return 0; }
    vfn f18 = (vfn)((void **)vt2)[0x18 / 4];
    if (f18 == 0) { PATCH_LOG("grant: vtable[0x18] null"); return 0; }
    void *b = f18(a);
    return b;
}

static void hw_grant_via_backpack(void)
{
    typedef void *(*fn_share)(void);
    typedef void *(*fn_byid)(void *, int);
    typedef int   (*fn_num)(void *, int);
    typedef void  (*fn_add)(void *, void *, int);

    fn_share fShare = patch_sym_env<fn_share>("_ZN11DataManager16shareDataManagerEv");
    fn_num   fNum   = patch_sym_env<fn_num>("_ZN11DataManager18getBackPackItemNumEi");
    fn_add   fAdd   = patch_sym_env<fn_add>("_ZN12BackPackData11addItemDataEP8ItemDatab");
    if (fShare == 0 || fAdd == 0) { PATCH_LOG("grant: api missing"); return; }

    void *dm = fShare();
    void *bp = hw_resolve_backpack(dm);
    if (bp == 0) { PATCH_LOG("grant: could not resolve BackPackData"); return; }

    typedef void *(*fn_share_dc)(void);
    typedef void *(*fn_byid2)(void *, int);
    fn_share_dc fDcS = patch_sym_env<fn_share_dc>("_ZN16DataCacheManager12shareManagerEv");
    fn_byid2    fById = patch_sym_env<fn_byid2>("_ZN16DataCacheManager15getItemDataByIDEi");
    void *dcm = fDcS ? fDcS() : 0;
    PATCH_LOG("grant: dcm=%p byId=%p", dcm, (void *)fById);

    FILE *fp = hw_cfg("dsh_grant.txt", "r");
    if (fp == 0) { PATCH_LOG("grant: no dsh_grant.txt"); return; }

    int id = 0, cnt = 0, ok = 0;
    while (fscanf(fp, "%d %d", &id, &cnt) == 2)
    {
        if (id <= 0) { continue; }
        if (cnt <= 0) { cnt = 1; }
        if (cnt > 99) { cnt = 99; }
        void *item = (fById && dcm) ? fById(dcm, id) : 0;
        int before = fNum ? fNum(dm, id) : -1;
        PATCH_LOG("grant: id=%d cnt=%d item=%p before=%d", id, cnt, item, before);
        if (item == 0) { PATCH_LOG("grant: id %d not in item table -- skipped", id); continue; }
        for (int k = 0; k < cnt; ++k) { fAdd(bp, item, 1); }
        int after = fNum ? fNum(dm, id) : -1;
        PATCH_LOG("grant: id=%d -> after=%d %s", id, after, (after > before) ? "OK" : "(no change)");
        ++ok;
    }
    fclose(fp);
    PATCH_LOG("grant: done, %d entries processed", ok);
}

/* R387 wait for backpack ready.
   Crash analysis (tombstone):
       #00 CCDictionary::setObject(CCObject*, int)+68   <-- r0 == NULL
       #01 BackPackData::insertItemData(ItemData*)+318
       #02 BackPackData::addItemData(ItemData*, bool, int)+1510
       #03 BackPackData::addItemData(ItemData*, bool)
       #04 libpatch.so
   So BackPackData* and the call itself are correct -- the backpack's CCDictionary
   simply did not exist yet: we fired at 30 s, while the game was still loading.
   Fix: poll until the bag actually exists (b+0x14 != 0, i.e. the item array has
   been created) and only then grant; give up after ~90 s. */
/* R388 ensure the backpack dictionary exists.
   BackPackData::setDicPackItems(CCDictionary*) is literally "str r1,[r0,#0x14]",
   so +0x14 IS the dictionary that insertItemData touches via
   CCDictionary::setObject. On a fresh account it is still NULL, which is exactly
   the tombstone we hit (setObject with r0 == NULL). So: try the game's own
   BackPackData::init() first, and if +0x14 is still NULL afterwards, create a
   CCDictionary and install it through the game's own setter. */
static int hw_backpack_ready(void **outBp)
{
    typedef void *(*fn_share)(void);
    typedef void  (*fn_void)(void *);
    typedef void *(*fn_ptr)(void);
    typedef void  (*fn_setdic)(void *, void *);

    fn_share fShare = patch_sym_env<fn_share>("_ZN11DataManager16shareDataManagerEv");
    if (fShare == 0) { return 0; }
    void *dm = fShare();
    void *bp = hw_resolve_backpack(dm);
    if (bp == 0) { return 0; }

    void *dic = 0;
    memcpy(&dic, (unsigned char *)bp + 0x14, 4);
    if (dic != 0) { *outBp = bp; return 1; }

    /* R390: never fabricate the dictionary.
       Two tombstones proved that both ways of forcing it are wrong:
         ? BackPackData::init()            -> CCDictionary::removeAllObjects on NULL
                                              (fault 0x14)
         ? CCDictionary::create() + setDicPackItems()
                                           -> __dynamic_cast to NULL inside
                                              getBackPackItemNum (the game stores a
                                              concrete subclass, not a bare dictionary)
       The dictionary is created by the game itself once a real character/level is
       live, so the only correct behaviour is: grant when it exists, skip otherwise.
       Skipping costs nothing and cannot crash. */
    *outBp = bp;
    return 0;
}

static void *hw_grant_thread(void *)
{
    FILE *en = hw_cfg("dsh_grant.txt", "r");
    if (en == 0) { PATCH_LOG("grant: disabled (no dsh_grant.txt)"); return 0; }
    fclose(en);

    /* R391 long readiness watch: poll for up to 5 minutes so the state can be
       observed while the game is navigated by hand, and log each transition. */
    void *bp = 0;
    int ready = 0;
    int logged = 0;
    for (int i = 0; i < 3000; i++)            /* 300 s */
    {
        usleep(100 * 1000);
        if (i < 200) { continue; }            /* let the game boot first */
        ready = hw_backpack_ready(&bp);
        if (ready != logged)
        {
            logged = ready;
            void *dic = 0;
            if (bp) { memcpy(&dic, (unsigned char *)bp + 0x14, 4); }
            PATCH_LOG("grant: t=%ds ready=%d bp=%p dic=%p", i / 10, ready, bp, dic);
        }
        if (ready) { break; }
    }
    PATCH_LOG("grant: final ready=%d bp=%p", ready, bp);
    if (!ready) { PATCH_LOG("grant: backpack never became ready -- skipping (no crash)"); return 0; }
    hw_grant_via_backpack();
    return 0;
}
__attribute__((constructor)) static void hw_grant_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_grant_thread, 0) == 0) { pthread_detach(t); }
}

/* ============================================================================
   R392 sqlite finder -- reach the in-memory database WITHOUT hooking.

   Hooking sqlite3_prepare_v2 / sqlite3_exec crashed (crash=25) because they are
   hot, low-level entry points. But a sqlite3* is just a struct in our own heap,
   so we can find it by scanning /proc/self/maps for its magic field:
       SQLITE_MAGIC_OPEN = 0xa029a697      (confirmed present in libcocos2dcpp.so)
   This build embeds SQLite 3.8.4.3.

   Safety: candidates are validated with sqlite3_errmsg(), which is documented to
   never fail -- even for a bogus pointer it just reports "out of memory" instead
   of dereferencing something fatal, so a wrong candidate cannot crash us.
   ========================================================================== */
static unsigned hw_sql_db_with_table(int n, const char *table);
static void hw_sql_grant(int n);
static void hw_sql_exec_file(unsigned db);
static void hw_sql_dump_all(unsigned db);
static void hw_sql_exec_file_report(unsigned db);
static void hw_item_catalog(int n);
static void hw_scan_handles(void);
static void hw_sqlite_find_quiet(void);
#define HW_SQLITE_MAGIC 0xa029a697u
static unsigned g_sql_cand[8] = {0};
static volatile int g_sql_cand_n = 0;

typedef const char *(*fn_errmsg)(void *);

/* scan one writable region for the magic dword; returns hits */
static int hw_scan_region(FILE *out, unsigned base, unsigned end, fn_errmsg fErr, int maxHits)
{
    int hits = 0;
    unsigned char *p = (unsigned char *)base;
    for (unsigned char *q = p; q + 4 <= (unsigned char *)end; q += 4)
    {
        unsigned v = 0;
        memcpy(&v, q, 4);
        if (v != HW_SQLITE_MAGIC) { continue; }
        /* the magic lives inside struct sqlite3; treat the containing 256 bytes
           as the candidate base window and probe a few alignments */
        for (int back = 0x100; back >= 0; back -= 4)
        {
            unsigned cand = (unsigned)q - back;
            if (cand < base) { continue; }
            const char *m = 0;
            m = fErr((void *)cand);
            if (m == 0) { continue; }
            /* a real db says "not an error"; a bogus one says "out of memory" */
            if (strcmp(m, "not an error") == 0)
            {
                fprintf(out, "DB? magic=0x%08x base=0x%08x (%s)\n", (unsigned)q, cand, m);
                if (g_sql_cand_n < 8) { g_sql_cand[g_sql_cand_n++] = cand; }
                ++hits;
                break;
            }
        }
        if (hits >= maxHits) { break; }
    }
    return hits;
}

/* scan /proc/self/maps for sqlite3 handles and fill g_sql_cand[] (no file output) */
static void hw_scan_handles(void)
{
    if (g_sql_cand_n > 0) { return; }
    fn_errmsg fErr = patch_sym_env<fn_errmsg>("sqlite3_errmsg");
    FILE *mp = fopen("/proc/self/maps", "r");
    if (mp == 0 || fErr == 0) { if (mp) { fclose(mp); } return; }
    char ln[512];
    while (fgets(ln, sizeof(ln), mp) && g_sql_cand_n < 8)
    {
        unsigned b = 0, e = 0;
        char pm[8] = {0};
        if (sscanf(ln, "%x-%x %7s", &b, &e, pm) != 3) { continue; }
        /* R415: only private read+write mappings. /proc/self/maps can report
           ranges that still fault on ARM (guard pages / holes), and walking those
           crashed us at libpatch+0x4c78. rw-p is where heap and .bss live, which
           is the only place a sqlite3 handle can be. */
        if (pm[0] != 'r' || pm[1] != 'w' || pm[2] != 'p') { continue; }
        if (e <= b || (e - b) > (64u * 1024u * 1024u)) { continue; }
        if (strstr(ln, "/dev/") != 0 || strstr(ln, "/apex/") != 0 || strstr(ln, ".so") != 0) { continue; }
        for (unsigned char *q = (unsigned char *)b; q + 4 <= (unsigned char *)e; q += 4)
        {
            unsigned v = 0;
            memcpy(&v, q, 4);
            if (v != HW_SQLITE_MAGIC) { continue; }
            for (int back = 0x100; back >= 0; back -= 4)
            {
                unsigned cand = (unsigned)q - back;
                if (cand < b) { continue; }
                const char *m = fErr((void *)cand);
                if (m && strcmp(m, "not an error") == 0)
                {
                    if (g_sql_cand_n < 8) { g_sql_cand[g_sql_cand_n++] = cand; }
                    break;
                }
            }
            if (g_sql_cand_n >= 8) { break; }
        }
    }
    fclose(mp);
}

static void hw_sqlite_find(void)
{
    fn_errmsg fErr = patch_sym_env<fn_errmsg>("sqlite3_errmsg");
    if (fErr == 0) { PATCH_LOG("sqf: sqlite3_errmsg missing"); return; }

    char path[256];
    hw_cfg_path(path, sizeof(path), "dsh_sqlfind.txt");
    FILE *out = fopen(path, "w");
    if (out == 0) { PATCH_LOG("sqf: cannot write dsh_sqlfind.txt"); return; }

    FILE *maps = fopen("/proc/self/maps", "r");
    if (maps == 0) { fprintf(out, "cannot read /proc/self/maps\n"); fclose(out); return; }

    int total = 0;
    char line[512];
    while (fgets(line, sizeof(line), maps) && total < 8)
    {
        unsigned b = 0, e = 0;
        char perms[8] = {0};
        if (sscanf(line, "%x-%x %7s", &b, &e, perms) != 3) { continue; }
        if (perms[0] != 'r' || perms[1] != 'w') { continue; }   /* need readable+writable */
        if (e <= b || (e - b) > (64u * 1024u * 1024u)) { continue; }
        total += hw_scan_region(out, b, e, fErr, 8 - total);
    }
    fclose(maps);
    fprintf(out, "-- total candidates: %d\n", total);

    /* R393: interrogate each candidate. A valid sqlite3* lets us run ordinary SQL,
       so dump the schema (table name + CREATE statement) and the row counts. */
    typedef int (*fn_exec)(void *, const char *, void *, void *, char **);
    typedef int (*fn_prep)(void *, const char *, int, void **, const char **);
    typedef int (*fn_step)(void *);
    typedef const unsigned char *(*fn_ctext)(void *, int);
    typedef int (*fn_ccount)(void *);
    typedef int (*fn_final)(void *);
    fn_exec   fExec = patch_sym_env<fn_exec>("sqlite3_exec");
    fn_prep   fPrep = patch_sym_env<fn_prep>("sqlite3_prepare_v2");
    fn_step   fStep = patch_sym_env<fn_step>("sqlite3_step");
    fn_ctext  fText = patch_sym_env<fn_ctext>("sqlite3_column_text");
    fn_ccount fCnt  = patch_sym_env<fn_ccount>("sqlite3_column_count");
    fn_final  fFin  = patch_sym_env<fn_final>("sqlite3_finalize");

    for (int k = 0; k < total; ++k)
    {
        unsigned db = g_sql_cand[k];
        if (db == 0) { continue; }
        fprintf(out, "\n===== db 0x%08x =====\n", db);
        if (fPrep == 0 || fStep == 0 || fFin == 0) { fprintf(out, "sqlite api missing\n"); continue; }
        void *st = 0;
        if (fPrep((void *)db, "SELECT name,sql FROM sqlite_master WHERE type='table'", -1, &st, 0) != 0 || st == 0)
        {
            fprintf(out, "prepare failed\n");
            continue;
        }
        int rows = 0;
        int cols = fCnt ? fCnt(st) : 2;
        while (fStep(st) == 100 && rows < 60)
        {
            const unsigned char *nm = fText ? fText(st, 0) : 0;
            const unsigned char *sq = (cols > 1 && fText) ? fText(st, 1) : 0;
            fprintf(out, "TABLE %s\n  %s\n", nm ? (const char *)nm : "?", sq ? (const char *)sq : "");
            ++rows;
        }
        fFin(st);
        fprintf(out, "-- %d table(s)\n", rows);
        (void)fExec;
    }
    fclose(out);
    PATCH_LOG("sqf: schema dumped for %d candidate(s)", total);

    /* R394: the SECOND database holds player state -- it is the one with the
       virtualitem table (itemid, num), i.e. the backpack. Identify it by probing
       sqlite_master for that table, then GRANT items by inserting rows.
       Trigger: <cfg>/dsh_grant.txt   lines of "<itemId> <count>" */
    hw_item_catalog(total);
    hw_sql_grant(total);

    /* R396: then run any free-form SQL the user put in dsh_sqlexec.txt */
    {
        unsigned pdb = hw_sql_db_with_table(total, "virtualitem");
        if (pdb) { hw_sql_dump_all(pdb); hw_sql_exec_file(pdb); }   /* R405: sqlrep disabled, it crashed */
        else { PATCH_LOG("sqlexec: player db not found"); }
    }
}

/* find which of the captured db handles owns a given table */
static unsigned hw_sql_db_with_table(int n, const char *table)
{
    typedef int (*fn_prep)(void *, const char *, int, void **, const char **);
    typedef int (*fn_step)(void *);
    typedef int (*fn_final)(void *);
    fn_prep fPrep = patch_sym_env<fn_prep>("sqlite3_prepare_v2");
    fn_step fStep = patch_sym_env<fn_step>("sqlite3_step");
    fn_final fFin = patch_sym_env<fn_final>("sqlite3_finalize");
    if (fPrep == 0 || fStep == 0 || fFin == 0) { return 0; }
    char q[256];
    snprintf(q, sizeof(q), "SELECT name FROM sqlite_master WHERE type='table' AND name='%s'", table);
    for (int k = 0; k < n; ++k)
    {
        unsigned db = g_sql_cand[k];
        if (db == 0) { continue; }
        void *st = 0;
        if (fPrep((void *)db, q, -1, &st, 0) != 0 || st == 0) { continue; }
        int rc = fStep(st);
        fFin(st);
        if (rc == 100) { return db; }
    }
    return 0;
}

static void hw_sql_grant(int n)
{
    FILE *en = hw_cfg("dsh_grant.txt", "r");
    if (en == 0) { PATCH_LOG("sqlgrant: no dsh_grant.txt"); return; }

    unsigned db = hw_sql_db_with_table(n, "virtualitem");
    PATCH_LOG("sqlgrant: virtualitem db = 0x%08x", db);
    if (db == 0) { fclose(en); PATCH_LOG("sqlgrant: player db not found -- skipped"); return; }

    typedef int (*fn_exec)(void *, const char *, void *, void *, char **);
    fn_exec fExec = patch_sym_env<fn_exec>("sqlite3_exec");
    typedef int (*fn_changes)(void *);
    fn_changes fChanges = patch_sym_env<fn_changes>("sqlite3_changes");
    if (fExec == 0) { fclose(en); return; }

    int id = 0, cnt = 0, ok = 0;
    while (fscanf(en, "%d %d", &id, &cnt) == 2)
    {
        if (id <= 0) { continue; }
        if (cnt <= 0) { cnt = 1; }
        if (cnt > 9999) { cnt = 9999; }
        char sql[512];
        char *err = 0;
        int rc = 0;
        /* R396: idempotent -- update the existing row first, insert only if absent,
           otherwise a second grant of the same item would add a duplicate row. */
        snprintf(sql, sizeof(sql),
                 "UPDATE virtualitem SET num=%d WHERE itemid=%d", cnt, id);
        err = 0;
        rc = fExec((void *)db, sql, 0, 0, &err);
        int changed = 0;
        if (fChanges) { changed = fChanges((void *)db); }
        if (rc == 0 && changed > 0)
        {
            PATCH_LOG("sqlgrant: id=%d UPDATE num=%d (%d row)", id, cnt, changed);
            ++ok;
        }
        else
        {
            snprintf(sql, sizeof(sql),
                     "INSERT INTO virtualitem(itemid,num) VALUES(%d,%d)", id, cnt);
            err = 0;
            rc = fExec((void *)db, sql, 0, 0, &err);
            PATCH_LOG("sqlgrant: %s -> rc=%d %s", sql, rc, (err ? err : "ok"));
            if (rc == 0) { ++ok; }
        }
    }
    fclose(en);
    PATCH_LOG("sqlgrant: %d insert(s) done", ok);

    /* R395: read the table back so the write is proven, not assumed. */
    typedef int (*fn_prep)(void *, const char *, int, void **, const char **);
    typedef int (*fn_step)(void *);
    typedef const unsigned char *(*fn_ctext)(void *, int);
    typedef int (*fn_final)(void *);
    fn_prep  fPrep = patch_sym_env<fn_prep>("sqlite3_prepare_v2");
    fn_step  fStep = patch_sym_env<fn_step>("sqlite3_step");
    fn_ctext fText = patch_sym_env<fn_ctext>("sqlite3_column_text");
    fn_final fFin  = patch_sym_env<fn_final>("sqlite3_finalize");
    if (fPrep == 0 || fStep == 0 || fFin == 0) { return; }

    char vp[256];
    hw_cfg_path(vp, sizeof(vp), "dsh_sqlverify.txt");
    FILE *vf = fopen(vp, "w");
    if (vf == 0) { PATCH_LOG("sqlgrant: cannot write dsh_sqlverify.txt"); return; }
    void *st = 0;
    if (fPrep((void *)db, "SELECT serial,itemid,num FROM virtualitem", -1, &st, 0) == 0 && st)
    {
        int rows = 0;
        while (fStep(st) == 100 && rows < 200)
        {
            const unsigned char *a = fText ? fText(st, 0) : 0;
            const unsigned char *b = fText ? fText(st, 1) : 0;
            const unsigned char *c = fText ? fText(st, 2) : 0;
            fprintf(vf, "row %s: itemid=%s num=%s\n",
                    a ? (const char *)a : "?", b ? (const char *)b : "?", c ? (const char *)c : "?");
            ++rows;
        }
        fFin(st);
        fprintf(vf, "-- %d row(s)\n", rows);
        PATCH_LOG("sqlgrant: virtualitem now has %d row(s)", rows);
    }
    else { fprintf(vf, "select failed\n"); }
    fclose(vf);
}

/* R396 free-form SQL: dsh_sqlexec.txt holds one statement per line, run against
   the player database. This is what makes "grant anything / set any value"
   fully config driven -- no rebuild needed for a new operation. */
static void hw_sql_exec_file(unsigned db)
{
    FILE *fp = hw_cfg("dsh_sqlexec.txt", "r");
    if (fp == 0) { PATCH_LOG("sqlexec: no dsh_sqlexec.txt"); return; }
    typedef int (*fn_exec)(void *, const char *, void *, void *, char **);
    fn_exec fExec = patch_sym_env<fn_exec>("sqlite3_exec");
    if (fExec == 0) { fclose(fp); return; }

    char line[512];
    int n = 0, okc = 0;
    while (fgets(line, sizeof(line), fp) && n < 50)
    {
        /* strip trailing newline / CR */
        size_t L = strlen(line);
        while (L > 0 && (line[L-1] == '\n' || line[L-1] == '\r')) { line[--L] = 0; }
        if (L == 0) { continue; }
        if (line[0] == '#') { continue; }
        char *err = 0;
        int rc = fExec((void *)db, line, 0, 0, &err);
        PATCH_LOG("sqlexec: rc=%d %s | %s", rc, (err ? err : "ok"), line);
        if (rc == 0) { ++okc; }
        ++n;
    }
    fclose(fp);
    PATCH_LOG("sqlexec: %d/%d statement(s) ok", okc, n);
}

/* R397 dump every table of the player database with a few sample rows.
   Goal (2) asks for the table/field that holds items, backpack and CURRENCY.
   We already know virtualitem = backpack. Currency was NOT there (UI stayed at
   ~8838 after we forced itemid=1 to 123456789), so dump everything and search
   for the numbers the UI actually shows. */
static void hw_sql_dump_all(unsigned db)
{
    typedef int (*fn_prep)(void *, const char *, int, void **, const char **);
    typedef int (*fn_step)(void *);
    typedef const unsigned char *(*fn_ctext)(void *, int);
    typedef int (*fn_ccount)(void *);
    typedef const char *(*fn_cname)(void *, int);
    typedef int (*fn_final)(void *);
    fn_prep  fPrep = patch_sym_env<fn_prep>("sqlite3_prepare_v2");
    fn_step  fStep = patch_sym_env<fn_step>("sqlite3_step");
    fn_ctext fText = patch_sym_env<fn_ctext>("sqlite3_column_text");
    fn_ccount fCnt = patch_sym_env<fn_ccount>("sqlite3_column_count");
    fn_cname fName = patch_sym_env<fn_cname>("sqlite3_column_name");
    fn_final fFin  = patch_sym_env<fn_final>("sqlite3_finalize");
    if (fPrep == 0 || fStep == 0 || fFin == 0) { return; }

    char path[256];
    hw_cfg_path(path, sizeof(path), "dsh_sqldump.txt");
    FILE *out = fopen(path, "w");
    if (out == 0) { PATCH_LOG("sqldump: cannot write file"); return; }

    /* collect table names first (cannot prepare while another stmt is open on
       the same connection if we want to keep it simple -- so copy names out) */
    char names[220][64];
    int nn = 0;
    void *st = 0;
    if (fPrep((void *)db, "SELECT name FROM sqlite_master WHERE type='table' ORDER BY name", -1, &st, 0) == 0 && st)
    {
        while (fStep(st) == 100 && nn < 220)
        {
            const unsigned char *nm = fText ? fText(st, 0) : 0;
            if (nm) { strncpy(names[nn], (const char *)nm, 63); names[nn][63] = 0; ++nn; }
        }
        fFin(st);
    }
    fprintf(out, "player db 0x%08x : %d table(s)\n\n", db, nn);

    for (int i = 0; i < nn; ++i)
    {
        char sql[256];
        snprintf(sql, sizeof(sql), "SELECT * FROM \"%s\" LIMIT 25", names[i]);
        void *s2 = 0;
        if (fPrep((void *)db, sql, -1, &s2, 0) != 0 || s2 == 0) { continue; }
        int cols = fCnt ? fCnt(s2) : 0;
        int rows = 0;
        fprintf(out, "== %s (%d col)\n", names[i], cols);
        while (fStep(s2) == 100 && rows < 25)
        {
            fprintf(out, "  [");
            for (int c = 0; c < cols; ++c)
            {
                const char *cn = fName ? fName(s2, c) : "?";
                const unsigned char *tx = fText ? fText(s2, c) : 0;
                fprintf(out, "%s%s=%s", c ? " " : "", cn ? cn : "?", tx ? (const char *)tx : "NULL");
            }
            fprintf(out, "]\n");
            ++rows;
        }
        fFin(s2);
        fprintf(out, "-- %d row(s)\n\n", rows);
    }
    fclose(out);
    PATCH_LOG("sqldump: %d table(s) dumped -> dsh_sqldump.txt", nn);
}

/* R398 early write BEFORE the game loads the backpack.
   Why: the R396 insert landed but the in-game model was already built, so the
   item could never appear. If we get the row in while the game is still loading,
   the game's own loader will pick it up -- that is the real "takes effect" test.

   Verification is done with the game's own accessor:
       DataManager::getBackPackItemNum(itemId)
   If it reports > 0 after the load, the grant is live in the game model, not just
   sitting in SQLite. Trigger: <cfg>/dsh_early.txt */
static void *hw_sql_early_thread(void *)
{
    FILE *en = hw_cfg("dsh_early.txt", "r");
    if (en == 0) { PATCH_LOG("early: disabled (no dsh_early.txt)"); return 0; }
    fclose(en);

    /* poll fast from t=1s: the player db appears as soon as the client opens it */
    unsigned db = 0;
    for (int i = 0; i < 600; i++)
    {
        usleep(200 * 1000);
        /* compact inline scan: fill g_sql_cand[] with validated handles */
        if (g_sql_cand_n == 0)
        {
            typedef const char *(*fn_err)(void *);
            fn_err fErr = patch_sym_env<fn_err>("sqlite3_errmsg");
            FILE *mp = fopen("/proc/self/maps", "r");
            if (mp && fErr)
            {
                char ln[512];
                while (fgets(ln, sizeof(ln), mp) && g_sql_cand_n < 8)
                {
                    unsigned b = 0, e = 0;
                    char pm[8] = {0};
                    if (sscanf(ln, "%x-%x %7s", &b, &e, pm) != 3) { continue; }
                    if (pm[0] != 'r' || pm[1] != 'w') { continue; }
                    if (e <= b || (e - b) > (64u * 1024u * 1024u)) { continue; }
                    for (unsigned char *q = (unsigned char *)b; q + 4 <= (unsigned char *)e; q += 4)
                    {
                        unsigned v = 0;
                        memcpy(&v, q, 4);
                        if (v != HW_SQLITE_MAGIC) { continue; }
                        for (int back = 0x100; back >= 0; back -= 4)
                        {
                            unsigned cand = (unsigned)q - back;
                            if (cand < b) { continue; }
                            const char *m = fErr((void *)cand);
                            if (m && strcmp(m, "not an error") == 0)
                            {
                                if (g_sql_cand_n < 8) { g_sql_cand[g_sql_cand_n++] = cand; }
                                break;
                            }
                        }
                        if (g_sql_cand_n >= 8) { break; }
                    }
                }
                fclose(mp);
            }
            if (g_sql_cand_n > 0) { PATCH_LOG("early: found %d handle(s)", g_sql_cand_n); }
        }
        db = hw_sql_db_with_table(g_sql_cand_n, "virtualitem");
        if (db != 0) { break; }
    }
    PATCH_LOG("early: player db = 0x%08x", db);
    if (db == 0) { return 0; }

    hw_sql_grant(g_sql_cand_n);
    hw_sql_exec_file(db);

    /* give the game time to finish loading, then ask the game itself */
    for (int i = 0; i < 150; i++) { usleep(200 * 1000); }
    {
        typedef void *(*fn_share)(void);
        typedef int (*fn_num)(void *, int);
        fn_share fShare = patch_sym_env<fn_share>("_ZN11DataManager16shareDataManagerEv");
        fn_num   fNum   = patch_sym_env<fn_num>("_ZN11DataManager18getBackPackItemNumEi");
        if (fShare && fNum)
        {
            void *dm = fShare();
            const int probe[] = { 110, 121, 130, 100, 1, 2 };   /* ids we granted */
            for (unsigned k = 0; k < sizeof(probe)/sizeof(probe[0]); ++k)
            {
                PATCH_LOG("early: game says item %d count = %d", probe[k], fNum(dm, probe[k]));
            }
        }
        else { PATCH_LOG("early: accessor missing"); }
    }
    return 0;
}
__attribute__((constructor)) static void hw_sql_early_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_sql_early_thread, 0) == 0) { pthread_detach(t); }
}

/* R404 query result export -- dump the result set of every statement in
   dsh_sqlexec.txt into dsh_sqlresult.txt. Needed to read back things like the
   item table (id / name / quality) so the MOD menu can offer a picker instead of
   asking the user to type a numeric id. */
static void hw_sql_exec_file_report(unsigned db)
{
    if (1) { return; }   /* R405: disabled -- crashed at libpatch+0x4b38 */
    FILE *fp = hw_cfg("dsh_sqlexec.txt", "r");
    if (fp == 0) { PATCH_LOG("sqlrep: no dsh_sqlexec.txt"); return; }

    typedef int (*fn_exec)(void *, const char *, void *, void *, char **);
    typedef int (*fn_prep)(void *, const char *, int, void **, const char **);
    typedef int (*fn_step)(void *);
    typedef const unsigned char *(*fn_ctext)(void *, int);
    typedef int (*fn_ccount)(void *);
    typedef const char *(*fn_cname)(void *, int);
    typedef int (*fn_final)(void *);
    fn_exec  fExec = patch_sym_env<fn_exec>("sqlite3_exec");
    fn_prep  fPrep = patch_sym_env<fn_prep>("sqlite3_prepare_v2");
    fn_step  fStep = patch_sym_env<fn_step>("sqlite3_step");
    fn_ctext fText = patch_sym_env<fn_ctext>("sqlite3_column_text");
    fn_ccount fCnt = patch_sym_env<fn_ccount>("sqlite3_column_count");
    fn_cname fName = patch_sym_env<fn_cname>("sqlite3_column_name");
    fn_final fFin  = patch_sym_env<fn_final>("sqlite3_finalize");
    if (fExec == 0) { fclose(fp); return; }

    char outp[256];
    hw_cfg_path(outp, sizeof(outp), "dsh_sqlresult.txt");
    FILE *out = fopen(outp, "w");
    if (out == 0) { fclose(fp); PATCH_LOG("sqlrep: cannot write result file"); return; }

    char line[512];
    int n = 0, okc = 0;
    while (fgets(line, sizeof(line), fp) && n < 50)
    {
        size_t L = strlen(line);
        while (L > 0 && (line[L-1] == '\n' || line[L-1] == '\r')) { line[--L] = 0; }
        if (L == 0 || line[0] == '#') { continue; }

        /* run it as a statement so we can print the rows it produces */
        if (fPrep && fStep && fFin)
        {
            void *st = 0;
            if (fPrep((void *)db, line, -1, &st, 0) == 0 && st)
            {
                int cols = fCnt ? fCnt(st) : 0;
                int rows = 0;
                fprintf(out, "# %s\n", line);
                /* header */
                fprintf(out, "#");
                for (int c = 0; c < cols; ++c) { fprintf(out, "%c%s", c ? '|' : ' ', fName ? fName(st, c) : "?"); }
                fprintf(out, "\n");
                while (fStep(st) == 100 && rows < 4000)
                {
                    for (int c = 0; c < cols; ++c)
                    {
                        const unsigned char *tx = fText ? fText(st, c) : 0;
                        fprintf(out, "%s%s", c ? "|" : "", tx ? (const char *)tx : "");
                    }
                    fprintf(out, "\n");
                    ++rows;
                }
                fFin(st);
                fprintf(out, "# %d row(s)\n\n", rows);
                ++okc;
            }
            else
            {
                /* not a SELECT -- fall back to exec */
                char *err = 0;
                int rc = fExec((void *)db, line, 0, 0, &err);
                fprintf(out, "# %s -> rc=%d %s\n\n", line, rc, (err ? err : "ok"));
                if (rc == 0) { ++okc; }
            }
        }
        ++n;
    }
    fclose(fp);
    fclose(out);
    PATCH_LOG("sqlrep: %d/%d statement(s) -> dsh_sqlresult.txt", okc, n);
}

/* R406 item catalog export -- produce the data the MOD menu picker needs.
   The config database holds the item table "itemdata"; we read id/name/quality
   from it and write a compact catalog file:   <id>|<name>|<quality>
   The Java side reads that file and shows a searchable list with names.
   Falls back gracefully: if a column is missing we emit an empty field. */
static void hw_item_catalog(int n)
{
    unsigned db = hw_sql_db_with_table(n, "itemdata");
    PATCH_LOG("catalog: itemdata db = 0x%08x", db);
    if (db == 0) { return; }

    typedef int (*fn_prep)(void *, const char *, int, void **, const char **);
    typedef int (*fn_step)(void *);
    typedef const unsigned char *(*fn_ctext)(void *, int);
    typedef int (*fn_ccount)(void *);
    typedef int (*fn_final)(void *);
    fn_prep  fPrep = patch_sym_env<fn_prep>("sqlite3_prepare_v2");
    fn_step  fStep = patch_sym_env<fn_step>("sqlite3_step");
    fn_ctext fText = patch_sym_env<fn_ctext>("sqlite3_column_text");
    fn_ccount fCnt = patch_sym_env<fn_ccount>("sqlite3_column_count");
    fn_final fFin  = patch_sym_env<fn_final>("sqlite3_finalize");
    if (fPrep == 0 || fStep == 0 || fFin == 0) { return; }

    /* first learn the column names so we can pick the right indexes */
    char cols[64][40];
    int nc = 0;
    {
        void *st = 0;
        if (fPrep((void *)db, "SELECT * FROM itemdata LIMIT 1", -1, &st, 0) == 0 && st)
        {
            nc = fCnt ? fCnt(st) : 0;
            for (int c = 0; c < nc && c < 64; ++c)
            {
                /* column names come from sqlite3_column_name; we approximate via
                   column_text of the header is not possible, so use prepare pragma */
                cols[c][0] = 0;
            }
            fFin(st);
        }
    }
    (void)cols; (void)nc;

    /* R407: record the real column list of itemdata so the catalog can carry
       the quality field instead of an empty third column. */
    char colnames[64][48];
    int ncol = 0;
    {
        typedef const char *(*fn_cname2)(void *, int);
        fn_cname2 fName = patch_sym_env<fn_cname2>("sqlite3_column_name");
        void *st0 = 0;
        if (fPrep((void *)db, "SELECT * FROM itemdata LIMIT 1", -1, &st0, 0) == 0 && st0)
        {
            int c0 = fCnt ? fCnt(st0) : 0;
            for (int c = 0; c < c0 && c < 64; ++c)
            {
                const char *nm = fName ? fName(st0, c) : 0;
                strncpy(colnames[c], nm ? nm : "?", 47);
                colnames[c][47] = 0;
                ++ncol;
            }
            fFin(st0);
        }
    }

    char path[256];
    hw_cfg_path(path, sizeof(path), "dsh_item_catalog.txt");
    FILE *out = fopen(path, "w");
    if (out == 0) { PATCH_LOG("catalog: cannot write file"); return; }

    /* header: the column list, so the Java side can decide what to show */
    fprintf(out, "#COLS ");
    for (int c = 0; c < ncol; ++c) { fprintf(out, "%s%s", c ? "," : "", colnames[c]); }
    fprintf(out, "\n");

    /* id is the item id; name / star are the human label and the quality. */
    /* R408: itemdata has no "star"; the quality column is literally "quality". */
    const char *q = "SELECT id,name,quality,bagType,level FROM itemdata";
    void *st = 0;
    int rows = 0;
    if (fPrep((void *)db, q, -1, &st, 0) != 0 || st == 0)
    {
        /* fall back to a narrower projection if "star" does not exist */
        q = "SELECT id,name,quality FROM itemdata";
        if (fPrep((void *)db, q, -1, &st, 0) != 0 || st == 0)
        {
            fprintf(out, "# itemdata not readable\n");
            fclose(out);
            PATCH_LOG("catalog: prepare failed");
            return;
        }
    }
    int ncols = fCnt ? fCnt(st) : 0;
    while (fStep(st) == 100 && rows < 6000)
    {
        const unsigned char *a = fText ? fText(st, 0) : 0;
        const unsigned char *b = (ncols > 1 && fText) ? fText(st, 1) : 0;
        const unsigned char *c = (ncols > 2 && fText) ? fText(st, 2) : 0;
        const unsigned char *d = (ncols > 3 && fText) ? fText(st, 3) : 0;
        const unsigned char *e = (ncols > 4 && fText) ? fText(st, 4) : 0;
        fprintf(out, "%s|%s|%s|%s|%s\n",
                a ? (const char *)a : "",
                b ? (const char *)b : "",
                c ? (const char *)c : "",
                d ? (const char *)d : "",
                e ? (const char *)e : "");
        ++rows;
    }
    fFin(st);
    fclose(out);
    PATCH_LOG("catalog: %d item(s) -> dsh_item_catalog.txt", rows);
}

/* R411 catalog auto-generation.
   The MOD menu picker reads dsh_item_catalog.txt, but that file only appeared when
   the manual dsh_sqlfind.txt trigger ran -- so after a reinstall the picker showed
   "????". The catalog is cheap to build (one SELECT over 839 rows) and read-only,
   so just rebuild it on every start, with no trigger file needed. */
/* R413 money scanner.
   The UI copper/gold values are not read back from SQLite (we proved that: the DB
   says copper=99999 while the screen still shows 10000), so they live in an object
   in memory. Find them by value: the user reads the number off the screen, we scan
   the heap for that exact int, and report every hit with its address and the module
   it belongs to. Trigger: <cfg>/dsh_money.txt containing "<copper> <gold>".
   Output: dsh_money_hits.txt */
static void *hw_money_thread(void *)
{
    /* R414: DISABLED. The whole-heap value scan segfaulted (libpatch+0x4d98).
       Walking "readable" regions and dereferencing candidate ints is not safe on
       ARM: a region can be unmapped during the walk, and /proc/self/maps reports
       ranges that still fault. Re-enabling needs a SIGSEGV guard (sigsetjmp +
       handler) around each page read -- not worth it until there is a concrete
       target address to write instead of a blind search. */
    PATCH_LOG("money: scanner disabled (unsafe heap walk)");
    return 0;
}
__attribute__((constructor)) static void hw_money_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_money_thread, 0) == 0) { pthread_detach(t); }
}

static void *hw_catalog_thread(void *)
{
    for (int i = 0; i < 100; i++) { usleep(100 * 1000); }      /* ~10 s */

    /* wait for the config database to come up (it is created during boot) */
    unsigned itemDb = 0;
    for (int tries = 0; tries < 600; tries++)
    {
        if (g_sql_cand_n == 0) { hw_scan_handles(); }
        itemDb = hw_sql_db_with_table(g_sql_cand_n, "itemdata");
        if (itemDb != 0) { break; }
        usleep(200 * 1000);
    }
    if (itemDb == 0) { PATCH_LOG("catalog: itemdata db not found -- picker will be empty"); return 0; }
    hw_item_catalog(g_sql_cand_n);
    return 0;
}
__attribute__((constructor)) static void hw_catalog_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_catalog_thread, 0) == 0) { pthread_detach(t); }
}

static void *hw_sqlfind_thread(void *)
{
    for (int i = 0; i < 300; i++) { usleep(100 * 1000); }     /* ~30 s */
    FILE *en = hw_cfg("dsh_sqlfind.txt", "r");
    if (en == 0) { PATCH_LOG("sqf: disabled (no dsh_sqlfind.txt trigger)"); return 0; }
    fclose(en);
    hw_sqlite_find();
    return 0;
}
__attribute__((constructor)) static void hw_sqlfind_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_sqlfind_thread, 0) == 0) { pthread_detach(t); }
}

/* ============================================================================
   R416 capture the REAL BackPackData.

   Everything we tried with SQLite (backpack / virtualitem / user.copper) is a
   local mirror: the UI never reads it back. The only object that actually owns the
   backpack is BackPackData, and its address cannot be guessed -- DataManager+0x1C
   leads to a different object (proved: a real BackPackData always has a non-NULL
   CCDictionary at +0x14, and that chain gave NULL).

   So capture it from the game itself. Three entry points all receive "this" in r0
   and all have hook-safe prologues (no PC-relative instruction in the first 4 bytes):
       BackPackData::init()                  @0x473d1c  push {r4-r7,lr}
       BackPackData::insertItemData(ItemData*) @0x4751b4  push {r4-r7,lr}
       BackPackData::addItemData(ItemData*,bool) @0x4764b0  push {r3,lr}; movs r3,#0
   They are all low frequency (load / add item), so hooking them is safe -- unlike
   drawScene / tick / open, which crashed.
   ========================================================================== */
static void *g_real_bp = 0;
static volatile int g_real_bp_src = 0;   /* 1=init 2=insert 3=add */

extern "C" void rec_bp_init(void *self)
{
    if (self && g_real_bp == 0)
    {
        g_real_bp = self; g_real_bp_src = 1;
        void *dic = 0; memcpy(&dic, (unsigned char *)self + 0x14, 4);
        PATCH_LOG("bp: captured via init() self=%p dic=%p", self, dic);
    }
}
extern "C" void rec_bp_insert(void *self)
{
    if (self && g_real_bp == 0)
    {
        g_real_bp = self; g_real_bp_src = 2;
        void *dic = 0; memcpy(&dic, (unsigned char *)self + 0x14, 4);
        PATCH_LOG("bp: captured via insertItemData() self=%p dic=%p", self, dic);
    }
}
extern "C" void rec_bp_add(void *self)
{
    if (self && g_real_bp == 0)
    {
        g_real_bp = self; g_real_bp_src = 3;
        void *dic = 0; memcpy(&dic, (unsigned char *)self + 0x14, 4);
        PATCH_LOG("bp: captured via addItemData() self=%p dic=%p", self, dic);
    }
}

/* ============================================================================
   R418 HTTP sniffer -- hook the app's own HTTP layer, not the socket.

   The backpack and the money never change from SQLite writes because the server is
   authoritative: everything is pulled over HTTP and rebuilt in memory on each boot.
   So the only place where the data can be rewritten and still be USED by the game is
   between "response arrives" and "game parses it".

   HttpManager::onResponse(CCHttpClient*, CCHttpResponse*) @0x4cc740 is the single
   funnel for every response. It is LOW FREQUENCY (one call per request, not per
   frame), and its prologue is "push {r4-r7,lr}; ldr r3,[r2,0x14]" -- no PC-relative
   instruction, so capture4 can hook it safely (unlike drawScene/tick/open/recv).

   This step only DUMPS what the server sends (read-only, cannot break the game), so
   we can see the real protocol before rewriting anything.
   Output: dsh_http.txt
   ========================================================================== */
static FILE *g_http_out = 0;
static volatile int g_http_hits = 0;

static void hw_http_open_log(void)
{
    if (g_http_out != 0) { return; }
    char path[256];
    hw_cfg_path(path, sizeof(path), "dsh_http.txt");
    g_http_out = fopen(path, "a");
}

/* Dump the std::string at resp+0x14 (that is the field onResponse reads first). */
static void hw_http_dump(void *resp, const char *tag)
{
    if (resp == 0) { return; }
    hw_http_open_log();
    if (g_http_out == 0) { return; }

    unsigned char *r = (unsigned char *)resp;
    /* std::string layout (libstdc++/gnustl): ptr at +0, size at +4, cap at +8.
       The game reads resp+0x14, so the payload string starts there. */
    for (int off = 0x14; off <= 0x24; off += 4)
    {
        unsigned char *s = r + off;
        void *p = 0; unsigned sz = 0;
        memcpy(&p, s, 4);
        memcpy(&sz, s + 4, 4);
        if (p == 0 || sz == 0 || sz > 200000) { continue; }
        unsigned up = (unsigned)p;
        if (up < 0x10000 || up > 0xff000000u) { continue; }
        fprintf(g_http_out, "=== %s resp=%p payload@+0x%x len=%u\n", tag, resp, off, sz);
        unsigned n = sz;
        if (n > 4000) { n = 4000; }
        fwrite(p, 1, n, g_http_out);
        fprintf(g_http_out, "\n=== end\n\n");
        fflush(g_http_out);
        return;
    }
    fprintf(g_http_out, "=== %s resp=%p (no payload found)\n", tag, resp);
    fflush(g_http_out);
}

/* HttpManager::onResponse(CCHttpClient* self, CCHttpResponse* resp): r0=self, r1=resp */
extern "C" void rec_http_resp(void *self, void *resp)
{
    (void)self;
    ++g_http_hits;
    if (g_http_hits <= 200) { hw_http_dump(resp, "onResponse"); }
    if (g_http_hits == 1) { PATCH_LOG("http: hook is live (first response)"); }
}

/* R419 multi-probe: find which HTTP entry point the game actually uses.
   HttpManager::onResponse installed cleanly but never fired, so the traffic does not
   go through it. Probe the generic request helpers and CCHttpClient::send instead:
       getDataFromNet(std::string,std::string,CCHttpRequest::HttpRequestType,
                      CCObject*,callback,...)          @0x6c473c
       getDataFromNetByID(...)                          @0x6c4880
       CCHttpClient::send(CCHttpRequest*)               @0x6d8bd0
   All three start with push {r4-r7,lr} (no PC-relative instruction) => safe to hook.
   Each only logs that it fired, so this cannot break the game. */
static volatile int g_http_net_hits = 0;
static volatile int g_http_send_hits = 0;
static volatile int g_http_byid_hits = 0;

extern "C" void rec_http_net(void *a, void *b)
{
    (void)a; (void)b;
    if (++g_http_net_hits <= 3) { PATCH_LOG("http: getDataFromNet fired (#%d)", g_http_net_hits); }
}
extern "C" void rec_http_byid(void *a, void *b)
{
    (void)a; (void)b;
    if (++g_http_byid_hits <= 3) { PATCH_LOG("http: getDataFromNetByID fired (#%d)", g_http_byid_hits); }
}
extern "C" void rec_http_send(void *req)
{
    if (++g_http_send_hits <= 5)
    {
        PATCH_LOG("http: CCHttpClient::send fired (#%d) req=%p", g_http_send_hits, req);
        /* CCHttpRequest keeps the url std::string near the front; dump what we can */
        if (req != 0) {
            unsigned char *p = (unsigned char *)req;
            void *sp = 0; memcpy(&sp, p, 4);
            unsigned sl = 0; memcpy(&sl, p + 4, 4);
            if (sp && sl > 0 && sl < 1024) {
                PATCH_LOG("http:   url=%.*s", (int)(sl > 200 ? 200 : sl), (const char *)sp);
            }
        }
    }
}

/* ============================================================================
   R422 socket sniffer -- observe the real game protocol (read-only).

   The HTTP funnel never fired, but the library imports send/recv/socket/connect,
   so the player data (backpack, currency) travels over a raw TCP socket with a
   custom protocol. This step only LOOKS at it: a PLT hook on recv that copies the
   bytes to a file and then returns, never altering a return value or an argument.

   recv() runs on the network thread and only when bytes actually arrive, so it is
   far lower frequency than per-frame functions -- and unlike open/recv-with-filter
   attempts, this one does not change behaviour, so it cannot corrupt the stream.
   ========================================================================== */
static void *g_recv_orig = 0;
static FILE *g_sock_out = 0;
static volatile int g_recv_hits = 0;

static void hw_sock_log(const unsigned char *b, int n, int id)
{
    if (g_sock_out == 0)
    {
        char path[256];
        hw_cfg_path(path, sizeof(path), "dsh_socket.txt");
        g_sock_out = fopen(path, "a");
        if (g_sock_out == 0) { return; }
    }
    fprintf(g_sock_out, "--- recv fd=%d len=%d\n", id, n);
    for (int i = 0; i < n && i < 512; ++i)
    {
        unsigned char c = b[i];
        fputc((c >= 32 && c < 127) ? c : '.', g_sock_out);
    }
    fprintf(g_sock_out, "\n");
    fflush(g_sock_out);
}

/* recv(int fd, void *buf, size_t len, int flags) -> r0,r1,r2,r3 */
extern "C" int rec_recv(int fd, void *buf, unsigned len, int flags)
{
    typedef int (*fn)(int, void *, unsigned, int);
    fn real = (fn)g_recv_orig;
    if (real == 0) { return -1; }
    int n = real(fd, buf, len, flags);
    if (n > 0)
    {
        ++g_recv_hits;
        if (g_recv_hits <= 300) { hw_sock_log((const unsigned char *)buf, n, fd); }
        if (g_recv_hits == 1) { PATCH_LOG("sock: recv hook is live"); }
    }
    return n;
}

/* ============================================================================
   R423 GOT hook -- intercept send/recv the way the game actually calls them.

   Inline-patching the address returned by dlsym("recv") did not intercept anything:
   recv is an IMPORTED symbol, so libcocos2dcpp.so reaches it through its own GOT slot.
   Patching libc copy can be bypassed (bionic may use an internal alias, and the
   library may have already bound the slot) -- and it never fired in the log.

   The reliable way is to rewrite the GOT entries of libcocos2dcpp.so itself: then
   every call the game makes lands in our wrapper, and we forward to the saved
   original. This is read-modify of the relocation table only; the game logic is
   untouched and the return values are passed through unchanged.
   ========================================================================== */
#define HW_GOT_MAX 8
static void *g_got_slot[HW_GOT_MAX];
static void *g_got_orig[HW_GOT_MAX];
static int   g_got_n = 0;

/* a tiny ELF32 dynamic-section reader: return the address of the symbol's GOT slot */
static int hw_got_hook_one(unsigned base, const char *want, void *repl)
{
    unsigned char *b = (unsigned char *)base;
    if (memcmp(b, "\177ELF", 4) != 0) { return -1; }

    unsigned phoff, phentsize, phnum;
    memcpy(&phoff,     b + 0x1c, 4);
    memcpy(&phentsize, b + 0x2a, 2);
    memcpy(&phnum,     b + 0x2c, 2);

    unsigned dyn = 0, dynsz = 0;
    for (unsigned p = 0; p < phnum; ++p)
    {
        unsigned char *ph = b + phoff + p * phentsize;
        unsigned type;
        memcpy(&type, ph, 4);
        if (type == 2)   /* PT_DYNAMIC */
        {
            memcpy(&dyn,   ph + 8, 4);
            memcpy(&dynsz, ph + 16, 4);
            break;
        }
    }
    if (dyn == 0) { return -1; }

    unsigned *d = (unsigned *)(b + dyn);
    unsigned symtab = 0, strtab = 0, jmprel = 0, pltrelsz = 0, pltrel = 17;
    for (unsigned k = 0; d[k] != 0; k += 2)
    {
        unsigned tag = d[k], val = d[k + 1];
        if (tag == 6)  { symtab = val; }      /* DT_SYMTAB  */
        if (tag == 5)  { strtab = val; }      /* DT_STRTAB  */
        if (tag == 23) { jmprel = val; }      /* DT_JMPREL  */
        if (tag == 2)  { pltrelsz = val; }    /* DT_PLTRELSZ*/
        if (tag == 20) { pltrel = val; }      /* DT_PLTREL  */
    }
    if (symtab == 0 || strtab == 0 || jmprel == 0 || pltrelsz == 0) { return -1; }

    /* R427: after the loader runs, DT_SYMTAB / DT_STRTAB / DT_JMPREL and each
       r_offset already hold ABSOLUTE addresses. Adding base again shifted every
       lookup off the real table, so nothing was ever found. Accept both forms. */
#define HW_ABS(v) ((unsigned)((v) < base ? ((v) + base) : (v)))
    unsigned char *symp = (unsigned char *)HW_ABS(symtab);
    const char   *strp = (const char *)HW_ABS(strtab);
    unsigned      jmpp = HW_ABS(jmprel);

    unsigned entsz = (pltrel == 7) ? 12 : 8;   /* 7 = DT_RELA */
    unsigned n = pltrelsz / entsz;
    for (unsigned r = 0; r < n; ++r)
    {
        unsigned char *rel = (unsigned char *)(jmpp + r * entsz);
        unsigned off = 0, info = 0;
        memcpy(&off,  rel,     4);
        memcpy(&info, rel + 4, 4);
        unsigned sym = info >> 8;
        /* symbol entries are 16 bytes and st_name is the first field */
        unsigned st_name = 0;
        memcpy(&st_name, symp + sym * 16, 4);
        const char *nm = strp + st_name;
        if (nm == 0 || strcmp(nm, want) != 0) { continue; }

        void **slot = (void **)HW_ABS(off);

        /* R436: idempotent -- never patch the same slot twice, otherwise the
           saved "original" becomes our own wrapper and the call recurses. */
        for (int q = 0; q < g_got_n; ++q)
        {
            if (g_got_slot[q] == (void *)slot) { return -1; }
        }
        if (g_got_n < HW_GOT_MAX)
        {
            g_got_orig[g_got_n] = *slot;      /* keep the resolved original */
            g_got_slot[g_got_n] = (void *)slot;
            ++g_got_n;
        }
        unsigned old = (unsigned)*slot;

        /* R425: with RELRO the GOT page is read-only; make it writable for the
           store and put it back afterwards, otherwise the write faults. */
        unsigned pgsz = 4096;
        unsigned page = ((unsigned)slot) & ~(pgsz - 1);
        int mp = mprotect((void *)page, pgsz, 3 /* PROT_READ|PROT_WRITE */);
        if (mp != 0)
        {
            PATCH_LOG("got: %s mprotect failed (%d), skipping", want, mp);
            return -1;
        }
        *slot = repl;
        __builtin___clear_cache((char *)page, (char *)page + pgsz);
        mprotect((void *)page, pgsz, 1 /* PROT_READ */);
        PATCH_LOG("got: %s slot=%p orig=0x%08x -> %p", want, (void *)slot, old, repl);
        return 0;
    }
    return -1;
}

static int hw_got_hook(const char *name, void *repl)
{
    FILE *mp = fopen("/proc/self/maps", "r");
    if (mp == 0) { return -1; }
    char ln[512];
    unsigned base = 0;
    while (fgets(ln, sizeof(ln), mp))
    {
        if (strstr(ln, "libcocos2dcpp.so") == 0) { continue; }
        unsigned b = 0;
        if (sscanf(ln, "%x-", &b) != 1) { continue; }
        unsigned off = 0;
        char pm[8] = {0};
        if (sscanf(ln, "%*x-%*x %7s %x", pm, &off) != 2) { continue; }
        if (off == 0) { base = b; break; }
    }
    fclose(mp);
    if (base == 0) { PATCH_LOG("got: libcocos2dcpp.so base not found"); return -1; }
    return hw_got_hook_one(base, name, repl);
}

/* R424 wire the GOT hooks: wrapper -> saved original. */
static int  (*g_real_recv)(int, void *, unsigned, int) = 0;
static int  (*g_real_send)(int, const void *, unsigned, int) = 0;

extern "C" int rec_recv_got(int fd, void *buf, unsigned len, int flags)
{
    int n = g_real_recv ? g_real_recv(fd, buf, len, flags) : -1;
    if (n > 0)
    {
        ++g_recv_hits;
        if (g_recv_hits <= 300) { hw_sock_log((const unsigned char *)buf, n, fd); }
        if (g_recv_hits == 1) { PATCH_LOG("sock: GOT recv is live"); }
    }
    return n;
}

static int  (*g_real_read)(int, void *, unsigned) = 0;
static int  (*g_real_write)(int, const void *, unsigned) = 0;
static int hw_is_conn(int fd);
static volatile int g_rw_hits = 0;

/* read()/write() also serve files, so only log when the fd really is a socket. */
static int hw_is_socket(int fd)
{
    int type = 0; socklen_t l = sizeof(type);
    return getsockopt(fd, 1 /* SOL_SOCKET */, 3 /* SO_TYPE */, &type, &l) == 0;
}

extern "C" int rec_read_got(int fd, void *buf, unsigned len)
{
    int n = g_real_read ? g_real_read(fd, buf, len) : -1;
    if (n > 0 && g_rw_hits < 400 && hw_is_conn(fd))
    {
        if (++g_rw_hits == 1) { PATCH_LOG("sock: GOT read is live"); }
        hw_sock_log((const unsigned char *)buf, n, fd);
    }
    return n;
}

extern "C" int rec_write_got(int fd, const void *buf, unsigned len)
{
    if (g_rw_hits < 400 && hw_is_conn(fd))
    {
        if (++g_rw_hits == 1) { PATCH_LOG("sock: GOT write is live"); }
        PATCH_LOG("sock: write fd=%d len=%u", fd, len);
    }
    return g_real_write ? g_real_write(fd, buf, len) : -1;
}
extern "C" int rec_send_got(int fd, const void *buf, unsigned len, int flags)
{
    static volatile int sent = 0;
    if (sent < 60) { ++sent; PATCH_LOG("sock: send fd=%d len=%u", fd, len); }
    return g_real_send ? g_real_send(fd, buf, len, flags) : -1;
}

/* R429: hook GOT slots per LIBRARY NAME.
   The multi-library sweep found nothing because it only looked at DT_JMPREL; libs
   linked with BIND_NOW keep those relocations in DT_RELA. Naming the libraries we
   care about is far more predictable than sweeping. */
static unsigned hw_lib_base(const char *soname)
{
    FILE *mp = fopen("/proc/self/maps", "r");
    if (mp == 0) { return 0; }
    char ln[512];
    unsigned base = 0;
    while (fgets(ln, sizeof(ln), mp))
    {
        if (strstr(ln, soname) == 0) { continue; }
        unsigned b = 0, off = 0;
        char pm[8] = {0};
        if (sscanf(ln, "%x-%*x %7s %x", &b, pm, &off) != 3) { continue; }
        if (off != 0) { continue; }
        base = b;
        break;
    }
    fclose(mp);
    return base;
}

static int hw_got_one_named(const char *soname, const char *sym, void *repl, void **out_orig)
{
    unsigned base = hw_lib_base(soname);
    if (base == 0) { PATCH_LOG("got: %s not mapped", soname); return -1; }
    /* R435: refuse to re-hook a symbol already owned by us (would recurse) */
    for (int i = 0; i < g_got_n && i < (int)(sizeof(g_got_orig)/sizeof(g_got_orig[0])); ++i)
    {
        if (g_got_orig[i] == repl) { continue; }
    }
    int before = g_got_n;
    if (hw_got_hook_one(base, sym, repl) != 0)
    {
        PATCH_LOG("got: %s!%s not found", soname, sym);
        return -1;
    }
    if (out_orig && g_got_n > before) { *out_orig = g_got_orig[g_got_n - 1]; }
    PATCH_LOG("got: %s!%s hooked", soname, sym);
    return 0;
}

/* R432: find out WHO opens the game socket. Hook connect() in both candidate libs.
   recv/send in libcocos2dcpp.so are patched and never fire, while the process holds
   several open sockets -- so the owner of those sockets must be identified first.
   connect() happens once per connection (very low frequency), so this is safe. */
static int (*g_real_connect)(int, const void *, unsigned) = 0;

/* R434: libcocos2dcpp.so imports read/write (and poll) but the game's session socket
   never showed up in recv/send/sendto/recvfrom -- so the data path IS read/write.
   Remember the fds that connect() produced so the read/write wrappers can filter
   without a getsockopt syscall on every single call. */
static volatile int g_connfd[16];
static volatile int g_connfd_n = 0;
static int hw_is_conn(int fd)
{
    for (int i = 0; i < g_connfd_n && i < 16; ++i) { if (g_connfd[i] == fd) { return 1; } }
    return 0;
}

extern "C" int rec_connect_got(int fd, const void *addr, unsigned len)
{
    /* sa_family is a 16-bit LITTLE-ENDIAN short, so it is a[0] | a[1]<<8 -- reading
       only a[1] reported "family 0" for every AF_UNIX socket. Decode it properly and
       dump the raw bytes so the real destination is visible instead of guessed. */
    if (addr && len >= 2)
    {
        const unsigned char *a = (const unsigned char *)addr;
        unsigned fam = (unsigned)a[0] | ((unsigned)a[1] << 8);
        if (fam == 2 && len >= 8)          /* AF_INET */
        {
            unsigned port = ((unsigned)a[2] << 8) | a[3];
            PATCH_LOG("net: connect fd=%d AF_INET %u.%u.%u.%u:%u",
                      fd, a[4], a[5], a[6], a[7], port);
        }
        else if (fam == 10 && len >= 24)   /* AF_INET6 */
        {
            unsigned port = ((unsigned)a[2] << 8) | a[3];
            PATCH_LOG("net: connect fd=%d AF_INET6 port=%u", fd, port);
        }
        else if (fam == 1)                 /* AF_UNIX */
        {
            char path[64] = {0};
            unsigned n = len - 2; if (n > 63) { n = 63; }
            for (unsigned i = 0; i < n; ++i) { char c = (char)a[2 + i]; path[i] = (c >= 32 && c < 127) ? c : (c == 0 ? 0 : 46); }
            PATCH_LOG("net: connect fd=%d AF_UNIX [%s]", fd, path);
        }
        else PATCH_LOG("net: connect fd=%d family=%u len=%u", fd, fam, len);
    }
    else { PATCH_LOG("net: connect fd=%d len=%u", fd, len); }
    if (g_connfd_n < 16)
    {
        int dup = 0;
        for (int i = 0; i < g_connfd_n; ++i) { if (g_connfd[i] == fd) { dup = 1; break; } }
        if (!dup) { g_connfd[g_connfd_n++] = fd; }
    }
    return g_real_connect ? g_real_connect(fd, addr, len) : -1;
}

static int (*g_real_recvfrom)(int, void *, unsigned, int, void *, unsigned *) = 0;
static int (*g_real_sendto)(int, const void *, unsigned, int, const void *, unsigned) = 0;

extern "C" int rec_recvfrom_got(int fd, void *buf, unsigned len, int flags, void *sa, unsigned *sl)
{
    int n = g_real_recvfrom ? g_real_recvfrom(fd, buf, len, flags, sa, sl) : -1;
    if (n > 0)
    {
        if (++g_recv_hits == 1) { PATCH_LOG("sock: recvfrom is live"); }
        if (g_recv_hits <= 300) { hw_sock_log((const unsigned char *)buf, n, fd); }
    }
    return n;
}

extern "C" int rec_sendto_got(int fd, const void *buf, unsigned len, int flags, const void *sa, unsigned sl)
{
    static volatile int s2 = 0;
    if (s2 < 40) { ++s2; PATCH_LOG("sock: sendto fd=%d len=%u", fd, len); }
    return g_real_sendto ? g_real_sendto(fd, buf, len, flags, sa, sl) : -1;
}

/* R436: hook everything that is mapped right now, and keep doing it.
   libmocarpc_nano_jni.so and libmg20pbase.so are loaded LATER than the moment we
   first run, so a one-shot install misses them -- and those are the libraries that
   appear to own the real session socket. hw_got_hook_one is idempotent, so calling
   this repeatedly is safe. */
static const char *HW_NET_LIBS[5] = {
    "libcocos2dcpp.so", "libmg20pbase.so", "libmocarpc_nano_jni.so",
    "libegamepay_dr2.so", "liblegend.so"
};

static void hw_hook_network_once(void)
{
    const char *syms[6] = { "recv", "send", "read", "write", "recvfrom", "sendto" };
    void *repls[6] = { (void *)&rec_recv_got, (void *)&rec_send_got,
                       (void *)&rec_read_got, (void *)&rec_write_got,
                       (void *)&rec_recvfrom_got, (void *)&rec_sendto_got };
    for (int l = 0; l < 5; ++l)
    {
        if (hw_lib_base(HW_NET_LIBS[l]) == 0) { continue; }
        for (int s = 0; s < 6; ++s)
        {
            void *o = 0;
            if (hw_got_one_named(HW_NET_LIBS[l], syms[s], repls[s], &o) == 0)
            {
                if (s == 0 && g_real_recv == 0) { g_real_recv = (int (*)(int, void *, unsigned, int))o; }
                if (s == 1 && g_real_send == 0) { g_real_send = (int (*)(int, const void *, unsigned, int))o; }
                if (s == 2 && g_real_read == 0) { g_real_read = (int (*)(int, void *, unsigned))o; }
                if (s == 3 && g_real_write == 0) { g_real_write = (int (*)(int, const void *, unsigned))o; }
                if (s == 4 && g_real_recvfrom == 0) { g_real_recvfrom = (int (*)(int, void *, unsigned, int, void *, unsigned *))o; }
                if (s == 5 && g_real_sendto == 0) { g_real_sendto = (int (*)(int, const void *, unsigned, int, const void *, unsigned))o; }
            }
        }
        void *co = 0;
        if (hw_got_one_named(HW_NET_LIBS[l], "connect", (void *)&rec_connect_got, &co) == 0)
        { if (g_real_connect == 0) { g_real_connect = (int (*)(int, const void *, unsigned))co; } }
    }
}

static void *hw_rehook_thread(void *)
{
    for (int i = 0; i < 120; ++i)      /* ~2 min, every second */
    {
        usleep(1000 * 1000);
        hw_hook_network_once();
    }
    return 0;
}
__attribute__((constructor)) static void hw_rehook_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_rehook_thread, 0) == 0) { pthread_detach(t); }
}

/* ============================================================================
   R437 capture the SAVE-FILE AES key.

   The in-memory SQLite turned out to be write-only from the game's point of view:
   writing role.lv=80 changed nothing on screen, and there is no .db file anywhere on
   the device -- the databases are ":memory:" and rebuilt on every launch. The real
   persistent store is files/lol.plist + diablo.plist (47104 B, AES-CBC, 24-byte
   header).

   libcocos2dcpp.so statically links OpenSSL AES. Of the AES entry points only
   AES_cbc_encrypt is a normal Thumb function (push {r4,r5,lr}); AES_set_decrypt_key
   / AES_set_encrypt_key / AES_decrypt are ARM-state veneers (adds r0,#8; b ...) and
   cannot be patched by the Thumb capture4 hook.

   AES_cbc_encrypt(in, out, length, key, ivec, enc) gives us r0..r3 = in/out/len/key.
   AES_KEY.rd_key[0..] holds the ORIGINAL key bytes, so dumping the first 32 bytes at
   r3 recovers the raw AES key. plist is 47104 bytes, so its call is unmistakable.
   Output: dsh_aes.txt
   ========================================================================== */
static FILE *g_aes_out = 0;
static volatile int g_aes_hits = 0;

extern "C" void rec_aescbc(void *in, void *out, unsigned len, void *key)
{
    if (++g_aes_hits > 40) { return; }
    if (g_aes_out == 0)
    {
        char path[256];
        hw_cfg_path(path, sizeof(path), "dsh_aes.txt");
        g_aes_out = fopen(path, "a");
        if (g_aes_out == 0) { return; }
    }

    fprintf(g_aes_out, "--- AES_cbc_encrypt #%d in=%p out=%p len=%u key=%p\n",
            g_aes_hits, in, out, len, key);

    /* AES_KEY.rd_key[] starts at offset 0 of the struct for the ENCRYPT schedule,
       so the first 16/32 bytes ARE the original key. */
    if (key != 0)
    {
        const unsigned char *k = (const unsigned char *)key;
        fprintf(g_aes_out, "KEY ");
        for (int i2 = 0; i2 < 32; ++i2) { fprintf(g_aes_out, "%02x", k[i2]); }
        fprintf(g_aes_out, "\n");
    }

    if (in != 0 && len > 0)
    {
        const unsigned char *p = (const unsigned char *)in;
        unsigned n = len > 64 ? 64 : len;
        fprintf(g_aes_out, "IN  ");
        for (unsigned i2 = 0; i2 < n; ++i2) { fprintf(g_aes_out, "%02x", p[i2]); }
        fprintf(g_aes_out, "\n");
    }
    fflush(g_aes_out);
}


/* ============================================================================
   R441 ARM-state patcher + AES_set_decrypt_key key capture.

   AES_set_decrypt_key is ARM-state code (verified by disassembling with the ARM
   triple, where it reads as: str lr,[sp,#-4]! ; bl AES_set_encrypt_key ; ...).
   The existing capture4 hook only writes Thumb encodings, so it could never patch
   this function -- that is why the AES key never showed up.

   Patch layout at the function entry (8 bytes = 2 ARM instructions):
       ldr  pc, [pc, #-4]        ; E51FF004  (PC reads as A+8, -4 => A+4)
       .word handler | 1         ; bit0=1 makes the load switch to Thumb state

   Displaced instructions go into a trampoline allocated near the target:
       str  lr, [sp, #-4]!       ; position independent, copied verbatim
       ldr  r12, [pc, #8]        ; load the bl target as a literal
       blx  r12                  ; behaves like the original bl (sets lr)
       ldr  pc, [pc, #-4]
       .word target + 8          ; ARM state (bit0=0)
       .word <bl destination>    ; ARM state

   The handler itself is ordinary Thumb code, so no ARM assembly is needed in this
   file at all -- only the two word-encoded blobs above.

   AES_set_decrypt_key(userKey, bits, AES_KEY*) => r0 is the RAW KEY pointer.
   ========================================================================== */
static void *g_arm_tramp = 0;       /* ARM-state resume address */
static void *g_arm_key_addr = 0;
static volatile int g_arm_key_hits = 0;
static FILE *g_arm_key_out = 0;

/* regs[0..3] = the r0..r3 captured at function entry */
extern "C" void rec_arm_aes_key(unsigned *regs)
{
    if (regs == 0) { return; }
    if (++g_arm_key_hits > 20) { return; }

    if (g_arm_key_out == 0)
    {
        char path[256];
        hw_cfg_path(path, sizeof(path), "dsh_aes_key.txt");
        g_arm_key_out = fopen(path, "a");
        if (g_arm_key_out == 0) { return; }
    }

    const unsigned char *key = (const unsigned char *)regs[0];
    unsigned bits = regs[1];
    fprintf(g_arm_key_out, "--- AES_set_decrypt_key #%d bits=%u key=%p\n",
            g_arm_key_hits, bits, (void *)key);

    if (key != 0)
    {
        unsigned n = (bits >= 128 && bits <= 256) ? (bits / 8) : 32;
        if (n > 32) { n = 32; }
        fprintf(g_arm_key_out, "KEY ");
        for (unsigned i2 = 0; i2 < n; ++i2) { fprintf(g_arm_key_out, "%02x", key[i2]); }
        fprintf(g_arm_key_out, "\n");
        /* also the printable form, in case the key is an ASCII passphrase */
        fprintf(g_arm_key_out, "ASC ");
        for (unsigned i2 = 0; i2 < n; ++i2)
        {
            unsigned char c = key[i2];
            fputc((c >= 32 && c < 127) ? c : 46, g_arm_key_out);
        }
        fprintf(g_arm_key_out, "\n");
    }
    fflush(g_arm_key_out);
}

/* Thumb handler: save the argument registers, report them, then resume in ARM state. */
extern "C" __attribute__((naked)) void arm_aes_key_handler(void)
{
    __asm volatile(
        "push {r0, r1, r2, r3, r12, lr}\n"
        "mov  r0, sp\n"
        "bl   rec_arm_aes_key\n"
        "pop  {r0, r1, r2, r3, r12, lr}\n"
        "ldr  r12, 1f\n"
        "ldr  r12, [r12]\n"
        "bx   r12\n"
        ".balign 4\n"
        "1: .word 0x5A5AA5A5\n"   /* patched at runtime with the trampoline */
    );
}

/* ARM-mode mprotect/clear-cache helper used by hw_arm_patch. */
static int hw_arm_patch(void *target, void *thumb_handler)
{
    if (target == 0 || thumb_handler == 0) { return -1; }
    if (((unsigned)target & 3) != 0) { PATCH_LOG("armhook: target not 4-byte aligned"); return -1; }

    unsigned *t = (unsigned *)target;
    unsigned in0 = t[0];
    unsigned in1 = t[1];

    /* R449: trampoline generator with PC-relative relocation.
       e24f3008 (sub r3, pc, #8) is ADR-style: copying it verbatim into a
       trampoline megabytes away makes it compute the wrong address, which is
       exactly what crashed AES_set_encrypt_key / AES_decrypt / AES_encrypt.
         BL                   -> ldr r12,[pc,#0] / .word dest / blx r12
         sub|add Rd, pc, #imm -> ldr Rd,[pc,#0] / .word <value at ORIGINAL addr>
         otherwise            -> copied verbatim (position independent) */
    unsigned *tp = (unsigned *)hw_alloc_near(target);
    if (tp == 0) { PATCH_LOG("armhook: no memory near target"); return -1; }

    int fixpos[8];
    unsigned fixval[8];
    int nfix = 0;
    int o = 0;

    for (int ii = 0; ii < 2; ++ii)
    {
        unsigned ins = (ii == 0) ? in0 : in1;
        unsigned oa = (unsigned)target + (unsigned)(ii * 4);

        if ((ins & 0x0F000000u) == 0x0B000000u)          /* bl */
        {
            int off = (int)(ins & 0x00FFFFFFu);
            if (off & 0x00800000) { off |= (int)0xFF000000u; }
            unsigned dest = oa + 8 + (unsigned)(off << 2);
            tp[o++] = 0xE51FC004u;   /* ldr r12, [pc, #-4] -> next word */
            tp[o] = 0; fixpos[nfix] = o; fixval[nfix] = dest; ++nfix; ++o;
            tp[o++] = 0xE12FFF3Cu;
            continue;
        }

        if ((ins & 0xFFFF0000u) == 0xE24F0000u)          /* sub Rd, pc, #imm */
        {
            unsigned rd = (ins >> 12) & 0xFu;
            unsigned imm = ins & 0xFFFu;
            unsigned val = (oa + 8) - imm;
            tp[o++] = 0xE51F0004u | (rd << 12);   /* ldr Rd, [pc, #-4] -> next word */
            tp[o] = 0; fixpos[nfix] = o; fixval[nfix] = val; ++nfix; ++o;
            continue;
        }

        if ((ins & 0xFFFF0000u) == 0xE28F0000u)          /* add Rd, pc, #imm */
        {
            unsigned rd = (ins >> 12) & 0xFu;
            unsigned imm = ins & 0xFFFu;
            unsigned val = (oa + 8) + imm;
            tp[o++] = 0xE51F0004u | (rd << 12);   /* ldr Rd, [pc, #-4] -> next word */
            tp[o] = 0; fixpos[nfix] = o; fixval[nfix] = val; ++nfix; ++o;
            continue;
        }

        tp[o++] = ins;
    }

    tp[o++] = 0xE51FF004u;
    tp[o++] = (unsigned)target + 8;

    for (int i2 = 0; i2 < nfix; ++i2) { tp[fixpos[i2]] = fixval[i2]; }

    unsigned *tm = tp;
    g_arm_tramp = (void *)tm;

    /* R446: give every hook its OWN copy of the handler so several ARM functions
       can be patched at once. Copying the code verbatim keeps the internal
       "ldr r12, 1f" displacement valid, because the literal moves with it. */
    unsigned hcode = ((unsigned)&arm_aes_key_handler) & ~1u;
    int mo = -1;
    {
        unsigned *hp = (unsigned *)hcode;
        for (int k = 0; k < 32; ++k)
        {
            if (hp[k] == 0x5A5AA5A5u) { mo = k * 4; break; }
        }
    }
    if (mo < 0) { PATCH_LOG("armhook: handler literal not found, aborting before patch"); return -1; }

    unsigned char *hcopy = (unsigned char *)hw_alloc_near(target);
    if (hcopy == 0) { PATCH_LOG("armhook: cannot allocate handler copy"); return -1; }
    memcpy(hcopy, (const void *)hcode, 128);
    *(unsigned *)(hcopy + mo) = (unsigned)tm;
    {
        unsigned pg3 = ((unsigned)hcopy) & ~0xFFFu;
        __builtin___clear_cache((char *)hcopy, (char *)hcopy + 128);
        mprotect((void *)pg3, 0x1000, 5 /* r-x */);
    }


    /* make the target writable (it lives in an executable mapping) */
    unsigned pg = ((unsigned)target) & ~0xFFFu;
    if (mprotect((void *)pg, 0x1000, 7 /* rwx */) != 0)
    {
        PATCH_LOG("armhook: mprotect failed");
        return -1;
    }
    t[0] = 0xE51FF004u;                          /* ldr pc, [pc, #-4] */
    t[1] = ((unsigned)hcopy) | 1u;               /* per-hook handler copy, Thumb */
    __builtin___clear_cache((char *)pg, (char *)pg + 0x1000);
    mprotect((void *)pg, 0x1000, 5 /* r-x */);

    PATCH_LOG("armhook: %p patched (was %08x %08x) tramp=%p handler=%p",
              target, in0, in1, (void *)tm, (void *)hcopy);
    return 0;
}


/* ============================================================================
   R451 capture the SAVE-FILE crypto entry points.

   Triggering a real save (battle -> victory -> exit) rewrote lol.plist at 22:01,
   yet none of the four OpenSSL AES hooks fired. So the plist crypto is NOT OpenSSL:
   it lives in PlatformHelp.

   PlatformHelp::copyFileToPathAndEncryption(const char *src, const char *dst,
                                             const char *key)   @0x6bdca8  (Thumb)
   PlatformHelp::copyFileToPathAndDecrypt(src, dst, key)        @0x6bdce6  (Thumb)
   PlatformHelp::writeTofile(char *name, int, std::string)      @0x6bdd1c  (Thumb)

   All three are ordinary Thumb functions (push {...}) and their ELF symbols carry
   bit0, so the existing Thumb patcher handles them. The third argument of the first
   two IS the key -- that is what we want.
   Output: dsh_plist.txt
   ========================================================================== */
static FILE *g_plist_out = 0;
static volatile int g_plist_hits = 0;

static void hw_plist_open(void)
{
    if (g_plist_out != 0) { return; }
    char path[256];
    hw_cfg_path(path, sizeof(path), "dsh_plist.txt");
    g_plist_out = fopen(path, "a");
}

/* R452: never dereference these as strings. The first call crashed the process
   (crash=69) because src/dst/key are not guaranteed to be NUL-terminated C strings.
   We log the raw pointer values only; the key material is captured separately by the
   OpenSSL hooks once we know which path actually encrypts. */
static void hw_plist_line(const char *tag, void *a, void *b, void *c)
{
    if (++g_plist_hits > 60) { return; }
    hw_plist_open();
    if (g_plist_out == 0) { return; }
    fprintf(g_plist_out, "%s src=%p dst=%p key=%p\n", tag, a, b, c);
    fflush(g_plist_out);
    PATCH_LOG("plist: %s src=%p dst=%p key=%p", tag, a, b, c);
}

/* copyFileToPathAndEncryption(src,dst,key) / ...Decrypt(src,dst,key) */
extern "C" void rec_plist_enc(void *src, void *dst, void *key)
{
    hw_plist_line("ENC", src, dst, key);
}
extern "C" void rec_plist_dec(void *src, void *dst, void *key)
{
    hw_plist_line("DEC", src, dst, key);
}

/* writeTofile(char *name, int len, std::string &data): r0=name, r1=len, r2=&string */
extern "C" void rec_plist_write(void *name, unsigned len, void *strp)
{
    if (++g_plist_hits > 60) { return; }
    hw_plist_open();
    if (g_plist_out == 0) { return; }
    fprintf(g_plist_out, "WRITE name=%p len=%u", name, len);
    if (strp != 0)
    {
        void *dp = 0; unsigned dl = 0;
        memcpy(&dp, strp, 4);
        memcpy(&dl, (char *)strp + 4, 4);
        if (dp != 0 && dl > 0 && dl < 1000000)
        {
            fprintf(g_plist_out, " data[%u]=", dl);
            unsigned n = dl > 32 ? 32 : dl;
            for (unsigned k = 0; k < n; ++k) { fprintf(g_plist_out, "%02x", ((unsigned char *)dp)[k]); }
        }
    }
    fprintf(g_plist_out, "\n");
    fflush(g_plist_out);
    PATCH_LOG("plist: WRITE name=%p len=%u", name, len);
}


static void *hw_capmany_thread(void *)
{
    for (int i = 0; i < 600; i++)
    {
        void *h = dlopen("libcocos2dcpp.so", RTLD_NOW | RTLD_GLOBAL);
        if (h != 0)
        {
              /* R295: per-target gating. dsh_hooks.txt may contain one token per
                 line; "all" enables everything. This lets us enable ONE hook at a time to
                 find out which one crashed the app during early startup (R294).
                 R372: this block runs ~20 ms after the library loads, often BEFORE the
                 app's external storage is mounted, so fopen() fails even though the file
                 exists. Retry for up to ~5 s before giving up. */
              FILE *en = 0;
              for (int rty = 0; rty < 100 && en == 0; ++rty)
              {
                  en = hw_cfg("dsh_hooks.txt", "r");
                  if (en == 0) { usleep(50 * 1000); }
              }
              if (en == 0)
              {
                  PATCH_LOG("capmany: SKIPPED (no dsh_hooks.txt after 5s) -- game runs on the original");
                  return 0;
              }
              char want[512] = {0};
              size_t got = fread(want, 1, sizeof(want) - 1, en);
              (void)got; want[511] = 0;
              fclose(en);
              PATCH_LOG("capmany: hooks file = [%s]", want);

              struct { const char *sym; void *stub; const char *token; } T[] = {
                  { "_ZN12BLMainUIMenu11initOneGiftEv",                  (void *)&stub_gift,   "onegift"   },
                  { "_ZN12BLMainUIMenu12initFailGiftEv",                 (void *)&stub_fail,   "failgift"  },
                  { "_ZN12BLMainUIMenu10initSignedEv",                   (void *)&stub_signed, "signed"    },
                  { "_ZN12BLMainUIMenu12initLivenessEv",                 (void *)&stub_live,   "liveness"  },
                  { "_ZN11BLGameScene10requestVipEPN7cocos2d8CCObjectE", (void *)&stub_vip,    "vip"       },
                  { "_ZN11BLOneGiftUI4tickEf",                           (void *)&stub_gui,    "onegiftui" },
                  { "_ZN11EquipGiftUI4tickEf",                           (void *)&stub_eui,    "equipui"   },
                  { "_ZN12BLMainUIMenu11onUpdateTipEPN7cocos2d8CCObjectE", (void *)&stub_tip,   "tip"       },
                  { "_ZN12BLMainUIMenu10onBtnClickEPN7cocos2d8CCObjectEj", (void *)&stub_btn, "btn"       },
                  { "_ZN12PlatformHelp27copyFileToPathAndEncryptionEPKcS1_S1_", (void *)&stub_plist_enc, "plistenc" },
                  { "_ZN12PlatformHelp24copyFileToPathAndDecryptEPKcS1_S1_",    (void *)&stub_plist_dec, "plistdec" },
                  { "_ZN12PlatformHelp11writeTofileEPciSs",                   (void *)&stub_plist_wr,  "plistwr"  },
                  { "AES_set_decrypt_key", (void *)&arm_aes_key_handler, "armhook" },
                  { "AES_set_encrypt_key", (void *)&arm_aes_key_handler, "armenc"   },
                  { "AES_decrypt",         (void *)&arm_aes_key_handler, "armdec"   },
                  { "AES_encrypt",         (void *)&arm_aes_key_handler, "armecb"   },
                  { "AES_cbc_encrypt", (void *)&stub_aescbc, "aescbc" },
                  { "recv", (void *)&stub_recv, "recv" },
                  { "_ZN11HttpManager10onResponseEPN7cocos2d9extension12CCHttpClientEPNS1_14CCHttpResponseE", (void *)&stub_http_resp, "httpresp" },
                  { "EVP_DecryptInit_ex", (void *)&stub_evpdec, "evpdec"    },
                  { "EVP_EncryptInit_ex", (void *)&stub_evpenc, "evpenc"    },
                  { "open",   (void *)&stub_open,   "open"      },
                  { "openat", (void *)&stub_openat, "openat"    },
                  { "sqlite3_prepare_v2", (void *)&stub_sqlprep, "sqlprep" }, 
                  { "sqlite3_exec",       (void *)&stub_sqlexec, "sqlexec" }, 
              };
              int all = (strstr(want, "all") != 0);
              for (unsigned k = 0; k < sizeof(T) / sizeof(T[0]); ++k)
              {
                  if (!all && strstr(want, T[k].token) == 0)
                  {
                      PATCH_LOG("capmany: skip %s (not in hooks file)", T[k].token);
                      continue;
                  }
                  if (hw_cap4_one(h, T[k].sym, T[k].stub) != 0) { g_hooks_fail++; }
                  else { g_hooks_ok++; PATCH_LOG("capmany: hooked %s", T[k].token); }
              }
              PATCH_LOG("capmany: installed %lu ok, %lu failed", g_hooks_ok, g_hooks_fail);

            /* R426: rewrite the GOT slots so the game's own calls reach our wrappers.
               This MUST run before the return below -- the first version sat after it
               and was therefore dead code, which is why no "got:" line ever appeared. */
            {
                const char *libs[3] = { "libcocos2dcpp.so", "libmocarpc_nano_jni.so", "libmg20pbase.so" };
                void *o = 0;
                for (int i = 0; i < 3; ++i)
                {
                    if (g_real_recv == 0 &&
                        hw_got_one_named(libs[i], "recv", (void *)&rec_recv_got, &o) == 0)
                    { g_real_recv = (int (*)(int, void *, unsigned, int))o; }
                    o = 0;
                    if (g_real_send == 0 &&
                        hw_got_one_named(libs[i], "send", (void *)&rec_send_got, &o) == 0)
                    { g_real_send = (int (*)(int, const void *, unsigned, int))o; }
                    o = 0;
                    if (g_real_read == 0 &&
                        hw_got_one_named(libs[i], "read", (void *)&rec_read_got, &o) == 0)
                    { g_real_read = (int (*)(int, void *, unsigned))o; }
                    o = 0;
                    if (g_real_write == 0 &&
                        hw_got_one_named(libs[i], "write", (void *)&rec_write_got, &o) == 0)
                    { g_real_write = (int (*)(int, const void *, unsigned))o; }
                }

                /* R432: connect() in both candidate libraries, plus read/write only in
                   libmocarpc (it imports socket/connect without send/recv, so it must
                   use read/write -- and keeping it to that one library avoids hooking
                   read/write for every file operation in the process). */
                {
                    void *co = 0;
                    if (hw_got_one_named("libcocos2dcpp.so", "connect", (void *)&rec_connect_got, &co) == 0)
                    { g_real_connect = (int (*)(int, const void *, unsigned))co; }
                    co = 0;
                    if (hw_got_one_named("libmocarpc_nano_jni.so", "connect", (void *)&rec_connect_got, &co) == 0)
                    { if (g_real_connect == 0) { g_real_connect = (int (*)(int, const void *, unsigned))co; } }

                    co = 0;
                    if (hw_got_one_named("libmocarpc_nano_jni.so", "read", (void *)&rec_read_got, &co) == 0)
                    { g_real_read = (int (*)(int, void *, unsigned))co; }
                    co = 0;
                    if (hw_got_one_named("libmocarpc_nano_jni.so", "write", (void *)&rec_write_got, &co) == 0)
                    { g_real_write = (int (*)(int, const void *, unsigned))co; }
/* R435: read/write are installed by the per-lib loop above -- do NOT hook twice. */
                    co = 0;
                    if (hw_got_one_named("libcocos2dcpp.so", "recvfrom", (void *)&rec_recvfrom_got, &co) == 0)
                    { g_real_recvfrom = (int (*)(int, void *, unsigned, int, void *, unsigned *))co; }
                    co = 0;
                    if (hw_got_one_named("libcocos2dcpp.so", "sendto", (void *)&rec_sendto_got, &co) == 0)
                    { g_real_sendto = (int (*)(int, const void *, unsigned, int, const void *, unsigned))co; }
                    PATCH_LOG("got: recvfrom=%p sendto=%p", (void *)g_real_recvfrom, (void *)g_real_sendto);
                    PATCH_LOG("got: connect=%p mocapc read=%p write=%p",
                              (void *)g_real_connect, (void *)g_real_read, (void *)g_real_write);
                }
                PATCH_LOG("got: recv=%p send=%p read=%p write=%p",
                          (void *)g_real_recv, (void *)g_real_send,
                          (void *)g_real_read, (void *)g_real_write);
            }
            return 0;
        }
        usleep(100 * 1000);
    }
    return 0;
}

__attribute__((constructor)) static void hw_capmany_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_capmany_thread, 0) == 0) { pthread_detach(t); }
}

/* ---- active construction (R281): make the entries appear "at all times" ------
   Deliberately OPT-IN via a config file, because forcing UI state blindly is
   exactly what broke the layout in R247. Enable by creating /sdcard/dsh_show.txt.
   We only call the entries whose instance we have actually captured, and we log
   every call, so the first device run tells us exactly what happened.
------------------------------------------------------------------------------ */
/* R322 probe: can we reach DataManager without any menu instance? */
static void *hw_dm_probe_thread(void *)
{
    for (int i = 0; i < 300; i++) { usleep(100 * 1000); }        /* ~30 s */
    FILE *en = hw_cfg("dsh_show.txt", "r");
    if (en == 0) { PATCH_LOG("dmprobe: disabled (no dsh_show.txt)"); return 0; }
    fclose(en);
    typedef void *(*fn_share)(void);
    fn_share fShare = patch_sym_env<fn_share>("_ZN11DataManager16shareDataManagerEv");
    PATCH_LOG("dmprobe: shareDataManager=%p", (void *)fShare);
    if (fShare) {
        void *dm = fShare();
        PATCH_LOG("dmprobe: DataManager = %p", dm);
        /* try the VIP / 7-day switches the original exposes */
        typedef void (*fn_setb)(void *, int);
        struct { const char *sym; const char *name; } S[] = {
            { "_ZN11DataManager14setISShowVipUIEb",     "setISShowVipUI"     },
            { "_ZN11DataManager17setISGetVipRewardEb",  "setISGetVipReward"  },
            { "_ZN11DataManager17setISShowSevenDayEb",  "setISShowSevenDay"  },
            { "_ZN11DataManager11setISBuyVipEb",        "setISBuyVip"        },
        };
        for (unsigned k = 0; k < sizeof(S)/sizeof(S[0]); ++k) {
            fn_setb f = patch_sym_env<fn_setb>(S[k].sym);
            if (f && dm) { f(dm, 1); PATCH_LOG("dmprobe: %s(1) called", S[k].name); }
            else { PATCH_LOG("dmprobe: %s MISSING or dm null", S[k].name); }
        }
        /* R327: month-card / 7-day data objects */
        {
            typedef void (*fn_void)(void);
            fn_void fLive = patch_sym_env<fn_void>("_ZN12LivenessData8initDataEv");
            PATCH_LOG("dmprobe: LivenessData::initData=%p", (void *)fLive);
            /* R328: DO NOT call initData() without a `this` pointer -- it crashed (27 lines).
               LivenessData is an instance method; only the DataManager setters are static-safe. */
            fn_void fSign = patch_sym_env<fn_void>("_ZN10SignInData14GetDataFromNetEib");
            PATCH_LOG("dmprobe: SignInData::GetDataFromNet=%p (int,bool signature)", (void *)fSign);
        }
    }
    return 0;
}
__attribute__((constructor)) static void hw_dmprobe_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_dm_probe_thread, 0) == 0) { pthread_detach(t); }
}
static void *hw_show_thread(void *)
{
    for (int i = 0; i < 250; i++) { usleep(100 * 1000); }        /* ~25 s: let the menu build */
    FILE *fp = hw_cfg("dsh_show.txt", "r");
    if (fp == 0) { PATCH_LOG("show: disabled (no /sdcard/dsh_show.txt)"); return 0; }
    fclose(fp);

    PATCH_LOG("show: ENABLED -- actively constructing entries");
    typedef void (*fn0)(void *);
    struct { void *slot; const char *sym; const char *name; } T[] = {
        { g_i_gift,   "_ZN12BLMainUIMenu11initOneGiftEv",    "initOneGift"    },
        { g_i_fail,   "_ZN12BLMainUIMenu12initFailGiftEv",   "initFailGift"   },
        { g_i_signed, "_ZN12BLMainUIMenu10initSignedEv",     "initSigned(7d)" },
        { g_i_live,   "_ZN12BLMainUIMenu12initLivenessEv",   "initLiveness"   },
    };
    for (unsigned k = 0; k < sizeof(T) / sizeof(T[0]); ++k)
    {
        void *inst = T[k].slot ? T[k].slot : g_i_tip;   /* any captured BLMainUIMenu works */
        if (inst == 0) { PATCH_LOG("show: %s -- no instance captured, skip", T[k].name); continue; }
        fn0 f = patch_sym_env<fn0>(T[k].sym);
        if (f == 0) { PATCH_LOG("show: %s -- symbol missing", T[k].name); continue; }
        PATCH_LOG("show: calling %s on %p", T[k].name, inst);
        f(inst);
    }
    PATCH_LOG("show: done");
    return 0;
}

__attribute__((constructor)) static void hw_show_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_show_thread, 0) == 0) { pthread_detach(t); }
}

/* ---- item table export (R292) -----------------------------------------------
   There is no "getItemIDs" in the original, so we enumerate by probing:
   DataCacheManager::shareManager() + getItemDataByID(1..N). Opt-in: the file
   /sdcard/dsh_export.txt must exist, so nothing runs by default.
------------------------------------------------------------------------------ */
static void *hw_export_thread(void *)
{
    for (int i = 0; i < 300; i++) { usleep(100 * 1000); }        /* ~30 s */
    FILE *en = hw_cfg("dsh_export.txt", "r");
    if (en == 0) { PATCH_LOG("export: disabled (no /sdcard/dsh_export.txt)"); return 0; }
    fclose(en);

    typedef void *(*fn_share)(void);
    typedef void *(*fn_byid)(void *, int);
    fn_share fShare = patch_sym_env<fn_share>("_ZN16DataCacheManager12shareManagerEv");
    fn_byid  fByid  = patch_sym_env<fn_byid>("_ZN16DataCacheManager15getItemDataByIDEi");
    PATCH_LOG("export: share=%p byid=%p", (void *)fShare, (void *)fByid);
    if (fShare == 0 || fByid == 0) { return 0; }

    void *cache = fShare();
    char outPath[256]; hw_cfg_path(outPath, sizeof(outPath), "dsh_items_all.txt");
    FILE *out = fopen(outPath, "w");
    if (out == 0) { PATCH_LOG("export: cannot open output"); return 0; }
    int found = 0;
    for (int id = 1; id <= 3000; ++id)
    {
        if (fByid(cache, id) != 0) { fprintf(out, "%d\n", id); ++found; }
        if ((id % 100) == 0) { usleep(5 * 1000); }               /* throttle */
    }
    fclose(out);
    PATCH_LOG("export: done, %d item ids written", found);
    return 0;
}

__attribute__((constructor)) static void hw_export_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_export_thread, 0) == 0) { pthread_detach(t); }
}

/* ---- item attribute editing (R292): /sdcard/dsh_item_attrs.txt  "<id> <num>" ----
   ItemData::setItemNum(int) was located in R291: it just stores at +0x54. We call
   the game's own setter instead of writing memory ourselves, so the game stays the
   single source of truth.
------------------------------------------------------------------------------ */
static void *hw_attrs_thread(void *)
{
    for (int i = 0; i < 250; i++) { usleep(100 * 1000); }        /* ~25 s */
    FILE *fp = hw_cfg("dsh_item_attrs.txt", "r");
    if (fp == 0) { PATCH_LOG("attrs: disabled (no /sdcard/dsh_item_attrs.txt)"); return 0; }

    typedef void *(*fn_share)(void);
    typedef void *(*fn_create)(void *, int);
    typedef void (*fn_setnum)(void *, int);
    fn_share  fShare  = patch_sym_env<fn_share>("_ZN11DataManager16shareDataManagerEv");
    fn_create fCreate = patch_sym_env<fn_create>("_ZN11DataManager14createItemDataEi");
    fn_setnum fSetNum = patch_sym_env<fn_setnum>("_ZN8ItemData10setItemNumEi");
    PATCH_LOG("attrs: share=%p create=%p setItemNum=%p", (void *)fShare, (void *)fCreate, (void *)fSetNum);
    if (fShare == 0 || fCreate == 0 || fSetNum == 0) { fclose(fp); return 0; }

    void *dm = fShare();
    typedef void *(*fn_share_dc2)(void);
    typedef void *(*fn_byid3)(void *, int);
    fn_share_dc2 fDcS = patch_sym_env<fn_share_dc2>("_ZN16DataCacheManager12shareManagerEv");
    fn_byid3     fDcById = patch_sym_env<fn_byid3>("_ZN16DataCacheManager15getItemDataByIDEi");
    void *dcm = fDcS ? fDcS() : 0;
    PATCH_LOG("attrs: dcm=%p byid=%p", dcm, (void *)fDcById);
    int id = 0, num = 0, done = 0;
    while (fscanf(fp, "%d %d", &id, &num) == 2)
    {
        if (id <= 0 || num < 0) { continue; }
        /* R346: createItemData() returns 0 when called blind; getItemDataByID() actually
           returns the live ItemData* from the item table (verified: 0xd467f900 for id 100). */
        (void)dm; (void)fCreate;
        void *item = (fDcById && dcm) ? fDcById(dcm, id) : 0;
        PATCH_LOG("attrs: getItemDataByID(%d)=%p setItemNum(%d)", id, item, num);
        if (item != 0) { fSetNum(item, num); ++done; }
    }
    fclose(fp);
    PATCH_LOG("attrs: done, %d items updated", done);
    return 0;
}

__attribute__((constructor)) static void hw_attrs_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_attrs_thread, 0) == 0) { pthread_detach(t); }
}

static void *hw_items_thread(void *)
{
    for (int i = 0; i < 200; i++) { usleep(100 * 1000); }      /* wait ~20 s */
    PATCH_LOG("items: thread firing, checking dsh_items.txt");
    FILE *chk = hw_cfg("dsh_items.txt", "r");
    if (chk == 0) { PATCH_LOG("items: no config -- nothing to do"); return 0; }
    fclose(chk);

    /* R364: item GRANTING is disabled.
       addItem() builds cocos2d/UI objects, so it must run on the GL thread. The only
       practical way in would be to hook something that runs there every frame --
       CCDirector::drawScene() -- and that turned out to be unusable:
         * crashing on its own (crash=55 with the hook installed and nothing else), and
         * corrupting the render state, which showed up as a broken/misaligned layout.
       Same story as BLGameScene::tick() (crash=26). Both are hot per-frame functions;
       rewriting their entry with a 4-byte branch is not survivable.
       So we refuse to arm the grant rather than risk the user's session.
       Attribute editing (/dsh_item_attrs.txt) does NOT go through here and still works. */
    PATCH_LOG("items: granting is unsupported (needs GL thread; drawScene hook is unsafe) -- skipped");
    return 0;
}

__attribute__((constructor)) static void hw_items_ctor(void)
{
    pthread_t t;
    if (pthread_create(&t, 0, hw_items_thread, 0) == 0) { pthread_detach(t); }
}

static int hw_grant_items_from_config(void)
{
    FILE *fp = hw_cfg("dsh_items.txt", "r");
    if (fp == 0) { PATCH_LOG("items: no config (/sdcard/dsh_items.txt) -- skipping"); return 0; }

    typedef void *(*fn_share)(void);
    typedef void *(*fn_create)(void *, int);
    typedef void (*fn_addItem)(void *);
    fn_share  fShare  = patch_sym_env<fn_share>("_ZN11DataManager16shareDataManagerEv");
    fn_create fCreate = patch_sym_env<fn_create>("_ZN11DataManager14createItemDataEi");
    fn_addItem fAdd   = patch_sym_env<fn_addItem>("_Z7addItemSt6vectorIiSaIiEE");
    PATCH_LOG("items: share=%p create=%p addItem=%p", (void *)fShare, (void *)fCreate, (void *)fAdd);
    if (fShare == 0 || fAdd == 0) { fclose(fp); return 0; }

    void *dm = fShare();
    int id = 0, cnt = 0, granted = 0;
    while (fscanf(fp, "%d %d", &id, &cnt) == 2)
    {
        if (cnt <= 0) { cnt = 1; }
        if (cnt > 99) { cnt = 99; }
        /* R341: real std::vector<int> (correct ctor/dtor) instead of hand-built {begin,end,cap} */
        std::vector<int> vec((size_t)cnt, id);
        PATCH_LOG("items: granting id=%d count=%d (vector=%p size=%u)", id, cnt, (void *)&vec, (unsigned)vec.size());
        /* R331: verify the item exists before granting; createItemData returns 0 for
           unknown ids and calling addItem() with a bogus id crashes the game. */
        typedef void *(*fn_share_dc)(void);
        typedef void *(*fn_byid2)(void *, int);
        fn_share_dc fDcShare = patch_sym_env<fn_share_dc>("_ZN16DataCacheManager12shareManagerEv");
        fn_byid2    fDcById  = patch_sym_env<fn_byid2>("_ZN16DataCacheManager15getItemDataByIDEi");

        void *dcm = fDcShare ? fDcShare() : 0;
        void *exist = (fDcById && dcm) ? fDcById(dcm, id) : 0;
        PATCH_LOG("items: getItemDataByID(%d) = %p", id, exist);
        if (exist == 0) {
            PATCH_LOG("items: id %d NOT in item table -- skipped (no crash)", id);
            /* no heap buffer any more (R341) */
            continue;
        }
        /* R333: createItemData() is an instance method that returns 0 when called blind,
           and calling addItem() afterwards crashed. The game itself only needs the
           global addItem(std::vector<int>) which handles creation internally. */
        PATCH_LOG("items: calling addItem(vector of %d x id=%d)", cnt, id);
        fAdd((void *)&vec);                 /* addItem(std::vector<int>) by address */
        ++granted;
    }
    fclose(fp);
    PATCH_LOG("items: done, %d entries processed", granted);
    return granted;
}