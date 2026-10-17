#include "BLTreasureMenuPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCAction.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCActionInterval.h"
#include "BLLeakUtils.h"
#include "BLTreasureMenuView.h"
#include "BLVirtualItemPresenter.h"
#include "BLVirtualItemView.h"
#include "DataManager.h"
#include "Toast.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006aa48c;
extern "C" unsigned long UNK_006aa4e4;
extern "C" unsigned long UNK_006aa4fe;
extern "C" unsigned long UNK_006aa544;
extern "C" unsigned long UNK_006aa56c;
extern "C" unsigned long UNK_006aa74c;
extern "C" unsigned long UNK_006aa778;
extern "C" unsigned long UNK_006aa7a0;
extern "C" unsigned long UNK_006aa7c8;
extern "C" unsigned long UNK_006aa814;
extern "C" unsigned long UNK_006aa844;
extern "C" unsigned long UNK_006aa846;
extern "C" unsigned long UNK_006aa85e;
extern "C" unsigned long UNK_006aa860;
extern "C" unsigned long UNK_006aa878;
extern "C" unsigned long UNK_006aa87a;
extern "C" unsigned long UNK_006aa890;
extern "C" unsigned long UNK_006aa922;
extern "C" unsigned long UNK_006aa93e;
extern "C" unsigned long UNK_006aa97c;
extern "C" unsigned long UNK_006aa9ba;
extern "C" unsigned long _UNK_006aa490;
extern "C" unsigned long _UNK_006aa530;
extern "C" unsigned long _UNK_006aa534;
extern "C" unsigned long _UNK_006aa548;
extern "C" unsigned long _UNK_006aa570;
extern "C" unsigned long _UNK_006aa740;
extern "C" unsigned long _UNK_006aa7f4;
extern "C" unsigned long _UNK_006aa7f8;
extern "C" unsigned long _UNK_006aa7fc;
extern "C" unsigned long _UNK_006aa800;
extern "C" unsigned long _UNK_006aa8bc;
extern "C" unsigned long _UNK_006aa8c0;
extern "C" unsigned long _UNK_006aa8c4;
extern "C" unsigned long _UNK_006aa8c8;
extern "C" unsigned long _UNK_006aa8cc;
extern "C" unsigned long _UNK_006aa8d0;
extern "C" unsigned long _UNK_006aa8d4;
extern "C" unsigned long _UNK_006aa8d8;
extern "C" unsigned long _UNK_006aa9e4;
extern "C" unsigned long _UNK_006aa9e8;
extern "C" unsigned long _UNK_006aa9ec;
extern "C" unsigned long _UNK_006aa9f0;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_006aa48c;
extern "C" unsigned long g_006aa490;
extern "C" unsigned long g_006aa4e4;
extern "C" unsigned long g_006aa4fe;
extern "C" unsigned long g_006aa530;
extern "C" unsigned long g_006aa534;
extern "C" unsigned long g_006aa544;
extern "C" unsigned long g_006aa548;
extern "C" unsigned long g_006aa56c;
extern "C" unsigned long g_006aa570;
extern "C" unsigned long g_006aa740;
extern "C" unsigned long g_006aa74c;
extern "C" unsigned long g_006aa778;
extern "C" unsigned long g_006aa7a0;
extern "C" unsigned long g_006aa7c8;
extern "C" unsigned long g_006aa7f4;
extern "C" unsigned long g_006aa7f8;
extern "C" unsigned long g_006aa7fc;
extern "C" unsigned long g_006aa800;
extern "C" unsigned long g_006aa814;
extern "C" unsigned long g_006aa844;
extern "C" unsigned long g_006aa846;
extern "C" unsigned long g_006aa85e;
extern "C" unsigned long g_006aa860;
extern "C" unsigned long g_006aa878;
extern "C" unsigned long g_006aa87a;
extern "C" unsigned long g_006aa890;
extern "C" unsigned long g_006aa8bc;
extern "C" unsigned long g_006aa8c0;
extern "C" unsigned long g_006aa8c4;
extern "C" unsigned long g_006aa8c8;
extern "C" unsigned long g_006aa8cc;
extern "C" unsigned long g_006aa8d0;
extern "C" unsigned long g_006aa8d4;
extern "C" unsigned long g_006aa8d8;
extern "C" unsigned long g_006aa922;
extern "C" unsigned long g_006aa93e;
extern "C" unsigned long g_006aa97c;
extern "C" unsigned long g_006aa9ba;
extern "C" unsigned long g_006aa9e4;
extern "C" unsigned long g_006aa9e8;
extern "C" unsigned long g_006aa9ec;
extern "C" unsigned long g_006aa9f0;
bool BLTreasureMenuPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLTreasureMenuPresenter::~BLTreasureMenuPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006aa4e4 + g_006aa530);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006aa4fe + g_006aa534,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTreasureMenuPresenter::onRecieve(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnJiantouTop();
  (**(code **)(*piVar1 + 0x90))(piVar1,0);
  ((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getarrowup();
  ((cocos2d::CCNode *)this)->stopAllActions();
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getarrowup();
  (**(code **)(*piVar1 + 0x90))(piVar1,0);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->showUIByIdForTreasureHero(0x1f8);
  return;
}

void BLTreasureMenuPresenter::onHeroinfo(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnJiantouDown();
  (**(code **)(*piVar1 + 0x90))(piVar1,0);
  ((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getarrowdown();
  ((cocos2d::CCNode *)this)->stopAllActions();
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getarrowdown();
  (**(code **)(*piVar1 + 0x90))(piVar1,0);
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->showUIByIdForTreasureHero(0x1f7);
  return;
}

void BLTreasureMenuPresenter::updateHeroinfo(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getarrowdown();
  (**(code **)(*piVar1 + 0x90))(piVar1,1,extraout_r2,*(code **)(*piVar1 + 0x90),p4);
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnJiantouDown();
  (**(code **)(*piVar1 + 0x90))(piVar1,1);
  uVar2 = (undefined4)(cocos2d::CCBlink::create(0x3f800000, (unsigned int)1));
  uVar3 = (undefined4)(((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getarrowdown());
  uVar2 = (undefined4)(cocos2d::CCRepeatForever::create((cocos2d::CCActionInterval*)uVar2));
  ((cocos2d::CCNode *)uVar3)->runAction((cocos2d::CCAction*)uVar2);
  return;
}

void BLTreasureMenuPresenter::updateRecieve(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getarrowup();
  (**(code **)(*piVar1 + 0x90))(piVar1,1,extraout_r2,*(code **)(*piVar1 + 0x90),p4);
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnJiantouTop();
  (**(code **)(*piVar1 + 0x90))(piVar1,1);
  uVar2 = (undefined4)(cocos2d::CCBlink::create(0x3f800000, (unsigned int)1));
  uVar3 = (undefined4)(((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getarrowup());
  uVar2 = (undefined4)(cocos2d::CCRepeatForever::create((cocos2d::CCActionInterval*)uVar2));
  ((cocos2d::CCNode *)uVar3)->runAction((cocos2d::CCAction*)uVar2);
  return;
}




BLTreasureMenuPresenter::BLTreasureMenuPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [28];
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006aa814 + (intptr_t)(g_006aa8bc))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_006aa844 + (intptr_t)(g_006aa8c0))), 0, (char const*)(unsigned char *)((char *)&g_006aa846 + (intptr_t)(g_006aa8c4)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_006aa85e + (intptr_t)(g_006aa8c8))), 0, (char const*)(unsigned char *)((char *)&g_006aa860 + (intptr_t)(g_006aa8cc)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_006aa878 + (intptr_t)(g_006aa8d0))), 0, (char const*)(unsigned char *)((char *)&g_006aa87a + (intptr_t)(g_006aa8d4)), 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_006aa890 + (intptr_t)(g_006aa8d8)),auStack_30);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_2c);
  func_0079e2bc(auStack_2c);
  return;
}

