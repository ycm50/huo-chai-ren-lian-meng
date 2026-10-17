#include "BLSuitAboutPresenter.h"
#include "BLSuitAboutView.h"
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
extern "C" unsigned long UNK_0068a368;
extern "C" unsigned long UNK_0068a380;
extern "C" unsigned long UNK_0068a398;
extern "C" unsigned long UNK_0068a40c;
extern "C" unsigned long UNK_0068a426;
extern "C" unsigned long UNK_0068a46c;
extern "C" unsigned long UNK_0068a494;
extern "C" unsigned long UNK_0068a4ba;
extern "C" unsigned long UNK_0068a4e8;
extern "C" unsigned long UNK_0068a57a;
extern "C" unsigned long _UNK_0068a36c;
extern "C" unsigned long _UNK_0068a384;
extern "C" unsigned long _UNK_0068a39c;
extern "C" unsigned long _UNK_0068a458;
extern "C" unsigned long _UNK_0068a45c;
extern "C" unsigned long _UNK_0068a470;
extern "C" unsigned long _UNK_0068a498;
extern "C" unsigned long _UNK_0068a514;
extern "C" unsigned long _UNK_0068a518;
extern "C" unsigned long _UNK_0068a584;
extern "C" unsigned long g_0068a368;
extern "C" unsigned long g_0068a36c;
extern "C" unsigned long g_0068a380;
extern "C" unsigned long g_0068a384;
extern "C" unsigned long g_0068a398;
extern "C" unsigned long g_0068a39c;
extern "C" unsigned long g_0068a40c;
extern "C" unsigned long g_0068a426;
extern "C" unsigned long g_0068a458;
extern "C" unsigned long g_0068a45c;
extern "C" unsigned long g_0068a46c;
extern "C" unsigned long g_0068a470;
extern "C" unsigned long g_0068a494;
extern "C" unsigned long g_0068a498;
extern "C" unsigned long g_0068a4ba;
extern "C" unsigned long g_0068a4e8;
extern "C" unsigned long g_0068a514;
extern "C" unsigned long g_0068a518;
extern "C" unsigned long g_0068a57a;
extern "C" unsigned long g_0068a584;
bool BLSuitAboutPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSuitAboutPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitAboutPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitAboutPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitAboutPresenter::tick(float p1)
{
  return;
}

BLSuitAboutPresenter::~BLSuitAboutPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0068a40c + g_0068a458);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068a426 + g_0068a45c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSuitAboutPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xb6);
  return;
}

BLSuitAboutPresenter::BLSuitAboutPresenter()
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
  iVar3 = *(int *)(&g_0068a4ba + g_0068a514);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068a4e8 + g_0068a518,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSuitAboutPresenter::create(BLSuitAboutView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitAboutPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLSuitAboutPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 BLSuitAboutPresenter::initWithView(BLSuitAboutView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x118) + 0x254))
            (*(int **)(p1 + 0x118),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0068a57a + (intptr_t)(g_0068a584))),0,
             0x20);
  return 1;
}
