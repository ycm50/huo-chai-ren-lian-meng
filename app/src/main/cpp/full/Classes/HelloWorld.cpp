#include "HelloWorld.h"
#include "CCNode.h"
#include "CCAction.h"
#include "CCActionInstant.h"
#include "CCActionInterval.h"
#include "CCLabelTTF.h"
#include "CCScale9Sprite.h"
#include "CCGeometry.h"
#include "CCScheduler.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCTransition.h"
#include "CCDirector.h"
#include "CCUserDefault.h"
#include "CCScene.h"
#include "BLGameScene.h"
#include "CampaignData.h"
#include "CircusLocalZip.h"
#include "DateJsonManager.h"
#include "DebugLocalSys.h"
#include "PlatformHelp.h"
#include "PracticeData.h"
#include "PracticeTime.h"
#include "StringJsonManager.h"
#include "StringXmlManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"
#include "sir_builtin.h"
#include "umeng_builtin.h"

using namespace cocos2d;

/* UBFIX_STACK (R69)：反编译体常写成 `*(CCSize *)(&uStack_XX) = <返回 CCSize 的调用>;`，
   而 uStack_XX 只声明了 4 字节 —— 整体赋值实际写 8 字节（UB），会溢出到相邻栈槽。
   真机实测：HelloWorld::init 里编译器把 uStack_38 放在 [sp+0x110]，CCSize::operator=
   写 8 字节（0x110..0x117）正好覆盖 [sp+0x114] 的金丝雀 -> 函数尾声 __stack_chk_fail
   （tombstone: HelloWorld::init()+878, SIGABRT）。改为真正 8 字节的类型化局部量。
   本 helper 把 float 按位取成 4 字节整数，用于等价替换原先"把栈槽当 undefined4 读"的地方。 */
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }

// ---------------------------------------------------------------------------
// GOTrESOLVE_FIX (R67): 全局对象 alertMsg
//   原版 HelloWorld::init/tick 里 `_DAT_0042b1c8 + 0x42b078` 是 GOT 槽 0xb32414，
//   其 addend = 0xb43bcc = 全局对象 `alertMsg`（12 字节 OBJECT，即旧 ABI 的
//   std::vector<std::string>）。反汇编原版证实：
//     init 41b070: ldr r3,[GOT]; adds r0,r3; bl push_back   -> 取 &alertMsg 作 vector this
//     tick 41a5d8: ldr r3,[GOT]; ldr r6,[r3]; ldr r4,[r3,#4] -> alertMsg.begin()/end()
//   重建器把该 GOT 槽错误地建模为「读内存」(g_0042b1c8 在 _stubs.cpp 里被桩为 0)，
//   于是 `*(g_0042b1c8 + 0x42b078)` 退化成读裸地址 0x42b078 -> SEGV_MAPERR (init+380)。
//   修法：定义真实全局对象，并把两处引用改回正确的 C++ 语义。
// ---------------------------------------------------------------------------
std::vector<std::string> alertMsg;

// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e794(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042a588;
extern "C" unsigned long _DAT_0042a628;
extern "C" unsigned long _DAT_0042a62c;
extern "C" unsigned long _DAT_0042a6f8;
extern "C" unsigned long _DAT_0042a71c;
extern "C" unsigned long _DAT_0042af18;
extern "C" unsigned long _DAT_0042af1c;
extern "C" unsigned long _DAT_0042af20;
extern "C" unsigned long _DAT_0042af24;
extern "C" unsigned long _DAT_0042af28;
extern "C" unsigned long _DAT_0042af2c;
extern "C" unsigned long _DAT_0042af30;
extern "C" unsigned long _DAT_0042af34;
extern "C" unsigned long _DAT_0042af38;
extern "C" unsigned long _DAT_0042af3c;
extern "C" unsigned long _DAT_0042af40;
extern "C" unsigned long _DAT_0042af44;
extern "C" unsigned long _DAT_0042b1ac;
extern "C" unsigned long _DAT_0042b1b0;
extern "C" unsigned long _DAT_0042b1b4;
extern "C" unsigned long _DAT_0042b1b8;
extern "C" unsigned long _DAT_0042b1bc;
extern "C" unsigned long _DAT_0042b1c0;
extern "C" unsigned long _DAT_0042b1c4;
extern "C" unsigned long _DAT_0042b1c8;
extern "C" unsigned long _DAT_0042b1cc;
extern "C" unsigned long _DAT_0042b1d0;
extern "C" unsigned long _DAT_0042b1d4;
extern "C" unsigned long _DAT_0042b1d8;
extern "C" unsigned long _DAT_0042b1dc;
extern "C" unsigned long _DAT_0042b1e0;
extern "C" unsigned long _DAT_0042b1e4;
extern "C" unsigned long _DAT_0042b1ec;
extern "C" unsigned long _DAT_0042b1f0;
extern "C" unsigned long _UNK_0042a59c;
extern "C" unsigned long _UNK_0042a5c4;
extern "C" unsigned long g_0042a588;
extern "C" unsigned long g_0042a59c;
extern "C" unsigned long g_0042a5c4;
extern "C" unsigned long g_0042a628;
extern "C" unsigned long g_0042a62c;
extern "C" unsigned long g_0042a6f8;
extern "C" unsigned long g_0042a71c;
extern "C" unsigned long g_0042af18;
extern "C" unsigned long g_0042af1c;
extern "C" unsigned long g_0042af20;
extern "C" unsigned long g_0042af24;
extern "C" unsigned long g_0042af28;
extern "C" unsigned long g_0042af2c;
extern "C" unsigned long g_0042af30;
extern "C" unsigned long g_0042af34;
extern "C" unsigned long g_0042af38;
extern "C" unsigned long g_0042af3c;
extern "C" unsigned long g_0042af40;
extern "C" unsigned long g_0042af44;
extern "C" unsigned long g_0042b1ac;
extern "C" unsigned long g_0042b1b0;
extern "C" unsigned long g_0042b1b4;
extern "C" unsigned long g_0042b1b8;
extern "C" unsigned long g_0042b1bc;
extern "C" unsigned long g_0042b1c0;
extern "C" unsigned long g_0042b1c4;
extern "C" unsigned long g_0042b1c8;
extern "C" unsigned long g_0042b1cc;
extern "C" unsigned long g_0042b1d0;
extern "C" unsigned long g_0042b1d4;
extern "C" unsigned long g_0042b1d8;
extern "C" unsigned long g_0042b1dc;
extern "C" unsigned long g_0042b1e0;
extern "C" unsigned long g_0042b1e4;
extern "C" unsigned long g_0042b1ec;
extern "C" unsigned long g_0042b1f0;
HelloWorld::~HelloWorld()
{
  int iVar1;
  
  iVar1 = *(int *)("H٫");
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x20c;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x23c;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x248;
  cocos2d::CCLayer::~CCLayer();
  return;
}

undefined8 HelloWorld::tick(float p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  (void)(((long long)::lrand48()));
  piVar6 = *(int **)(((int)this) + 0x108);
  iVar7 = *(int *)(void *)&alertMsg;   // GOTrESOLVE_FIX: alertMsg.begin() (_M_start) —— 原为 **(int**)(g_0042a628+0x42a5da)(GOT槽 0xb32414)
  pcVar4 = *(code **)(*piVar6 + 0x234);
  uVar5 = (undefined4)(((int *)(void *)&alertMsg)[1] - iVar7 >> 2);   // GOTrESOLVE_FIX: (alertMsg.end()-begin())>>2 = size()
  uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(0x30000000)))));
  uVar2 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(unsigned)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5)))));
  (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))))))));
  if (uVar5 <= uVar3) {
    uVar3 = (undefined4)(func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),uVar3,uVar5));
  }
  (*pcVar4)(piVar6,*(undefined4 *)(uVar3 * 4 + iVar7));
  return ghidra_CONCAT44(pcVar4,((int)this));
}

