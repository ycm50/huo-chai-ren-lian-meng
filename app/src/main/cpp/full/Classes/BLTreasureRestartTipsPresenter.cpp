#include "BLTreasureRestartTipsPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLTreasureRestartTipsView.h"
#include "TreasureDataManager.h"
#include "TreasureInfoDynamicData.h"
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
extern "C" unsigned long UNK_006ab4f0;
extern "C" unsigned long UNK_006ab50a;
extern "C" unsigned long UNK_006ab550;
extern "C" unsigned long UNK_006ab578;
extern "C" unsigned long UNK_006ab5d6;
extern "C" unsigned long UNK_006ab5ee;
extern "C" unsigned long UNK_006ab606;
extern "C" unsigned long UNK_006ab67e;
extern "C" unsigned long UNK_006ab69e;
extern "C" unsigned long _UNK_006ab53c;
extern "C" unsigned long _UNK_006ab540;
extern "C" unsigned long _UNK_006ab554;
extern "C" unsigned long _UNK_006ab57c;
extern "C" unsigned long _UNK_006ab5dc;
extern "C" unsigned long _UNK_006ab634;
extern "C" unsigned long _UNK_006ab638;
extern "C" unsigned long _UNK_006ab6ac;
extern "C" unsigned long _UNK_006ab6b0;
extern "C" unsigned long g_006ab4f0;
extern "C" unsigned long g_006ab50a;
extern "C" unsigned long g_006ab53c;
extern "C" unsigned long g_006ab540;
extern "C" unsigned long g_006ab550;
extern "C" unsigned long g_006ab554;
extern "C" unsigned long g_006ab578;
extern "C" unsigned long g_006ab57c;
extern "C" unsigned long g_006ab5d6;
extern "C" unsigned long g_006ab5dc;
extern "C" unsigned long g_006ab5ee;
extern "C" unsigned long g_006ab606;
extern "C" unsigned long g_006ab634;
extern "C" unsigned long g_006ab638;
extern "C" unsigned long g_006ab67e;
extern "C" unsigned long g_006ab69e;
extern "C" unsigned long g_006ab6ac;
extern "C" unsigned long g_006ab6b0;
bool BLTreasureRestartTipsPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLTreasureRestartTipsPresenter::~BLTreasureRestartTipsPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006ab4f0 + g_006ab53c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006ab50a + g_006ab540,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTreasureRestartTipsPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x1f9);
  return;
}

void BLTreasureRestartTipsPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(((int)this) + 0x1c) == 1) {
    iVar1 = ((TreasureDataManager *)this)->getInstance();
    *(undefined1 *)(*(int *)(iVar1 + 0x6c) + 0x3c) = 1;
    iVar1 = ((TreasureDataManager *)this)->getInstance();
    ((TreasureInfoDynamicData *)*(undefined4 *)(iVar1 + 0x6c))->updateGameOverData();
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar2)->removeUIByID(0x1f9);
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar2)->showUIById(0x1f6);
    ((TreasureDataManager *)this)->getInstance();
    ((TreasureDataManager *)this)->addRewardToBagOnGetReward();
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)&g_006ab5d6 + g_006ab5dc);
  }
  return;
}

BLTreasureRestartTipsPresenter::BLTreasureRestartTipsPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006ab5ee + g_006ab634);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006ab606 + g_006ab638,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 1;
  return;
}

undefined4 BLTreasureRestartTipsPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTreasureRestartTipsPresenter::initWithView(BLTreasureRestartTipsView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLTreasureRestartTipsView *)p1)->getBtnSure();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006ab67e + g_006ab6ac),0,0x20);
  piVar1 = (int *)((BLTreasureRestartTipsView *)*(undefined4 *)(((int)this) + 0x18))->getBtnCancle();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006ab69e + g_006ab6b0),0,0x20);
  return;
}

void BLTreasureRestartTipsPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  return;
}

void BLTreasureRestartTipsPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTreasureRestartTipsPresenter::initWithData(TreasureRestartTipsType p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}