undefined4 BLTreasureMenuPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTreasureMenuPresenter::initWithView(BLTreasureMenuView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLTreasureMenuView *)p1)->getBtnClose();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006aa922 + g_006aa9e4),0,0x20);
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnRecieve();
  uVar2 = (undefined4)(*(undefined4 *)(&g_006aa93e + g_006aa9e8));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uVar2,0,0x20);
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnJiantouTop();
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uVar2,0,0x20);
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnHeroInfo();
  uVar2 = (undefined4)(*(undefined4 *)(&g_006aa97c + g_006aa9ec));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uVar2,0,0x20);
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnJiantouDown();
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uVar2,0,0x20);
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnAbout();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_006aa9ba + g_006aa9f0),0,0x20);
  piVar1 = (int *)((BLTreasureMenuView *)*(undefined4 *)(((int)this) + 0x18))->getBtnHeroInfo();
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uVar2,0,0x20);
  return;
}

void BLTreasureMenuPresenter::onEnter()
{
  return;
}

void BLTreasureMenuPresenter::onExit()
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

void BLTreasureMenuPresenter::initWithData()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLTreasureMenuPresenter::updateVirtualData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMenuPresenter::onAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(g_006aa740)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(g_006aa740);
  }
  return;
}

void BLTreasureMenuPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)((unsigned char *)((char *)&g_006aa74c + (intptr_t)(g_006aa7f4)));
  if (*piVar3 == 0) {
    iVar1 = (undefined4)(intptr_t)(func_0079e2fc(0x84));
    0 /* ctorZero */;
    *piVar3 = iVar1;
  }
  iVar1 = (undefined4)(intptr_t)((*(code *)**(undefined4 **)*piVar3)());
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)(uVar2))->showToast((char const*)(unsigned char *)((char *)&g_006aa778 + (intptr_t)(g_006aa7f8)));
  }
  else {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    iVar1 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0x1f7)),(intptr_t)0);
    if (iVar1 != 0) {
      uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)(unsigned char *)((char *)&g_006aa7a0 + (intptr_t)(g_006aa7fc)));
      uVar2 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar2))->removeUIByID(0x1f7);
    }
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    iVar1 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0x1f8)),(intptr_t)0);
    if (iVar1 != 0) {
      uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)(unsigned char *)((char *)&g_006aa7c8 + (intptr_t)(g_006aa800)));
      uVar2 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)(uVar2))->removeUIByID(0x1f8);
    }
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar2))->removeUIByID(500);
    piVar3 = (int *)((DataManager *)this)->shareDataManager();
    (**(code **)(*(int *)(piVar3) + (0x11c)))(piVar3,1);
  }
  return;
}
