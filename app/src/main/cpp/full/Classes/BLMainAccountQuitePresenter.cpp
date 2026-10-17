#include "BLMainAccountQuitePresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCUserDefault.h"
#include "BLLeakUtils.h"
#include "BLMainAccountQuiteView.h"
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
extern "C" unsigned long UNK_0058b1c8;
extern "C" unsigned long UNK_0058b1e2;
extern "C" unsigned long UNK_0058b228;
extern "C" unsigned long UNK_0058b250;
extern "C" unsigned long UNK_0058b276;
extern "C" unsigned long UNK_0058b2a2;
extern "C" unsigned long UNK_0058b2b4;
extern "C" unsigned long UNK_0058b2c0;
extern "C" unsigned long UNK_0058b2fa;
extern "C" unsigned long UNK_0058b328;
extern "C" unsigned long UNK_0058b3be;
extern "C" unsigned long _UNK_0058b214;
extern "C" unsigned long _UNK_0058b218;
extern "C" unsigned long _UNK_0058b22c;
extern "C" unsigned long _UNK_0058b254;
extern "C" unsigned long _UNK_0058b290;
extern "C" unsigned long _UNK_0058b2e0;
extern "C" unsigned long _UNK_0058b2e4;
extern "C" unsigned long _UNK_0058b2e8;
extern "C" unsigned long _UNK_0058b354;
extern "C" unsigned long _UNK_0058b358;
extern "C" unsigned long _UNK_0058b460;
extern "C" unsigned long _UNK_0058b464;
extern "C" unsigned long _UNK_0058b468;
extern "C" unsigned long _UNK_0058b46c;
extern "C" unsigned long _UNK_0058b470;
extern "C" unsigned long _UNK_0058b474;
extern "C" unsigned long g_0058b1c8;
extern "C" unsigned long g_0058b1e2;
extern "C" unsigned long g_0058b214;
extern "C" unsigned long g_0058b218;
extern "C" unsigned long g_0058b228;
extern "C" unsigned long g_0058b22c;
extern "C" unsigned long g_0058b250;
extern "C" unsigned long g_0058b254;
extern "C" unsigned long g_0058b276;
extern "C" unsigned long g_0058b290;
extern "C" unsigned long g_0058b2a2;
extern "C" unsigned long g_0058b2b4;
extern "C" unsigned long g_0058b2c0;
extern "C" unsigned long g_0058b2e0;
extern "C" unsigned long g_0058b2e4;
extern "C" unsigned long g_0058b2e8;
extern "C" unsigned long g_0058b2fa;
extern "C" unsigned long g_0058b328;
extern "C" unsigned long g_0058b354;
extern "C" unsigned long g_0058b358;
extern "C" unsigned long g_0058b3be;
extern "C" unsigned long g_0058b460;
extern "C" unsigned long g_0058b464;
extern "C" unsigned long g_0058b468;
extern "C" unsigned long g_0058b46c;
extern "C" unsigned long g_0058b470;
extern "C" unsigned long g_0058b474;
bool BLMainAccountQuitePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainAccountQuitePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountQuitePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountQuitePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainAccountQuitePresenter::onRight(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLMainAccountQuitePresenter::onLeft(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLMainAccountQuitePresenter::tick(float p1)
{
  return;
}

BLMainAccountQuitePresenter::~BLMainAccountQuitePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058b1c8 + g_0058b214);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058b1e2 + g_0058b218,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainAccountQuitePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x8d);
  return;
}

void BLMainAccountQuitePresenter::onOK(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)uVar1)->setBoolForKey((char const*)&g_0058b276 + g_0058b290, 0);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x8d);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x8c);
  return;
}


BLMainAccountQuitePresenter::BLMainAccountQuitePresenter()
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
  iVar3 = *(int *)(&g_0058b2fa + g_0058b354);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058b328 + g_0058b358,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMainAccountQuitePresenter::create(BLMainAccountQuiteView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainAccountQuitePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLMainAccountQuitePresenter::onEnter()
{
  return;
}

void BLMainAccountQuitePresenter::updateInfo()
{
  return;
}

void BLMainAccountQuitePresenter::initWithView(BLMainAccountQuiteView* p1)
{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar2 = (int *)((BLMainAccountQuiteView *)p1)->getBtnClose();
  iVar1 = g_0058b460;
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058b3be + g_0058b464 + g_0058b460),0,0x20);
  piVar2 = (int *)((BLMainAccountQuiteView *)*(undefined4 *)(((int)this) + 0x18))->getBtnOK();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058b3be + g_0058b468 + iVar1),0,0x20);
  piVar2 = (int *)((BLMainAccountQuiteView *)*(undefined4 *)(((int)this) + 0x18))->getBtnCancel();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058b3be + g_0058b46c + iVar1),0,0x20);
  piVar2 = (int *)((BLMainAccountQuiteView *)*(undefined4 *)(((int)this) + 0x18))->getbtnRight();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058b3be + g_0058b470 + iVar1),0,0x20);
  piVar2 = (int *)((BLMainAccountQuiteView *)*(undefined4 *)(((int)this) + 0x18))->getBtnLeft();
  (**(code **)(*piVar2 + 0x254))
            (piVar2,((int)this),*(undefined4 *)(&g_0058b3be + g_0058b474 + iVar1),0,0x20);
  BLMainAccountQuitePresenter::updateInfo();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMainAccountQuitePresenter::onCancel(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p2);
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)(uVar1))->setBoolForKey((char const*)(unsigned char *)((char *)&g_0058b2a2 + (intptr_t)(g_0058b2e0)), 0);
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0058b2b4 + (intptr_t)(g_0058b2e4)),&uStack_18);
  ((cocos2d::CCUserDefault *)(uVar1))->setStringForKey((char const*)(unsigned char *)((char *)&g_0058b2c0 + (intptr_t)(g_0058b2e8)), *(std::string const*)&uStack_14);
  func_0079e2bc(&uStack_14);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0x8d);
  return;
}
