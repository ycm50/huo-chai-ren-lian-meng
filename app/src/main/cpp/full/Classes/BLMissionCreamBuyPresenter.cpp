#include "BLMissionCreamBuyPresenter.h"
#include "BLMissionCreamBuyView.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "MirrorDataManager.h"
#include "MissionCreamSelectData.h"
#include "MissionValleryData.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e3bc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079ea04(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005c24b8;
extern "C" unsigned long UNK_005c24d2;
extern "C" unsigned long UNK_005c2518;
extern "C" unsigned long UNK_005c2540;
extern "C" unsigned long UNK_005c2566;
extern "C" unsigned long UNK_005c2594;
extern "C" unsigned long UNK_005c2622;
extern "C" unsigned long UNK_005c2642;
extern "C" unsigned long UNK_005c2692;
extern "C" unsigned long UNK_005c2728;
extern "C" unsigned long UNK_005c274e;
extern "C" unsigned long UNK_005c27ee;
extern "C" unsigned long UNK_005c280e;
extern "C" unsigned long UNK_005c2846;
extern "C" unsigned long UNK_005c2862;
extern "C" unsigned long UNK_005c2872;
extern "C" unsigned long UNK_005c287e;
extern "C" unsigned long UNK_005c28d4;
extern "C" unsigned long UNK_005c28ee;
extern "C" unsigned long UNK_005c2922;
extern "C" unsigned long _UNK_005c2504;
extern "C" unsigned long _UNK_005c2508;
extern "C" unsigned long _UNK_005c251c;
extern "C" unsigned long _UNK_005c2544;
extern "C" unsigned long _UNK_005c25c4;
extern "C" unsigned long _UNK_005c25c8;
extern "C" unsigned long _UNK_005c2654;
extern "C" unsigned long _UNK_005c2658;
extern "C" unsigned long _UNK_005c26d8;
extern "C" unsigned long _UNK_005c2968;
extern "C" unsigned long _UNK_005c296c;
extern "C" unsigned long _UNK_005c2970;
extern "C" unsigned long _UNK_005c2974;
extern "C" unsigned long _UNK_005c2978;
extern "C" unsigned long _UNK_005c297c;
extern "C" unsigned long _UNK_005c2980;
extern "C" unsigned long _UNK_005c2984;
extern "C" unsigned long _UNK_005c2988;
extern "C" unsigned long _UNK_005c298c;
extern "C" unsigned long _UNK_005c2990;
extern "C" unsigned long _UNK_005c2994;
extern "C" unsigned long _UNK_005c2998;
extern "C" unsigned long g_005c24b8;
extern "C" unsigned long g_005c24d2;
extern "C" unsigned long g_005c2504;
extern "C" unsigned long g_005c2508;
extern "C" unsigned long g_005c2518;
extern "C" unsigned long g_005c251c;
extern "C" unsigned long g_005c2540;
extern "C" unsigned long g_005c2544;
extern "C" unsigned long g_005c2566;
extern "C" unsigned long g_005c2594;
extern "C" unsigned long g_005c25c4;
extern "C" unsigned long g_005c25c8;
extern "C" unsigned long g_005c2622;
extern "C" unsigned long g_005c2642;
extern "C" unsigned long g_005c2654;
extern "C" unsigned long g_005c2658;
extern "C" unsigned long g_005c2692;
extern "C" unsigned long g_005c26d8;
extern "C" unsigned long g_005c2728;
extern "C" unsigned long g_005c274e;
extern "C" unsigned long g_005c27ee;
extern "C" unsigned long g_005c280e;
extern "C" unsigned long g_005c2846;
extern "C" unsigned long g_005c2862;
extern "C" unsigned long g_005c2872;
extern "C" unsigned long g_005c287e;
extern "C" unsigned long g_005c28d4;
extern "C" unsigned long g_005c28ee;
extern "C" unsigned long g_005c2922;
extern "C" unsigned long g_005c2968;
extern "C" unsigned long g_005c296c;
extern "C" unsigned long g_005c2970;
extern "C" unsigned long g_005c2974;
extern "C" unsigned long g_005c2978;
extern "C" unsigned long g_005c297c;
extern "C" unsigned long g_005c2980;
extern "C" unsigned long g_005c2984;
extern "C" unsigned long g_005c2988;
extern "C" unsigned long g_005c298c;
extern "C" unsigned long g_005c2990;
extern "C" unsigned long g_005c2994;
extern "C" unsigned long g_005c2998;
bool BLMissionCreamBuyPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMissionCreamBuyPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionCreamBuyPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionCreamBuyPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

int BLMissionCreamBuyPresenter::getMode() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLMissionCreamBuyPresenter::setMode(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

void BLMissionCreamBuyPresenter::tick(float p1)
{
  return;
}

BLMissionCreamBuyPresenter::~BLMissionCreamBuyPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005c24b8 + g_005c2504);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005c24d2 + g_005c2508,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMissionCreamBuyPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x10);
  return;
}

BLMissionCreamBuyPresenter::BLMissionCreamBuyPresenter()
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
  iVar3 = *(int *)(&g_005c2566 + g_005c25c4);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005c2594 + g_005c25c8,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(8)) = 200;
  return;
}

void BLMissionCreamBuyPresenter::onEnter()
{
  return;
}

void BLMissionCreamBuyPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLMissionCreamBuyPresenter::create(BLMissionCreamBuyView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLMissionCreamBuyPresenter::updateWithData(int p1)
{
  code *pcVar1;
  int *piVar2;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  *(undefined4 *)(((int)this) + 0x20) = p1;
  piVar2 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
  pcVar1 = *(code **)(*piVar2 + 0x234);
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,p1);
  func_0079e45c(auStack_d8,&g_005c2692 + g_005c26d8,&uStack_dc);
  func_0079e46c(&uStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  (*pcVar1)(piVar2,uStack_dc);
  func_0079e2bc(&uStack_dc);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLMissionCreamBuyPresenter::initWithView(BLMissionCreamBuyView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 300) + 0x254))
            (*(int **)(p1 + 300),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c2622 + (intptr_t)(g_005c2654))),0,0x20)
  ;
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x130);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005c2642 + (intptr_t)(g_005c2658))),0,0x20);
  return;
}

void BLMissionCreamBuyPresenter::onBtnOK(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
