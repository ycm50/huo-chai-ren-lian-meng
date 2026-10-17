// _missing_impls.cpp
// 集中补齐「头文件已声明、但反编译体未产出」的 26 个 undefined 符号。
// 来源标注：真实反编译体还原 / [undecl-fix] 反编译体缺失, 最小实现
#include "cocos2d.h"
#include "MainFindPasswordData.h"
#include "DateJsonManager.h"
#include "sir_builtin.h"
#include <string>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdarg>
#include "bl_types.h"
// ---- dlopen-fix: 反编译残留的「代码标签当数据取址」与 UDF 桩 ----
// 这些符号在 .so 里若保持 undefined，Android 动态链接器会在 dlopen 阶段直接失败：
//   java.lang.UnsatisfiedLinkError: dlopen failed: cannot locate symbol "..." referenced by "libcocos2dcpp.so"
// （实测上一次 APK 就是这么挂的）。注意 --unresolved-symbols=ignore-in-object-files
//  只对「函数」宽容，数据符号仍然致命，因此必须给出定义。
extern "C" unsigned char LAB_00428a64 = 0;
extern "C" unsigned char LAB_00428a6c = 0;
extern "C" unsigned char LAB_0044a8ae = 0;
extern "C" unsigned char LAB_0044bce4 = 0;
extern "C" unsigned char LAB_0044bcf0 = 0;
extern "C" unsigned long uRam0000000c = 0;
// UDF 桩：调用点形如 (code *)software_udf(0xff, 0x53d7dc)，返回当作函数指针使用。
// 返回 0 会让调用方拿到空指针；此处返回一个可安全调用的空函数，避免运行期跳转到 0。
extern "C" long long software_udf(int, int);
static void bmfix_udf_noop() {}
extern "C" long long software_udf(int a, int b)
{
  (void)a; (void)b;
  return (long long)(intptr_t)&bmfix_udf_noop;
}
#include "BLForwards.h"
#include "StringJsonManager.h"
#include "GemDrawData.h"
#include "ZhancheData.h"
#include "DebugLocalSys.h"
#include "StringJsonManager.h"
#include "MissionEndLessData.h"
#include "TreasureMissionData.h"
#include "DragonCanyonData.h"
#include "BLDataForwards.h"
#include "BLTreeRoleItemPresenter.h"
#include "BLTreasureEffectPresenter.h"
#include "BLMissionMirrorBtnPresenter.h"
#include "BLRenascenceTargetPresenter.h"
#include "BLMissionPlayerInfoPresenter.h"
#include "BLRenascenceSuccessPresenter.h"
#include "BLRenascencePropertyPresenter.h"
#include "BLTalentDownInfoItemPresenter.h"
#include "BLImmortalsRefineInfoPresenter.h"
#include "BLImmortalsRefineLockPresenter.h"
#include "BLSuitComposeInfoCostPresenter.h"
#include "BLSuitComposeInfoItemPresenter.h"
#include "BLMissionMirrorRoleItemPresenter.h"
#include "BLMissionRewardGiftItemPresenter.h"
#include "BLYuanZhengFailedResultPresenter.h"
#include "BLImmortalsRefineAttrItemPresenter.h"
#include "BLImmortalsRefineBaseInfoPresenter.h"
#include "BLMissionPlayerStatusItemPresenter.h"
#include "BLEventListener.h"
#include "BLEventDispatcher.h"
#include "BLMapScene.h"
#include "BLFunctionIntroductionPresenter.h"
#include "SharkAction.h"
#include "GemDrawItemList.h"
#include "ItemData.h"

// ============================================================
//  A. 18 个 Presenter::initWithView —— 真实反编译体还原
//     原体除存 View 指针外，多数还会通过 View 子节点的 vtable
//     (+0x254 / +0x214 / +0x21c / +0x90) 注册回调，回调常量来自
//     .rodata 的运行时指针算术 (&UNK_x + _UNK_y)，指向原 .so 的代码地址，
//     在本工程重建后地址无意义，故只还原「存指针」这一确定语义。
// ============================================================

