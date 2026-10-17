#include "BLGuideFunctionPresenter.h"
#include "BLGuideFunctionView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "GuideManager.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005ece50;
extern "C" unsigned long UNK_005ece6a;
extern "C" unsigned long UNK_005eceb0;
extern "C" unsigned long UNK_005eced8;
extern "C" unsigned long UNK_005ecf06;
extern "C" unsigned long UNK_005ecf36;
extern "C" unsigned long UNK_005ecfe0;
extern "C" unsigned long _UNK_005ece9c;
extern "C" unsigned long _UNK_005ecea0;
extern "C" unsigned long _UNK_005eceb4;
extern "C" unsigned long _UNK_005ecedc;
extern "C" unsigned long _UNK_005ecf60;
extern "C" unsigned long _UNK_005ecf64;
extern "C" unsigned long _UNK_005ecfe8;
extern "C" unsigned long g_005ece50;
extern "C" unsigned long g_005ece6a;
extern "C" unsigned long g_005ece9c;
extern "C" unsigned long g_005ecea0;
extern "C" unsigned long g_005eceb0;
extern "C" unsigned long g_005eceb4;
extern "C" unsigned long g_005eced8;
extern "C" unsigned long g_005ecedc;
extern "C" unsigned long g_005ecf06;
extern "C" unsigned long g_005ecf36;
extern "C" unsigned long g_005ecf60;
extern "C" unsigned long g_005ecf64;
extern "C" unsigned long g_005ecfe0;
extern "C" unsigned long g_005ecfe8;
bool BLGuideFunctionPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLGuideFunctionPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGuideFunctionPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGuideFunctionPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGuideFunctionPresenter::tick(float p1)
{
  return;
}

BLGuideFunctionPresenter::~BLGuideFunctionPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ece50 + g_005ece9c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ece6a + g_005ecea0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLGuideFunctionPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x52);
  ((GuideManager *)this)->shareManager();
  ((GuideManager *)this)->nextStep();
  return;
}

BLGuideFunctionPresenter::BLGuideFunctionPresenter()
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
  iVar3 = *(int *)(&g_005ecf06 + g_005ecf60);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 0xffffff7f, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ecf36 + g_005ecf64,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLGuideFunctionPresenter::create(BLGuideFunctionView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLGuideFunctionPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLGuideFunctionPresenter::onEnter()
{
  undefined4 p4 = 0;

  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)((BLGuideFunctionView *)*(undefined4 *)(((int)this) + 0x18))->getBtnClick();
  pcVar2 = *(code **)(*piVar1 + 0x1d4);
  (*pcVar2)(piVar1,0xffffff7f,*piVar1,pcVar2,p4);
  return;
}

void BLGuideFunctionPresenter::initWithView(BLGuideFunctionView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLGuideFunctionView *)p1)->getBtnClick();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005ecfe0 + g_005ecfe8),0,0x20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLGuideFunctionPresenter::refreshUI(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
