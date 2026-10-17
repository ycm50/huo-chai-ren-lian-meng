#include "BLRenascencePresenter.h"
#include "BLLeakUtils.h"
#include "UIManager.h"
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
extern "C" unsigned long UNK_0064c5e0;
extern "C" unsigned long UNK_0064c638;
extern "C" unsigned long UNK_0064c652;
extern "C" unsigned long UNK_0064c698;
extern "C" unsigned long UNK_0064c6c0;
extern "C" unsigned long UNK_0064c6d6;
extern "C" unsigned long UNK_0064c6ee;
extern "C" unsigned long _UNK_0064c5e4;
extern "C" unsigned long _UNK_0064c684;
extern "C" unsigned long _UNK_0064c688;
extern "C" unsigned long _UNK_0064c69c;
extern "C" unsigned long _UNK_0064c6c4;
extern "C" unsigned long _UNK_0064c738;
extern "C" unsigned long _UNK_0064c73c;
extern "C" unsigned long g_0064c5e0;
extern "C" unsigned long g_0064c5e4;
extern "C" unsigned long g_0064c638;
extern "C" unsigned long g_0064c652;
extern "C" unsigned long g_0064c684;
extern "C" unsigned long g_0064c688;
extern "C" unsigned long g_0064c698;
extern "C" unsigned long g_0064c69c;
extern "C" unsigned long g_0064c6c0;
extern "C" unsigned long g_0064c6c4;
extern "C" unsigned long g_0064c6d6;
extern "C" unsigned long g_0064c6ee;
extern "C" unsigned long g_0064c738;
extern "C" unsigned long g_0064c73c;
bool BLRenascencePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLRenascencePresenter::~BLRenascencePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0064c638 + g_0064c684);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064c652 + g_0064c688,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRenascencePresenter::BLRenascencePresenter()
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
  iVar3 = *(int *)(&g_0064c6d6 + g_0064c738);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064c6ee + g_0064c73c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLRenascencePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRenascencePresenter::initWithView(BLRenascenceView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

void BLRenascencePresenter::initWithData()
{
  return;
}

void BLRenascencePresenter::onEnter()
{
  return;
}

void BLRenascencePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}
