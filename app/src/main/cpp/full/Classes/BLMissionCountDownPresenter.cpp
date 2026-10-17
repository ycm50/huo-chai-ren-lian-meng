#include "BLMissionCountDownPresenter.h"
#include "CCAction.h"
#include "CCNotificationCenter.h"
#include "CCNode.h"
#include "CCActionInstant.h"
#include "CCActionInterval.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "BLMissionCountDownView.h"
#include "CCTouch.h"
#include "CCDirector.h"
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
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b4e2c;
extern "C" unsigned long UNK_005b4e46;
extern "C" unsigned long UNK_005b4e8c;
extern "C" unsigned long UNK_005b4eb4;
extern "C" unsigned long UNK_005b503a;
extern "C" unsigned long UNK_005b5052;
extern "C" unsigned long _DAT_005b500c;
extern "C" unsigned long _DAT_005b5010;
extern "C" unsigned long _DAT_005b5014;
extern "C" unsigned long _DAT_005b5018;
extern "C" unsigned long _DAT_005b501c;
extern "C" unsigned long _DAT_005b5020;
extern "C" unsigned long _DAT_005b5024;
extern "C" unsigned long _DAT_005b5028;
extern "C" unsigned long _UNK_005b4e78;
extern "C" unsigned long _UNK_005b4e7c;
extern "C" unsigned long _UNK_005b4e90;
extern "C" unsigned long _UNK_005b4eb8;
extern "C" unsigned long _UNK_005b5080;
extern "C" unsigned long _UNK_005b5084;
extern "C" unsigned long g_005b4e2c;
extern "C" unsigned long g_005b4e46;
extern "C" unsigned long g_005b4e78;
extern "C" unsigned long g_005b4e7c;
extern "C" unsigned long g_005b4e8c;
extern "C" unsigned long g_005b4e90;
extern "C" unsigned long g_005b4eb4;
extern "C" unsigned long g_005b4eb8;
extern "C" unsigned long g_005b500c;
extern "C" unsigned long g_005b5010;
extern "C" unsigned long g_005b5014;
extern "C" unsigned long g_005b5018;
extern "C" unsigned long g_005b501c;
extern "C" unsigned long g_005b5020;
extern "C" unsigned long g_005b5024;
extern "C" unsigned long g_005b5028;
extern "C" unsigned long g_005b503a;
extern "C" unsigned long g_005b5052;
extern "C" unsigned long g_005b5080;
extern "C" unsigned long g_005b5084;
bool BLMissionCountDownPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLMissionCountDownPresenter::~BLMissionCountDownPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005b4e2c + g_005b4e78);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b4e46 + g_005b4e7c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLMissionCountDownPresenter::BLMissionCountDownPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005b503a + g_005b5080);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b5052 + g_005b5084,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 3;
  return;
}

undefined4 BLMissionCountDownPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionCountDownPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

void BLMissionCountDownPresenter::onExit()
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

void BLMissionCountDownPresenter::updateWithTime(int p1)
{
  int iVar1;
  
  iVar1 = 3;
  if (0 < p1) {
    iVar1 = p1;
  }
  *(int *)(((int)this) + 0x1c) = iVar1;
  BLMissionCountDownPresenter::showAnimate();
  return;
}

void BLMissionCountDownPresenter::tick(float p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLMissionCountDownPresenter::showAnimate()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  uVar1 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x10c));
  if (*(int *)(((int)this) + 0x1c) < 1) {
    ((cocos2d::CCNode *)(uVar1))->stopAllActions();
    piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)(uVar1))->postNotification((char const*)"MSG_MISSION_COUNTDOWN_END");
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(g_005b5010);
  }
  else {
    ((cocos2d::CCNode *)(uVar1))->stopAllActions();
    piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,1);
    uVar1 = (undefined4)(*(undefined4 *)(((int)this) + 0x1c));
    piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
    pcVar6 = *(code **)(*piVar2 + 0x234);
    func_0079e43c(&uStack_d4,0x18);
    func_0079e44c(auStack_cc,uVar1);
    func_0079e45c(auStack_d8,g_005b5014 + 0x5b4f3e,&uStack_dc);
    func_0079e46c(&uStack_dc,auStack_c8);
    func_0079e2bc(auStack_d8);
    func_0079e47c(&uStack_d4);
    (*pcVar6)(piVar2,uStack_dc);
    func_0079e2bc(&uStack_dc);
    piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
    (**(code **)(*(int *)(piVar2) + (0x40)))(piVar2,0x3f800000);
    piVar2 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
    (**(code **)(*(int *)(piVar2) + (0x19c)))(piVar2,0xff);
    uVar3 = (undefined4)(g_005b501c);
    uVar1 = (undefined4)(g_005b5018);
    *(int *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x1c) + -1;
    uVar1 = (undefined4)(cocos2d::CCScaleTo::create(uVar3, uVar1));
    uVar3 = (undefined4)(cocos2d::CCFadeIn::create(g_005b501c));
    uVar1 = (undefined4)(cocos2d::CCSpawn::create((cocos2d::CCFiniteTimeAction*)uVar1, uVar3, 0));
    uStack_d4 = (undefined4)(*(undefined4 *)(g_005b5020 + 0x5b4fb2));
    uStack_d0 = (undefined4)(0);
    uVar3 = (undefined4)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/));
    uVar7 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x10c));
    uVar4 = (undefined4)(cocos2d::CCDelayTime::create(g_005b5024));
    uVar5 = (undefined4)(cocos2d::CCDelayTime::create(g_005b5028));
    uVar1 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)uVar4, uVar1, uVar5, uVar3, 0));
    ((cocos2d::CCNode *)(uVar7))->runAction((cocos2d::CCAction*)uVar1);
  }
  return;
}

void BLMissionCountDownPresenter::initWithView(BLMissionCountDownView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}
