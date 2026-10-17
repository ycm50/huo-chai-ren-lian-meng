#include "BLTreasureEffectView.h"
#include "BLLeakUtils.h"
#include "BLTreasureEffectPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006ad79c;
extern "C" unsigned long UNK_006ad7e0;
extern "C" unsigned long UNK_006ad824;
extern "C" unsigned long UNK_006ad84c;
extern "C" unsigned long UNK_006ad864;
extern "C" unsigned long UNK_006ad892;
extern "C" unsigned long UNK_006ad8de;
extern "C" unsigned long _UNK_006ad810;
extern "C" unsigned long _UNK_006ad814;
extern "C" unsigned long _UNK_006ad828;
extern "C" unsigned long _UNK_006ad850;
extern "C" unsigned long _UNK_006ad8bc;
extern "C" unsigned long _UNK_006ad8c0;
extern "C" unsigned long _UNK_006ad918;
extern "C" unsigned long g_006ad79c;
extern "C" unsigned long g_006ad7e0;
extern "C" unsigned long g_006ad810;
extern "C" unsigned long g_006ad814;
extern "C" unsigned long g_006ad824;
extern "C" unsigned long g_006ad828;
extern "C" unsigned long g_006ad84c;
extern "C" unsigned long g_006ad850;
extern "C" unsigned long g_006ad864;
extern "C" unsigned long g_006ad892;
extern "C" unsigned long g_006ad8bc;
extern "C" unsigned long g_006ad8c0;
extern "C" unsigned long g_006ad8de;
extern "C" unsigned long g_006ad918;
BLTreasureEffectView::~BLTreasureEffectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006ad79c + g_006ad810);
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
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006ad7e0 + g_006ad814,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureEffectView::BLTreasureEffectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006ad864 + g_006ad8bc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006ad892 + g_006ad8c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLTreasureEffectView::initView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uStack_14 = (undefined4)(p4);
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)&uStack_18 = ((cocos2d::CCDirector *)uVar1)->getWinSize();
  func_0079e45c(&uStack_1c,&g_006ad8de + g_006ad918,&piStack_20);
  iVar2 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x43)) = iVar2;
  func_0079e2bc(&uStack_1c);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x40))((int *)*(int *)((int)this + 4*(0x43)),0x40000000);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  return;
}

undefined4 BLTreasureEffectView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTreasureEffectView::getDiceNode()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

bool BLTreasureEffectView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTreasureEffectPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTreasureEffectView::initView();
    ((BLTreasureEffectPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreasureEffectView*)((int)this));
  }
  return iVar1;
}

void BLTreasureEffectView::onEnter()
{
  ((BLTreasureEffectPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureEffectView::onExit()
{
  ((BLTreasureEffectPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
