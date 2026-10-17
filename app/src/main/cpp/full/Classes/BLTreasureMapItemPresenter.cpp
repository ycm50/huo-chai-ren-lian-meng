#include "BLTreasureMapItemPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCArray.h"
#include "CCDirector.h"
using namespace cocos2d;
#include "TreasureWeightData.h"
#include "TreasureRecordData.h"
#include "TreasureDataManager.h"
#include "RichTextData.h"
#include "TreasureMapItemBase.h"
#include "BLTreasureMapItemView.h"
#include "BLLeakUtils.h"
#include <new>   // ghost_fix.js 自动补齐
#include <cstdlib>   // ghost_fix.js 自动补齐
// 兜底声明
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e964(...);
extern "C" unsigned long g_006a8f64;
extern "C" unsigned long g_006a8f5e;
extern "C" unsigned long g_006a8f68;
extern "C" long long func_0079e2dc(...);
extern "C" unsigned long g_006a7f8c;
extern "C" unsigned long g_006a7f60;
extern "C" unsigned long g_006a7f82;
extern "C" unsigned long g_006a7f90;
extern "C" unsigned long g_006a7e7a;
extern "C" unsigned long g_006a7f24;
extern "C" unsigned long g_006a7e8e;
extern "C" unsigned long g_006a7f28;
extern "C" unsigned long g_006a7e90;
extern "C" unsigned long g_006a7f2c;
extern "C" unsigned long g_006a7e9e;
extern "C" unsigned long g_006a7f30;
extern "C" long long func_0079e55c(...);
extern "C" unsigned long g_006a7db6;
extern "C" unsigned long g_006a7e34;
extern "C" unsigned long g_006a7d0e;
extern "C" unsigned long g_006a7e2c;
extern "C" unsigned long g_006a7e10;
extern "C" unsigned long g_006a7e3c;
extern "C" unsigned long g_006a7e12;
extern "C" unsigned long g_006a7e40;
extern "C" unsigned long g_006a7e20;
extern "C" unsigned long g_006a7e44;
extern "C" unsigned long g_006a7c42;
extern "C" unsigned long g_006a7cac;
extern "C" unsigned long g_006a7c80;
extern "C" unsigned long g_006a7cb0;
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e2bc(...);
extern "C" unsigned long g_006a7b98;
extern "C" unsigned long g_006a7bf0;
extern "C" unsigned long g_006a7bc0;
extern "C" unsigned long g_006a7bf4;
extern "C" long long func_0079e2fc(...);

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

bool BLTreasureMapItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLTreasureMapItemPresenter::~BLTreasureMapItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006a7b98 + (intptr_t)(g_006a7bf0))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_006a7bc0 + (intptr_t)(g_006a7bf4)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureMapItemPresenter::BLTreasureMapItemPresenter()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006a7c42 + (intptr_t)(g_006a7cac))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  *(int *)((int)this + 4*(8)) = -1;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(9)) = iVar3;
  ((cocos2d::CCObject *)this)->retain();
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_006a7c80 + (intptr_t)(g_006a7cb0)),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTreasureMapItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTreasureMapItemPresenter::initWithView(BLTreasureMapItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLTreasureMapItemPresenter::onEnter()
{
  return;
}

void BLTreasureMapItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLTreasureMapItemPresenter::initWithData(TreasureMapItemBase* p1)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  if (*(int *)(p1 + 4) == 0x14) {
    piVar3 = (int *)((BLTreasureMapItemView *)*(undefined4 *)(((int)this) + 0x18))->getIcon();
    pcVar5 = *(code **)(*piVar3 + 0x22c);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006a7db6 + (intptr_t)(g_006a7e34)),auStack_24);
    piVar4 = (int *)0 /* ctorZero */;
    uVar1 = (undefined4)((**(code **)(*piVar4 + 0x214))());
    (*pcVar5)(piVar3,uVar1);
    func_0079e2bc(auStack_20);
    piVar3 = (int *)((BLTreasureMapItemView *)*(undefined4 *)(((int)this) + 0x18))->getIcon();
    pcVar5 = *(code **)(*piVar3 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar5)(piVar3,auStack_20);
  }
  else {
    uVar1 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006a7d0e + (intptr_t)(g_006a7e2c))));
    iVar2 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x1c));
    if ((*(int *)(iVar2 + 4) == 7) && (*(char *)(iVar2 + 0x18) != '\0')) {
      iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_006a7e10 + (intptr_t)(g_006a7e3c))),
                              *(undefined4 *)((unsigned char *)((char *)&g_006a7e12 + (intptr_t)(g_006a7e40))),0);
      uVar1 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006a7e20 + (intptr_t)(g_006a7e44)), *(undefined4 *)(iVar2 + 0x24)));
    }
    piVar3 = (int *)((BLTreasureMapItemView *)*(undefined4 *)(((int)this) + 0x18))->getIcon();
    pcVar5 = *(code **)(*piVar3 + 0x22c);
    uVar1 = (undefined4)(((cocos2d::CCString *)uVar1)->getCString());
    func_0079e45c(auStack_20,uVar1,auStack_24);
    piVar4 = (int *)0 /* ctorZero */;
    uVar1 = (undefined4)((**(code **)(*piVar4 + 0x214))());
    (*pcVar5)(piVar3,uVar1);
    func_0079e2bc(auStack_20);
    piVar3 = (int *)((BLTreasureMapItemView *)*(undefined4 *)(((int)this) + 0x18))->getIcon();
    pcVar5 = *(code **)(*piVar3 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar5)(piVar3,auStack_20);
    if ((*(char *)(*(int *)(((int)this) + 0x1c) + 0xc) != '\0') &&
       (0 < *(int *)(*(int *)(((int)this) + 0x1c) + 0x1c))) {
      piVar3 = (int *)((BLTreasureMapItemView *)*(undefined4 *)(((int)this) + 0x18))->getMask();
      (**(code **)(*piVar3 + 0x90))(piVar3,1);
    }
  }
  return;
}

