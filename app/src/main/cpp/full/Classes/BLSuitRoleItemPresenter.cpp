#include "BLSuitRoleItemPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "RoleInfoItemData.h"
#include "CCObject.h"
#include "BLSuitRoleItemView.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "RoleData.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069028c;
extern "C" unsigned long UNK_006902a4;
extern "C" unsigned long UNK_006902bc;
extern "C" unsigned long UNK_0069038c;
extern "C" unsigned long UNK_006903a6;
extern "C" unsigned long UNK_006903ec;
extern "C" unsigned long UNK_00690414;
extern "C" unsigned long UNK_0069042c;
extern "C" unsigned long UNK_0069045c;
extern "C" unsigned long UNK_00690484;
extern "C" unsigned long UNK_00690488;
extern "C" unsigned long UNK_00690502;
extern "C" unsigned long UNK_006905ac;
extern "C" unsigned long UNK_006905cc;
extern "C" unsigned long UNK_006905f6;
extern "C" unsigned long UNK_0069062a;
extern "C" unsigned long _UNK_00690290;
extern "C" unsigned long _UNK_006902a8;
extern "C" unsigned long _UNK_006902c0;
extern "C" unsigned long _UNK_006903d8;
extern "C" unsigned long _UNK_006903dc;
extern "C" unsigned long _UNK_006903f0;
extern "C" unsigned long _UNK_00690418;
extern "C" unsigned long _UNK_006904ac;
extern "C" unsigned long _UNK_006904b0;
extern "C" unsigned long _UNK_006904b4;
extern "C" unsigned long _UNK_006904b8;
extern "C" unsigned long _UNK_00690508;
extern "C" unsigned long _UNK_00690660;
extern "C" unsigned long _UNK_00690664;
extern "C" unsigned long _UNK_00690668;
extern "C" unsigned long _UNK_0069066c;
extern "C" unsigned long g_0069028c;
extern "C" unsigned long g_00690290;
extern "C" unsigned long g_006902a4;
extern "C" unsigned long g_006902a8;
extern "C" unsigned long g_006902bc;
extern "C" unsigned long g_006902c0;
extern "C" unsigned long g_0069038c;
extern "C" unsigned long g_006903a6;
extern "C" unsigned long g_006903d8;
extern "C" unsigned long g_006903dc;
extern "C" unsigned long g_006903ec;
extern "C" unsigned long g_006903f0;
extern "C" unsigned long g_00690414;
extern "C" unsigned long g_00690418;
extern "C" unsigned long g_0069042c;
extern "C" unsigned long g_0069045c;
extern "C" unsigned long g_00690484;
extern "C" unsigned long g_00690488;
extern "C" unsigned long g_006904ac;
extern "C" unsigned long g_006904b0;
extern "C" unsigned long g_006904b4;
extern "C" unsigned long g_006904b8;
extern "C" unsigned long g_00690502;
extern "C" unsigned long g_00690508;
extern "C" unsigned long g_006905ac;
extern "C" unsigned long g_006905cc;
extern "C" unsigned long g_006905f6;
extern "C" unsigned long g_0069062a;
extern "C" unsigned long g_00690660;
extern "C" unsigned long g_00690664;
extern "C" unsigned long g_00690668;
extern "C" unsigned long g_0069066c;
bool BLSuitRoleItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSuitRoleItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitRoleItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSuitRoleItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

RoleData* BLSuitRoleItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

void BLSuitRoleItemPresenter::setRoleData(RoleData* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

void BLSuitRoleItemPresenter::tick(float p1)
{
  return;
}

BLSuitRoleItemPresenter::~BLSuitRoleItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069038c + g_006903d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006903a6 + g_006903dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitRoleItemPresenter::BLSuitRoleItemPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0069042c + (intptr_t)(g_006904ac))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_0069045c + (intptr_t)(g_006904b0)),&uStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_24);
  func_0079e2bc(auStack_24);
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00690484 + (intptr_t)(g_006904b4))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_00690488 + (intptr_t)(g_006904b8)), 0);
  return;
}

undefined4 BLSuitRoleItemPresenter::create(BLSuitRoleItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitRoleItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_00690502 + g_00690508);
  return;
}

void BLSuitRoleItemPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLSuitRoleItemPresenter::onChangeRole(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined4 uStack_18;
  
  uStack_19 = (undefined4)(intptr_t)((undefined1)((uint)p1 >> 0x18));
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  if (*(int *)(((int)this) + 0x1c) == (int)(intptr_t)p1) {
    uStack_1c = 0xe1;
    uStack_1b = 0x14;
  }
  else {
    uStack_1b = 0xff;
    uStack_1c = 0xff;
  }
  uStack_1a = (undefined4)(intptr_t)(uStack_1b);
  uStack_18 = (undefined4)(p3);
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_1c);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  if (*(int *)(((int)this) + 0x1c) == (int)(intptr_t)p1) {
    uStack_1c = 0xe1;
    uStack_1b = 0x14;
  }
  else {
    uStack_1b = 0xff;
    uStack_1c = 0xff;
  }
  uStack_1a = (undefined4)(intptr_t)(uStack_1b);
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&uStack_1c);
  return;
}

void BLSuitRoleItemPresenter::initWithView(BLSuitRoleItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

void BLSuitRoleItemPresenter::initWithData(RoleInfoItemData* p1, RoleData* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