int * HelloWorld::scene()
{
  // SCENE_CTOR_FIX: 原文为 裸 ::operator new(0x10c) + memset + 手工设 vptr。
  //   实测: 删掉 vptr 赋值后对象 vptr=NULL -> init() 内 this->vptr[0x18] 崩 (fault addr 0x18)。
  //   改为标准 C++ 构造: 编译器自动设 vptr 并初始化成员 (cocos2d-x 规范写法)。
  int *pScene = (int *)cocos2d::CCScene::create();
  HelloWorld *pRet = new HelloWorld();
  if (pRet != 0 && pRet->init() != 0) {
    ((cocos2d::CCObject *)pRet)->autorelease();
  } else {
    delete pRet; pRet = 0;
  }
  /* VTCALL_NAMED (R69)：原为裸虚调用 `(**(code**)(*pScene + 200))(pScene, pRet)`，即 vtable[0xC8]。
     原版实证（0x41a6ea..0x41a6f2）：
         ldr r3,[r5]        ; r3 = scene 的 vptr
         adds r3,#0xc8      ; 槽 0xC8
         ldr r3,[r3]        ; r3 = vtable[0xC8]
         blx r3             ; 参数 (scene, layer)
     语义即 cocos2d 的 scene->addChild(layer)。本工程 vtable 布局下裸槽位取到野指针
     （tombstone: HelloWorld::scene()+124, pc 0x82466fb4 <unknown>, SEGV_MAPERR），
     故改为具名调用 —— 由编译器自己算出正确槽位，不再依赖反编译的硬编码偏移。 */
  ((cocos2d::CCScene *)pScene)->addChild(pRet);
  CCLog("DIAG_R72 scene: addChild(layer) done");   /* DIAG_R72: logcat 取证用 */
  return (int *)pScene;
}

void HelloWorld::menuCloseCallback(cocos2d::CCObject* p1)
{
  return;
}

