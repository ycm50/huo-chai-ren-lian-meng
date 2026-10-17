#include "BLSuitUpGracePresenter.h"
#include "CCNode.h"
#include "CCAction.h"
#include "CCAnimation.h"
#include "CCActionInstant.h"
#include "CCActionInterval.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "BLSuitUpGraceView.h"
#include "BackPackItemData.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLSuitUpGraceInfoPresenter.h"
#include "BLSuitUpGraceListPresenter.h"
#include "BLSuitUpgraceCostPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" unsigned long g_006925be;
extern "C" unsigned long g_00692618;
extern "C" unsigned long g_006925c0;
extern "C" unsigned long g_00692614;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069092a;
extern "C" unsigned long UNK_0069094a;
extern "C" unsigned long UNK_00691528;
extern "C" unsigned long UNK_00691534;
extern "C" unsigned long UNK_00691536;
extern "C" unsigned long UNK_00691550;
extern "C" unsigned long UNK_006915ec;
extern "C" unsigned long UNK_00692516;
extern "C" unsigned long UNK_00692518;
extern "C" unsigned long UNK_00692630;
extern "C" unsigned long UNK_0069263e;
extern "C" unsigned long UNK_0069265a;
extern "C" unsigned long UNK_00692676;
extern "C" unsigned long UNK_00692692;
extern "C" unsigned long UNK_006926b8;
extern "C" unsigned long _UNK_00690988;
extern "C" unsigned long _UNK_0069098c;
extern "C" unsigned long _UNK_00691580;
extern "C" unsigned long _UNK_00691584;
extern "C" unsigned long _UNK_00691588;
extern "C" unsigned long _UNK_0069158c;
extern "C" unsigned long _UNK_00691614;
extern "C" unsigned long _UNK_00692574;
extern "C" unsigned long _UNK_00692578;
extern "C" unsigned long _UNK_0069272c;
extern "C" unsigned long _UNK_00692730;
extern "C" unsigned long _UNK_00692734;
extern "C" unsigned long _UNK_00692738;
extern "C" unsigned long _UNK_0069273c;
extern "C" unsigned long _UNK_00692740;
extern "C" unsigned long _UNK_00692744;
extern "C" unsigned long _UNK_00692748;
extern "C" unsigned long _UNK_0069274c;
extern "C" unsigned long _UNK_00692750;
extern "C" unsigned long _UNK_00692754;
extern "C" unsigned long _UNK_00692758;
extern "C" unsigned long g_0069092a;
extern "C" unsigned long g_0069094a;
extern "C" unsigned long g_00690988;
extern "C" unsigned long g_0069098c;
extern "C" unsigned long g_00691528;
extern "C" unsigned long g_00691534;
extern "C" unsigned long g_00691536;
extern "C" unsigned long g_00691550;
extern "C" unsigned long g_00691580;
extern "C" unsigned long g_00691584;
extern "C" unsigned long g_00691588;
extern "C" unsigned long g_0069158c;
extern "C" unsigned long g_006915ec;
extern "C" unsigned long g_00691614;
extern "C" unsigned long g_00692516;
extern "C" unsigned long g_00692518;
extern "C" unsigned long g_00692574;
extern "C" unsigned long g_00692578;
extern "C" unsigned long g_00692630;
extern "C" unsigned long g_0069263e;
extern "C" unsigned long g_0069265a;
extern "C" unsigned long g_00692676;
extern "C" unsigned long g_00692692;
extern "C" unsigned long g_006926b8;
extern "C" unsigned long g_0069272c;
extern "C" unsigned long g_00692730;
extern "C" unsigned long g_00692734;
extern "C" unsigned long g_00692738;
extern "C" unsigned long g_0069273c;
extern "C" unsigned long g_00692740;
extern "C" unsigned long g_00692744;
extern "C" unsigned long g_00692748;
extern "C" unsigned long g_0069274c;
extern "C" unsigned long g_00692750;
extern "C" unsigned long g_00692754;
extern "C" unsigned long g_00692758;
undefined4 BLSuitUpGracePresenter::getRoleId() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0x18);
  return ((int)this);
}

