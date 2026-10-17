#include "AppDelegate.h"
#include "BLAchievementManager.h"
#include "CircusLocalZip.h"
#include "HelloWorld.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
/* UBFIX_STACK (R69)：反编译体写成 `*(CCSize *)&uStack_XX = <返回 CCSize 的调用>;`，
   而 uStack_XX 只声明 4 字节 —— 整体赋值实际写 8 字节（UB），会溢出到相邻栈槽。
   真机实证：HelloWorld::init 因此覆盖金丝雀 -> __stack_chk_fail；本文件 application-
   DidFinishLaunching 是同族缺陷（tombstone: +1318 __stack_chk_fail）。
   改为拆成两次 4 字节按位写，既消除溢出又保持后续所有 4 字节读取完全不变。 */
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e51c(...);
extern "C" unsigned long _DAT_00424734;
extern "C" unsigned long _DAT_00424808;
extern "C" unsigned long _DAT_0042480c;
extern "C" unsigned long _DAT_00424810;
extern "C" unsigned long _DAT_00424814;
extern "C" unsigned long _DAT_00424818;
extern "C" unsigned long _DAT_00424ae8;
extern "C" unsigned long _DAT_00424aec;
extern "C" unsigned long _DAT_00424af0;
extern "C" unsigned long _DAT_00424af4;
extern "C" unsigned long _DAT_00424af8;
extern "C" unsigned long _DAT_00424afc;
extern "C" unsigned long _DAT_00424b00;
extern "C" unsigned long _DAT_00424b04;
extern "C" unsigned long _DAT_00424b08;
extern "C" unsigned long _DAT_00424b0c;
extern "C" unsigned long _DAT_00424b10;
extern "C" unsigned long _DAT_00424b14;
extern "C" unsigned long _DAT_00424b18;
extern "C" unsigned long _DAT_00424b1c;
extern "C" unsigned long _DAT_00424b20;
extern "C" unsigned long _DAT_00424b24;
extern "C" unsigned long _DAT_00424b28;
extern "C" unsigned long _DAT_00424b2c;
extern "C" unsigned long _DAT_00424b30;
extern "C" unsigned long _DAT_00424b34;
extern "C" unsigned long _DAT_00424b38;
extern "C" unsigned long _DAT_00424b3c;
extern "C" unsigned long _DAT_00424b40;
extern "C" unsigned long _DAT_00424b44;
extern "C" unsigned long _DAT_00424b48;
extern "C" unsigned long _DAT_00424b4c;
extern "C" unsigned long _DAT_00424b50;
extern "C" unsigned long _DAT_00424b54;
extern "C" unsigned long _DAT_00424b58;
extern "C" unsigned long _DAT_00424b5c;
extern "C" unsigned long _DAT_00424b60;
extern "C" unsigned long _DAT_00424b64;
extern "C" unsigned long _DAT_00424b68;
extern "C" unsigned long _DAT_00424b6c;
extern "C" unsigned long _DAT_00424b70;
extern "C" unsigned long _DAT_00424b74;
extern "C" unsigned long _DAT_00424b78;
extern "C" unsigned long _DAT_00424b7c;
extern "C" unsigned long _DAT_00424b80;
extern "C" unsigned long _DAT_00424b84;
extern "C" unsigned long _DAT_00424b88;
extern "C" unsigned long _DAT_00424b8c;
extern "C" unsigned long _DAT_00424b90;
extern "C" unsigned long _DAT_00424b94;
extern "C" unsigned long _DAT_00424b98;
extern "C" unsigned long _DAT_00424b9c;
extern "C" unsigned long _DAT_00424ba0;
extern "C" unsigned long _DAT_00424ba4;
extern "C" unsigned long _DAT_00424ba8;
extern "C" unsigned long _DAT_00424c70;
extern "C" unsigned long _DAT_00424c74;
extern "C" unsigned long _DAT_00424c78;
extern "C" unsigned long _DAT_00424c7c;
extern "C" unsigned long _DAT_00424c98;
extern "C" unsigned long g_00424734;
extern "C" unsigned long g_00424808;
extern "C" unsigned long g_0042480c;
extern "C" unsigned long g_00424810;
extern "C" unsigned long g_00424814;
extern "C" unsigned long g_00424818;
extern "C" unsigned long g_00424ae8;
extern "C" unsigned long g_00424aec;
extern "C" unsigned long g_00424af0;
extern "C" unsigned long g_00424af4;
extern "C" unsigned long g_00424af8;
extern "C" unsigned long g_00424afc;
extern "C" unsigned long g_00424b00;
extern "C" unsigned long g_00424b04;
extern "C" unsigned long g_00424b08;
extern "C" unsigned long g_00424b0c;
extern "C" unsigned long g_00424b10;
extern "C" unsigned long g_00424b14;
extern "C" unsigned long g_00424b18;
extern "C" unsigned long g_00424b1c;
extern "C" unsigned long g_00424b20;
extern "C" unsigned long g_00424b24;
extern "C" unsigned long g_00424b28;
extern "C" unsigned long g_00424b2c;
extern "C" unsigned long g_00424b30;
extern "C" unsigned long g_00424b34;
extern "C" unsigned long g_00424b38;
extern "C" unsigned long g_00424b3c;
extern "C" unsigned long g_00424b40;
extern "C" unsigned long g_00424b44;
extern "C" unsigned long g_00424b48;
extern "C" unsigned long g_00424b4c;
extern "C" unsigned long g_00424b50;
extern "C" unsigned long g_00424b54;
extern "C" unsigned long g_00424b58;
extern "C" unsigned long g_00424b5c;
extern "C" unsigned long g_00424b60;
extern "C" unsigned long g_00424b64;
extern "C" unsigned long g_00424b68;
extern "C" unsigned long g_00424b6c;
extern "C" unsigned long g_00424b70;
extern "C" unsigned long g_00424b74;
extern "C" unsigned long g_00424b78;
extern "C" unsigned long g_00424b7c;
extern "C" unsigned long g_00424b80;
extern "C" unsigned long g_00424b84;
extern "C" unsigned long g_00424b88;
extern "C" unsigned long g_00424b8c;
extern "C" unsigned long g_00424b90;
extern "C" unsigned long g_00424b94;
extern "C" unsigned long g_00424b98;
extern "C" unsigned long g_00424b9c;
extern "C" unsigned long g_00424ba0;
extern "C" unsigned long g_00424ba4;
extern "C" unsigned long g_00424ba8;
extern "C" unsigned long g_00424c70;
extern "C" unsigned long g_00424c74;
extern "C" unsigned long g_00424c78;
extern "C" unsigned long g_00424c7c;
extern "C" unsigned long g_00424c98;
AppDelegate::~AppDelegate()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCApplication(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

bool AppDelegate::applicationDidFinishLaunching()
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  piVar2 = (int *)cocos2d::CCEGLView::sharedOpenGLView();
  ((cocos2d::CCDirector *)piVar1)->setOpenGLView((cocos2d::CCEGLView*)piVar2);
  *(undefined1 *)((int)piVar1 + 0x49) = 0;
  // VTCALL_FIX: 原式 (**(code**)(*piVar1+0x20))(piVar1,...,g_00424808,g_0042480c);
  //   实测崩在 blx r12: 指令序列为 ldr r1,[r0]; ldr r1,[r1,#0x20]; ldr r12,[r1]; blx r12
  //   (两次解引用), 说明 Ghidra 对该间接调用建模不可靠; 取值指向 JIT 内存 -> SEGV_ACCERR。
  //   本工程 CCDirector 槽 0x20 = CCDisplayLinkDirector::setAnimationInterval(double),
  //   但实参经多重间接后无法可靠还原, 故先中立化以探明后续阻塞点。
  if (piVar1 != 0) {
    void **vt = *(void ***)piVar1;
    if (vt != 0 && vt[8] != 0 && (void **)vt[8] != 0) {
      /* 原虚调用被中立化 (VTCALL_FIX) */
    }
  }
  /* UBFIX_STACK: 原为 `*(CCSize *)&uStack_28 = ...->getWinSize();`（4 字节槽写 8 字节，UB）。
     拆成两次 4 字节按位写：uStack_28=width、uStack_24=height，后续读取完全不变。 */
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)piVar1)->getWinSize();
    uStack_28 = hw_fbits(_ws.width); uStack_24 = hw_fbits(_ws.height); }
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(g_00424810)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(g_00424814)))));
  iVar5 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x > _y)?1:0);}((int)(uVar3),(int)(uVar4))));
  if (iVar5 == 0) {
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(g_00424810)))));
    uStack_2c = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uStack_28)))));
    uStack_30 = (undefined4)(g_00424810);
  }
  else {
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(g_00424814)))));
    uStack_30 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uStack_24)))));
    uStack_2c = (undefined4)(g_00424814);
  }
  /* UBFIX_STACK: 同上（原为 `*(CCSize *)&uStack_20 = ...->getWinSize();`）：
     uStack_20=width、uStack_1c=height。 */
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)piVar1)->getWinSize();
    uStack_20 = hw_fbits(_ws.width); uStack_1c = hw_fbits(_ws.height); }
  iVar5 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x >= _y)?1:0);}((int)(uStack_1c),(int)(g_00424814))));
  iVar7 = (int)*(int *)&(*piVar2);
  if ((iVar5 == 0) || (iVar5 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);return ((_x <= _y)?1:0);}((int)(uStack_1c),(int)(g_00424818)))), iVar5 == 0)) {
    pcVar6 = *(code **)(iVar7 + 0x28);
    uStack_20 = (undefined4)(uStack_30);
    uStack_1c = (undefined4)(uStack_2c);
  }
  else {
    pcVar6 = *(code **)(iVar7 + 0x28);
  }
  // VTCALL_FIX2: 原式 (*pcVar6)(piVar2,uStack_20,uStack_1c,2);  pcVar6 = vtable[0x28]。
  //   实测崩在 blx r12 (r12 指向 dalvik 内存) —— 本工程 CCEGLView 槽 0x28 与原版不符。
  //   实参形态 (this, w, h, 2) 疑为 setDesignResolutionSize(w,h,policy)。先中立化以探明后续阻塞点。
  if (piVar2 != 0 && pcVar6 != 0) {
    /* 原虚调用被中立化 (VTCALL_FIX2): (*pcVar6)(piVar2,uStack_20,uStack_1c,2); */
  }
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("roleanimate");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("data");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("data/db");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("sound");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("sound/mission/");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("sound/role/UI/");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("sound/treasure/");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("test");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("shaders");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("scene");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("data/scene");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("data/role");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("data/other");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("items");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("skill_icon");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/mission");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/recharge");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/gift");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/callback");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/dailysign");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/jingjishop");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/Arena");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/herorank");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/pop");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/share");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/campaign");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/cream");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/gemdraw");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/shop");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/otherpaytip");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/debris");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/endless");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/redpack");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/talent");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/practice");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/card");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/treasure");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/suit");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/mine");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/liveness");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/signed");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/mirror");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/immortals");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/vallery");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/pet");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/challenge");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/moneyTree");
  piVar2 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  ((cocos2d::CCFileUtils *)piVar2)->addSearchPath("ui/jitan");
  uVar3 = (undefined4)(((HelloWorld *)this)->scene());
  ((cocos2d::CCDirector *)piVar1)->runWithScene((cocos2d::CCScene*)uVar3);
  return 1;
}

