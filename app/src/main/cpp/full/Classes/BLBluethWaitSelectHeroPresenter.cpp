#include "BLBluethWaitSelectHeroPresenter.h"
#include "BLBluethWaitSelectHeroView.h"
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
extern "C" unsigned long UNK_004fa8c0;
extern "C" unsigned long UNK_004fa8da;
extern "C" unsigned long UNK_004fa920;
extern "C" unsigned long UNK_004fa948;
extern "C" unsigned long UNK_004fa96e;
extern "C" unsigned long UNK_004fa99c;
extern "C" unsigned long UNK_004faa7a;
extern "C" unsigned long _UNK_004fa90c;
extern "C" unsigned long _UNK_004fa910;
extern "C" unsigned long _UNK_004fa924;
extern "C" unsigned long _UNK_004fa94c;
extern "C" unsigned long _UNK_004fa9c8;
extern "C" unsigned long _UNK_004fa9cc;
extern "C" unsigned long _UNK_004faa88;
extern "C" unsigned long g_004fa8c0;
extern "C" unsigned long g_004fa8da;
extern "C" unsigned long g_004fa90c;
extern "C" unsigned long g_004fa910;
extern "C" unsigned long g_004fa920;
extern "C" unsigned long g_004fa924;
extern "C" unsigned long g_004fa948;
extern "C" unsigned long g_004fa94c;
extern "C" unsigned long g_004fa96e;
extern "C" unsigned long g_004fa99c;
extern "C" unsigned long g_004fa9c8;
extern "C" unsigned long g_004fa9cc;
extern "C" unsigned long g_004faa7a;
extern "C" unsigned long g_004faa88;
bool BLBluethWaitSelectHeroPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLBluethWaitSelectHeroPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBluethWaitSelectHeroPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBluethWaitSelectHeroPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLBluethWaitSelectHeroPresenter::tick(float p1)
{
  return;
}

BLBluethWaitSelectHeroPresenter::~BLBluethWaitSelectHeroPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004fa8c0 + g_004fa90c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004fa8da + g_004fa910,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLBluethWaitSelectHeroPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x70);
  return;
}

BLBluethWaitSelectHeroPresenter::BLBluethWaitSelectHeroPresenter()
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
  iVar3 = *(int *)(&g_004fa96e + g_004fa9c8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004fa99c + g_004fa9cc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLBluethWaitSelectHeroPresenter::create(BLBluethWaitSelectHeroView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLBluethWaitSelectHeroPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLBluethWaitSelectHeroPresenter::onEnter()
{
  return;
}

void BLBluethWaitSelectHeroPresenter::initWithView(BLBluethWaitSelectHeroView* p1)
{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLBluethWaitSelectHeroView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x1d4))(piVar1,1);
  piVar1 = (int *)((BLBluethWaitSelectHeroView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  pcVar3 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLBluethWaitSelectHeroView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(&uStack_20,piVar2);
  (*pcVar3)(piVar1,&uStack_20);
  piVar1 = (int *)((BLBluethWaitSelectHeroView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClose();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_004faa7a + g_004faa88));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  return;
}
