#include "BLMissionBuyRolePresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "RoleData.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLMissionBuyRoleView.h"
#include "BLMissionSelectRoleItemPresenter.h"
#include "BLMissionSelectRoleItemView.h"
#include "BLTableView.h"
#include "BluetoothHelper.h"
#include "DataManager.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b49a0;
extern "C" unsigned long UNK_005b49d4;
extern "C" unsigned long UNK_005b4a18;
extern "C" unsigned long UNK_005b4a40;
extern "C" unsigned long UNK_005b4a60;
extern "C" unsigned long UNK_005b4af0;
extern "C" unsigned long UNK_005b4af2;
extern "C" unsigned long UNK_005b4b18;
extern "C" unsigned long UNK_005b4b1a;
extern "C" unsigned long UNK_005b4b66;
extern "C" unsigned long UNK_005b4bb2;
extern "C" unsigned long UNK_005b4c3c;
extern "C" unsigned long UNK_005b4c82;
extern "C" unsigned long UNK_005b4c84;
extern "C" unsigned long UNK_005b4cce;
extern "C" unsigned long UNK_005b4cee;
extern "C" unsigned long UNK_005b4d0c;
extern "C" unsigned long _UNK_005b4a04;
extern "C" unsigned long _UNK_005b4a08;
extern "C" unsigned long _UNK_005b4a1c;
extern "C" unsigned long _UNK_005b4a44;
extern "C" unsigned long _UNK_005b4a64;
extern "C" unsigned long _UNK_005b4ac0;
extern "C" unsigned long _UNK_005b4ac4;
extern "C" unsigned long _UNK_005b4b34;
extern "C" unsigned long _UNK_005b4b38;
extern "C" unsigned long _UNK_005b4b3c;
extern "C" unsigned long _UNK_005b4b40;
extern "C" unsigned long _UNK_005b4be4;
extern "C" unsigned long _UNK_005b4be8;
extern "C" unsigned long _UNK_005b4c40;
extern "C" unsigned long _UNK_005b4ca8;
extern "C" unsigned long _UNK_005b4cac;
extern "C" unsigned long _UNK_005b4db8;
extern "C" unsigned long _UNK_005b4dbc;
extern "C" unsigned long _UNK_005b4dc0;
extern "C" unsigned long g_005b49a0;
extern "C" unsigned long g_005b49d4;
extern "C" unsigned long g_005b4a04;
extern "C" unsigned long g_005b4a08;
extern "C" unsigned long g_005b4a18;
extern "C" unsigned long g_005b4a1c;
extern "C" unsigned long g_005b4a40;
extern "C" unsigned long g_005b4a44;
extern "C" unsigned long g_005b4a60;
extern "C" unsigned long g_005b4a64;
extern "C" unsigned long g_005b4ac0;
extern "C" unsigned long g_005b4ac4;
extern "C" unsigned long g_005b4af0;
extern "C" unsigned long g_005b4af2;
extern "C" unsigned long g_005b4b18;
extern "C" unsigned long g_005b4b1a;
extern "C" unsigned long g_005b4b34;
extern "C" unsigned long g_005b4b38;
extern "C" unsigned long g_005b4b3c;
extern "C" unsigned long g_005b4b40;
extern "C" unsigned long g_005b4b66;
extern "C" unsigned long g_005b4bb2;
extern "C" unsigned long g_005b4be4;
extern "C" unsigned long g_005b4be8;
extern "C" unsigned long g_005b4c3c;
extern "C" unsigned long g_005b4c40;
extern "C" unsigned long g_005b4c82;
extern "C" unsigned long g_005b4c84;
extern "C" unsigned long g_005b4ca8;
extern "C" unsigned long g_005b4cac;
extern "C" unsigned long g_005b4cce;
extern "C" unsigned long g_005b4cee;
extern "C" unsigned long g_005b4d0c;
extern "C" unsigned long g_005b4db8;
extern "C" unsigned long g_005b4dbc;
extern "C" unsigned long g_005b4dc0;
bool BLMissionBuyRolePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMissionBuyRolePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionBuyRolePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionBuyRolePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionBuyRolePresenter::onRight(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLMissionBuyRolePresenter::onLeft(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLMissionBuyRolePresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLMissionBuyRolePresenter::tick(float p1)
{
  return;
}

BLMissionBuyRolePresenter::~BLMissionBuyRolePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005b49a0 + g_005b4a04);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar2 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar2 + 0x8c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b49d4 + g_005b4a08,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMissionBuyRolePresenter::numOfCellItem(BLTableView* p1)
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count();
  return;
}

void BLMissionBuyRolePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x28)),(intptr_t)0);
  if (iVar2 != 0) {
    ((BLGameScene *)this)->shareGameScene();
    ((BLGameScene *)this)->removeBlackLayer();
    ((BluetoothHelper *)this)->share();
    iVar2 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isBlueFight());
    if (iVar2 != 0) {
      ((BluetoothHelper *)this)->share();
      iVar2 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isHost());
      if (iVar2 != 0) {
        ((BluetoothHelper *)this)->share();
        ((BluetoothHelper *)this)->enterMainCity();
      }
    }
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0xc);
  return;
}

undefined4 BLMissionBuyRolePresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}

void BLMissionBuyRolePresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_005b4af0 + (intptr_t)(g_005b4b34))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005b4af2 + (intptr_t)(g_005b4b38))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLMissionSelectRoleItemView *)this)->create());
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->objectAtIndex((unsigned int)p3));
  uVar3 = (undefined4)(0);
  if (iVar2 != 0) {
    uVar3 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005b4b18 + (intptr_t)(g_005b4b3c))),
                            *(undefined4 *)((unsigned char *)((char *)&g_005b4b1a + (intptr_t)(g_005b4b40))),0);
  }
  uVar4 = (undefined4)(((BLMissionSelectRoleItemView *)iVar1)->getPresenter());
  ((BLMissionSelectRoleItemPresenter *)uVar4)->initWithRoleData((RoleData*)uVar3);
  return;
}

BLMissionBuyRolePresenter::BLMissionBuyRolePresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005b4b66 + (intptr_t)(g_005b4be4))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  *(int *)((int)this + 4*(6)) = iVar3 + 0x7c;
  *(int *)((int)this + 4*(7)) = iVar3 + 0x8c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(9)) = iVar3;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005b4bb2 + (intptr_t)(g_005b4be8)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMissionBuyRolePresenter::create(BLMissionBuyRoleView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionBuyRolePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  ((PlatformHelp *)this)->hideLenovoBanner();
  return;
}

void BLMissionBuyRolePresenter::onEnter()
{
  ((PlatformHelp *)this)->showLenovoBanner((char const*)&g_005b4c3c + g_005b4c40);
  return;
}

void BLMissionBuyRolePresenter::initRolesData()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->removeAllObjects();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  for (uVar5 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar5 < uVar3); uVar5 = uVar5 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar5));
    if (((iVar4 != 0) &&
        (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_005b4c82 + (intptr_t)(g_005b4ca8))),
                                         *(undefined4 *)((unsigned char *)((char *)&g_005b4c84 + (intptr_t)(g_005b4cac))),0),
        piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 0x38))(), iVar4 == 0)) {
      ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->addObject((cocos2d::CCObject*)piVar1);
    }
  }
  return;
}

void BLMissionBuyRolePresenter::initWithView(BLMissionBuyRoleView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMissionBuyRoleView *)p1)->getbtnRight();
  uStack_30 = (undefined4)(*(undefined4 *)(&g_005b4cce + g_005b4db8));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = (int *)((BLMissionBuyRoleView *)*(undefined4 *)(((int)this) + 0x20))->getBtnLeft();
  uStack_28 = (undefined4)(*(undefined4 *)(&g_005b4cee + g_005b4dbc));
  uStack_24 = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = (int *)((BLMissionBuyRoleView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  uStack_20 = (undefined4)(*(undefined4 *)(&g_005b4d0c + g_005b4dc0));
  uStack_1c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLMissionBuyRoleView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  pcVar4 = *(code **)(*piVar1 + 0x28c);
  piVar2 = (int *)((BLMissionBuyRoleView *)*(undefined4 *)(((int)this) + 0x20))->getBtnClose();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x308))(piVar2,1);
  (**(code **)(*piVar2 + 0x1cc))(auStack_38,piVar2);
  (*pcVar4)(piVar1,auStack_38);
  piVar1 = (int *)((BLMissionBuyRoleView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x21c))(piVar1,((int)this) + 0x18);
  piVar1 = (int *)((BLMissionBuyRoleView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x214))(piVar1,((int)this) + 0x1c);
  piVar1 = (int *)((BLMissionBuyRoleView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles();
  (**(code **)(*piVar1 + 0x22c))(piVar1,0);
  BLMissionBuyRolePresenter::initRolesData();
  uVar3 = (undefined4)(((BLMissionBuyRoleView *)*(undefined4 *)(((int)this) + 0x20))->getTableViewRoles());
  ((BLTableView *)uVar3)->reloadData(0, 1);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x11c))(piVar1,1);
  return;
}
