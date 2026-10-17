#include "BLSweepBuyLocPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLSweepBuyLocView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLForwards.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "MissionSweepData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005d4a34;
extern "C" unsigned long UNK_005d4a4c;
extern "C" unsigned long UNK_005d4a64;
extern "C" unsigned long UNK_005d4ad8;
extern "C" unsigned long UNK_005d4af2;
extern "C" unsigned long UNK_005d4b38;
extern "C" unsigned long UNK_005d4b60;
extern "C" unsigned long UNK_005d4b86;
extern "C" unsigned long UNK_005d4bbc;
extern "C" unsigned long UNK_005d4c4e;
extern "C" unsigned long UNK_005d4c6e;
extern "C" unsigned long UNK_005d4c8c;
extern "C" unsigned long UNK_005d4ce2;
extern "C" unsigned long _UNK_005d4a38;
extern "C" unsigned long _UNK_005d4a50;
extern "C" unsigned long _UNK_005d4a68;
extern "C" unsigned long _UNK_005d4b24;
extern "C" unsigned long _UNK_005d4b28;
extern "C" unsigned long _UNK_005d4b3c;
extern "C" unsigned long _UNK_005d4b64;
extern "C" unsigned long _UNK_005d4be8;
extern "C" unsigned long _UNK_005d4bec;
extern "C" unsigned long _UNK_005d4d5c;
extern "C" unsigned long _UNK_005d4d60;
extern "C" unsigned long _UNK_005d4d64;
extern "C" unsigned long _UNK_005d4d68;
extern "C" unsigned long g_005d4a34;
extern "C" unsigned long g_005d4a38;
extern "C" unsigned long g_005d4a4c;
extern "C" unsigned long g_005d4a50;
extern "C" unsigned long g_005d4a64;
extern "C" unsigned long g_005d4a68;
extern "C" unsigned long g_005d4ad8;
extern "C" unsigned long g_005d4af2;
extern "C" unsigned long g_005d4b24;
extern "C" unsigned long g_005d4b28;
extern "C" unsigned long g_005d4b38;
extern "C" unsigned long g_005d4b3c;
extern "C" unsigned long g_005d4b60;
extern "C" unsigned long g_005d4b64;
extern "C" unsigned long g_005d4b86;
extern "C" unsigned long g_005d4bbc;
extern "C" unsigned long g_005d4be8;
extern "C" unsigned long g_005d4bec;
extern "C" unsigned long g_005d4c4e;
extern "C" unsigned long g_005d4c6e;
extern "C" unsigned long g_005d4c8c;
extern "C" unsigned long g_005d4ce2;
extern "C" unsigned long g_005d4d5c;
extern "C" unsigned long g_005d4d60;
extern "C" unsigned long g_005d4d64;
extern "C" unsigned long g_005d4d68;
bool BLSweepBuyLocPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSweepBuyLocPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepBuyLocPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepBuyLocPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepBuyLocPresenter::tick(float p1)
{
  return;
}

BLSweepBuyLocPresenter::~BLSweepBuyLocPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005d4ad8 + g_005d4b24);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d4af2 + g_005d4b28,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSweepBuyLocPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x19);
  return;
}

BLSweepBuyLocPresenter::BLSweepBuyLocPresenter()
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
  iVar3 = *(int *)(&g_005d4b86 + g_005d4be8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d4bbc + g_005d4bec,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLSweepBuyLocPresenter::onEnter()
{
  return;
}

void BLSweepBuyLocPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 BLSweepBuyLocPresenter::create(BLSweepBuyLocView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
undefined4 BLSweepBuyLocPresenter::initWithView(BLSweepBuyLocView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_30 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005d4c4e + (intptr_t)(g_005d4d5c))));
  uStack_2c = (undefined4)(0);
  (**(code **)(**(int **)(p1 + 0x108) + 0x254))
            (*(int **)(p1 + 0x108),((int)this),uStack_30,0,0x20);
  uStack_24 = (undefined4)(0);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005d4c6e + (intptr_t)(g_005d4d60))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005d4c8c + (intptr_t)(g_005d4d64))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
  ((DataManager *)this)->getCurrentChapter();
  uVar2 = (undefined4)(func_0079e6c0(uStack_34));
  func_0079e2bc(&uStack_34);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  pcVar6 = *(code **)(*piVar1 + 0x234);
  uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  iVar4 = (undefined4)(intptr_t)(((MissionSweepData *)uVar3)->getsweepdiamond(uVar2));
  iVar5 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  puVar7 = (unsigned char *)((char *)&g_005d4ce2 + (intptr_t)(g_005d4d68));
  cocos2d::CCString::createWithFormat((char const*)puVar7, iVar4 * *(int *)(iVar5 + 0x74));
  uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar6)(piVar1,uVar3);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
  pcVar6 = *(code **)(*piVar1 + 0x234);
  uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  iVar4 = (undefined4)(intptr_t)(((MissionSweepData *)uVar3)->getsweepcoin(uVar2));
  iVar5 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  cocos2d::CCString::createWithFormat((char const*)puVar7, iVar4 * *(int *)(iVar5 + 0x74));
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar6)(piVar1,uVar2);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  pcVar6 = *(code **)(*piVar1 + 0x234);
  iVar4 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  cocos2d::CCString::createWithFormat((char const*)puVar7, *(undefined4 *)(iVar4 + 0x74));
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar6)(piVar1,uVar2);
  return 1;
}

