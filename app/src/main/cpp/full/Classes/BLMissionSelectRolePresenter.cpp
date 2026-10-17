#include "BLMissionSelectRolePresenter.h"
#include "CCDictionary.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "BLGameScene.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionSelectRoleItemPresenter.h"
#include "BLMissionSelectRoleItemView.h"
#include "BLMissionSelectRoleView.h"
#include "BLTableView.h"
#include "BluetoothHelper.h"
#include "DataManager.h"
#include "MissionSelectHeroData.h"
#include "PlatformHelp.h"
#include "RoleData.h"
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
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3bc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005bab6c;
extern "C" unsigned long UNK_005baba0;
extern "C" unsigned long UNK_005babe4;
extern "C" unsigned long UNK_005bac0c;
extern "C" unsigned long UNK_005bac2c;
extern "C" unsigned long UNK_005bac74;
extern "C" unsigned long UNK_005bac76;
extern "C" unsigned long UNK_005bac9c;
extern "C" unsigned long UNK_005bac9e;
extern "C" unsigned long UNK_005bad5e;
extern "C" unsigned long UNK_005badaa;
extern "C" unsigned long UNK_005bae2a;
extern "C" unsigned long UNK_005bae54;
extern "C" unsigned long UNK_005bae56;
extern "C" unsigned long UNK_005bae64;
extern "C" unsigned long UNK_005baec2;
extern "C" unsigned long UNK_005baee6;
extern "C" unsigned long UNK_005baf38;
extern "C" unsigned long UNK_005baf5c;
extern "C" unsigned long UNK_005bb0ec;
extern "C" unsigned long UNK_005bb0ee;
extern "C" unsigned long UNK_005bb1fa;
extern "C" unsigned long UNK_005bb226;
extern "C" unsigned long UNK_005bb242;
extern "C" unsigned long UNK_005bb27a;
extern "C" unsigned long UNK_005bb2a6;
extern "C" unsigned long UNK_005bb2c2;
extern "C" unsigned long UNK_005bb312;
extern "C" unsigned long UNK_005bb37a;
extern "C" unsigned long UNK_005bb394;
extern "C" unsigned long UNK_005bb3bc;
extern "C" unsigned long UNK_005bb3d6;
extern "C" unsigned long UNK_005bb6c8;
extern "C" unsigned long UNK_005bb8d0;
extern "C" unsigned long UNK_005bba2e;
extern "C" unsigned long UNK_005bba78;
extern "C" unsigned long _UNK_005babd0;
extern "C" unsigned long _UNK_005babd4;
extern "C" unsigned long _UNK_005babe8;
extern "C" unsigned long _UNK_005bac10;
extern "C" unsigned long _UNK_005bac30;
extern "C" unsigned long _UNK_005bac44;
extern "C" unsigned long _UNK_005bac48;
extern "C" unsigned long _UNK_005bad2c;
extern "C" unsigned long _UNK_005bad30;
extern "C" unsigned long _UNK_005bad34;
extern "C" unsigned long _UNK_005bad38;
extern "C" unsigned long _UNK_005baddc;
extern "C" unsigned long _UNK_005bade0;
extern "C" unsigned long _UNK_005bae3c;
extern "C" unsigned long _UNK_005bae68;
extern "C" unsigned long _UNK_005bae6c;
extern "C" unsigned long _UNK_005bae70;
extern "C" unsigned long _UNK_005bb030;
extern "C" unsigned long _UNK_005bb034;
extern "C" unsigned long _UNK_005bb038;
extern "C" unsigned long _UNK_005bb03c;
extern "C" unsigned long _UNK_005bb1d4;
extern "C" unsigned long _UNK_005bb1d8;
extern "C" unsigned long _UNK_005bb250;
extern "C" unsigned long _UNK_005bb254;
extern "C" unsigned long _UNK_005bb258;
extern "C" unsigned long _UNK_005bb2d0;
extern "C" unsigned long _UNK_005bb2d4;
extern "C" unsigned long _UNK_005bb2d8;
extern "C" unsigned long _UNK_005bb55c;
extern "C" unsigned long _UNK_005bb560;
extern "C" unsigned long _UNK_005bb564;
extern "C" unsigned long _UNK_005bb568;
extern "C" unsigned long _UNK_005bb56c;
extern "C" unsigned long _UNK_005bb9ec;
extern "C" unsigned long _UNK_005bb9f0;
extern "C" unsigned long _UNK_005bb9f4;
extern "C" unsigned long _UNK_005bb9f8;
extern "C" unsigned long _UNK_005bb9fc;
extern "C" unsigned long _UNK_005bba00;
extern "C" unsigned long _UNK_005bba04;
extern "C" unsigned long _UNK_005bbc28;
extern "C" unsigned long _UNK_005bbc2c;
extern "C" unsigned long _UNK_005bbc30;
extern "C" unsigned long _UNK_005bbc34;
extern "C" unsigned long _UNK_005bbc38;
extern "C" unsigned long _UNK_005bbc3c;
extern "C" unsigned long _UNK_005bbc40;
extern "C" unsigned long _UNK_005bbc44;
extern "C" unsigned long g_005bab6c;
extern "C" unsigned long g_005baba0;
extern "C" unsigned long g_005babd0;
extern "C" unsigned long g_005babd4;
extern "C" unsigned long g_005babe4;
extern "C" unsigned long g_005babe8;
extern "C" unsigned long g_005bac0c;
extern "C" unsigned long g_005bac10;
extern "C" unsigned long g_005bac2c;
extern "C" unsigned long g_005bac30;
extern "C" unsigned long g_005bac44;
extern "C" unsigned long g_005bac48;
extern "C" unsigned long g_005bac74;
extern "C" unsigned long g_005bac76;
extern "C" unsigned long g_005bac9c;
extern "C" unsigned long g_005bac9e;
extern "C" unsigned long g_005bad2c;
extern "C" unsigned long g_005bad30;
extern "C" unsigned long g_005bad34;
extern "C" unsigned long g_005bad38;
extern "C" unsigned long g_005bad5e;
extern "C" unsigned long g_005badaa;
extern "C" unsigned long g_005baddc;
extern "C" unsigned long g_005bade0;
extern "C" unsigned long g_005bae2a;
extern "C" unsigned long g_005bae3c;
extern "C" unsigned long g_005bae54;
extern "C" unsigned long g_005bae56;
extern "C" unsigned long g_005bae64;
extern "C" unsigned long g_005bae68;
extern "C" unsigned long g_005bae6c;
extern "C" unsigned long g_005bae70;
extern "C" unsigned long g_005baec2;
extern "C" unsigned long g_005baee6;
extern "C" unsigned long g_005baf38;
extern "C" unsigned long g_005baf5c;
extern "C" unsigned long g_005bb030;
extern "C" unsigned long g_005bb034;
extern "C" unsigned long g_005bb038;
extern "C" unsigned long g_005bb03c;
extern "C" unsigned long g_005bb0ec;
extern "C" unsigned long g_005bb0ee;
extern "C" unsigned long g_005bb1d4;
extern "C" unsigned long g_005bb1d8;
extern "C" unsigned long g_005bb1fa;
extern "C" unsigned long g_005bb226;
extern "C" unsigned long g_005bb242;
extern "C" unsigned long g_005bb250;
extern "C" unsigned long g_005bb254;
extern "C" unsigned long g_005bb258;
extern "C" unsigned long g_005bb27a;
extern "C" unsigned long g_005bb2a6;
extern "C" unsigned long g_005bb2c2;
extern "C" unsigned long g_005bb2d0;
extern "C" unsigned long g_005bb2d4;
extern "C" unsigned long g_005bb2d8;
extern "C" unsigned long g_005bb312;
extern "C" unsigned long g_005bb37a;
extern "C" unsigned long g_005bb394;
extern "C" unsigned long g_005bb3bc;
extern "C" unsigned long g_005bb3d6;
extern "C" unsigned long g_005bb55c;
extern "C" unsigned long g_005bb560;
extern "C" unsigned long g_005bb564;
extern "C" unsigned long g_005bb568;
extern "C" unsigned long g_005bb56c;
extern "C" unsigned long g_005bb6c8;
extern "C" unsigned long g_005bb8d0;
extern "C" unsigned long g_005bb9ec;
extern "C" unsigned long g_005bb9f0;
extern "C" unsigned long g_005bb9f4;
extern "C" unsigned long g_005bb9f8;
extern "C" unsigned long g_005bb9fc;
extern "C" unsigned long g_005bba00;
extern "C" unsigned long g_005bba04;
extern "C" unsigned long g_005bba2e;
extern "C" unsigned long g_005bba78;
extern "C" unsigned long g_005bbc28;
extern "C" unsigned long g_005bbc2c;
extern "C" unsigned long g_005bbc30;
extern "C" unsigned long g_005bbc34;
extern "C" unsigned long g_005bbc38;
extern "C" unsigned long g_005bbc3c;
extern "C" unsigned long g_005bbc40;
extern "C" unsigned long g_005bbc44;
bool BLMissionSelectRolePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMissionSelectRolePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionSelectRolePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionSelectRolePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionSelectRolePresenter::onRight(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLMissionSelectRolePresenter::onLeft(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void BLMissionSelectRolePresenter::touchItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  return;
}

void BLMissionSelectRolePresenter::tick(float p1)
{
  return;
}

BLMissionSelectRolePresenter::~BLMissionSelectRolePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005bab6c + g_005babd0);
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
  func_0079e45c(&uStack_14,&g_005baba0 + g_005babd4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMissionSelectRolePresenter::numOfCellItem(BLTableView* p1)
{
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->count();
  return;
}

undefined4 BLMissionSelectRolePresenter::sizeOfCellItem(BLTableView* p1)
{
  0 /* ctorZero */;
  return ((int)this);
}



undefined4 BLMissionSelectRolePresenter::create(BLMissionSelectRoleView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionSelectRolePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005bae2a + g_005bae3c);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  ((PlatformHelp *)this)->hideLenovoBanner();
  return;
}




void BLMissionSelectRolePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x118))();
  if (iVar2 == 6) {
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_005bb1fa + g_005bb250);
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar3)->removeUIByID(0xb);
  }
  BLMissionSelectRolePresenter::updateSelecetData();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x118))();
  if (iVar2 == 0xc) {
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_005bb226 + g_005bb254);
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x118))();
  if (iVar2 == 0xe) {
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_005bb242 + g_005bb258);
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar3)->removeUIByID(0xb);
  return;
}

void BLMissionSelectRolePresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x118))();
  if (iVar2 == 6) {
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_005bb27a + g_005bb2d0);
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar3)->removeUIByID(0xb);
  }
  BLMissionSelectRolePresenter::updateSelecetData();
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x118))();
  if (iVar2 == 0xc) {
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_005bb2a6 + g_005bb2d4);
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (**(code **)(*piVar1 + 0x118))();
  if (iVar2 == 0xe) {
    uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_005bb2c2 + g_005bb2d8);
  }
  uVar3 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar3)->removeUIByID(0xb);
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void BLMissionSelectRolePresenter::nodeOfCellItemAtIndex(BLTableView* p1, cocos2d::CCNode* p2, int p3)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uStack_1c;
  int iStack_18;
  
  uStack_1c = (undefined4)(p1);
  iStack_18 = (undefined4)(intptr_t)p2;
  if (((int)(intptr_t)p2 == 0) ||
     (iVar1 = func_0079e55c(p2,*(undefined4 *)((unsigned char *)((char *)&g_005bac74 + (intptr_t)(g_005bad2c))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005bac76 + (intptr_t)(g_005bad30))),0), iVar1 == 0)) {
    iVar1 = (undefined4)(intptr_t)(((BLMissionSelectRoleItemView *)this)->create());
  }
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->objectAtIndex((unsigned int)p3));
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005bac9c + (intptr_t)(g_005bad34))),
                                    *(undefined4 *)((unsigned char *)((char *)&g_005bac9e + (intptr_t)(g_005bad38))),0);
  }
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar4 + 0x118))());
  if (iVar2 == 0xe) {
    piVar4 = (int *)((long long)::operator new((size_t)(0x4c)));
    0 /* ctorZero */;
    iVar2 = (undefined4)(intptr_t)(((RoleData *)piVar4)->init());
    if (iVar2 == 0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      piVar4 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar4)->autorelease();
    }
    (**(code **)(*piVar3 + 0x18))(&uStack_1c,piVar3);
    ((RoleData *)piVar4)->initWihtID((std::string)(char*)uStack_1c);
    func_0079e2bc(&uStack_1c);
    uVar5 = (undefined4)(((BLMissionSelectRoleItemView *)iVar1)->getPresenter());
    ((BLMissionSelectRoleItemPresenter *)uVar5)->initWithMoneyTreePlayerDate((RoleData*)piVar4);
  }
  else {
    uVar5 = (undefined4)(((BLMissionSelectRoleItemView *)iVar1)->getPresenter());
    ((BLMissionSelectRoleItemPresenter *)uVar5)->initWithRoleData((RoleData*)piVar3);
  }
  return;
}

