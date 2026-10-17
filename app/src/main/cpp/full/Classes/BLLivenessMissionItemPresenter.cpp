#include "BLLivenessMissionItemPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "BLLivenessMissionItemView.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "LivenessUserItemData.h"
#include "BLLeakUtils.h"
#include "BLLivenessMissionItemBtnPresenter.h"
#include "BLLivenessMissionItemIconPresenter.h"
#include "BLLivenessMissionItemRewardPresenter.h"
#include "DataCacheManager.h"
#include "LivenessData.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057e6e8;
extern "C" unsigned long UNK_0057e702;
extern "C" unsigned long UNK_0057e748;
extern "C" unsigned long UNK_0057e770;
extern "C" unsigned long UNK_0057ed26;
extern "C" unsigned long UNK_0057ed3e;
extern "C" unsigned long UNK_0057ee32;
extern "C" unsigned long UNK_0057ee70;
extern "C" unsigned long UNK_0057ee80;
extern "C" unsigned long _UNK_0057e734;
extern "C" unsigned long _UNK_0057e738;
extern "C" unsigned long _UNK_0057e74c;
extern "C" unsigned long _UNK_0057e774;
extern "C" unsigned long _UNK_0057ed80;
extern "C" unsigned long _UNK_0057ed84;
extern "C" unsigned long _UNK_0057eef4;
extern "C" unsigned long _UNK_0057eef8;
extern "C" unsigned long _UNK_0057eefc;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0057e6e8;
extern "C" unsigned long g_0057e702;
extern "C" unsigned long g_0057e734;
extern "C" unsigned long g_0057e738;
extern "C" unsigned long g_0057e748;
extern "C" unsigned long g_0057e74c;
extern "C" unsigned long g_0057e770;
extern "C" unsigned long g_0057e774;
extern "C" unsigned long g_0057ed26;
extern "C" unsigned long g_0057ed3e;
extern "C" unsigned long g_0057ed80;
extern "C" unsigned long g_0057ed84;
extern "C" unsigned long g_0057ee32;
extern "C" unsigned long g_0057ee70;
extern "C" unsigned long g_0057ee80;
extern "C" unsigned long g_0057eef4;
extern "C" unsigned long g_0057eef8;
extern "C" unsigned long g_0057eefc;
bool BLLivenessMissionItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLLivenessMissionItemPresenter::~BLLivenessMissionItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057e6e8 + g_0057e734);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057e702 + g_0057e738,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessMissionItemPresenter::BLLivenessMissionItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0057ed26 + g_0057ed80);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057ed3e + g_0057ed84,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLLivenessMissionItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLLivenessMissionItemPresenter::onEnter()
{
  return;
}

void BLLivenessMissionItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLLivenessMissionItemPresenter::initWithView(BLLivenessMissionItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLLivenessMissionItemPresenter::initWithData(LivenessUserItemData* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *extraout_r3;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (200)))());
  iVar3 = (undefined4)(intptr_t)(((LivenessData *)uVar2)->getItemData(*(int *)p1));
  uVar2 = (undefined4)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x10c) + 0x108));
  func_0079e53c(auStack_1c,iVar3 + 0xc);
  ((BLLivenessMissionItemIconPresenter *)uVar2)->initWithData((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,*(undefined4 *)(iVar3 + 4));
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,*(undefined4 *)(iVar3 + 0x10));
  0 /* ctorZero */;
  0 /* ctorZero */;
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0057ee32 + (intptr_t)(g_0057eef4)), uStack_28, uStack_24);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(&uStack_20,uVar2,auStack_1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,uStack_20);
  uVar2 = (undefined4)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x124) + 0x108));
  puVar4 = *(undefined4 **)(iVar3 + 0x1c);
  if (*(int *)(iVar3 + 0x20) - (int)puVar4 >> 2 == 0) {
    uVar2 = (undefined4)(func_0079e784((unsigned char *)((char *)&g_0057ee70 + (intptr_t)(g_0057eef8)),0));
    puVar4 = extraout_r3;
  }
  ((BLLivenessMissionItemRewardPresenter *)uVar2)->initWithData((RewardItemData*)*puVar4);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_0057ee80 + (intptr_t)(g_0057eefc)), *(undefined4 *)(iVar3 + 0x18));
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_1c,uVar2,auStack_2c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x120);
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,auStack_1c[0]);
  ((BLLivenessMissionItemBtnPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x128) + 0x108))->initWithData((LivenessUserItemData*)p1);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(&uStack_28);
  return;
}
