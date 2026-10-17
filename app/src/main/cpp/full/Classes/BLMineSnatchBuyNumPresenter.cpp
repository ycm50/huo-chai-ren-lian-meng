#include "BLMineSnatchBuyNumPresenter.h"
#include "BLMineSnatchBuyNumView.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "MineData.h"
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
extern "C" unsigned long UNK_005a5954;
extern "C" unsigned long UNK_005a596e;
extern "C" unsigned long UNK_005a59b4;
extern "C" unsigned long UNK_005a59dc;
extern "C" unsigned long UNK_005a5a02;
extern "C" unsigned long UNK_005a5a30;
extern "C" unsigned long UNK_005a5aee;
extern "C" unsigned long UNK_005a5b0e;
extern "C" unsigned long UNK_005a5b7c;
extern "C" unsigned long _UNK_005a59a0;
extern "C" unsigned long _UNK_005a59a4;
extern "C" unsigned long _UNK_005a59b8;
extern "C" unsigned long _UNK_005a59e0;
extern "C" unsigned long _UNK_005a5a5c;
extern "C" unsigned long _UNK_005a5a60;
extern "C" unsigned long _UNK_005a5b90;
extern "C" unsigned long _UNK_005a5b94;
extern "C" unsigned long _UNK_005a5b98;
extern "C" unsigned long g_005a5954;
extern "C" unsigned long g_005a596e;
extern "C" unsigned long g_005a59a0;
extern "C" unsigned long g_005a59a4;
extern "C" unsigned long g_005a59b4;
extern "C" unsigned long g_005a59b8;
extern "C" unsigned long g_005a59dc;
extern "C" unsigned long g_005a59e0;
extern "C" unsigned long g_005a5a02;
extern "C" unsigned long g_005a5a30;
extern "C" unsigned long g_005a5a5c;
extern "C" unsigned long g_005a5a60;
extern "C" unsigned long g_005a5aee;
extern "C" unsigned long g_005a5b0e;
extern "C" unsigned long g_005a5b7c;
extern "C" unsigned long g_005a5b90;
extern "C" unsigned long g_005a5b94;
extern "C" unsigned long g_005a5b98;
bool BLMineSnatchBuyNumPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineSnatchBuyNumPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchBuyNumPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchBuyNumPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchBuyNumPresenter::tick(float p1)
{
  return;
}

BLMineSnatchBuyNumPresenter::~BLMineSnatchBuyNumPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a5954 + g_005a59a0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a596e + g_005a59a4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMineSnatchBuyNumPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x10b);
  return;
}

BLMineSnatchBuyNumPresenter::BLMineSnatchBuyNumPresenter()
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
  iVar3 = *(int *)(&g_005a5a02 + g_005a5a5c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a5a30 + g_005a5a60,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMineSnatchBuyNumPresenter::onEnter()
{
  return;
}

void BLMineSnatchBuyNumPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLMineSnatchBuyNumPresenter::create(BLMineSnatchBuyNumView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLMineSnatchBuyNumPresenter::onBtnOK(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  iVar2 = (undefined4)(intptr_t)(((DataManager *)uVar1)->isEnoughVirNumber(2, *(undefined4 *)(((int)this) + 0x1c), 1));
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((sir::singleton<MineData, 0> *)this)->instance());
    ((MineData *)uVar1)->GetDataFromNet(0xb, 1, 0);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->removeUIByID(0x10b);
  }
  return;
}

void BLMineSnatchBuyNumPresenter::initWithView(BLMineSnatchBuyNumView* p1)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_1c [8];
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 300) + 0x254))
            (*(int **)(p1 + 300),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a5aee + (intptr_t)(g_005a5b90))),0,0x20)
  ;
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x130);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005a5b0e + (intptr_t)(g_005a5b94))),0,0x20);
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineData, 0> *)this)->instance());
  uVar3 = (undefined4)(*(undefined4 *)(iVar2 + 0x80));
  func_0079e53c(auStack_1c,iVar2 + 0x90);
  *(undefined4 *)(((int)this) + 0x1c) = uVar3;
  func_0079e2bc(auStack_1c);
  iVar2 = (undefined4)(intptr_t)(((sir::singleton<MineDealData, 0> *)this)->instance());
  *(undefined4 *)(iVar2 + 0xa8) = *(undefined4 *)(((int)this) + 0x1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  pcVar4 = *(code **)(*piVar1 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005a5b7c + (intptr_t)(g_005a5b98)), *(undefined4 *)(((int)this) + 0x1c));
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar4)(piVar1,uVar3);
  return;
}