void HelloWorld::initUserBY()
{
  /* OBJ_FIX (R73)：原生成器把 `flush()` 错写成**在 `this`(HelloWorld) 上调用**
     （`((cocos2d::CCUserDefault *)this)->flush();`）。
     原版 0x41a700..0x41a718 实证：
         bl CCUserDefault::sharedUserDefault()        ; r0 = 单例
         ldr r1,[pc]; movs r2,#1; bl setBoolForKey    ; (r0 仍是单例)
         bl CCUserDefault::sharedUserDefault()        ; r0 = 单例
         bl CCUserDefault::flush()                    ; ← 在同一个单例上
     因 CCUserDefault::flush() 在 Android 上经 JNI 写 SharedPreferences，
     对一个 HelloWorld 对象调用 = 拿 HelloWorld 的内存当 CCUserDefault 用 ->
      JNI 状态被破坏 -> ART 直接 abort
     （Abort message: Check failed: code != nullptr … StringFactory.newStringFromBytes；
       native 栈: HelloWorld::initUserBY+26 ← HelloWorld::delayInit+222）。 */
  cocos2d::CCUserDefault *pUserDefault = cocos2d::CCUserDefault::sharedUserDefault();
  pUserDefault->setBoolForKey((char const*)((intptr_t)"SHOW_BY"), true);
  cocos2d::CCUserDefault::sharedUserDefault();
  pUserDefault->flush();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void HelloWorld::delayInit()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  int aiStack_20 [3];
  
  /* SINGLETON_FIX (R71)：原反编译体把 `sir::singleton<T,0>::instance()` 的内联双击锁
     误建模成「pc 相对基址 + 偏移」的裸地址运算 `g_0042af18 + 0x42ac7e`（g_* 是 0 值桩）
     -> 读裸地址 0x42ac7e → SEGV_MAPERR（真机 tombstone: HelloWorld::delayInit()+66）。
     原版 0x41ac6e/0x41ac7a 的真相是 `ldr r5,[pc,#…]; add r5,pc`（取 pc 相对基址）+ 偏移装载。
     同时还把 instance() 的返回值丢掉、改成在 `this`(HelloWorld) 上调 T 的成员函数。
     这里按原版 0x41ac68..0x41af00 的反汇编逐条还原为真实语义。 */
  CCLog("DIAG_R72 delayInit ENTER");   /* DIAG_R72: logcat 取证用 */
  ((sir::singleton<DebugLocalSys, 0> *)this)->instance()->ReadDebugFile();          // 原 41ac70/41ac74
  ((sir::singleton<StringXmlManager, 0> *)this)->instance()->ReadXmlFile();        // 原 41ac7e..41acbe（含双击锁）
  { /* 原 41acc2..41ad0c：函数局部静态 CircusLocalZip（__cxa_guard_acquire/release + __cxa_atexit）*/
    static CircusLocalZip s_circusLocalZip;
    s_circusLocalZip.ReadJsonRecordId();
  }
  ((sir::singleton<CampaignData, 0> *)this)->instance()->ReadLocalDbData();         // 原 41ad10/41ad14
  ((sir::singleton<StringJsonManager, 0> *)this)->instance()->ReadURLFile();        // 原 41ad18..41ad66（含双击锁，new(0x14)）
  ((sir::singleton<DateJsonManager, 0> *)this)->instance()->ReadURLFile();          // 原 41ad6a..41adbe（含双击锁，new(0x20)）
  ((sir::singleton<PracticeData, 0> *)this)->instance()->serachDBData();            // 原 41adc2..41ae16（含双击锁，new(0x98)）
  ((sir::singleton<PracticeTime, 0> *)this)->instance()->onTimeUpdated();           // 原 41ae1a..41ae76（含双击锁，new(0x34) + 0x14 次级基址）
  /* 原 41ae7a..41ae84：director->vtable[0x30]() = CCDirector::getScheduler()（原为裸槽 0x30）。
     原 41ae86..41ae92：scheduler->unscheduleSelector(memptr)，memptr {0x1f8,1} 与 init() 里
     scheduleSelector 用的是同一个选择子。
     注：HelloWorld::tick 当前返回 undefined8，与 SEL_SCHEDULE(void (CCObject::*)(float)) 不符，
     待把 tick 签名改成 void 后再具名化；这里先只取 scheduler 指针 —— 关键是不再把 HelloWorld
     对象当 CCScheduler 用（`((CCScheduler*)this)->unscheduleSelector(...)` 会按 CCScheduler
     布局写坏本对象内存）。 */
  cocos2d::CCScheduler *pSched = cocos2d::CCDirector::sharedDirector()->getScheduler();
  (void)pSched;
  uVar5 = (undefined4)(((BLGameScene *)this)->scene());
  /* FLOAT_CONST_FIX (R143) ★黑屏根因★：生成器把**浮点常量 2.0f 的 IEEE-754 位模式**（0x40000000）
     原样写成了整数常量 ✗ ⇒ `CCTransitionFade::create(0x40000000, …)` 收到的时长是
     **1073741824 秒（≈34 年）** ⇒ 转场淡入淡出永远不结束 ⇒ `CCTransitionScene::finish()` 永不被调用
     ⇒ `m_pRunningScene` 永远停在 `CCTransitionFade` ⇒ **画面全黑**（真机证据链：typeid 恒为 CCTransitionFade、
     finish 无日志、动作已注册且未暂停、主循环/dt/scheduler 全正常 —— 全部吻合）。
     ⇒ 改回真正的浮点值 2.0f（其余同类位模式常量需一并排查：0x3f800000=1.0f、0x3f000000=0.5f 等）。*/
  uVar5 = (undefined4)(cocos2d::CCTransitionFade::create(2.0f, (cocos2d::CCScene*)uVar5));
  uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  ((cocos2d::CCDirector *)(uVar2))->replaceScene((cocos2d::CCScene*)uVar5);
  ((PlatformHelp *)this)->initDomob();
  ((PlatformHelp *)this)->adInit();
  ((HelloWorld *)(((int)this)))->initUserBY();
  uVar5 = (undefined4)(((sir::singleton<DebugLocalSys, 0> *)this)->instance());
  func_0079e45c(auStack_28,"appdelegateumdebug",auStack_2c);
  ((DebugLocalSys *)(uVar5))->getJsonStringById((std::string *)(char *)auStack_28);
  ((umeng::MobClickCpp *)this)->doNotCallItFromYourCode((char const*)"5506905ffd98c5ae1b0000de", (char const*)uStack_24);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(auStack_28);
  CCLog("DIAG_R72 delayInit DONE");   /* DIAG_R72: logcat 取证用 */
  return;
}