BLMissionSelectRolePresenter::BLMissionSelectRolePresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005bad5e + (intptr_t)(g_005baddc))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005badaa + (intptr_t)(g_005bade0)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMissionSelectRolePresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRolePresenter::updateData(cocos2d::CCObject* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_fc [4];
  undefined4 uStack_f8;
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x38)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0xa8)))());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x118)))());
  if (iVar3 == 0xc) {
    uVar2 = (undefined4)(3);
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x118)))());
  if (iVar3 == 0xe) {
    uVar2 = (undefined4)(1);
  }
  uVar4 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_f4,(unsigned char *)((char *)&g_005baec2 + (intptr_t)(g_005bb030)),auStack_fc);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_f0);
  func_0079e53c(auStack_ec,auStack_f0);
  func_0079e854(auStack_ec,(unsigned char *)((char *)&g_005baee6 + (intptr_t)(g_005bb034)));
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x40)))();
  (**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar4 = (undefined4)(((cocos2d::CCDictionary *)this)->count());
  ConvertToString<unsigned int>((unsigned int)auStack_e8, uVar4, 0);
  func_0079e53c(auStack_e4,auStack_ec);
  func_0079e5dc(auStack_e4,auStack_e8);
  func_0079e53c(auStack_e0,auStack_e4);
  func_0079e854(auStack_e0,(unsigned char *)((char *)&g_005baf38 + (intptr_t)(g_005bb038)));
  func_0079e43c(auStack_d4,0x18);
  func_0079e44c(auStack_cc,uVar2);
  func_0079e45c(auStack_d8,(unsigned char *)((char *)&g_005baf5c + (intptr_t)(g_005bb03c)),auStack_dc);
  func_0079e46c(auStack_dc,auStack_c8);
  func_0079e2bc(auStack_d8);
  func_0079e47c(auStack_d4);
  func_0079e53c(&uStack_f8,auStack_e0);
  func_0079e5dc(&uStack_f8,auStack_dc);
  func_0079e2bc(auStack_dc);
  func_0079e2bc(auStack_e0);
  func_0079e2bc(auStack_e4);
  func_0079e2bc(auStack_e8);
  func_0079e2bc(auStack_ec);
  func_0079e2bc(auStack_f0);
  func_0079e2bc(auStack_f4);
  piVar1 = (int *)((BLMissionSelectRoleView *)(*(undefined4 *)(((int)this) + 0x20)))->getLabRoleLimit();
  (**(code **)(*(int *)(piVar1) + (0x234)))(piVar1,uStack_f8);
  func_0079e2bc(&uStack_f8);
  return;
}

void BLMissionSelectRolePresenter::updateSelecetData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRolePresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRolePresenter::initRolesData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionSelectRolePresenter::initWithView(BLMissionSelectRoleView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
