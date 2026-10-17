#include "BLMirrorChallengeResultView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMirrorChallengeResultPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00665f74;
extern "C" unsigned long UNK_00665fc6;
extern "C" unsigned long UNK_0066600c;
extern "C" unsigned long UNK_00666034;
extern "C" unsigned long UNK_006661da;
extern "C" unsigned long UNK_006662ce;
extern "C" unsigned long UNK_00666300;
extern "C" unsigned long UNK_006663d2;
extern "C" unsigned long UNK_006663fc;
extern "C" unsigned long UNK_006664aa;
extern "C" unsigned long UNK_006665a0;
extern "C" unsigned long UNK_006666c4;
extern "C" unsigned long UNK_006667b8;
extern "C" unsigned long UNK_006668bc;
extern "C" unsigned long UNK_006668e6;
extern "C" unsigned long _DAT_006660ec;
extern "C" unsigned long _DAT_006660f0;
extern "C" unsigned long _UNK_00665ff8;
extern "C" unsigned long _UNK_00665ffc;
extern "C" unsigned long _UNK_00666010;
extern "C" unsigned long _UNK_00666038;
extern "C" unsigned long _UNK_006665bc;
extern "C" unsigned long _UNK_006665c0;
extern "C" unsigned long _UNK_006665c4;
extern "C" unsigned long _UNK_006665c8;
extern "C" unsigned long _UNK_006665cc;
extern "C" unsigned long _UNK_006665d0;
extern "C" unsigned long _UNK_006665d4;
extern "C" unsigned long _UNK_006665d8;
extern "C" unsigned long _UNK_006665dc;
extern "C" unsigned long _UNK_006665e0;
extern "C" unsigned long _UNK_006665e4;
extern "C" unsigned long _UNK_006665e8;
extern "C" unsigned long _UNK_006665ec;
extern "C" unsigned long _UNK_006665f0;
extern "C" unsigned long _UNK_006665f4;
extern "C" unsigned long _UNK_00666a0c;
extern "C" unsigned long _UNK_00666a10;
extern "C" unsigned long _UNK_00666a14;
extern "C" unsigned long _UNK_00666a18;
extern "C" unsigned long _UNK_00666a1c;
extern "C" unsigned long _UNK_00666a20;
extern "C" unsigned long _UNK_00666a24;
extern "C" unsigned long _UNK_00666a28;
extern "C" unsigned long _UNK_00666a2c;
extern "C" unsigned long _UNK_00666a30;
extern "C" unsigned long _UNK_00666a34;
extern "C" unsigned long g_00665f74;
extern "C" unsigned long g_00665fc6;
extern "C" unsigned long g_00665ff8;
extern "C" unsigned long g_00665ffc;
extern "C" unsigned long g_0066600c;
extern "C" unsigned long g_00666010;
extern "C" unsigned long g_00666034;
extern "C" unsigned long g_00666038;
extern "C" unsigned long g_006660ec;
extern "C" unsigned long g_006660f0;
extern "C" unsigned long g_006661da;
extern "C" unsigned long g_006662ce;
extern "C" unsigned long g_00666300;
extern "C" unsigned long g_006663d2;
extern "C" unsigned long g_006663fc;
extern "C" unsigned long g_006664aa;
extern "C" unsigned long g_006665a0;
extern "C" unsigned long g_006665bc;
extern "C" unsigned long g_006665c0;
extern "C" unsigned long g_006665c4;
extern "C" unsigned long g_006665c8;
extern "C" unsigned long g_006665cc;
extern "C" unsigned long g_006665d0;
extern "C" unsigned long g_006665d4;
extern "C" unsigned long g_006665d8;
extern "C" unsigned long g_006665dc;
extern "C" unsigned long g_006665e0;
extern "C" unsigned long g_006665e4;
extern "C" unsigned long g_006665e8;
extern "C" unsigned long g_006665ec;
extern "C" unsigned long g_006665f0;
extern "C" unsigned long g_006665f4;
extern "C" unsigned long g_006666c4;
extern "C" unsigned long g_006667b8;
extern "C" unsigned long g_006668bc;
extern "C" unsigned long g_006668e6;
extern "C" unsigned long g_00666a0c;
extern "C" unsigned long g_00666a10;
extern "C" unsigned long g_00666a14;
extern "C" unsigned long g_00666a18;
extern "C" unsigned long g_00666a1c;
extern "C" unsigned long g_00666a20;
extern "C" unsigned long g_00666a24;
extern "C" unsigned long g_00666a28;
extern "C" unsigned long g_00666a2c;
extern "C" unsigned long g_00666a30;
extern "C" unsigned long g_00666a34;
BLMirrorChallengeResultView::~BLMirrorChallengeResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00665f74 + g_00665ff8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00665fc6 + g_00665ffc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMirrorChallengeResultView::BLMirrorChallengeResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_006660ec + 0x66607c));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMirrorChallengeResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMirrorChallengeResultView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 BLMirrorChallengeResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMirrorChallengeResultView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMirrorChallengeResultView::getBtnQuit()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

void BLMirrorChallengeResultView::onEnter()
{
  ((BLMirrorChallengeResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMirrorChallengeResultView::onExit()
{
  ((BLMirrorChallengeResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMirrorChallengeResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