void BLSweepBuyLocPresenter::onBtnDiamond(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uStack_20;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p4);
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  ((DataManager *)this)->getCurrentChapter();
  uVar1 = (undefined4)(func_0079e6c0(uStack_14));
  func_0079e2bc(&uStack_14);
  uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
  uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  iVar4 = (undefined4)(intptr_t)(((MissionSweepData *)uVar3)->getsweepdiamond(uVar1));
  iVar5 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  iVar4 = (undefined4)(intptr_t)(((DataManager *)uVar2)->isEnoughVirNumber(2, iVar4 * *(int *)(iVar5 + 0x74), 1));
  uStack_20 = (undefined4)((int *)((int)this));
  if (iVar4 != 0) {
    piVar6 = (int *)((DataManager *)this)->shareDataManager();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x28)))());
    uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    iVar4 = (undefined4)(intptr_t)(((MissionSweepData *)uVar3)->getsweepdiamond(uVar1));
    iVar5 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    uVar7 = (undefined4)(intptr_t)(func_0079e734(iVar4 * *(int *)(iVar5 + 0x74)));
    uStack_20 = (undefined4)(1);
    ((UserData *)uVar2)->subVirNumber(2, (int)uVar7, (int)((ulonglong)uVar7 >> 0x20));
    uVar1 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    iVar4 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    uVar2 = (undefined4)(5);
    if (*(int *)(iVar4 + 0x78) != 1) {
      uVar2 = (undefined4)(1);
    }
    ((MissionSweepData *)uVar1)->minusleftdata(uVar2);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->removeUIByID(0x19);
    uVar1 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    iVar4 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    uVar2 = (undefined4)(5);
    if (*(int *)(iVar4 + 0x78) != 1) {
      uVar2 = (undefined4)(1);
    }
    ((MissionSweepData *)uVar1)->getCopper(uVar2);
    uVar1 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    iVar4 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    uVar2 = (undefined4)(5);
    if (*(int *)(iVar4 + 0x78) != 1) {
      uVar2 = (undefined4)(1);
    }
    ((MissionSweepData *)uVar1)->getItems(uVar2);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->removeUIByID(0x17);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->showUIById(0x18);
  }
  return;
}

void BLSweepBuyLocPresenter::onBtnCoin(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uStack_20;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p4);
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  ((DataManager *)this)->getCurrentChapter();
  uVar1 = (undefined4)(func_0079e6c0(uStack_14));
  func_0079e2bc(&uStack_14);
  uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
  uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  iVar4 = (undefined4)(intptr_t)(((MissionSweepData *)uVar3)->getsweepcoin(uVar1));
  iVar5 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
  iVar4 = (undefined4)(intptr_t)(((DataManager *)uVar2)->isEnoughVirNumber(1, iVar4 * *(int *)(iVar5 + 0x74), 1));
  uStack_20 = (undefined4)((int *)((int)this));
  if (iVar4 != 0) {
    piVar6 = (int *)((DataManager *)this)->shareDataManager();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x28)))());
    uVar3 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    iVar4 = (undefined4)(intptr_t)(((MissionSweepData *)uVar3)->getsweepcoin(uVar1));
    iVar5 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    uVar7 = (undefined4)(intptr_t)(func_0079e734(iVar4 * *(int *)(iVar5 + 0x74)));
    uStack_20 = (undefined4)(1);
    ((UserData *)uVar2)->subVirNumber(1, (int)uVar7, (int)((ulonglong)uVar7 >> 0x20));
    uVar1 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    iVar4 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    uVar2 = (undefined4)(5);
    if (*(int *)(iVar4 + 0x78) != 1) {
      uVar2 = (undefined4)(1);
    }
    ((MissionSweepData *)uVar1)->minusleftdata(uVar2);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->removeUIByID(0x19);
    uVar1 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    iVar4 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    uVar2 = (undefined4)(5);
    if (*(int *)(iVar4 + 0x78) != 1) {
      uVar2 = (undefined4)(1);
    }
    ((MissionSweepData *)uVar1)->getCopper(uVar2);
    uVar1 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    iVar4 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    uVar2 = (undefined4)(5);
    if (*(int *)(iVar4 + 0x78) != 1) {
      uVar2 = (undefined4)(1);
    }
    ((MissionSweepData *)uVar1)->getItems(uVar2);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->removeUIByID(0x17);
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar1)->showUIById(0x18);
  }
  return;
}
