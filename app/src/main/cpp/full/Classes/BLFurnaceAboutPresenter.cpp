#include "BLFurnaceAboutPresenter.h"
#include "BLFurnaceAboutView.h"
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
extern "C" unsigned long UNK_00530db4;
extern "C" unsigned long UNK_00530dcc;
extern "C" unsigned long UNK_00530de4;
extern "C" unsigned long UNK_00530e58;
extern "C" unsigned long UNK_00530e72;
extern "C" unsigned long UNK_00530eb8;
extern "C" unsigned long UNK_00530ee0;
extern "C" unsigned long UNK_00530f0a;
extern "C" unsigned long UNK_00530f38;
extern "C" unsigned long UNK_00530fca;
extern "C" unsigned long _UNK_00530db8;
extern "C" unsigned long _UNK_00530dd0;
extern "C" unsigned long _UNK_00530de8;
extern "C" unsigned long _UNK_00530ea4;
extern "C" unsigned long _UNK_00530ea8;
extern "C" unsigned long _UNK_00530ebc;
extern "C" unsigned long _UNK_00530ee4;
extern "C" unsigned long _UNK_00530ef8;
extern "C" unsigned long _UNK_00530f64;
extern "C" unsigned long _UNK_00530f68;
extern "C" unsigned long _UNK_00530fd4;
extern "C" unsigned long g_00530db4;
extern "C" unsigned long g_00530db8;
extern "C" unsigned long g_00530dcc;
extern "C" unsigned long g_00530dd0;
extern "C" unsigned long g_00530de4;
extern "C" unsigned long g_00530de8;
extern "C" unsigned long g_00530e58;
extern "C" unsigned long g_00530e72;
extern "C" unsigned long g_00530ea4;
extern "C" unsigned long g_00530ea8;
extern "C" unsigned long g_00530eb8;
extern "C" unsigned long g_00530ebc;
extern "C" unsigned long g_00530ee0;
extern "C" unsigned long g_00530ee4;
extern "C" unsigned long g_00530ef8;
extern "C" unsigned long g_00530f0a;
extern "C" unsigned long g_00530f38;
extern "C" unsigned long g_00530f64;
extern "C" unsigned long g_00530f68;
extern "C" unsigned long g_00530fca;
extern "C" unsigned long g_00530fd4;
bool BLFurnaceAboutPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLFurnaceAboutPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFurnaceAboutPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFurnaceAboutPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLFurnaceAboutPresenter::tick(float p1)
{
  return;
}

BLFurnaceAboutPresenter::~BLFurnaceAboutPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00530e58 + g_00530ea4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00530e72 + g_00530ea8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLFurnaceAboutPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00530ef8);
  return;
}

BLFurnaceAboutPresenter::BLFurnaceAboutPresenter()
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
  iVar3 = *(int *)(&g_00530f0a + g_00530f64);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00530f38 + g_00530f68,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLFurnaceAboutPresenter::create(BLFurnaceAboutView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLFurnaceAboutPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLFurnaceAboutPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 BLFurnaceAboutPresenter::initWithView(BLFurnaceAboutView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x118) + 0x254))
            (*(int **)(p1 + 0x118),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00530fca + (intptr_t)(g_00530fd4))),0,
             0x20);
  return 1;
}