bool HelloWorld::init()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  /* UBFIX_STACK (R69)：见文件顶部说明。原为 8 个 4 字节 undefined4 槽，但正文对前三个
     做 *(CCSize*)/(CCPoint*) 的 8 字节整体赋值 -> 4 字节槽被写 8 字节(UB) -> 覆盖金丝雀。*/
  cocos2d::CCSize  uStack_38;   // 8B（原 uStack_38 + uStack_34）
  cocos2d::CCPoint uStack_30;   // 8B（原 uStack_30 + uStack_2c）
  undefined4 uStack_28;
  undefined4 uStack_24;
  cocos2d::CCSize  uStack_20;   // 8B（原 uStack_20 + uStack_1c）
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCLayer::init());
  if (iVar1 != 0) {
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    uStack_38 = ((cocos2d::CCDirector *)(uVar2))->getVisibleSize();
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    uStack_30 = ((cocos2d::CCDirector *)(uVar2))->getVisibleOrigin();
    piVar3 = (int *)cocos2d::extension::CCScale9Sprite::create((char const*)"HelloWorld.png");
    /* VTCALL_NAMED (R70)：把 VTCALL_FIX3/FIX4 曾中立化的 5 处裸 vtable 槽，按**原版反汇编**逐条具名化。
       具名调用由编译器计算槽位，不再依赖反编译里写死的偏移 —— 那种硬编码偏移正是崩溃原因。
       原版地址与语义（HelloWorld::init @0x41af48）：
         0x41af9c  sprite  vtable[0x88](&winSize)  -> CCNode::setContentSize(CCSize const&)
         0x41afda  sprite  vtable[0x4c](&pt)       -> CCNode::setPosition(CCPoint const&)
         0x41afe8  this    vtable[0xCC](sprite,0)  -> CCNode::addChild(CCNode*, int)
         0x41b008  this    vtable[0xC8](label)     -> CCNode::addChild(CCNode*)
         0x41b024  label   vtable[0x7C](&pt)       -> CCNode::setAnchorPoint(CCPoint const&)
         0x41b060  label   vtable[0x4c](&pt)       -> CCNode::setPosition(CCPoint const&)
       此前精灵与文案标签**从未被 addChild 进场景** -> 什么都不渲染（真机黑屏的直接原因）。 */
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    uStack_20 = ((cocos2d::CCDirector *)(uVar2))->getWinSize();
    ((cocos2d::extension::CCScale9Sprite *)piVar3)->setContentSize(uStack_20);
    {
      /* 原版 0x41afaa..0x41afd0 是 __aeabi_fmul/__aeabi_fadd 软浮点序列：
         位置 = (visibleSize * 0.5f) + visibleOrigin */
      cocos2d::CCPoint _sprPos(uStack_38.width * 0.5f + uStack_30.x,
                               uStack_38.height * 0.5f + uStack_30.y);
      ((cocos2d::extension::CCScale9Sprite *)piVar3)->setPosition(_sprPos);
    }
    this->addChild((cocos2d::CCNode *)piVar3, 0);
    CCLog("DIAG_R72 init: addChild(sprite,0) done");   /* DIAG_R72: logcat 取证用 */
    iVar5 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)"正在读取游戏数据，请耐心等待", (char const*)"Arial", 20.0f));   // 字号 20.0f = 原版字面量池 0x41b1b8
    *(int *)((int)this + 4*(0x42)) = iVar5;
    {
      cocos2d::CCLabelTTF *_pLabel = (cocos2d::CCLabelTTF *)*(int *)((int)this + 4*(0x42));
      this->addChild((cocos2d::CCNode *)_pLabel);
      CCLog("DIAG_R72 init: addChild(label) done");   /* DIAG_R72: logcat 取证用 */
      cocos2d::CCPoint _anchor(0.5f, 0.0f);
      _pLabel->setAnchorPoint(_anchor);
      /* 换行宽 = visibleSize.width - 100.0f（原版 0x41b026..0x41b03e；扣减常量 = 字面量池 0x41b1bc = 100.0f，
         不是旧注释里写的 20.0f）*/
      _pLabel->setDimensions(cocos2d::CCSize(uStack_38.width - 100.0f, 0.0f));
      /* 文案位置 = (visibleSize.width * 0.5f, 10.0f)（原版 0x41b044..0x41b060；常量 = 字面量池 0x41b1c0 = 10.0f）*/
      cocos2d::CCPoint _lblPos(uStack_38.width * 0.5f, 10.0f);
      _pLabel->setPosition(_lblPos);
    }
    /* GOTrESOLVE_FIX / GHOSTFIX (R68): 原为
         func_0079e45c(&uStack_20, "<文案>", &uStack_28);
         ((std::vector<std::string>*)(uVar2))->push_back(*(std::string const*)&uStack_20);
         func_0079e2bc(&uStack_20);
       func_0079e45c / func_0079e2bc 是未恢复的 std::string 构造/析构幽灵函数，
       在当前 .so 里是空桩 (mov r0,r1; bx lr) —— 空桩不会构造 uStack_20 处的 string，
       于是 push_back 按 libc++ 的 24B std::string 读未初始化栈 -> 越界写坏金丝雀
       -> init()+726 __stack_chk_fail (SIGABRT)。改为直接、正确的 C++ 语义。
       反汇编原版 init 41b060-41b0a0 证实原序列即 vector<string>::push_back(临时 string)。 */
    alertMsg.push_back(std::string("更新后初次启动会比较慢，请耐心等待"));
    alertMsg.push_back(std::string("薇恩号称是最强的射手，寒冰对此不发表任何意见"));
    alertMsg.push_back(std::string("牛头能打能抗能奶，是目前最好的辅助"));
    alertMsg.push_back(std::string("炮车，飞龙，蝙蝠是最恶心的怪物，优先消灭他们"));
    alertMsg.push_back(std::string("日炎造成的伤害无视所有护甲"));
    alertMsg.push_back(std::string("天赋技能：无敌和霸体能大幅增加战斗力"));
    alertMsg.push_back(std::string("霸体等级越高越不容易被击倒"));
    alertMsg.push_back(std::string("合理消费能让你玩的更Happy"));
    piVar3 = (int *)cocos2d::CCDirector::sharedDirector();
    /* VTCALL_FIX4: 原为 (**(code**)(*(int*)(piVar3) + 0x30))(); */;
    uStack_28 = (undefined4)(0x1f8);
    uStack_24 = (undefined4)(1);
    ((cocos2d::CCScheduler *)this)->scheduleSelector(0 /*memptr*/, (cocos2d::CCObject*)0, (float)0, (bool)0);
    uVar2 = (undefined4)(cocos2d::CCDelayTime::create(0.2f));   /* 原为 g_0042b1ec（0 值桩）；原版字面量池 0x41b1ec = 0.2f，取自 STR_FIX 证据 */
    /* GOTrESOLVE_FIX: 原为 uStack_20 = *(g_0042b1f0 + 0x42b16c);
       该 GOT 槽 0xb3242c 的 addend = 0x41ac69 = &HelloWorld::delayInit (Thumb 函数地址)。
       真实语义是构造成员函数指针 { &HelloWorld::delayInit, 0 } 传给 CCCallFunc::create,
       即 cocos 惯用的 callfunc_selector(HelloWorld::delayInit)。 */
    uStack_20 = cocos2d::CCSize(0,0);   // UBFIX_STACK: 原为 uStack_20=0; uStack_1c=0;（8 字节清零，语义等价）
    uVar4 = (undefined4)(intptr_t)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), callfunc_selector(HelloWorld::delayInit)));
    uVar2 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)uVar2, uVar4, 0));
    ((cocos2d::CCNode *)(((int)this)))->runAction((cocos2d::CCAction*)uVar2);
  }
  return iVar1;
}
