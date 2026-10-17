#include "BLArrangeButtonPresenter.h"
#include "BLArrangeButton.h"
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
extern "C" unsigned long UNK_004f875c;
extern "C" unsigned long UNK_004f8776;
extern "C" unsigned long UNK_004f87bc;
extern "C" unsigned long UNK_004f87e4;
extern "C" unsigned long UNK_004f8928;
extern "C" unsigned long UNK_004f8972;
extern "C" unsigned long UNK_004f898a;
extern "C" unsigned long UNK_004f8a34;
extern "C" unsigned long _UNK_004f87a8;
extern "C" unsigned long _UNK_004f87ac;
extern "C" unsigned long _UNK_004f87c0;
extern "C" unsigned long _UNK_004f87e8;
extern "C" unsigned long _UNK_004f8950;
extern "C" unsigned long _UNK_004f89cc;
extern "C" unsigned long _UNK_004f89d0;
extern "C" unsigned long _UNK_004f8a3c;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_004f875c;
extern "C" unsigned long g_004f8776;
extern "C" unsigned long g_004f87a8;
extern "C" unsigned long g_004f87ac;
extern "C" unsigned long g_004f87bc;
extern "C" unsigned long g_004f87c0;
extern "C" unsigned long g_004f87e4;
extern "C" unsigned long g_004f87e8;
extern "C" unsigned long g_004f8928;
extern "C" unsigned long g_004f8950;
extern "C" unsigned long g_004f8972;
extern "C" unsigned long g_004f898a;
extern "C" unsigned long g_004f89cc;
extern "C" unsigned long g_004f89d0;
extern "C" unsigned long g_004f8a34;
extern "C" unsigned long g_004f8a3c;
bool BLArrangeButtonPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLArrangeButtonPresenter::~BLArrangeButtonPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f875c + g_004f87a8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f8776 + g_004f87ac,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLArrangeButtonPresenter::onSelect(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  byte bVar1;
  int *piVar2;
  undefined4 extraout_r2;
  
  cocos2d::CCLog((char const*)&g_004f8928 + g_004f8950);
  bVar1 = ((BLArrangeButton *)*(undefined4 *)(((int)this) + 0x18))->getIsSelected();
  piVar2 = (int *)((BLArrangeButton *)*(undefined4 *)(((int)this) + 0x18))->getSprSel();
  (**(code **)(*piVar2 + 0x90))(piVar2,bVar1 ^ 1,extraout_r2,*(code **)(*piVar2 + 0x90),p4);
  ((BLArrangeButton *)*(undefined4 *)(((int)this) + 0x18))->setIsSelected(bVar1 ^ 1);
  return;
}

BLArrangeButtonPresenter::BLArrangeButtonPresenter()
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
  iVar3 = *(int *)(&g_004f8972 + g_004f89cc);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f898a + g_004f89d0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  return;
}

undefined4 BLArrangeButtonPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLArrangeButtonPresenter::onEnter()
{
  return;
}

void BLArrangeButtonPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLArrangeButtonPresenter::initWithView(BLArrangeButton* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLArrangeButton *)p1)->getBtn();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004f8a34 + g_004f8a3c),0,0x20);
  return;
}

void BLArrangeButtonPresenter::getIsSelected()
{
  ((BLArrangeButton *)*(undefined4 *)(((int)this) + 0x18))->getIsSelected();
  return;
}
