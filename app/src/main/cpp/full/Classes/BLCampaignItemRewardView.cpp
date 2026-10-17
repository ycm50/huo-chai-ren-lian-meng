#include "BLCampaignItemRewardView.h"
#include "BLCampaignItemRewardPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" unsigned long UNK_00502020;
extern "C" unsigned long UNK_00502064;
extern "C" unsigned long UNK_005020a8;
extern "C" unsigned long UNK_005020d0;
extern "C" unsigned long UNK_005020e8;
extern "C" unsigned long UNK_00502116;
extern "C" unsigned long _UNK_00502094;
extern "C" unsigned long _UNK_00502098;
extern "C" unsigned long _UNK_005020ac;
extern "C" unsigned long _UNK_005020d4;
extern "C" unsigned long _UNK_00502140;
extern "C" unsigned long _UNK_00502144;
extern "C" unsigned long g_00502020;
extern "C" unsigned long g_00502064;
extern "C" unsigned long g_00502094;
extern "C" unsigned long g_00502098;
extern "C" unsigned long g_005020a8;
extern "C" unsigned long g_005020ac;
extern "C" unsigned long g_005020d0;
extern "C" unsigned long g_005020d4;
extern "C" unsigned long g_005020e8;
extern "C" unsigned long g_00502116;
extern "C" unsigned long g_00502140;
extern "C" unsigned long g_00502144;
BLCampaignItemRewardView::~BLCampaignItemRewardView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00502020 + g_00502094);
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
  func_0079e45c(&uStack_14,&g_00502064 + g_00502098,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLCampaignItemRewardView::BLCampaignItemRewardView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005020e8 + g_00502140);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00502116 + g_00502144,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLCampaignItemRewardView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

bool BLCampaignItemRewardView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLCampaignItemRewardPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    ((BLCampaignItemRewardPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLCampaignItemRewardView*)((int)this));
  }
  return iVar1;
}

void BLCampaignItemRewardView::onEnter()
{
  ((BLCampaignItemRewardPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLCampaignItemRewardView::onExit()
{
  ((BLCampaignItemRewardPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
