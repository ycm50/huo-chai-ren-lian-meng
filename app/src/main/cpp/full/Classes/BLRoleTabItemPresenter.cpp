#include "BLRoleTabItemPresenter.h"
#include "GnuString.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "RoleInfoItemData.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "RoleData.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLRoleTabItemView.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long ghidra_CONCAT14(...);
extern "C" long long ghidra_CONCAT15(...);
extern "C" long long ghidra_CONCAT16(...);
extern "C" long long ghidra_CONCAT17(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00674988;
extern "C" unsigned long UNK_006749a0;
extern "C" unsigned long UNK_006749b8;
extern "C" unsigned long UNK_00674a2c;
extern "C" unsigned long UNK_00674a46;
extern "C" unsigned long UNK_00674a8c;
extern "C" unsigned long UNK_00674ab4;
extern "C" unsigned long UNK_00674b26;
extern "C" unsigned long UNK_00674b64;
extern "C" unsigned long UNK_00674bf8;
extern "C" unsigned long UNK_00674c28;
extern "C" unsigned long UNK_00674c50;
extern "C" unsigned long UNK_00674c52;
extern "C" unsigned long UNK_00674c6a;
extern "C" unsigned long UNK_00674c6e;
extern "C" unsigned long UNK_00674cee;
extern "C" unsigned long UNK_00674cfc;
extern "C" unsigned long UNK_00674d82;
extern "C" unsigned long UNK_00674dbc;
extern "C" unsigned long UNK_00674e26;
extern "C" unsigned long UNK_00674e36;
extern "C" unsigned long _UNK_0067498c;
extern "C" unsigned long _UNK_006749a4;
extern "C" unsigned long _UNK_006749bc;
extern "C" unsigned long _UNK_00674a78;
extern "C" unsigned long _UNK_00674a7c;
extern "C" unsigned long _UNK_00674a90;
extern "C" unsigned long _UNK_00674ab8;
extern "C" unsigned long _UNK_00674be0;
extern "C" unsigned long _UNK_00674be4;
extern "C" unsigned long _UNK_00674c90;
extern "C" unsigned long _UNK_00674c94;
extern "C" unsigned long _UNK_00674c98;
extern "C" unsigned long _UNK_00674c9c;
extern "C" unsigned long _UNK_00674ca0;
extern "C" unsigned long _UNK_00674ca4;
extern "C" unsigned long _UNK_00674d00;
extern "C" unsigned long _UNK_00674d04;
extern "C" unsigned long _UNK_00674e68;
extern "C" unsigned long _UNK_00674e6c;
extern "C" unsigned long _UNK_00674e70;
extern "C" unsigned long _UNK_00674e74;
extern "C" unsigned long g_00674988;
extern "C" unsigned long g_0067498c;
extern "C" unsigned long g_006749a0;
extern "C" unsigned long g_006749a4;
extern "C" unsigned long g_006749b8;
extern "C" unsigned long g_006749bc;
extern "C" unsigned long g_00674a2c;
extern "C" unsigned long g_00674a46;
extern "C" unsigned long g_00674a78;
extern "C" unsigned long g_00674a7c;
extern "C" unsigned long g_00674a8c;
extern "C" unsigned long g_00674a90;
extern "C" unsigned long g_00674ab4;
extern "C" unsigned long g_00674ab8;
extern "C" unsigned long g_00674b26;
extern "C" unsigned long g_00674b64;
extern "C" unsigned long g_00674be0;
extern "C" unsigned long g_00674be4;
extern "C" unsigned long g_00674bf8;
extern "C" unsigned long g_00674c28;
extern "C" unsigned long g_00674c50;
extern "C" unsigned long g_00674c52;
extern "C" unsigned long g_00674c6a;
extern "C" unsigned long g_00674c6e;
extern "C" unsigned long g_00674c90;
extern "C" unsigned long g_00674c94;
extern "C" unsigned long g_00674c98;
extern "C" unsigned long g_00674c9c;
extern "C" unsigned long g_00674ca0;
extern "C" unsigned long g_00674ca4;
extern "C" unsigned long g_00674cee;
extern "C" unsigned long g_00674cfc;
extern "C" unsigned long g_00674d00;
extern "C" unsigned long g_00674d04;
extern "C" unsigned long g_00674d82;
extern "C" unsigned long g_00674dbc;
extern "C" unsigned long g_00674e26;
extern "C" unsigned long g_00674e36;
extern "C" unsigned long g_00674e68;
extern "C" unsigned long g_00674e6c;
extern "C" unsigned long g_00674e70;
extern "C" unsigned long g_00674e74;
RoleData* BLRoleTabItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

void BLRoleTabItemPresenter::setRoleData(RoleData* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

bool BLRoleTabItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLRoleTabItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRoleTabItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRoleTabItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLRoleTabItemPresenter::tick(float p1)
{
  return;
}

BLRoleTabItemPresenter::~BLRoleTabItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00674a2c + g_00674a78);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00674a46 + g_00674a7c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((GnuString)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLRoleTabItemPresenter::updateherolv()
{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined4 uStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  func_0079e45c(auStack_e4,&g_00674b26 + g_00674be0,auStack_d4);
  piVar1 = (int *)((BLRoleTabItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabLV();
  pcVar3 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x20))());
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar2);
  func_0079e45c(auStack_d8,&g_00674b64 + g_00674be4,&uStack_dc);
  func_0079e46c(auStack_e0,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  func_0079e53c(&uStack_dc,auStack_e4);
  func_0079e5dc(&uStack_dc,auStack_e0);
  (*pcVar3)(piVar1,uStack_dc);
  func_0079e2bc(&uStack_dc);
  func_0079e2bc(auStack_e0);
  func_0079e2bc(auStack_e4);
  return;
}


undefined4 BLRoleTabItemPresenter::create(BLRoleTabItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRoleTabItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_00674cee + g_00674d00);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_00674cfc + g_00674d04);
  return;
}

void BLRoleTabItemPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLRoleTabItemPresenter::onChangeRole(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined4 uStack_18;
  
  uStack_1c = (undefined1) (undefined4)(intptr_t)p1;
  uStack_1b = (undefined1)((uint)p1 >> 8);
  uStack_1a = (undefined1)((uint)p1 >> 0x10);
  uStack_19 = (undefined1)((uint)p1 >> 0x18);
  uStack_18 = (undefined4)(p3);
  piVar1 = (int *)((BLRoleTabItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabName();
  if (*(int *)(((int)this) + 0x1c) == (int)(intptr_t)p1) {
    uStack_1c = 0xe1;
    uStack_1b = 0x14;
  }
  else {
    uStack_1b = 0xff;
    uStack_1c = 0xff;
  }
  uStack_1a = uStack_1b;
  (**(code **)(*piVar1 + 0x1b4))(piVar1,&uStack_1c);
  piVar1 = (int *)((BLRoleTabItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabLV();
  if (*(int *)(((int)this) + 0x1c) == (int)(intptr_t)p1) {
    uStack_1c = 0xe1;
    uStack_1b = 0x14;
  }
  else {
    uStack_1b = 0xff;
    uStack_1c = 0xff;
  }
  uStack_1a = uStack_1b;
  (**(code **)(*piVar1 + 0x1b4))(piVar1,&uStack_1c);
  return;
}

BLRoleTabItemPresenter::BLRoleTabItemPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00674bf8 + (intptr_t)(g_00674c90))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_00674c28 + (intptr_t)(g_00674c94)),&uStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((GnuString)(char*)auStack_2c);
  func_0079e2bc(auStack_2c);
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_00674c50 + (intptr_t)(g_00674c98))), 0, (char const*)(unsigned char *)((char *)&g_00674c52 + (intptr_t)(g_00674c9c)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00674c6a + (intptr_t)(g_00674ca0))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_00674c6e + (intptr_t)(g_00674ca4)), 0);
  return;
}

void BLRoleTabItemPresenter::initWithView(BLRoleTabItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

void BLRoleTabItemPresenter::initWithData(RoleInfoItemData* p1, RoleData* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
