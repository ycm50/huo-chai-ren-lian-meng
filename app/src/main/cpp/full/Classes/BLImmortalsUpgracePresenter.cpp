#include "BLImmortalsUpgracePresenter.h"
#include "CCNotificationCenter.h"
#include "BLImmortalsUpgraceView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "ImmortalsRoleItemData.h"
#include "BLImmortalsEquipHorListPresenter.h"
#include "BLImmortalsUpgraceCostPresenter.h"
#include "BLImmortalsUpgraceInfoPresenter.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "PlayerData.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056e468;
extern "C" unsigned long UNK_0056e486;
extern "C" unsigned long UNK_0056e4d8;
extern "C" unsigned long UNK_0056e534;
extern "C" unsigned long UNK_0056e7f4;
extern "C" unsigned long UNK_0056e804;
extern "C" unsigned long UNK_0056e818;
extern "C" unsigned long UNK_0056e83c;
extern "C" unsigned long UNK_0056e83e;
extern "C" unsigned long UNK_0056e856;
extern "C" unsigned long UNK_0056e85a;
extern "C" unsigned long UNK_0056f07a;
extern "C" unsigned long UNK_0056f07c;
extern "C" unsigned long UNK_0056f0d6;
extern "C" unsigned long UNK_0056f0d8;
extern "C" unsigned long UNK_0056f10e;
extern "C" unsigned long UNK_0056f110;
extern "C" unsigned long UNK_0056f174;
extern "C" unsigned long _UNK_0056e4c4;
extern "C" unsigned long _UNK_0056e4c8;
extern "C" unsigned long _UNK_0056e4dc;
extern "C" unsigned long _UNK_0056e538;
extern "C" unsigned long _UNK_0056e88c;
extern "C" unsigned long _UNK_0056e890;
extern "C" unsigned long _UNK_0056e894;
extern "C" unsigned long _UNK_0056e898;
extern "C" unsigned long _UNK_0056e89c;
extern "C" unsigned long _UNK_0056e8a0;
extern "C" unsigned long _UNK_0056e8a4;
extern "C" unsigned long _UNK_0056f0bc;
extern "C" unsigned long _UNK_0056f0c0;
extern "C" unsigned long _UNK_0056f0f4;
extern "C" unsigned long _UNK_0056f0f8;
extern "C" unsigned long _UNK_0056f1a0;
extern "C" unsigned long _UNK_0056f1a4;
extern "C" unsigned long _UNK_0056f1a8;
extern "C" unsigned long g_0056e468;
extern "C" unsigned long g_0056e486;
extern "C" unsigned long g_0056e4c4;
extern "C" unsigned long g_0056e4c8;
extern "C" unsigned long g_0056e4d8;
extern "C" unsigned long g_0056e4dc;
extern "C" unsigned long g_0056e534;
extern "C" unsigned long g_0056e538;
extern "C" unsigned long g_0056e7f4;
extern "C" unsigned long g_0056e804;
extern "C" unsigned long g_0056e818;
extern "C" unsigned long g_0056e83c;
extern "C" unsigned long g_0056e83e;
extern "C" unsigned long g_0056e856;
extern "C" unsigned long g_0056e85a;
extern "C" unsigned long g_0056e88c;
extern "C" unsigned long g_0056e890;
extern "C" unsigned long g_0056e894;
extern "C" unsigned long g_0056e898;
extern "C" unsigned long g_0056e89c;
extern "C" unsigned long g_0056e8a0;
extern "C" unsigned long g_0056e8a4;
extern "C" unsigned long g_0056f07a;
extern "C" unsigned long g_0056f07c;
extern "C" unsigned long g_0056f0bc;
extern "C" unsigned long g_0056f0c0;
extern "C" unsigned long g_0056f0d6;
extern "C" unsigned long g_0056f0d8;
extern "C" unsigned long g_0056f0f4;
extern "C" unsigned long g_0056f0f8;
extern "C" unsigned long g_0056f10e;
extern "C" unsigned long g_0056f110;
extern "C" unsigned long g_0056f174;
extern "C" unsigned long g_0056f1a0;
extern "C" unsigned long g_0056f1a4;
extern "C" unsigned long g_0056f1a8;
bool BLImmortalsUpgracePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLImmortalsUpgracePresenter::~BLImmortalsUpgracePresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0056e468 + g_0056e4c4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0056e486 + g_0056e4c8,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 8);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


undefined4 BLImmortalsUpgracePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLImmortalsUpgracePresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLImmortalsUpgracePresenter::updateInfo()
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = ((PlayerData *)*(undefined4 *)(((int)this) + 0x24))->getImmortalsData();
  iVar3 = iVar1 + 4;
  iVar2 = iVar3;
  iVar1 = *(int *)(iVar1 + 8);
  while (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) < *(int *)(((int)this) + 0x1c)) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar2 != iVar3) && (*(int *)(iVar2 + 0x10) <= *(int *)(((int)this) + 0x1c))) {
    iVar3 = iVar2;
  }
  iVar2 = ((PlayerData *)*(undefined4 *)(((int)this) + 0x24))->getImmortalsData();
  uVar4 = (undefined4)(0);
  if (iVar3 != iVar2 + 4) {
    uVar4 = (undefined4)(*(undefined4 *)(iVar3 + 0x14));
  }
  ((BLImmortalsEquipHorListPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x10c) + 0x108))->updateWithData((PlayerData*)*(undefined4 *)(((int)this) + 0x24));
  ((BLImmortalsUpgraceInfoPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x110) + 0x108))->updateWithData((ImmortalsRoleItemData*)uVar4);
  ((BLImmortalsUpgraceCostPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x114) + 0x108))->updateWithData((ImmortalsRoleItemData*)uVar4);
  return;
}


void BLImmortalsUpgracePresenter::onUpdateIndex(cocos2d::CCObject* p1)
{
  int iVar1;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_0056f0d6 + g_0056f0f8),
                              *(undefined4 *)(&g_0056f0d8 + g_0056f0f4),0), iVar1 != 0)) {
    *(undefined4 *)(((int)this) + 0x1c) = *(undefined4 *)(iVar1 + 0x14);
    BLImmortalsUpgracePresenter::updateInfo();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
BLImmortalsUpgracePresenter::BLImmortalsUpgracePresenter()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0056e7f4 + (intptr_t)(g_0056e88c))));
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  iVar1 = (undefined4)(intptr_t)(g_0056e890);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(8)) = *(int *)(&g_0056e804 + iVar1) + 0xc;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_0056e818 + (intptr_t)(g_0056e894)),&uStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_2c);
  func_0079e2bc(auStack_2c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0056e83c + (intptr_t)(g_0056e898))), 0, (char const*)(unsigned char *)((char *)&g_0056e83e + (intptr_t)(g_0056e89c)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0056e856 + (intptr_t)(g_0056e8a0))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_0056e85a + (intptr_t)(g_0056e8a4)), 0);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  return;
}

void BLImmortalsUpgracePresenter::initWithView(BLImmortalsUpgraceView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLImmortalsUpgracePresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLImmortalsUpgracePresenter::onUpdateRole(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