BLSuitUpGracePresenter::~BLSuitUpGracePresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0069094a + g_0069098c,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSuitUpGracePresenter::onAnimationEnd()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x118);
  pcVar2 = *(code **)(*piVar1 + 0x90);
  (*pcVar2)(piVar1,0,p3,pcVar2,p4);
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->closeShieldLayer();
  return;
}

BLSuitUpGracePresenter::BLSuitUpGracePresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar1 = g_00691584;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  *(int *)((int)this + 4*(6)) = *(int *)(&g_00691536 + g_00691588) + 0xc;
  func_0079e2dc(((int)this) + 6,&g_00691534 + iVar1);
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00691550 + g_0069158c,&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

undefined4 BLSuitUpGracePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSuitUpGracePresenter::initWithView(BLSuitUpGraceView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

void BLSuitUpGracePresenter::onExit()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}


void BLSuitUpGracePresenter::onUpGraceFail()
{
  ((BLSuitUpgraceCostPresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x114) + 0x108))->updateValue();
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLSuitUpGracePresenter::startAnimation()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x118);
  pcVar5 = *(code **)(*piVar1 + 0x90);
  (*pcVar5)(piVar1,1,p3,pcVar5,((int)this),p2);
  uVar2 = (undefined4)(cocos2d::CCAnimate::create((cocos2d::CCAnimation*)*(undefined4 *)(((int)this) + 0x1c)));
  uVar4 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006915ec + (intptr_t)(g_00691614))));
  uVar7 = (undefined4)(0);
  uVar3 = (undefined4)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/));
  uVar6 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x14) + 0x118));
  uVar2 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)uVar2, uVar3, 0));
  ((cocos2d::CCNode *)(uVar6))->runAction((cocos2d::CCAction*)uVar2);
  return;
}

void BLSuitUpGracePresenter::initWithRoleId(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLSuitUpGracePresenter::onRoleChange(cocos2d::CCObject* p1)
{
  int *piVar1;
  int *piVar2;
  int iStack_14;
  
  iStack_14 = (undefined4)(intptr_t)p1;
  if (((int)(intptr_t)p1 != 0) &&
     (piVar1 = (int *)func_0079e55c(p1,*(undefined4 *)(&g_00692516 + g_00692578),
                                      *(undefined4 *)(&g_00692518 + g_00692574),0),
     piVar1 != (int *)0x0)) {
    piVar2 = *(int **)(*(int *)(*(int *)(((int)this) + 0x14) + 0x10c) + 0x108);
    (**(code **)(*piVar2 + 0x28))(piVar2,0xffffffff);
    piVar2 = *(int **)(*(int *)(*(int *)(((int)this) + 0x14) + 0x10c) + 0x108);
    (**(code **)(*piVar2 + 0x20))(piVar2,0);
    (**(code **)(*piVar1 + 0x18))(&iStack_14,piVar1);
    BLSuitUpGracePresenter::initWithRoleId((std::string)(char*)iStack_14);
    func_0079e2bc(&iStack_14);
  }
  return ghidra_CONCAT44(iStack_14,((int)this));
}

void BLSuitUpGracePresenter::onUpGraceSuccess()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  BLSuitUpGracePresenter::startAnimation();
  func_0079e53c(&uStack_14,((int)this) + 0x18);
  BLSuitUpGracePresenter::initWithRoleId((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLSuitUpGracePresenter::onPartChange(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  
  if (((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_006925be + (intptr_t)(g_00692618))),
                              *(undefined4 *)((unsigned char *)((char *)&g_006925c0 + (intptr_t)(g_00692614))),0,p4), iVar1 != 0)
     ) {
    ((BLSuitUpGraceListPresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x10c) + 0x108)))->updateSelIndes(*(undefined4 *)(iVar1 + 0x14));
    uVar2 = (undefined4)((**(code **)(**(int **)(*(int *)(*(int *)(((int)this) + 0x14) + 0x10c) + 0x108) + 0x1c))());
    ((BLSuitUpGraceInfoPresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x110) + 0x108)))->initWithData((BackPackItemData*)uVar2);
    ((BLSuitUpgraceCostPresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x14) + 0x114) + 0x108)))->initWithData((BackPackItemData*)uVar2);
  }
  return;
}

void BLSuitUpGracePresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
