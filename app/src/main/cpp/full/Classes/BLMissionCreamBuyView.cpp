#include "BLMissionCreamBuyView.h"
#include "BLLeakUtils.h"
#include "BLMissionCreamBuyPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005c3d20;
extern "C" unsigned long UNK_005c3d64;
extern "C" unsigned long UNK_005c3da8;
extern "C" unsigned long UNK_005c3dd0;
extern "C" unsigned long UNK_005c3f38;
extern "C" unsigned long UNK_005c402c;
extern "C" unsigned long UNK_005c402e;
extern "C" unsigned long UNK_005c40fe;
extern "C" unsigned long UNK_005c419a;
extern "C" unsigned long UNK_005c429a;
extern "C" unsigned long UNK_005c429e;
extern "C" unsigned long UNK_005c43b0;
extern "C" unsigned long UNK_005c44a2;
extern "C" unsigned long UNK_005c45d6;
extern "C" unsigned long UNK_005c45d8;
extern "C" unsigned long UNK_005c473e;
extern "C" unsigned long UNK_005c478c;
extern "C" unsigned long UNK_005c48c6;
extern "C" unsigned long UNK_005c48c8;
extern "C" unsigned long _DAT_005c3e70;
extern "C" unsigned long _DAT_005c3e74;
extern "C" unsigned long _UNK_005c3d94;
extern "C" unsigned long _UNK_005c3d98;
extern "C" unsigned long _UNK_005c3dac;
extern "C" unsigned long _UNK_005c3dd4;
extern "C" unsigned long _UNK_005c4318;
extern "C" unsigned long _UNK_005c431c;
extern "C" unsigned long _UNK_005c4320;
extern "C" unsigned long _UNK_005c4324;
extern "C" unsigned long _UNK_005c4328;
extern "C" unsigned long _UNK_005c432c;
extern "C" unsigned long _UNK_005c4330;
extern "C" unsigned long _UNK_005c4334;
extern "C" unsigned long _UNK_005c4338;
extern "C" unsigned long _UNK_005c433c;
extern "C" unsigned long _UNK_005c4340;
extern "C" unsigned long _UNK_005c4344;
extern "C" unsigned long _UNK_005c4348;
extern "C" unsigned long _UNK_005c434c;
extern "C" unsigned long _UNK_005c4350;
extern "C" unsigned long _UNK_005c4748;
extern "C" unsigned long _UNK_005c474c;
extern "C" unsigned long _UNK_005c4750;
extern "C" unsigned long _UNK_005c4754;
extern "C" unsigned long _UNK_005c4758;
extern "C" unsigned long _UNK_005c475c;
extern "C" unsigned long _UNK_005c4760;
extern "C" unsigned long _UNK_005c4764;
extern "C" unsigned long _UNK_005c49d8;
extern "C" unsigned long _UNK_005c49dc;
extern "C" unsigned long _UNK_005c49e0;
extern "C" unsigned long _UNK_005c49e4;
extern "C" unsigned long _UNK_005c49e8;
extern "C" unsigned long _UNK_005c49ec;
extern "C" unsigned long g_005c3d20;
extern "C" unsigned long g_005c3d64;
extern "C" unsigned long g_005c3d94;
extern "C" unsigned long g_005c3d98;
extern "C" unsigned long g_005c3da8;
extern "C" unsigned long g_005c3dac;
extern "C" unsigned long g_005c3dd0;
extern "C" unsigned long g_005c3dd4;
extern "C" unsigned long g_005c3e70;
extern "C" unsigned long g_005c3e74;
extern "C" unsigned long g_005c3f38;
extern "C" unsigned long g_005c402c;
extern "C" unsigned long g_005c402e;
extern "C" unsigned long g_005c40fe;
extern "C" unsigned long g_005c419a;
extern "C" unsigned long g_005c429a;
extern "C" unsigned long g_005c429e;
extern "C" unsigned long g_005c4318;
extern "C" unsigned long g_005c431c;
extern "C" unsigned long g_005c4320;
extern "C" unsigned long g_005c4324;
extern "C" unsigned long g_005c4328;
extern "C" unsigned long g_005c432c;
extern "C" unsigned long g_005c4330;
extern "C" unsigned long g_005c4334;
extern "C" unsigned long g_005c4338;
extern "C" unsigned long g_005c433c;
extern "C" unsigned long g_005c4340;
extern "C" unsigned long g_005c4344;
extern "C" unsigned long g_005c4348;
extern "C" unsigned long g_005c434c;
extern "C" unsigned long g_005c4350;
extern "C" unsigned long g_005c43b0;
extern "C" unsigned long g_005c44a2;
extern "C" unsigned long g_005c45d6;
extern "C" unsigned long g_005c45d8;
extern "C" unsigned long g_005c473e;
extern "C" unsigned long g_005c4748;
extern "C" unsigned long g_005c474c;
extern "C" unsigned long g_005c4750;
extern "C" unsigned long g_005c4754;
extern "C" unsigned long g_005c4758;
extern "C" unsigned long g_005c475c;
extern "C" unsigned long g_005c4760;
extern "C" unsigned long g_005c4764;
extern "C" unsigned long g_005c478c;
extern "C" unsigned long g_005c48c6;
extern "C" unsigned long g_005c48c8;
extern "C" unsigned long g_005c49d8;
extern "C" unsigned long g_005c49dc;
extern "C" unsigned long g_005c49e0;
extern "C" unsigned long g_005c49e4;
extern "C" unsigned long g_005c49e8;
extern "C" unsigned long g_005c49ec;
BLMissionCreamBuyView::~BLMissionCreamBuyView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005c3d20 + g_005c3d94);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x4a)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x4a)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005c3d64 + g_005c3d98,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionCreamBuyView::BLMissionCreamBuyView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005c3e70 + 0x5c3e18);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionCreamBuyView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMissionCreamBuyView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

undefined4 BLMissionCreamBuyView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x128);
}


void BLMissionCreamBuyView::onEnter()
{
  ((BLMissionCreamBuyPresenter *)*(undefined4 *)(((int)this) + 0x128))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionCreamBuyView::onExit()
{
  ((BLMissionCreamBuyPresenter *)*(undefined4 *)(((int)this) + 0x128))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMissionCreamBuyView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
