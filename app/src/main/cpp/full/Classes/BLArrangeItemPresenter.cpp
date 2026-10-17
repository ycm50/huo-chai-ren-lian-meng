#include "BLArrangeItemPresenter.h"
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
extern "C" unsigned long UNK_004f86ec;
extern "C" unsigned long UNK_004f87f4;
extern "C" unsigned long UNK_004f880e;
extern "C" unsigned long UNK_004f8854;
extern "C" unsigned long UNK_004f887c;
extern "C" unsigned long UNK_004f8a5a;
extern "C" unsigned long UNK_004f8a72;
extern "C" unsigned long _UNK_004f86f0;
extern "C" unsigned long _UNK_004f8840;
extern "C" unsigned long _UNK_004f8844;
extern "C" unsigned long _UNK_004f8858;
extern "C" unsigned long _UNK_004f8880;
extern "C" unsigned long _UNK_004f8ab4;
extern "C" unsigned long _UNK_004f8ab8;
extern "C" unsigned long g_004f86ec;
extern "C" unsigned long g_004f86f0;
extern "C" unsigned long g_004f87f4;
extern "C" unsigned long g_004f880e;
extern "C" unsigned long g_004f8840;
extern "C" unsigned long g_004f8844;
extern "C" unsigned long g_004f8854;
extern "C" unsigned long g_004f8858;
extern "C" unsigned long g_004f887c;
extern "C" unsigned long g_004f8880;
extern "C" unsigned long g_004f8a5a;
extern "C" unsigned long g_004f8a72;
extern "C" unsigned long g_004f8ab4;
extern "C" unsigned long g_004f8ab8;
bool BLArrangeItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLArrangeItemPresenter::~BLArrangeItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f87f4 + g_004f8840);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f880e + g_004f8844,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLArrangeItemPresenter::BLArrangeItemPresenter()
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
  iVar3 = *(int *)(&g_004f8a5a + g_004f8ab4);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f8a72 + g_004f8ab8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLArrangeItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLArrangeItemPresenter::initWithView(BLArrangeItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

void BLArrangeItemPresenter::initWithData()
{
  return;
}

void BLArrangeItemPresenter::onEnter()
{
  return;
}

void BLArrangeItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}