// 恢复自 game_decompiled.cpp（_ZNBLTreeRoleItemPresenter12initWithViewE...）: *(this+0x14) = view;
void BLTreeRoleItemPresenter::initWithView(BLTreeRoleItemView *p1)
{
  *(BLTreeRoleItemView **)((int)this + 0x14) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLTreasureEffectPresenter12initWithViewE...）: *(this+0x18) = view;
void BLTreasureEffectPresenter::initWithView(BLTreasureEffectView *p1)
{
  *(BLTreasureEffectView **)((int)this + 0x18) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLMissionMirrorBtnPresenter12initWithViewE...）: *(this+0x18) = view;
void BLMissionMirrorBtnPresenter::initWithView(BLMissionMirrorBtnView *p1)
{
  *(BLMissionMirrorBtnView **)((int)this + 0x18) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLRenascenceTargetPresenter12initWithViewE...）: *(this+0x20) = view;
void BLRenascenceTargetPresenter::initWithView(BLRenascenceTargetView *p1)
{
  *(BLRenascenceTargetView **)((int)this + 0x20) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLMissionPlayerInfoPresenter12initWithViewE...）: *(this+0x14) = view;
void BLMissionPlayerInfoPresenter::initWithView(BLMissionPlayerInfoView *p1)
{
  *(BLMissionPlayerInfoView **)((int)this + 0x14) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLRenascenceSuccessPresenter12initWithViewE...）: *(this+0x18) = view;
void BLRenascenceSuccessPresenter::initWithView(BLRenascenceSuccessView *p1)
{
  *(BLRenascenceSuccessView **)((int)this + 0x18) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLRenascencePropertyPresenter12initWithViewE...）: *(this+0x14) = view;
void BLRenascencePropertyPresenter::initWithView(BLRenascencePropertyView *p1)
{
  *(BLRenascencePropertyView **)((int)this + 0x14) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLTalentDownInfoItemPresenter12initWithViewE...）: *(this+0x18) = view;
void BLTalentDownInfoItemPresenter::initWithView(BLTalentDownInfoItemView *p1)
{
  *(BLTalentDownInfoItemView **)((int)this + 0x18) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLImmortalsRefineInfoPresenter12initWithViewE...）: *(this+0x18) = view;
void BLImmortalsRefineInfoPresenter::initWithView(BLImmortalsRefineInfoView *p1)
{
  *(BLImmortalsRefineInfoView **)((int)this + 0x18) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLImmortalsRefineLockPresenter12initWithViewE...）: *(this+0x14) = view;
void BLImmortalsRefineLockPresenter::initWithView(BLImmortalsRefineLockView *p1)
{
  *(BLImmortalsRefineLockView **)((int)this + 0x14) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLSuitComposeInfoCostPresenter12initWithViewE...）: *(this+0x14) = view;
void BLSuitComposeInfoCostPresenter::initWithView(BLSuitComposeInfoCostView *p1)
{
  *(BLSuitComposeInfoCostView **)((int)this + 0x14) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLSuitComposeInfoItemPresenter12initWithViewE...）: *(this+0x14) = view;
void BLSuitComposeInfoItemPresenter::initWithView(BLSuitComposeInfoItemView *p1)
{
  *(BLSuitComposeInfoItemView **)((int)this + 0x14) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLMissionMirrorRoleItemPresenter12initWithViewE...）: *(this+0x18) = view;
void BLMissionMirrorRoleItemPresenter::initWithView(BLMissionMirrorRoleItemView *p1)
{
  *(BLMissionMirrorRoleItemView **)((int)this + 0x18) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLMissionRewardGiftItemPresenter12initWithViewE...）: *(this+0x14) = view;
void BLMissionRewardGiftItemPresenter::initWithView(BLMissionRewardGiftItemView *p1)
{
  *(BLMissionRewardGiftItemView **)((int)this + 0x14) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLYuanZhengFailedResultPresenter12initWithViewE...）: *(this+0x14) = view;
void BLYuanZhengFailedResultPresenter::initWithView(BLYuanZhengFailedResultView *p1)
{
  *(BLYuanZhengFailedResultView **)((int)this + 0x14) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLImmortalsRefineAttrItemPresenter12initWithViewE...）: *(this+0x14) = view;
void BLImmortalsRefineAttrItemPresenter::initWithView(BLImmortalsRefineAttrItemView *p1)
{
  *(BLImmortalsRefineAttrItemView **)((int)this + 0x14) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLImmortalsRefineBaseInfoPresenter12initWithViewE...）: *(this+0x14) = view;
void BLImmortalsRefineBaseInfoPresenter::initWithView(BLImmortalsRefineBaseInfoView *p1)
{
  *(BLImmortalsRefineBaseInfoView **)((int)this + 0x14) = p1;
}

// 恢复自 game_decompiled.cpp（_ZNBLMissionPlayerStatusItemPresenter12initWithViewE...）: *(this+0x14) = view;
void BLMissionPlayerStatusItemPresenter::initWithView(BLMissionPlayerStatusItemView *p1)
{
  *(BLMissionPlayerStatusItemView **)((int)this + 0x14) = p1;
}

// ============================================================
//  B. BLMapScene::addItemData —— 真实反编译体还原
//     原体 (42bed4): (**(code**)(*(int*)(this+0x138)+0xcc))(*(int*)(this+0x138), p1, 0x67)
// ============================================================
void BLMapScene::addItemData(cocos2d::CCNode *p1)
{
  int *node = *(int **)((int)this + 0x138);
  if (node != 0) {
    (**(code **)(*node + 0xcc))(node, p1, 0x67);
  }
}

// ============================================================
//  C. BLEventListener::removeDispatcher —— 真实反编译体还原
//     原体 (4ae54e): this+4 是 std::map<std::string, std::vector<BLEventDispatcher*> >*
//     语义: 在 map 中查 key, 从 value 的 vector 里删掉 p2; vector 空了就 erase 该 key。
// ============================================================
void BLEventListener::removeDispatcher(std::string p1, BLEventDispatcher *p2)
{
  typedef std::map<std::string, std::vector<BLEventDispatcher *> > DispMap;
  DispMap *m = *(DispMap **)((int)this + 4);
  if (m == 0) return;
  DispMap::iterator it = m->find(p1);
  if (it == m->end()) return;
  std::vector<BLEventDispatcher *> &v = it->second;
  for (std::vector<BLEventDispatcher *>::iterator i = v.begin(); i != v.end(); ++i) {
    if (*i == p2) { v.erase(i); break; }
  }
  if (v.empty()) m->erase(it);
}

// ============================================================
//  D. SharkAction::initWith(int, cocos2d::CCPoint, float)
//     [undecl-fix] 反编译体缺失, 最小实现（原体地址 0x6bf918 落在未转储区间）
// ============================================================
void SharkAction::initWith(int p1, cocos2d::CCPoint p2, float p3)
{
  (void)p1; (void)p2; (void)p3;
}

// ============================================================
//  E. GemDrawItemList 拷贝构造
//     [undecl-fix] 反编译体缺失, 最小实现（原体地址 0x46ab20 落在未转储区间）
// ============================================================
GemDrawItemList::GemDrawItemList(GemDrawItemList const &p1)
{
  (void)p1;
}

// ============================================================
//  F. ItemData::initWith(int)
//     [undecl-fix] 反编译体缺失, 最小实现（原体地址 0x478968 落在未转储区间）
// ============================================================
void ItemData::initWith(int p1)
{
  (void)p1;
}

// ============================================================
//  G. 反编译残留的「名字即符号」
// ============================================================
// G1. ConvertToString<int>(sretPtr, int, int) —— 调用点形如
//     ConvertToString<int>(&x, y, 0)（声明为 template<class T> void ConvertToString(...)）。
//     [undecl-fix] 反编译体缺失, 最小实现：按原 .so 的旧 gnustl ABI
//     往 sret 槽写一个 4 字节 char*（各调用点目标缓冲均 >=4 字节，不会越界）。
extern "C" void bmfix_ConvertToString_int(...) asm("_Z15ConvertToStringIiEvz");
extern "C" void bmfix_ConvertToString_int(...)
{
  __builtin_va_list ap;
  __builtin_va_start(ap, 0);
  void *out = __builtin_va_arg(ap, void *);
  int value = __builtin_va_arg(ap, int);
  int flag = __builtin_va_arg(ap, int);
  __builtin_va_end(ap);
  (void)flag;
  static char bufs[4][24];
  static int idx = 0;
  char *b = bufs[idx = (idx + 1) & 3];
  snprintf(b, sizeof(bufs[0]), "%d", value);
  if (out != 0) *(char **)out = b;
}

// G2. libstdc++(旧 ABI) 残留形态的 std::operator==<char>；
//     BLRole.cpp 以 extern "C" int f(...) 形式调用，这里给出可编译等价体。
extern "C" bool bmfix_std_str_eq_char(void *a, void *b)
    asm("_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_");
extern "C" bool bmfix_std_str_eq_char(void *a, void *b)
{
  if (a == b) return true;
  if (a == 0 || b == 0) return false;
  return (*(const std::string *)a == *(const std::string *)b);
}

// ============================================================
//  H. BLFunctionIntroductionPresenter::updateTit(std::string*)
//     真实反编译体还原（game_decompiled.cpp:329527, 原为按值 Ss 版本）
//     语义: 取 this+0x1c 的 View -> +0x10c 的子节点 -> vtable+0x234(setString) 传字符串
// ============================================================
void BLFunctionIntroductionPresenter::updateTit(std::string *p1)
{
  if (p1 == 0) return;
  int *view = *(int **)((int)this + 0x1c);
  if (view == 0) return;
  int *node = *(int **)((int)view + 0x10c);
  if (node == 0) return;
  (**(code **)(*node + 0x234))(node, p1->c_str());
}

// ============================================================
//  I. sir:: 单例框架（sir-fix）
//     背景: 各游戏类 .cpp 的本地兼容 shim 里只「声明」了
//         namespace sir { class singleton_container; template<class T,int N> struct singleton { static int instance(); }; }
//     但全工程没有任何 .cpp 定义它们, 于是 .so 里残留 10 个 undefined:
//         _ZN3sir19singleton_container8instanceEv / 13add_singleton... / _ZN3sir10autolockerD1Ev
//         _ZN3sir9singletonI{11GemDrawData,11ZhancheData,13DebugLocalSys,17StringJsonManager,
//                            18MissionEndLessData,19TreasureMissionData,16DragonCanyonData}Li0EE8instanceEv
//     这些是数据层单例的入口, dlopen 阶段若为 undefined 会直接
//         UnsatisfiedLinkError: dlopen failed: cannot locate symbol
//     这里给出可用的真实实现（惰性单例 + 容器登记）。
// ============================================================
namespace sir {


typedef singleton_base *(*sir_create_fn)();

// 登记表：key = 类型标识（用 T 的静态地址做键），value = 已创建实例
struct sir_entry {
  const void *key;
  singleton_base *obj;
};

static sir_entry g_sir_table[256];
static int g_sir_count = 0;



}  // namespace sir

// ------------------------------------------------------------
//  J. sir::singleton<T,0>::instance() 的真实定义
//     各 shim 只写了 `template <class T,int N=0> struct singleton { static int instance(); };`
//     没有定义体, 于是以下 7 个实例化符号 undefined:
//       _ZN3sir9singletonI11GemDrawDataLi0EE8instanceEv 等 7 个
//     原框架语义: instance() 惰性创建 T 的单例并返回其地址。
//     这里用「按类型静态槽 + 惰性 new」给出可用实现。
// ------------------------------------------------------------
namespace sir {
namespace detail {
template <class T> T *sir_lazy_instance()
{
  static T *s = 0;
  if (s == 0) {
    s = new T();                       // 首个调用者负责构造
    singleton_container::instance()->add_singleton((singleton_base *)s, 0);
  }
  return s;
}
}  // namespace detail

template <class T, int N>
T *singleton<T, N>::instance() { return detail::sir_lazy_instance<T>(); }

// 显式实例化，确保这 7 个 mangled 符号真的被产出
template struct singleton<GemDrawData, 0>;
template struct singleton<ZhancheData, 0>;
template struct singleton<DebugLocalSys, 0>;
template struct singleton<StringJsonManager, 0>;
template struct singleton<MissionEndLessData, 0>;
template struct singleton<TreasureMissionData, 0>;
template struct singleton<DragonCanyonData, 0>;
template struct singleton<DateJsonManager, 0>;
}  // namespace sir

// ------------------------------------------------------------
//  K. sir out-of-line 定义（关键）
//     上面对 singleton_container::instance / add_singleton / ~autolocker 的
//     类内定义是隐式 inline 的，编译器不会产出外部符号，于是链接后仍是 undefined。
//     这里给出类外定义强制产出符号。
//     singleton_container 的布局也在类外补上（private 表由文件级静态量承载）。
// ------------------------------------------------------------
namespace sir {

// 类外定义：强制产出 _ZN3sir19singleton_container8instanceEv
singleton_container *singleton_container::instance()
{
  static singleton_container s_inst;
  return &s_inst;
}
// 类外定义：强制产出 _ZN3sir19singleton_container13add_singletonEPNS_14singleton_baseEi
void singleton_container::add_singleton(singleton_base *p, int slot)
{
  (void)slot;
  if (p == 0) return;
  if (g_sir_count < (int)(sizeof(g_sir_table) / sizeof(g_sir_table[0]))) {
    g_sir_table[g_sir_count].key = (const void *)p;
    g_sir_table[g_sir_count].obj = p;
    g_sir_count++;
  }
}
// 类外定义：强制产出 _ZN3sir10autolockerD1Ev / D2Ev
autolocker::~autolocker() {}
// find 的类外定义
singleton_base *singleton_container::find(const void *key)
{
  for (int i = 0; i < g_sir_count; i++) {
    if (g_sir_table[i].key == key) return g_sir_table[i].obj;
  }
  return 0;
}

}  // namespace sir

// ------------------------------------------------------------
//  L. StringJsonManager 构造/析构
//     头文件声明了 StringJsonManager() / ~StringJsonManager()，但 .cpp 里没有定义；
//     上面的 singleton<StringJsonManager,0>::instance() 会 new T()，因此必须补上。
// ------------------------------------------------------------
// R14: StringJsonManager::StringJsonManager() 的定义已由 StringJsonManager.cpp 提供, 此处删除以避免重复符号

// ============================================================
//  M. sqlite3_get_table / sqlite3_free_table —— 已由【真实 SQLite 实现】替代
//     恢复(2026-10-15): cocos2d/external/sqlite3/sqlite3.c 已补入
//       SQLite 3.8.4.3 amalgamation，其 SQLITE_SOURCE_ID
//       "2014-04-03 16:53:12 a611fa96c4a848614efe899130359c9f6fb889c3"
//       与原版 libcocos2dcpp.so 内嵌的 sqlite3_sourceid 字符串逐字节相同；
//       CMakeLists.txt 中已显式把该文件加入 C_SRC。
//     因此原先这里的「安全空实现」(返回 SQLITE_ERROR) 已删除，
//     两个符号现在均由 sqlite3.c 提供真实实现。
//     遗留: 原版 .so 另含一层 SQLite 加密 codec（sqlite3Codec /
//       CodecAES / CodecRC4 / mySqlite3PagerSetCodec …），其源码未恢复，
//       故本工程【不定义】SQLITE_HAS_CODEC —— 一旦定义，sqlite3.c 的
//       sqlite3Pragma() 会引用未定义的 sqlite3_key_v2 / sqlite3_rekey_v2 /
//       sqlite3_activate_see，又会造成 dlopen 找不到符号。
// ============================================================


// ------------------------------------------------------------
//  SQLite codec 入口的占位实现（原版 codec 源码未恢复）
//    当前工程里 Classes/UserData.cpp 会调用 sqlite3_open / sqlite3_close /
//    sqlite3_get_table / sqlite3_free_table（这些已由 SQLite amalgamation 提供）
//    以及 sqlite3_rekey —— 后者属于原版 .so 里那层加密 codec（sqlite3Codec /
//    CodecAES / CodecRC4 / mySqlite3PagerSetCodec …），源码未随之恢复。
//    若这里不定义，.so 又会带 undefined 符号 → dlopen
//    cannot locate symbol "sqlite3_rekey"，正是本次要修的 bug。
//
//    语义选择: 返回 SQLITE_OK(0)，即【不加密】。依据:
//      UserData::initDB() 的形态是
//        while (true) { if (sqlite3_rekey(...) == 0) break; CCMessageBox(...); }
//      这是**无上限重试**（另一个调用点 UserData.cpp:3290 才有 4 次上限）。
//      返回非 0 会死循环弹框；返回 0 则流程继续，本地库退化为明文库。
//      数据库内容本身由服务端下发/本地生成，不加密不影响功能。
//
//    要关闭本占位（例如将来真的移植回 codec）: 编译时加
//      -DDLOL_NO_SQLITE_CODEC_SHIM
// ------------------------------------------------------------
#ifndef DLOL_NO_SQLITE_CODEC_SHIM
extern "C" int  sqlite3_key(void *db, const void *pKey, int nKey);
extern "C" int  sqlite3_key_v2(void *db, const char *zDb, const void *pKey, int nKey);
extern "C" int  sqlite3_rekey(void *db, const void *pKey, int nKey);
extern "C" int  sqlite3_rekey_v2(void *db, const char *zDb, const void *pKey, int nKey);
extern "C" void sqlite3_activate_see(const char *zPassPhrase);

extern "C" int sqlite3_key(void *db, const void *pKey, int nKey)
{ (void)db; (void)pKey; (void)nKey; return 0; }   // SQLITE_OK, 不加密

extern "C" int sqlite3_key_v2(void *db, const char *zDb, const void *pKey, int nKey)
{ (void)db; (void)zDb; (void)pKey; (void)nKey; return 0; }

extern "C" int sqlite3_rekey(void *db, const void *pKey, int nKey)
{ (void)db; (void)pKey; (void)nKey; return 0; }   // SQLITE_OK, 不加密

extern "C" int sqlite3_rekey_v2(void *db, const char *zDb, const void *pKey, int nKey)
{ (void)db; (void)zDb; (void)pKey; (void)nKey; return 0; }

extern "C" void sqlite3_activate_see(const char *zPassPhrase)
{ (void)zPassPhrase; }
#endif  // DLOL_NO_SQLITE_CODEC_SHIM
// ============================================================
//  H1: 消除 dlopen 阻塞 —— 补齐 unresolvable undefined
//  check_so_loadable.ps1 实测: BIND_NOW 下缺这些符号会直接
//  UnsatisfiedLinkError: cannot locate symbol ... referenced by libcocos2dcpp.so
// ============================================================
#include "GMSpecData.h"
#include "LogContent.h"
#include "OnSaleData.h"
#include "RedPackData.h"
#include "CampaignData.h"
#include "MainGLSBData.h"
#include "MineDealData.h"
#include "Pack4399Data.h"
#include "PracticeData.h"
#include "PracticeTime.h"
#include "DailyGiftData.h"
#include "LuckyDrawData.h"
#include "TalentDrawData.h"
#include "MissionSweepData.h"
#include "ChestFestivalData.h"
#include "MonthlyContractData.h"
#include "MissionCreamSelectData.h"
#include "GMData.h"
#include "MineData.h"
#include "JiTanData.h"
#include "StringXmlManager.h"   // R71: delayInit 调 StringXmlManager::ReadXmlFile（原版 0x41acbc）

// ---- H1-1: sir::singleton<T,0>::instance() 缺 20 个显式实例化 ----
namespace sir {
template struct singleton<GMSpecData, 0>;
template struct singleton<LogContent, 0>;
template struct singleton<OnSaleData, 0>;
template struct singleton<RedPackData, 0>;
template struct singleton<CampaignData, 0>;
template struct singleton<MainGLSBData, 0>;
template struct singleton<MineDealData, 0>;
template struct singleton<Pack4399Data, 0>;
template struct singleton<PracticeData, 0>;
template struct singleton<PracticeTime, 0>;
template struct singleton<StringXmlManager, 0>;   // R71: 缺它 -> dlopen 找不到 _ZN3sir9singletonI16StringXmlManagerLi0EE8instanceEv
template struct singleton<DailyGiftData, 0>;
template struct singleton<LuckyDrawData, 0>;
template struct singleton<TalentDrawData, 0>;
template struct singleton<MissionSweepData, 0>;
template struct singleton<ChestFestivalData, 0>;
template struct singleton<MonthlyContractData, 0>;
template struct singleton<MissionCreamSelectData, 0>;
template struct singleton<GMData, 0>;
template struct singleton<MineData, 0>;
template struct singleton<JiTanData, 0>;
}  // namespace sir

// ---- H1-2: PlatformHelp::charge(std::string, int) ----
#include "PlatformHelp.h"
void PlatformHelp::charge(std::string p1, int p2) { (void)p1; (void)p2; }

// ---- H1-3: 6 个 onEnter / onExit / getGotStarNum ----
#include "BLRenascenceView.h"
#include "BLRenascenceTargetView.h"
#include "BLTimeLimitedCopyPresenter.h"
#include "PetInfoPresenter.h"
#include "BLMissionMainPresenter.h"
void BLRenascenceView::onExit() {}
void BLRenascenceTargetView::onExit() {}
void BLTimeLimitedCopyPresenter::onEnter() {}
void PetInfoPresenter::onEnter() {}
void BLMissionMainPresenter::onEnter() {}
int  BLMissionMainPresenter::getGotStarNum(int p1) { (void)p1; return 0; }

// ---- H1-4: ItemData::initWith(ItemData*) ----
#include "ItemData.h"
undefined8 ItemData::initWith(ItemData *p1) { (void)p1; return 0; }

// ---- H1-5: ghidra_* 残留桩 ----
extern "C" long long ghidra_CARRY4(...) { return 0; }
extern "C" long long ghidra_CONCAT17(...) { return 0; }

// ---- H1-6b: ConvertToString 6 个变体显式实例化（不依赖调用方是否包含 BLForwards.h）----
template std::string ConvertToString<int, unsigned char*, int, int>(unsigned char*, int, int);
template std::string ConvertToString<int, unsigned char*, unsigned int, int>(unsigned char*, unsigned int, int);
template std::string ConvertToString<int, int*, int, int>(int*, int, int);
template std::string ConvertToString<int, int*, unsigned int, int>(int*, unsigned int, int);
template std::string ConvertToString<int, unsigned int*, int, int>(unsigned int*, int, int);
template std::string ConvertToString<int, unsigned int*, unsigned int, int>(unsigned int*, unsigned int, int);

// ==== LINKFIX_V1 (自动生成, 消除 dlopen 阻塞的未解析符号) ====
// 生成时间: 2026-10-16T05:04:48.351Z
// 来源: check_so_loadable.ps1 的未解析符号清单

extern "C" unsigned long g_00424d14 = 0;
extern "C" unsigned long g_00439674 = 0;
extern "C" unsigned long g_0043befc = 0;
extern "C" unsigned long g_00450788 = 0;
extern "C" unsigned long g_0045c928 = 0;
extern "C" unsigned long g_0045c92c = 0;
extern "C" unsigned long g_0046e8f8 = 0;
extern "C" unsigned long g_0046e8fc = 0;
extern "C" unsigned long g_0046e900 = 0;
extern "C" unsigned long g_0047eda8 = 0;
extern "C" unsigned long g_00488ed4 = 0;
extern "C" unsigned long g_00488ed8 = 0;
extern "C" unsigned long g_0048f00c = 0;
extern "C" unsigned long g_00494328 = 0;
extern "C" unsigned long g_0049432c = 0;
extern "C" unsigned long g_00494330 = 0;
extern "C" unsigned long g_0049e394 = 0;
extern "C" unsigned long g_004b12b8 = 0;
extern "C" unsigned long g_004ce55a = 0;
extern "C" unsigned long g_004ce55c = 0;
extern "C" unsigned long g_004ce598 = 0;
extern "C" unsigned long g_004ce59c = 0;
extern "C" unsigned long g_004ce5a0 = 0;
extern "C" unsigned long g_004e11b6 = 0;
extern "C" unsigned long g_004e11b8 = 0;
extern "C" unsigned long g_004e11d0 = 0;
extern "C" unsigned long g_004e11d4 = 0;
extern "C" unsigned long g_004f0706 = 0;
extern "C" unsigned long g_004f0710 = 0;
extern "C" unsigned long g_0056a5fe = 0;
extern "C" unsigned long g_0056a608 = 0;
extern "C" unsigned long g_0056e6f6 = 0;
extern "C" unsigned long g_0056e700 = 0;
extern "C" unsigned long g_0057d826 = 0;
extern "C" unsigned long g_0057d830 = 0;
extern "C" unsigned long g_0057e2b6 = 0;
extern "C" unsigned long g_0057e2c0 = 0;
extern "C" unsigned long g_0057e91e = 0;
extern "C" unsigned long g_0057e928 = 0;
extern "C" unsigned long g_0057eaf6 = 0;
extern "C" unsigned long g_0057eb00 = 0;
extern "C" unsigned long g_005b7fcc = 0;
extern "C" unsigned long g_005b7fec = 0;
extern "C" unsigned long g_005b8018 = 0;
extern "C" unsigned long g_005b801c = 0;
extern "C" unsigned long g_005dd9c8 = 0;
extern "C" unsigned long g_005dda34 = 0;
extern "C" unsigned long g_005eae32 = 0;
extern "C" unsigned long g_005eae52 = 0;
extern "C" unsigned long g_005eae64 = 0;
extern "C" unsigned long g_005eae68 = 0;
extern "C" unsigned long g_0068bd56 = 0;
extern "C" unsigned long g_0068bd58 = 0;
extern "C" unsigned long g_0068bd8c = 0;
extern "C" unsigned long g_0068bd90 = 0;
extern "C" unsigned long g_006925be = 0;
extern "C" unsigned long g_006925c0 = 0;
extern "C" unsigned long g_00692614 = 0;
extern "C" unsigned long g_00692618 = 0;
extern "C" unsigned long g_006b5f04 = 0;
extern "C" unsigned long g_006b5f3e = 0;
extern "C" unsigned long g_006b5f4c = 0;
extern "C" unsigned long g_006b5f70 = 0;
extern "C" unsigned long g_006b5f74 = 0;
extern "C" unsigned long g_006b5f78 = 0;
extern "C" unsigned long g_006b5f7c = 0;
extern "C" unsigned long g_006b5f80 = 0;
extern "C" unsigned long g_006b5f84 = 0;
extern "C" unsigned long g_0075227a = 0;
extern "C" unsigned long g_00752280 = 0;
extern "C" unsigned long LAB_00434746 = 0;
extern "C" unsigned long LAB_0045cd18 = 0;
extern "C" unsigned long LAB_006c8fb0 = 0;
extern "C" unsigned long LAB_006c90f6 = 0;

extern "C" long long mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_(...) { return 0; }

#include "SignedData.h"
#include "FilesSystem.h"
#include "GateStatusData.h"
#include "PairingDownPng.h"
#include "MainPauseCheckData.h"
#include "TimeLimitedHeroData.h"
#include "HttpUtil.h"
namespace sir {
  template struct singleton<SignedData,0>;
  template struct singleton<FilesSystem,0>;
  template struct singleton<GateStatusData,0>;
  template struct singleton<PairingDownPng,0>;
  template struct singleton<MainPauseCheckData,0>;
  template struct singleton<TimeLimitedHeroData,0>;
  template struct singleton<HttpUtil,0>;
}

// ==== LINKFIX_V1 END ====


// ==== LINKFIX_CXX_V2 (自动生成; 只加 .cpp 里确实没有的定义) ====
// 判据: 每个函数的 .h 已声明、.cpp 无对应定义 -> 在此补。
#include "DownPngInfo.h"
#include "BackPackData.h"
#include "BLDataAnimate.h"
#include "SuitEquipListItemData.h"
DownPngInfo::DownPngInfo(DownPngInfo const& o) { (void)o; }
void BackPackData::addItemData(ItemData* a, bool b, int c) { (void)a;(void)b;(void)c; }
void BackPackData::debrisCompose(DebrisComposeData* a, CommonUseData* b) { (void)a;(void)b; }
void BLDataAnimate::initWith(int a, cocos2d::CCPoint p) { (void)a;(void)p; }
SuitEquipListItemData::SuitEquipListItemData(SuitEquipListItemData const& o) { (void)o; }
// ==== LINKFIX_CXX_V2 END ====

// ==== LINKFIX_CXX_V3 (自动生成) ====
#include "MineitemData.h"
#include "BLItemDataInfoPresenter.h"
int MineitemData::operator=(MineitemData const& o) { (void)o; return 0; }
void BLItemDataInfoPresenter::initEquipData(CommonUseData* p) { (void)p; }
// ==== LINKFIX_CXX_V3 END ====

// ==== LINKFIX_CXX_V4 (自动生成) ====
#include "BLMissionMainPresenter.h"
void BLMissionMainPresenter::createPageLayer(cocos2d::CCLayer* a, BLMissionChapterItemData* b) { (void)a;(void)b; }
// ==== LINKFIX_CXX_V4 END ====

// ==== UMENG_STUB_V1 (自动生成; 签名由 mangled 名反解) ====
#include "umeng_builtin.h"
void umeng::MobClickCpp::buy(char const*, int, double) {}
void umeng::MobClickCpp::event(char const*, char const*) {}
void umeng::MobClickCpp::event(char const*, std::map<std::string, std::string>*, int) {}
void umeng::MobClickCpp::event(char const*, std::map<std::string, std::string>*) {}
void umeng::MobClickCpp::failLevel(char const*) {}
void umeng::MobClickCpp::startLevel(char const*) {}
void umeng::MobClickCpp::finishLevel(char const*) {}
void umeng::MobClickCpp::doNotCallItFromYourCode(char const*, char const*) {}
void umeng::MobClickCpp::bonus(double, int) {}
void umeng::MobClickCpp::bonus(char const*, int, double, int) {}
void umeng::MobClickCpp::setLogEnabled(bool) {}
void umeng::MobClickCpp::setCheckDevice(bool) {}
void umeng::MobClickCpp::setEncryptEnabled(bool) {}
void umeng::MobClickCpp::setSessionIdleLimit(int) {}
void umeng::MobClickCpp::setAppVersion(char const*) {}
void umeng::MobClickCpp::setUserLevel(int) {}
void umeng::MobClickCpp::setLatency(unsigned int) {}
void umeng::MobClickCpp::pay(double, int, char const*, int, double) {}
void umeng::MobClickCpp::pay(double, int, double) {}
void umeng::MobClickCpp::use(char const*, int, double) {}
void umeng::MobClickCpp::beginLogPageView(char const*) {}
void umeng::MobClickCpp::endLogPageView(char const*) {}
void umeng::MobClickCpp::profileSignIn(char const*, char const*) {}
void umeng::MobClickCpp::profileSignOff() {}
// ==== UMENG_STUB_V1 END ====

// ==== LINKFIX_R53 (自动生成; 只加 .cpp 里确实没有的重载) ====
#include "BackPackData.h"
#include "ImmortalsRoleData.h"
extern "C" unsigned long g_0049eba0 = 0;
undefined8 BackPackData::unEquip(CommonUseData* p) { (void)p; return 0; }
void ImmortalsRoleData::unEquip(CommonUseData* p) { (void)p; }
// ==== LINKFIX_R53 END ====

// ==== LINKFIX_R62 (自动生成) ====
#include "UIManager.h"
namespace sir { template struct singleton<MainFindPasswordData, 0>; }
void UIManager::showAlert(cocos2d::CCArray* p1, std::string p2, std::string p3) { (void)p1;(void)p2;(void)p3; }
// ==== LINKFIX_R62 END ====

// ==== LINKFIX_R64 (自动生成; 签名取自 HttpUtil.h L21) ====
#include "HttpUtil.h"
void HttpUtil::request(std::string, std::string, cocos2d::extension::CCHttpRequest::HttpRequestType, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*), ...) {}
// ==== LINKFIX_R64 END ====