void AppDelegate::applicationWillEnterForeground()
{
  int *piVar1;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  (**(code **)(*piVar1 + 0x28))();
  ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
  ((CocosDenshion::SimpleAudioEngine *)this)->resumeBackgroundMusic();
  ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
  ((CocosDenshion::SimpleAudioEngine *)this)->resumeAllEffects();
  return;
}

void AppDelegate::applicationDidEnterBackground()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(g_00424c70 + 0x424c08);
  uVar3 = (undefined4)(*(undefined4 *)(g_00424c74 + 0x424c10));
  if ((-1 < *piVar1 << 0x1f) && (iVar2 = func_0079e33c(), iVar2 != 0)) {
    0 /* ctorZero */;
    func_0079e38c(piVar1);
    func_0079e39c(uVar3,*(undefined4 *)(g_00424c78 + 0x424c34),g_00424c7c + 0x424c38);
  }
  ((CircusLocalZip *)uVar3)->WriteJsonRecordId();
  ((BLAchievementManager *)this)->share();
  ((BLAchievementManager *)this)->updateDataToDB();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  (**(code **)(*piVar1 + 0x24))();
  ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
  ((CocosDenshion::SimpleAudioEngine *)this)->pauseBackgroundMusic();
  ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
  ((CocosDenshion::SimpleAudioEngine *)this)->pauseAllEffects();
  return;
}

AppDelegate::AppDelegate()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  return;
}
