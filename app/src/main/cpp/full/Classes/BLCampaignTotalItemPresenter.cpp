#include "BLCampaignTotalItemPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLCampaignTotalItemView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005017a4;
extern "C" unsigned long UNK_005017be;
extern "C" unsigned long UNK_00501804;
extern "C" unsigned long UNK_0050182c;
extern "C" unsigned long UNK_00501842;
extern "C" unsigned long UNK_00501870;
extern "C" unsigned long UNK_005018f0;
extern "C" unsigned long _UNK_005017f0;
extern "C" unsigned long _UNK_005017f4;
extern "C" unsigned long _UNK_00501808;
extern "C" unsigned long _UNK_00501830;
extern "C" unsigned long _UNK_0050189c;
extern "C" unsigned long _UNK_005018a0;
extern "C" unsigned long _UNK_005018f4;
extern "C" unsigned long g_005017a4;
extern "C" unsigned long g_005017be;
extern "C" unsigned long g_005017f0;
extern "C" unsigned long g_005017f4;
extern "C" unsigned long g_00501804;
extern "C" unsigned long g_00501808;
extern "C" unsigned long g_0050182c;
extern "C" unsigned long g_00501830;
extern "C" unsigned long g_00501842;
extern "C" unsigned long g_00501870;
extern "C" unsigned long g_0050189c;
extern "C" unsigned long g_005018a0;
extern "C" unsigned long g_005018f0;
extern "C" unsigned long g_005018f4;
bool BLCampaignTotalItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLCampaignTotalItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCampaignTotalItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCampaignTotalItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLCampaignTotalItemPresenter::~BLCampaignTotalItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005017a4 + g_005017f0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005017be + g_005017f4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLCampaignTotalItemPresenter::BLCampaignTotalItemPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_00501842 + g_0050189c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x38;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00501870 + g_005018a0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLCampaignTotalItemPresenter::onEnter()
{
  return;
}

void BLCampaignTotalItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLCampaignTotalItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLCampaignTotalItemPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  cocos2d::CCLog((char const*)&g_005018f0 + g_005018f4);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLCampaignTotalItemPresenter::initWithView(BLCampaignTotalItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}
