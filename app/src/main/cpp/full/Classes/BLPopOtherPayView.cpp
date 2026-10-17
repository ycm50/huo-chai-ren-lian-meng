#include "BLPopOtherPayView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPopOtherPayPresenter.h"
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
extern "C" unsigned long UNK_00605a14;
extern "C" unsigned long UNK_00605a58;
extern "C" unsigned long UNK_00605a9c;
extern "C" unsigned long UNK_00605ac4;
extern "C" unsigned long UNK_00605c5c;
extern "C" unsigned long UNK_00605d50;
extern "C" unsigned long UNK_00605d82;
extern "C" unsigned long UNK_00605e4e;
extern "C" unsigned long UNK_00605e6e;
extern "C" unsigned long UNK_00605ef8;
extern "C" unsigned long UNK_00605f0e;
extern "C" unsigned long UNK_00605fa8;
extern "C" unsigned long UNK_00605fd0;
extern "C" unsigned long UNK_006060fc;
extern "C" unsigned long UNK_00606112;
extern "C" unsigned long UNK_006061a6;
extern "C" unsigned long UNK_006061d0;
extern "C" unsigned long UNK_006062a4;
extern "C" unsigned long UNK_006062ba;
extern "C" unsigned long _DAT_00605b64;
extern "C" unsigned long _DAT_00605b68;
extern "C" unsigned long _UNK_00605a88;
extern "C" unsigned long _UNK_00605a8c;
extern "C" unsigned long _UNK_00605aa0;
extern "C" unsigned long _UNK_00605ac8;
extern "C" unsigned long _UNK_0060603c;
extern "C" unsigned long _UNK_00606040;
extern "C" unsigned long _UNK_00606044;
extern "C" unsigned long _UNK_00606048;
extern "C" unsigned long _UNK_0060604c;
extern "C" unsigned long _UNK_00606050;
extern "C" unsigned long _UNK_00606054;
extern "C" unsigned long _UNK_00606058;
extern "C" unsigned long _UNK_0060605c;
extern "C" unsigned long _UNK_00606060;
extern "C" unsigned long _UNK_00606064;
extern "C" unsigned long _UNK_00606068;
extern "C" unsigned long _UNK_0060606c;
extern "C" unsigned long _UNK_00606070;
extern "C" unsigned long _UNK_00606074;
extern "C" unsigned long _UNK_00606078;
extern "C" unsigned long _UNK_0060607c;
extern "C" unsigned long _UNK_00606080;
extern "C" unsigned long _UNK_00606084;
extern "C" unsigned long _UNK_00606088;
extern "C" unsigned long _UNK_0060608c;
extern "C" unsigned long _UNK_006063dc;
extern "C" unsigned long _UNK_006063e0;
extern "C" unsigned long _UNK_006063e4;
extern "C" unsigned long _UNK_006063e8;
extern "C" unsigned long _UNK_006063ec;
extern "C" unsigned long _UNK_006063f0;
extern "C" unsigned long _UNK_006063f4;
extern "C" unsigned long _UNK_006063f8;
extern "C" unsigned long _UNK_006063fc;
extern "C" unsigned long _UNK_00606400;
extern "C" unsigned long _UNK_00606404;
extern "C" unsigned long _UNK_00606408;
extern "C" unsigned long _UNK_0060640c;
extern "C" unsigned long _UNK_00606410;
extern "C" unsigned long g_00605a14;
extern "C" unsigned long g_00605a58;
extern "C" unsigned long g_00605a88;
extern "C" unsigned long g_00605a8c;
extern "C" unsigned long g_00605a9c;
extern "C" unsigned long g_00605aa0;
extern "C" unsigned long g_00605ac4;
extern "C" unsigned long g_00605ac8;
extern "C" unsigned long g_00605b64;
extern "C" unsigned long g_00605b68;
extern "C" unsigned long g_00605c5c;
extern "C" unsigned long g_00605d50;
extern "C" unsigned long g_00605d82;
extern "C" unsigned long g_00605e4e;
extern "C" unsigned long g_00605e6e;
extern "C" unsigned long g_00605ef8;
extern "C" unsigned long g_00605f0e;
extern "C" unsigned long g_00605fa8;
extern "C" unsigned long g_00605fd0;
extern "C" unsigned long g_0060603c;
extern "C" unsigned long g_00606040;
extern "C" unsigned long g_00606044;
extern "C" unsigned long g_00606048;
extern "C" unsigned long g_0060604c;
extern "C" unsigned long g_00606050;
extern "C" unsigned long g_00606054;
extern "C" unsigned long g_00606058;
extern "C" unsigned long g_0060605c;
extern "C" unsigned long g_00606060;
extern "C" unsigned long g_00606064;
extern "C" unsigned long g_00606068;
extern "C" unsigned long g_0060606c;
extern "C" unsigned long g_00606070;
extern "C" unsigned long g_00606074;
extern "C" unsigned long g_00606078;
extern "C" unsigned long g_0060607c;
extern "C" unsigned long g_00606080;
extern "C" unsigned long g_00606084;
extern "C" unsigned long g_00606088;
extern "C" unsigned long g_0060608c;
extern "C" unsigned long g_006060fc;
extern "C" unsigned long g_00606112;
extern "C" unsigned long g_006061a6;
extern "C" unsigned long g_006061d0;
extern "C" unsigned long g_006062a4;
extern "C" unsigned long g_006062ba;
extern "C" unsigned long g_006063dc;
extern "C" unsigned long g_006063e0;
extern "C" unsigned long g_006063e4;
extern "C" unsigned long g_006063e8;
extern "C" unsigned long g_006063ec;
extern "C" unsigned long g_006063f0;
extern "C" unsigned long g_006063f4;
extern "C" unsigned long g_006063f8;
extern "C" unsigned long g_006063fc;
extern "C" unsigned long g_00606400;
extern "C" unsigned long g_00606404;
extern "C" unsigned long g_00606408;
extern "C" unsigned long g_0060640c;
extern "C" unsigned long g_00606410;
BLPopOtherPayView::~BLPopOtherPayView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00605a14 + g_00605a88);
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
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00605a58 + g_00605a8c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPopOtherPayView::BLPopOtherPayView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00605b64 + 0x605b0c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLPopOtherPayView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPopOtherPayView::create()
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

