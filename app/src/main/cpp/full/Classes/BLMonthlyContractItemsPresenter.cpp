#include "BLMonthlyContractItemsPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLMonthlyContractItemsView.h"
#include "BackPackData.h"
#include "DataManager.h"
#include "EquipData.h"
#include "ItemData.h"
#include "MonthlyContractData.h"
#include "UIManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079ea14(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005479c8;
extern "C" unsigned long UNK_005479e2;
extern "C" unsigned long UNK_00547a28;
extern "C" unsigned long UNK_00547a50;
extern "C" unsigned long UNK_00547a66;
extern "C" unsigned long UNK_00547a94;
extern "C" unsigned long UNK_00547b06;
extern "C" unsigned long UNK_00547bec;
extern "C" unsigned long UNK_00547dce;
extern "C" unsigned long UNK_00547e30;
extern "C" unsigned long _UNK_00547a14;
extern "C" unsigned long _UNK_00547a18;
extern "C" unsigned long _UNK_00547a2c;
extern "C" unsigned long _UNK_00547a54;
extern "C" unsigned long _UNK_00547ac0;
extern "C" unsigned long _UNK_00547ac4;
extern "C" unsigned long _UNK_00547b14;
extern "C" unsigned long _UNK_00547eac;
extern "C" unsigned long _UNK_00547eb0;
extern "C" unsigned long _UNK_00547eb4;
extern "C" unsigned long _UNK_00547eb8;
extern "C" unsigned long _UNK_00547ebc;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_005479c8;
extern "C" unsigned long g_005479e2;
extern "C" unsigned long g_00547a14;
extern "C" unsigned long g_00547a18;
extern "C" unsigned long g_00547a28;
extern "C" unsigned long g_00547a2c;
extern "C" unsigned long g_00547a50;
extern "C" unsigned long g_00547a54;
extern "C" unsigned long g_00547a66;
extern "C" unsigned long g_00547a94;
extern "C" unsigned long g_00547ac0;
extern "C" unsigned long g_00547ac4;
extern "C" unsigned long g_00547b06;
extern "C" unsigned long g_00547b14;
extern "C" unsigned long g_00547bec;
extern "C" unsigned long g_00547dce;
extern "C" unsigned long g_00547e30;
extern "C" unsigned long g_00547eac;
extern "C" unsigned long g_00547eb0;
extern "C" unsigned long g_00547eb4;
extern "C" unsigned long g_00547eb8;
extern "C" unsigned long g_00547ebc;
bool BLMonthlyContractItemsPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMonthlyContractItemsPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMonthlyContractItemsPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMonthlyContractItemsPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMonthlyContractItemsPresenter::tick(float p1)
{
  return;
}

BLMonthlyContractItemsPresenter::~BLMonthlyContractItemsPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005479c8 + g_00547a14);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005479e2 + g_00547a18,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMonthlyContractItemsPresenter::BLMonthlyContractItemsPresenter()
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
  iVar3 = *(int *)(&g_00547a66 + g_00547ac0);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00547a94 + g_00547ac4,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMonthlyContractItemsPresenter::onEnter()
{
  return;
}

void BLMonthlyContractItemsPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLMonthlyContractItemsPresenter::initWithView(BLMonthlyContractItemsView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)(&g_00547b06 + g_00547b14),0,
             0x20);
  ((BLMonthlyContractItemsView *)*(undefined4 *)(((int)this) + 0x18))->refresh();
  return;
}

int * BLMonthlyContractItemsPresenter::create(BLMonthlyContractItemsView* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)::operator new(0x1c);
  ::new ((void *)piVar1) BLMonthlyContractItemsPresenter();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
  iVar2 = (undefined4)((void)(((BLMonthlyContractItemsPresenter *)(piVar1))->initWithView((BLMonthlyContractItemsView*)((int)this))),(intptr_t)0);
  if (iVar2 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar1))->autorelease();
  }
  return (int *)(piVar1);
}

void BLMonthlyContractItemsPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
