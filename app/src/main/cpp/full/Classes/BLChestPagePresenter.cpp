#include "BLChestPagePresenter.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "ChestData.h"
#include "BLChestItemPresenter.h"
#include "BLChestItemView.h"
#include "BLChestPageView.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00516c3c;
extern "C" unsigned long UNK_00516c54;
extern "C" unsigned long UNK_00516c6c;
extern "C" unsigned long UNK_00516ce0;
extern "C" unsigned long UNK_00516cfa;
extern "C" unsigned long UNK_00516d40;
extern "C" unsigned long UNK_00516d68;
extern "C" unsigned long UNK_00516d7e;
extern "C" unsigned long UNK_00516dac;
extern "C" unsigned long UNK_00516e42;
extern "C" unsigned long _UNK_00516c40;
extern "C" unsigned long _UNK_00516c58;
extern "C" unsigned long _UNK_00516c70;
extern "C" unsigned long _UNK_00516d2c;
extern "C" unsigned long _UNK_00516d30;
extern "C" unsigned long _UNK_00516d44;
extern "C" unsigned long _UNK_00516d6c;
extern "C" unsigned long _UNK_00516ddc;
extern "C" unsigned long _UNK_00516de0;
extern "C" unsigned long _UNK_00516ebc;
extern "C" unsigned long _UNK_00516ec0;
extern "C" unsigned long _UNK_00516ec4;
extern "C" unsigned long g_00516c3c;
extern "C" unsigned long g_00516c40;
extern "C" unsigned long g_00516c54;
extern "C" unsigned long g_00516c58;
extern "C" unsigned long g_00516c6c;
extern "C" unsigned long g_00516c70;
extern "C" unsigned long g_00516ce0;
extern "C" unsigned long g_00516cfa;
extern "C" unsigned long g_00516d2c;
extern "C" unsigned long g_00516d30;
extern "C" unsigned long g_00516d40;
extern "C" unsigned long g_00516d44;
extern "C" unsigned long g_00516d68;
extern "C" unsigned long g_00516d6c;
extern "C" unsigned long g_00516d7e;
extern "C" unsigned long g_00516dac;
extern "C" unsigned long g_00516ddc;
extern "C" unsigned long g_00516de0;
extern "C" unsigned long g_00516e42;
extern "C" unsigned long g_00516ebc;
extern "C" unsigned long g_00516ec0;
extern "C" unsigned long g_00516ec4;
int BLChestPagePresenter::getIndex() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLChestPagePresenter::setIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

bool BLChestPagePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLChestPagePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestPagePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestPagePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLChestPagePresenter::tick(float p1)
{
  return;
}

BLChestPagePresenter::~BLChestPagePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00516ce0 + g_00516d2c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00516cfa + g_00516d30,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLChestPagePresenter::BLChestPagePresenter()
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
  iVar3 = *(int *)(&g_00516d7e + g_00516ddc);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00516dac + g_00516de0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

undefined4 BLChestPagePresenter::create(BLChestPageView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLChestPagePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLChestPagePresenter::onEnter()
{
  return;
}

void BLChestPagePresenter::initWithView(BLChestPageView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined8 BLChestPagePresenter::initWithIndex(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  iVar4 = (undefined4)(intptr_t)(g_00516ebc);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x80)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)*(int *)(((int)this) + 0x1c) << 1));
  iStack_18 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  if (iVar3 != 0) {
    iStack_18 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00516e42 + (intptr_t)(g_00516ec0)) + iVar4));
    uStack_14 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00516e42 + (intptr_t)(g_00516ec4)) + iVar4));
    iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar3,iStack_18,uStack_14,0));
    if (iVar3 != 0) {
      ((BLChestPageView *)*(undefined4 *)(((int)this) + 0x18))->CopperChest();
      uVar2 = (undefined4)(((BLChestItemView *)this)->getPresenter());
      ((BLChestItemPresenter *)uVar2)->initWithChestData((ChestData*)iVar3);
    }
  }
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x80)))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)*(int *)(((int)this) + 0x1c) * 2 + 1));
  if (iVar3 != 0) {
    iStack_18 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00516e42 + (intptr_t)(g_00516ec0)) + iVar4));
    uStack_14 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00516e42 + (intptr_t)(g_00516ec4)) + iVar4));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar3,iStack_18,uStack_14,0));
    if (iVar4 != 0) {
      ((BLChestPageView *)*(undefined4 *)(((int)this) + 0x18))->DiamonChest();
      uVar2 = (undefined4)(((BLChestItemView *)this)->getPresenter());
      ((BLChestItemPresenter *)uVar2)->initWithChestData((ChestData*)iVar4);
    }
  }
  return ghidra_CONCAT44(uStack_14,iStack_18);
}
