#include "BLMonthlyContractPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLBaoYueXiangQingPresenter.h"
#include "BLBaoYueXiangQingView.h"
#include "BLJingJiGuiZePresenter.h"
#include "BLJingJiGuiZeView.h"
#include "BLLeakUtils.h"
#include "BLListButton.h"
#include "BLMonthlyContractView.h"
#include "MonthlyContractData.h"
#include "PlatformHelp.h"
#include "Toast.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00547f74;
extern "C" unsigned long UNK_00547f94;
extern "C" unsigned long UNK_00547fd8;
extern "C" unsigned long UNK_00548000;
extern "C" unsigned long UNK_00548020;
extern "C" unsigned long UNK_00548054;
extern "C" unsigned long UNK_0054809e;
extern "C" unsigned long UNK_005480a0;
extern "C" unsigned long UNK_005480ba;
extern "C" unsigned long UNK_005480bc;
extern "C" unsigned long UNK_005480d0;
extern "C" unsigned long UNK_005480f0;
extern "C" unsigned long UNK_005480f8;
extern "C" unsigned long UNK_00548100;
extern "C" unsigned long UNK_0054816a;
extern "C" unsigned long UNK_0054819e;
extern "C" unsigned long UNK_005481e4;
extern "C" unsigned long UNK_005481e6;
extern "C" unsigned long UNK_00548224;
extern "C" unsigned long UNK_005482be;
extern "C" unsigned long UNK_005482de;
extern "C" unsigned long UNK_005482fc;
extern "C" unsigned long UNK_0054831a;
extern "C" unsigned long UNK_005483ee;
extern "C" unsigned long UNK_00548424;
extern "C" unsigned long UNK_0054843a;
extern "C" unsigned long UNK_00548460;
extern "C" unsigned long UNK_0054846a;
extern "C" unsigned long UNK_00548480;
extern "C" unsigned long _UNK_00547fc4;
extern "C" unsigned long _UNK_00547fc8;
extern "C" unsigned long _UNK_00547fdc;
extern "C" unsigned long _UNK_00548004;
extern "C" unsigned long _UNK_00548024;
extern "C" unsigned long _UNK_00548038;
extern "C" unsigned long _UNK_00548078;
extern "C" unsigned long _UNK_0054807c;
extern "C" unsigned long _UNK_0054813c;
extern "C" unsigned long _UNK_00548140;
extern "C" unsigned long _UNK_00548144;
extern "C" unsigned long _UNK_00548148;
extern "C" unsigned long _UNK_0054814c;
extern "C" unsigned long _UNK_00548150;
extern "C" unsigned long _UNK_00548154;
extern "C" unsigned long _UNK_00548158;
extern "C" unsigned long _UNK_005481c8;
extern "C" unsigned long _UNK_005481cc;
extern "C" unsigned long _UNK_005481f0;
extern "C" unsigned long _UNK_005481f4;
extern "C" unsigned long _UNK_00548228;
extern "C" unsigned long _UNK_00548348;
extern "C" unsigned long _UNK_0054834c;
extern "C" unsigned long _UNK_00548350;
extern "C" unsigned long _UNK_00548354;
extern "C" unsigned long _UNK_0054848c;
extern "C" unsigned long _UNK_00548490;
extern "C" unsigned long _UNK_00548494;
extern "C" unsigned long _UNK_00548498;
extern "C" unsigned long _UNK_0054849c;
extern "C" unsigned long _UNK_005484a0;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_00547f74;
extern "C" unsigned long g_00547f94;
extern "C" unsigned long g_00547fc4;
extern "C" unsigned long g_00547fc8;
extern "C" unsigned long g_00547fd8;
extern "C" unsigned long g_00547fdc;
extern "C" unsigned long g_00548000;
extern "C" unsigned long g_00548004;
extern "C" unsigned long g_00548020;
extern "C" unsigned long g_00548024;
extern "C" unsigned long g_00548038;
extern "C" unsigned long g_00548054;
extern "C" unsigned long g_00548078;
extern "C" unsigned long g_0054807c;
extern "C" unsigned long g_0054809e;
extern "C" unsigned long g_005480a0;
extern "C" unsigned long g_005480ba;
extern "C" unsigned long g_005480bc;
extern "C" unsigned long g_005480d0;
extern "C" unsigned long g_005480f0;
extern "C" unsigned long g_005480f8;
extern "C" unsigned long g_00548100;
extern "C" unsigned long g_0054813c;
extern "C" unsigned long g_00548140;
extern "C" unsigned long g_00548144;
extern "C" unsigned long g_00548148;
extern "C" unsigned long g_0054814c;
extern "C" unsigned long g_00548150;
extern "C" unsigned long g_00548154;
extern "C" unsigned long g_00548158;
extern "C" unsigned long g_0054816a;
extern "C" unsigned long g_0054819e;
extern "C" unsigned long g_005481c8;
extern "C" unsigned long g_005481cc;
extern "C" unsigned long g_005481e4;
extern "C" unsigned long g_005481e6;
extern "C" unsigned long g_005481f0;
extern "C" unsigned long g_005481f4;
extern "C" unsigned long g_00548224;
extern "C" unsigned long g_00548228;
extern "C" unsigned long g_005482be;
extern "C" unsigned long g_005482de;
extern "C" unsigned long g_005482fc;
extern "C" unsigned long g_0054831a;
extern "C" unsigned long g_00548348;
extern "C" unsigned long g_0054834c;
extern "C" unsigned long g_00548350;
extern "C" unsigned long g_00548354;
extern "C" unsigned long g_005483ee;
extern "C" unsigned long g_00548424;
extern "C" unsigned long g_0054843a;
extern "C" unsigned long g_00548460;
extern "C" unsigned long g_0054846a;
extern "C" unsigned long g_00548480;
extern "C" unsigned long g_0054848c;
extern "C" unsigned long g_00548490;
extern "C" unsigned long g_00548494;
extern "C" unsigned long g_00548498;
extern "C" unsigned long g_0054849c;
extern "C" unsigned long g_005484a0;
bool BLMonthlyContractPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMonthlyContractPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMonthlyContractPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMonthlyContractPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMonthlyContractPresenter::tick(float p1)
{
  return;
}

