#include "BLMainAccountLoginedPresenter.h"
#include "BLLeakUtils.h"
#include "BLMainAccountLoginedView.h"
#include "UIManager.h"
#include "UIObject.h"
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
extern "C" unsigned long UNK_0058aaf8;
extern "C" unsigned long UNK_0058ab12;
extern "C" unsigned long UNK_0058ab58;
extern "C" unsigned long UNK_0058ab80;
extern "C" unsigned long UNK_0058ab96;
extern "C" unsigned long UNK_0058abc4;
extern "C" unsigned long UNK_0058ac56;
extern "C" unsigned long UNK_0058ac76;
extern "C" unsigned long _UNK_0058ab44;
extern "C" unsigned long _UNK_0058ab48;
extern "C" unsigned long _UNK_0058ab5c;
extern "C" unsigned long _UNK_0058ab84;
extern "C" unsigned long _UNK_0058abf0;
extern "C" unsigned long _UNK_0058abf4;
extern "C" unsigned long _UNK_0058ac8c;
extern "C" unsigned long _UNK_0058ac90;
extern "C" unsigned long g_0058aaf8;
extern "C" unsigned long g_0058ab12;
extern "C" unsigned long g_0058ab44;
extern "C" unsigned long g_0058ab48;
extern "C" unsigned long g_0058ab58;
extern "C" unsigned long g_0058ab5c;
extern "C" unsigned long g_0058ab80;
extern "C" unsigned long g_0058ab84;
extern "C" unsigned long g_0058ab96;
extern "C" unsigned long g_0058abc4;
extern "C" unsigned long g_0058abf0;
extern "C" unsigned long g_0058abf4;
extern "C" unsigned long g_0058ac56;
extern "C" unsigned long g_0058ac76;
extern "C" unsigned long g_0058ac8c;
extern "C" unsigned long g_0058ac90;
bool BLMainAccountLoginedPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainAccountLoginedPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountLoginedPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountLoginedPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountLoginedPresenter::tick(float p1)
{
  return;
}

void BLMainAccountLoginedPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x8c);
  return;
}

void BLMainAccountLoginedPresenter::onQuite(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x8c);
  return;
}

BLMainAccountLoginedPresenter::~BLMainAccountLoginedPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058aaf8 + g_0058ab44);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(9)) = iVar2 + 0x68;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058ab12 + g_0058ab48,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  UIObject::~UIObject();
  return;
}

BLMainAccountLoginedPresenter::BLMainAccountLoginedPresenter()
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
  iVar3 = *(int *)(&g_0058ab96 + g_0058abf0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(9)) = iVar3 + 0x68;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 9, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058abc4 + g_0058abf4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMainAccountLoginedPresenter::create(BLMainAccountLoginedView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x2c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainAccountLoginedPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x24);
  return;
}

void BLMainAccountLoginedPresenter::onEnter()
{
  return;
}

void BLMainAccountLoginedPresenter::updateInfo()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMainAccountLoginedPresenter::initWithView(BLMainAccountLoginedView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainAccountLoginedView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058ac56 + g_0058ac8c),0,0x20);
  piVar1 = (int *)((BLMainAccountLoginedView *)*(undefined4 *)(((int)this) + 0x28))->getBtnAccountQuite();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0058ac76 + g_0058ac90),0,0x20);
  BLMainAccountLoginedPresenter::updateInfo();
  return;
}