undefined4 BLPopOtherPayView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLPopOtherPayView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLPopOtherPayView::getBtnPay_duan()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLPopOtherPayView::getBtnPay_other()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLPopOtherPayView::getLabelContent()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void BLPopOtherPayView::onEnter()
{
  ((BLPopOtherPayPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPopOtherPayView::onExit()
{
  ((BLPopOtherPayPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLPopOtherPayView::init()
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
    iVar2 = (undefined4)(intptr_t)(((BLPopOtherPayPresenter *)this)->create((BLPopOtherPayView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00605c5c + (intptr_t)(g_0060603c)),auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar7 = *(code **)(*piVar3 + 0x88);
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
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x43)) = (int)piVar3;
    (**(code **)(*(int *)(piVar3) + (0x294)))(piVar3,0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00605d50 + (intptr_t)(g_00606048)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),uVar6,1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00605d82 + (intptr_t)(g_0060604c)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),uVar6,2);
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30))((int *)*(int *)((int)this + 4*(0x43)),0x3f800000);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x38))((int *)*(int *)((int)this + 4*(0x43)),0x3f800000);
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
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
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),2);
    uVar6 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00605e4e + (intptr_t)(g_00606060)),auStack_30);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_00605e6e + (intptr_t)(g_00606064)), g_00606068);
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
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
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,2);
    uVar6 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00605ef8 + (intptr_t)(g_0060606c)),auStack_30);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_00605f0e + (intptr_t)(g_00606070)), g_00606074));
    *(int *)((int)this + 4*(0x46)) = iVar2;
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
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
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),2);
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar3;
    (**(code **)(*(int *)(piVar3) + (0x294)))(piVar3,0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00605fa8 + (intptr_t)(g_00606078)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar6,1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00605fd0 + (intptr_t)(g_0060607c)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar6,2);
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
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
    uVar6 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_006060fc + (intptr_t)(g_006063e4)),auStack_30);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_00606112 + (intptr_t)(g_006063e8)), g_006063ec);
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
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
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,2);
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x45)) = (int)piVar3;
    (**(code **)(*(int *)(piVar3) + (0x294)))(piVar3,0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006061a6 + (intptr_t)(g_006063f0)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar6,1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006061d0 + (intptr_t)(g_006063f4)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar6,2);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar7 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30))((int *)*(int *)((int)this + 4*(0x45)),0x3f800000);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x38))((int *)*(int *)((int)this + 4*(0x45)),0x3f800000);
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
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_006062a4 + (intptr_t)(g_00606404)),auStack_30);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_006062ba + (intptr_t)(g_00606408)), g_006063ec);
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
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
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,2);
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
    ((BLPopOtherPayPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLPopOtherPayView*)((int)this));
  }
  return iVar1;
}