void BLTreasureMapItemPresenter::reset()
{
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0x18))();
  return;
}

void BLTreasureMapItemPresenter::triggerEnd()
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  if ((*(char *)(*(int *)(((int)this) + 0x1c) + 0xc) != '\0') &&
     (0 < *(int *)(*(int *)(((int)this) + 0x1c) + 0x1c))) {
    piVar3 = (int *)((BLTreasureMapItemView *)*(undefined4 *)(((int)this) + 0x18))->getMask();
    (**(code **)(*piVar3 + 0x90))(piVar3,1);
  }
  (**(code **)(**(int **)(((int)this) + 0x1c) + 0x14))();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)(unsigned char *)((char *)&g_006a7e7a + (intptr_t)(g_006a7f24)));
  if (*(int *)(*(int *)(((int)this) + 0x1c) + 4) == 7) {
    iVar2 = func_0079e55c(*(int *)(((int)this) + 0x1c),*(undefined4 *)((unsigned char *)((char *)&g_006a7e8e + (intptr_t)(g_006a7f28))),
                            *(undefined4 *)((unsigned char *)((char *)&g_006a7e90 + (intptr_t)(g_006a7f2c))),0);
    uVar1 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006a7e9e + (intptr_t)(g_006a7f30)), *(undefined4 *)(iVar2 + 0x24)));
    piVar3 = (int *)((BLTreasureMapItemView *)*(undefined4 *)(((int)this) + 0x18))->getIcon();
    pcVar5 = *(code **)(*piVar3 + 0x22c);
    uVar1 = (undefined4)(((cocos2d::CCString *)uVar1)->getCString());
    func_0079e45c(auStack_20,uVar1,auStack_24);
    piVar4 = (int *)0 /* ctorZero */;
    uVar1 = (undefined4)((**(code **)(*piVar4 + 0x214))());
    (*pcVar5)(piVar3,uVar1);
    func_0079e2bc(auStack_20);
    piVar3 = (int *)((BLTreasureMapItemView *)*(undefined4 *)(((int)this) + 0x18))->getIcon();
    pcVar5 = *(code **)(*piVar3 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar5)(piVar3,auStack_20);
  }
  return;
}

void BLTreasureMapItemPresenter::addGameOverInfo()
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->removeAllObjects();
  iVar1 = (undefined4)(intptr_t)(((RichTextData *)this)->create());
  *(undefined4 *)(iVar1 + 0x14) = 1;
  iVar2 = (undefined4)(intptr_t)(g_006a7f8c);
  *(undefined1 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x25) = 0;
  *(undefined1 *)(iVar1 + 0x26) = 0;
  func_0079e2dc(iVar1 + 0x18,&g_006a7f60 + iVar2,iVar1 + 7,0,p4);
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->addObject((cocos2d::CCObject*)iVar1);
  iVar2 = (undefined4)(intptr_t)(((TreasureDataManager *)this)->getInstance());
  ((TreasureRecordData *)*(undefined4 *)(iVar2 + 0x74))->addInfo((cocos2d::CCArray*)*(undefined4 *)(((int)this) + 0x24));
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)(unsigned char *)((char *)&g_006a7f82 + (intptr_t)(g_006a7f90)));
  ((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x24))->removeAllObjects();
  return;
}

void BLTreasureMapItemPresenter::addMoveInfo(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapItemPresenter::addSpecialMoveInfo(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapItemPresenter::beforeTrigger()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapItemPresenter::formatDesc(std::vector<std::string, std::allocator<std::string>>& p1, std::vector<cocos2d::_ccColor3B, std::allocator<cocos2d::_ccColor3B>>& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapItemPresenter::eventDesc(TreasureDescType * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapItemPresenter::onTrigger()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapItemPresenter::trigger()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_r1;
  
  if ((*(char *)(*(int *)(((int)this) + 0x1c) + 0xc) == '\0') ||
     (*(int *)(*(int *)(((int)this) + 0x1c) + 0x1c) < 1)) {
    if (*(int *)(((int)this) + 0x20) == -1) {
      iVar1 = (undefined4)(intptr_t)(((TreasureDataManager *)this)->getInstance());
      iVar1 = (undefined4)(intptr_t)(((TreasureWeightData *)*(undefined4 *)(iVar1 + 100))->getItemData((TreasureType)*(undefined4 *)(*(int *)(((int)this) + 0x1c) + 4)));
      iVar1 = (undefined4)(intptr_t)(g_006a8f64 * (*(int *)(iVar1 + 0x2c) - *(int *)(iVar1 + 0x28) >> 2));
      uVar2 = (undefined4)(((long long)::lrand48()));
      func_0079e964(uVar2,iVar1);
      *(undefined4 *)(((int)this) + 0x20) = extraout_r1;
    }
    BLTreasureMapItemPresenter::beforeTrigger();
    BLTreasureMapItemPresenter::eventDesc(0);
    BLTreasureMapItemPresenter::onTrigger();
    BLTreasureMapItemPresenter::triggerEnd();
    piVar3 = (int *)((TreasureDataManager *)this)->getInstance();
    (**(code **)(*piVar3 + 4))(piVar3,1);
  }
  else {
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)(unsigned char *)((char *)&g_006a8f5e + (intptr_t)(g_006a8f68)));
  }
  return;
}