BLMonthlyContractPresenter::~BLMonthlyContractPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00547f74 + g_00547fc4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x40;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x70;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00547f94 + g_00547fc8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMonthlyContractPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00548038);
  return;
}



BLMonthlyContractPresenter::BLMonthlyContractPresenter()
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
  iVar3 = *(int *)(&g_0054816a + g_005481c8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x40;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x70;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0054819e + g_005481cc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


void BLMonthlyContractPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLMonthlyContractPresenter::onMonthlyPurchased(cocos2d::CCObject* p1)
{
  cocos2d::CCLog((char const*)&g_00548224 + g_00548228);
  return;
}





void BLMonthlyContractPresenter::listButtonClickAtIndex(BLListButton* p1, int p2)
{
                    /* WARNING: Could not recover jumptable at 0x00548020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&g_00548020 + g_00548024))(((int)this) + -0x18);
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void BLMonthlyContractPresenter::onHelp(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p2);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = ((UIManager *)uVar1)->showUIById(g_00548078);
  func_0079e45c(&uStack_14,&g_00548054 + g_0054807c,&uStack_18);
  uVar1 = (undefined4)(((BLJingJiGuiZeView *)*(undefined4 *)(iVar2 + 0x24))->getPresenter());
  ((BLJingJiGuiZePresenter *)uVar1)->setGuize((char const*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMonthlyContractPresenter::onXiangQing(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonthlyContractPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonthlyContractPresenter::refreshUI()
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<MonthlyContractData, 0> *)this)->instance());
  iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 4));
  if (iVar1 == 2) {
    ((BLMonthlyContractView *)this)->refresh(*(undefined4 *)(((int)this) + 0x1c));
    uVar3 = (undefined4)(1);
    uVar2 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x154));
    goto code_r0x0054829c;
  }
  if (iVar1 == 3) {
code_r0x0054828c:
    ((BLMonthlyContractView *)(*(undefined4 *)(((int)this) + 0x1c)))->refresh(0);
    uVar3 = (undefined4)(0);
    uVar2 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x154));
  }
  else {
    if (iVar1 != 1) {
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<MonthlyContractData, 0> *)this)->instance());
      iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0xc));
      if (iVar1 == 1) {
        ((BLMonthlyContractView *)(*(undefined4 *)(((int)this) + 0x1c)))->refresh(1);
        uVar2 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x154));
        uVar3 = (undefined4)(1);
        goto code_r0x0054829c;
      }
      if (iVar1 == 2) goto code_r0x0054828c;
      if (iVar1 != 0) {
        return;
      }
    }
    ((BLMonthlyContractView *)(*(undefined4 *)(((int)this) + 0x1c)))->refresh(2);
    uVar3 = (undefined4)(2);
    uVar2 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x154));
  }
code_r0x0054829c:
  ((BLListButton *)(uVar2))->setSelectIndex(uVar3);
  return;
}

void BLMonthlyContractPresenter::initWithView(BLMonthlyContractView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x124) + 0x254))
            (*(int **)(p1 + 0x124),((int)this),*(undefined4 *)(&g_005482be + g_00548348),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x130);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005482de + g_0054834c),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x144);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005482fc + g_00548350),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x164);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_0054831a + g_00548354),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x154);
  (**(code **)(*piVar1 + 0x24c))(piVar1,((int)this) + 0x18);
  BLMonthlyContractPresenter::refreshUI();
  return;
}

int * BLMonthlyContractPresenter::create(BLMonthlyContractView* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)::operator new(0x20);
  ::new ((void *)piVar1) BLMonthlyContractPresenter();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
  iVar2 = (undefined4)((void)(((BLMonthlyContractPresenter *)(piVar1))->initWithView((BLMonthlyContractView*)((int)this))),(intptr_t)0);
  if (iVar2 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar1))->autorelease();
  }
  return (int *)(piVar1);
}

void BLMonthlyContractPresenter::onMain(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<MonthlyContractData, 0> *)this)->instance());
  iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 4));
  if (iVar1 == 0) {
    iVar1 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x1c) + 0x10c));
    if (iVar1 == 1) {
code_r0x0054843a:
      uVar2 = (undefined4)(0x12);
    }
    else if (iVar1 == 2) {
code_r0x005483ee:
      uVar2 = (undefined4)(10);
    }
    else {
      if (iVar1 != 0) {
        return;
      }
code_r0x00548484:
      uVar2 = (undefined4)(0x19);
    }
    ((PlatformHelp *)this)->purchaseMonthlyContract(uVar2);
  }
  else {
    if (iVar1 == 1) {
      iVar1 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x1c) + 0x10c));
      if (iVar1 == 1) {
        iVar1 = (undefined4)(intptr_t)(((sir::singleton<MonthlyContractData, 0> *)this)->instance());
        *(undefined1 *)(iVar1 + 0x10) = 1;
        goto code_r0x0054843a;
      }
      if (iVar1 != 2) {
        if (iVar1 != 0) {
          return;
        }
        iVar1 = (undefined4)(intptr_t)(((sir::singleton<MonthlyContractData, 0> *)this)->instance());
        *(undefined1 *)(iVar1 + 0x10) = 1;
        goto code_r0x00548484;
      }
      ((sir::singleton<MonthlyContractData, 0> *)this)->instance();
      iVar1 = (undefined4)(intptr_t)(((MonthlyContractData *)this)->isTodayGet());
      if (iVar1 == 0) goto code_r0x005483ee;
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      puVar3 = (unsigned char *)((char *)&g_005483ee + (intptr_t)(g_0054848c));
    }
    else if (iVar1 == 2) {
      iVar1 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x1c) + 0x10c));
      if (iVar1 == 1) {
        ((sir::singleton<MonthlyContractData, 0> *)this)->instance();
        iVar1 = (undefined4)(intptr_t)(((MonthlyContractData *)this)->isTodayGet());
        if (iVar1 == 0) goto code_r0x0054843a;
        uVar2 = (undefined4)(((Toast *)this)->sharedToast());
        puVar3 = (unsigned char *)((char *)&g_0054843a + (intptr_t)(g_00548494));
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 != 0) {
            return;
          }
          iVar1 = (undefined4)(intptr_t)(((sir::singleton<MonthlyContractData, 0> *)this)->instance());
          *(undefined1 *)(iVar1 + 0x10) = 1;
          goto code_r0x00548484;
        }
        uVar2 = (undefined4)(((Toast *)this)->sharedToast());
        puVar3 = (unsigned char *)((char *)&g_00548424 + (intptr_t)(g_00548490));
      }
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      iVar1 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x1c) + 0x10c));
      if (iVar1 == 1) {
        uVar2 = (undefined4)(((Toast *)this)->sharedToast());
        puVar3 = (unsigned char *)((char *)&g_0054846a + (intptr_t)(g_0054849c));
      }
      else if (iVar1 == 2) {
        uVar2 = (undefined4)(((Toast *)this)->sharedToast());
        puVar3 = (unsigned char *)((char *)&g_00548460 + (intptr_t)(g_00548498));
      }
      else {
        if (iVar1 != 0) {
          return;
        }
        ((sir::singleton<MonthlyContractData, 0> *)this)->instance();
        iVar1 = (undefined4)(intptr_t)(((MonthlyContractData *)this)->isTodayGet());
        if (iVar1 == 0) goto code_r0x00548484;
        uVar2 = (undefined4)(((Toast *)this)->sharedToast());
        puVar3 = (unsigned char *)((char *)&g_00548480 + (intptr_t)(g_005484a0));
      }
    }
    ((Toast *)(uVar2))->showToast((char const*)puVar3);
  }
  return;
}
