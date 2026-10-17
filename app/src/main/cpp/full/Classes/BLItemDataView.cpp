#include "BLItemDataView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLItemDataPresenter.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006009fc;
extern "C" unsigned long UNK_00600a4e;
extern "C" unsigned long UNK_00600a94;
extern "C" unsigned long UNK_00600abc;
extern "C" unsigned long UNK_00600b04;
extern "C" unsigned long UNK_00600b40;
extern "C" unsigned long UNK_00600c68;
extern "C" unsigned long UNK_00600cfe;
extern "C" unsigned long UNK_00600da0;
extern "C" unsigned long UNK_00600e3a;
extern "C" unsigned long UNK_00600e68;
extern "C" unsigned long _UNK_00600a80;
extern "C" unsigned long _UNK_00600a84;
extern "C" unsigned long _UNK_00600a98;
extern "C" unsigned long _UNK_00600ac0;
extern "C" unsigned long _UNK_00600b74;
extern "C" unsigned long _UNK_00600b78;
extern "C" unsigned long _UNK_00600fa0;
extern "C" unsigned long _UNK_00600fa4;
extern "C" unsigned long _UNK_00600fa8;
extern "C" unsigned long _UNK_00600fac;
extern "C" unsigned long _UNK_00600fb0;
extern "C" unsigned long _UNK_00600fb4;
extern "C" unsigned long _UNK_00600fb8;
extern "C" unsigned long _UNK_00600fbc;
extern "C" unsigned long g_006009fc;
extern "C" unsigned long g_00600a4e;
extern "C" unsigned long g_00600a80;
extern "C" unsigned long g_00600a84;
extern "C" unsigned long g_00600a94;
extern "C" unsigned long g_00600a98;
extern "C" unsigned long g_00600abc;
extern "C" unsigned long g_00600ac0;
extern "C" unsigned long g_00600b04;
extern "C" unsigned long g_00600b40;
extern "C" unsigned long g_00600b74;
extern "C" unsigned long g_00600b78;
extern "C" unsigned long g_00600c68;
extern "C" unsigned long g_00600cfe;
extern "C" unsigned long g_00600da0;
extern "C" unsigned long g_00600e3a;
extern "C" unsigned long g_00600e68;
extern "C" unsigned long g_00600fa0;
extern "C" unsigned long g_00600fa4;
extern "C" unsigned long g_00600fa8;
extern "C" unsigned long g_00600fac;
extern "C" unsigned long g_00600fb0;
extern "C" unsigned long g_00600fb4;
extern "C" unsigned long g_00600fb8;
extern "C" unsigned long g_00600fbc;
BLItemDataView::~BLItemDataView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006009fc + (intptr_t)(g_00600a80))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00600a4e + (intptr_t)(g_00600a84)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLItemDataView::BLItemDataView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00600b04 + (intptr_t)(g_00600b74))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_00600b40 + (intptr_t)(g_00600b78)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLItemDataView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x11c)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 BLItemDataView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLItemDataView::getSprItem()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLItemDataView::getSprDebris()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLItemDataView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void BLItemDataView::onEnter()
{
  ((BLItemDataPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLItemDataView::onExit()
{
  ((BLItemDataPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLItemDataView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLItemDataPresenter *)this)->create((BLItemDataView*)((int)this)));
    *(int *)((int)this + 4*(0x43)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00600c68 + (intptr_t)(g_00600fa0)),auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)(piVar3) + (0x30)))(piVar3,0x3f800000);
    (**(code **)(*(int *)(piVar3) + (0x38)))(piVar3,0x3f800000);
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00600cfe + (intptr_t)(g_00600fa4)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30))((int *)*(int *)((int)this + 4*(0x44)),0x3f800000);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x38))((int *)*(int *)((int)this + 4*(0x44)),0x3f800000);
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),2);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00600da0 + (intptr_t)(g_00600fa8)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x45)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x40))((int *)*(int *)((int)this + 4*(0x45)),0x3f800000);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    uVar6 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00600e3a + (intptr_t)(g_00600fac)),auStack_30);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(0x41800000,uVar6));
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_00600e68 + (intptr_t)(g_00600fb0)), uVar6));
    *(int *)((int)this + 4*(0x46)) = iVar2;
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x46))))->setHorizontalAlignment((cocos2d::CCTextAlignment)2);
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar7 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x1b4))();
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),3);
    pcVar7 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(auStack_30[0],uVar6));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uStack_24,uVar4));
    0 /* ctorZero */;
    (*pcVar7)(((int)this),auStack_20);
    ((BLItemDataPresenter *)(*(int *)((int)this + 4*(0x43))))->initWithView((BLItemDataView*)((int)this));
  }
  return iVar1;
}
