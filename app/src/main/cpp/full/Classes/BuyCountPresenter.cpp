#include "BuyCountPresenter.h"
#include "BLLeakUtils.h"
#include "BuyCountView.h"
#include "DataManager.h"
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
extern "C" unsigned long UNK_006bc1ec;
extern "C" unsigned long UNK_006bc204;
extern "C" unsigned long UNK_006bc21c;
extern "C" unsigned long UNK_006bc234;
extern "C" unsigned long UNK_006bc28c;
extern "C" unsigned long UNK_006bc2a6;
extern "C" unsigned long UNK_006bc2ec;
extern "C" unsigned long UNK_006bc314;
extern "C" unsigned long UNK_006bc34c;
extern "C" unsigned long UNK_006bc36e;
extern "C" unsigned long UNK_006bc39c;
extern "C" unsigned long UNK_006bc428;
extern "C" unsigned long UNK_006bc45a;
extern "C" unsigned long UNK_006bc47a;
extern "C" unsigned long _UNK_006bc1f0;
extern "C" unsigned long _UNK_006bc208;
extern "C" unsigned long _UNK_006bc220;
extern "C" unsigned long _UNK_006bc238;
extern "C" unsigned long _UNK_006bc2d8;
extern "C" unsigned long _UNK_006bc2dc;
extern "C" unsigned long _UNK_006bc2f0;
extern "C" unsigned long _UNK_006bc318;
extern "C" unsigned long _UNK_006bc35c;
extern "C" unsigned long _UNK_006bc3c8;
extern "C" unsigned long _UNK_006bc3cc;
extern "C" unsigned long _UNK_006bc438;
extern "C" unsigned long _UNK_006bc488;
extern "C" unsigned long _UNK_006bc48c;
extern "C" unsigned long g_006bc1ec;
extern "C" unsigned long g_006bc1f0;
extern "C" unsigned long g_006bc204;
extern "C" unsigned long g_006bc208;
extern "C" unsigned long g_006bc21c;
extern "C" unsigned long g_006bc220;
extern "C" unsigned long g_006bc234;
extern "C" unsigned long g_006bc238;
extern "C" unsigned long g_006bc28c;
extern "C" unsigned long g_006bc2a6;
extern "C" unsigned long g_006bc2d8;
extern "C" unsigned long g_006bc2dc;
extern "C" unsigned long g_006bc2ec;
extern "C" unsigned long g_006bc2f0;
extern "C" unsigned long g_006bc314;
extern "C" unsigned long g_006bc318;
extern "C" unsigned long g_006bc34c;
extern "C" unsigned long g_006bc35c;
extern "C" unsigned long g_006bc36e;
extern "C" unsigned long g_006bc39c;
extern "C" unsigned long g_006bc3c8;
extern "C" unsigned long g_006bc3cc;
extern "C" unsigned long g_006bc428;
extern "C" unsigned long g_006bc438;
extern "C" unsigned long g_006bc45a;
extern "C" unsigned long g_006bc47a;
extern "C" unsigned long g_006bc488;
extern "C" unsigned long g_006bc48c;
void BuyCountPresenter::tick(float p1)
{
  return;
}

bool BuyCountPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BuyCountPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BuyCountPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BuyCountPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BuyCountPresenter::~BuyCountPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006bc28c + g_006bc2d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006bc2a6 + g_006bc2dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BuyCountPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x2a4);
  return;
}

void BuyCountPresenter::onBtnOK(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  iVar2 = ((DataManager *)uVar1)->isEnoughVirNumber(2, *(undefined4 *)(((int)this) + 0x18), 1);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_006bc34c + g_006bc35c);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->removeUIByID(0x2a4);
  }
  return;
}

BuyCountPresenter::BuyCountPresenter()
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
  iVar3 = *(int *)(&g_006bc36e + g_006bc3c8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006bc39c + g_006bc3cc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BuyCountPresenter::onEnter()
{
  return;
}

void BuyCountPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BuyCountPresenter::create(BuyCountView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BuyCountPresenter::setNum(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  *(undefined4 *)(((int)this) + 0x18) = p1;
  piVar1 = (int *)((BuyCountView *)*(undefined4 *)(((int)this) + 0x20))->getLab_2();
  pcVar3 = *(code **)(*piVar1 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)&g_006bc428 + g_006bc438, *(undefined4 *)(((int)this) + 0x18));
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar1,uVar2);
  return;
}

undefined4 BuyCountPresenter::initWithView(BuyCountView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BuyCountView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006bc45a + g_006bc488),0,0x20);
  piVar1 = (int *)((BuyCountView *)*(undefined4 *)(((int)this) + 0x20))->getBtnOK();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006bc47a + g_006bc48c),0,0x20);
  return 1;
}
