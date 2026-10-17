#include "BLActivityItemPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "ActivityData.h"
#include "ActivityItemData.h"
#include "BLActivityItemView.h"
#include "BLActivityManager.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "RichTextData.h"
#include "Toast.h"
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
extern "C" unsigned long g_004f0706;
extern "C" unsigned long g_004f0710;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f0488;
extern "C" unsigned long UNK_004f04a0;
extern "C" unsigned long UNK_004f04b8;
extern "C" unsigned long UNK_004f052c;
extern "C" unsigned long UNK_004f0554;
extern "C" unsigned long UNK_004f0598;
extern "C" unsigned long UNK_004f05c0;
extern "C" unsigned long UNK_004f0606;
extern "C" unsigned long UNK_004f0638;
extern "C" unsigned long UNK_004f06e0;
extern "C" unsigned long UNK_004f0740;
extern "C" unsigned long UNK_004f0780;
extern "C" unsigned long UNK_004f08e6;
extern "C" unsigned long UNK_004f08e7;
extern "C" unsigned long UNK_004f08e8;
extern "C" unsigned long UNK_004f0904;
extern "C" unsigned long UNK_004f0936;
extern "C" unsigned long UNK_004f09fa;
extern "C" unsigned long UNK_004f0af0;
extern "C" unsigned long _UNK_004f048c;
extern "C" unsigned long _UNK_004f04a4;
extern "C" unsigned long _UNK_004f04bc;
extern "C" unsigned long _UNK_004f0584;
extern "C" unsigned long _UNK_004f0588;
extern "C" unsigned long _UNK_004f059c;
extern "C" unsigned long _UNK_004f05c4;
extern "C" unsigned long _UNK_004f0664;
extern "C" unsigned long _UNK_004f0668;
extern "C" unsigned long _UNK_004f06e8;
extern "C" unsigned long _UNK_004f0a90;
extern "C" unsigned long _UNK_004f0a94;
extern "C" unsigned long _UNK_004f0a98;
extern "C" unsigned long _UNK_004f0a9c;
extern "C" unsigned long _UNK_004f0aa0;
extern "C" unsigned long _UNK_004f0aa4;
extern "C" unsigned long _UNK_004f0b88;
extern "C" unsigned long g_004f0488;
extern "C" unsigned long g_004f048c;
extern "C" unsigned long g_004f04a0;
extern "C" unsigned long g_004f04a4;
extern "C" unsigned long g_004f04b8;
extern "C" unsigned long g_004f04bc;
extern "C" unsigned long g_004f052c;
extern "C" unsigned long g_004f0554;
extern "C" unsigned long g_004f0584;
extern "C" unsigned long g_004f0588;
extern "C" unsigned long g_004f0598;
extern "C" unsigned long g_004f059c;
extern "C" unsigned long g_004f05c0;
extern "C" unsigned long g_004f05c4;
extern "C" unsigned long g_004f0606;
extern "C" unsigned long g_004f0638;
extern "C" unsigned long g_004f0664;
extern "C" unsigned long g_004f0668;
extern "C" unsigned long g_004f06e0;
extern "C" unsigned long g_004f06e8;
extern "C" unsigned long g_004f0740;
extern "C" unsigned long g_004f0780;
extern "C" unsigned long g_004f08e6;
extern "C" unsigned long g_004f08e7;
extern "C" unsigned long g_004f08e8;
extern "C" unsigned long g_004f0904;
extern "C" unsigned long g_004f0936;
extern "C" unsigned long g_004f09fa;
extern "C" unsigned long g_004f0a90;
extern "C" unsigned long g_004f0a94;
extern "C" unsigned long g_004f0a98;
extern "C" unsigned long g_004f0a9c;
extern "C" unsigned long g_004f0aa0;
extern "C" unsigned long g_004f0aa4;
extern "C" unsigned long g_004f0af0;
extern "C" unsigned long g_004f0b88;
ActivityData* BLActivityItemPresenter::getItemData() const
{
  return (ActivityData*)(*(undefined4 *)(((int)this) + 0x1c));
}

bool BLActivityItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLActivityItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLActivityItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLActivityItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLActivityItemPresenter::tick(float p1)
{
  return;
}

BLActivityItemPresenter::~BLActivityItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f052c + g_004f0584);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f0554 + g_004f0588,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLActivityItemPresenter::setItemData(ActivityData* p1)
{
  if (*(int *)(((int)this) + 0x1c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLActivityItemPresenter::onShowDes()
{
  ((BLActivityItemView *)*(undefined4 *)(((int)this) + 0x18))->contentShow();
  return;
}

BLActivityItemPresenter::BLActivityItemPresenter()
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
  iVar3 = *(int *)(&g_004f0606 + g_004f0664);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x44;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f0638 + g_004f0668,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLActivityItemPresenter::create(BLActivityItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLActivityItemPresenter::onExit()
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

void BLActivityItemPresenter::onEnter()
{
  return;
}

void BLActivityItemPresenter::initWith(ActivityData* p1)
{
  (**(code **)(*(int *)this + 0x30))();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLActivityItemPresenter::initWithView(BLActivityItemView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLActivityItemView *)p1)->getBtnShowDes();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_004f06e0 + g_004f06e8),0,0x20);
  return;
}

void BLActivityItemPresenter::addOnGetCallBack(cocos2d::extension::CCControlButton* p1)
{
  (**(code **)(*(int *)(p1) + (0x254)))
            (p1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_004f0706 + (intptr_t)(g_004f0710))),0,0x20);
  return;
}

void BLActivityItemPresenter::addItem(ActivityItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLActivityItemPresenter::onGet(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = (undefined4)((**(code **)(*(int *)(p1) + (0x118)))(p1));
  uVar2 = (undefined4)(((BLActivityManager *)this)->share());
  piVar3 = (int *)((BLActivityManager *)uVar2)->getContentByID(uVar1);
  if (piVar3 != (int *)0x0) {
    iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x58)))());
    iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x28)))(piVar3));
    if ((iVar5 <= iVar4) && (iVar4 = (**(code **)(*(int *)(piVar3) + (0x50)))(piVar3), iVar4 == 0)) {
      ((ActivityItemData *)piVar3)->updateIsGet();
      BLActivityItemPresenter::addItem((ActivityItemData*)piVar3);
      ((BLActivityItemView *)*(undefined4 *)(((int)this) + 0x18))->updateUI((cocos2d::extension::CCControlButton*)p1);
    }
  }
  return;
}
