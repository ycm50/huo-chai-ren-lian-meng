#include "BLItemDataInfoView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "BLItemDataInfoDownView.h"
#include "BLItemDataInfoPresenter.h"
#include "BLItemDataInfoUpView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLDebrisItemDataInfoDownView.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006001ac;
extern "C" unsigned long UNK_006001f0;
extern "C" unsigned long UNK_00600234;
extern "C" unsigned long UNK_0060025c;
extern "C" unsigned long UNK_00600408;
extern "C" unsigned long UNK_006006f8;
extern "C" unsigned long UNK_00600726;
extern "C" unsigned long UNK_00600820;
extern "C" unsigned long UNK_0060084e;
extern "C" unsigned long _DAT_006002fc;
extern "C" unsigned long _DAT_00600300;
extern "C" unsigned long _UNK_00600220;
extern "C" unsigned long _UNK_00600224;
extern "C" unsigned long _UNK_00600238;
extern "C" unsigned long _UNK_00600260;
extern "C" unsigned long _UNK_0060073c;
extern "C" unsigned long _UNK_00600740;
extern "C" unsigned long _UNK_00600744;
extern "C" unsigned long _UNK_00600748;
extern "C" unsigned long _UNK_0060074c;
extern "C" unsigned long _UNK_00600750;
extern "C" unsigned long _UNK_00600754;
extern "C" unsigned long _UNK_0060098c;
extern "C" unsigned long _UNK_00600990;
extern "C" unsigned long _UNK_00600994;
extern "C" unsigned long _UNK_00600998;
extern "C" unsigned long _UNK_0060099c;
extern "C" unsigned long _UNK_006009a0;
extern "C" unsigned long _UNK_006009a4;
extern "C" unsigned long _UNK_006009a8;
extern "C" unsigned long g_006001ac;
extern "C" unsigned long g_006001f0;
extern "C" unsigned long g_00600220;
extern "C" unsigned long g_00600224;
extern "C" unsigned long g_00600234;
extern "C" unsigned long g_00600238;
extern "C" unsigned long g_0060025c;
extern "C" unsigned long g_00600260;
extern "C" unsigned long g_006002fc;
extern "C" unsigned long g_00600300;
extern "C" unsigned long g_00600408;
extern "C" unsigned long g_006006f8;
extern "C" unsigned long g_00600726;
extern "C" unsigned long g_0060073c;
extern "C" unsigned long g_00600740;
extern "C" unsigned long g_00600744;
extern "C" unsigned long g_00600748;
extern "C" unsigned long g_0060074c;
extern "C" unsigned long g_00600750;
extern "C" unsigned long g_00600754;
extern "C" unsigned long g_00600820;
extern "C" unsigned long g_0060084e;
extern "C" unsigned long g_0060098c;
extern "C" unsigned long g_00600990;
extern "C" unsigned long g_00600994;
extern "C" unsigned long g_00600998;
extern "C" unsigned long g_0060099c;
extern "C" unsigned long g_006009a0;
extern "C" unsigned long g_006009a4;
extern "C" unsigned long g_006009a8;
BLItemDataInfoView::~BLItemDataInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006001ac + g_00600220);
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
  func_0079e45c(&uStack_14,&g_006001f0 + g_00600224,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLItemDataInfoView::BLItemDataInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006002fc + 0x6002a4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLItemDataInfoView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLItemDataInfoView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
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

undefined4 BLItemDataInfoView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLItemDataInfoView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLItemDataInfoView::ItemInfoDown()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLItemDataInfoView::DebrisItemInfoDown()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLItemDataInfoView::OtherItemInfoDown()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLItemDataInfoView::ItemInfoUp()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLItemDataInfoView::getBtnUnequip()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLItemDataInfoView::getLabUnequip()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLItemDataInfoView::onEnter()
{
  ((BLItemDataInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLItemDataInfoView::onExit()
{
  ((BLItemDataInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLItemDataInfoView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLItemDataInfoPresenter *)this)->create((BLItemDataInfoView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00600408 + (intptr_t)(g_0060073c)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x43)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar6 = *(code **)(*piVar7 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),1);
    piVar7 = (int *)((BLItemDataInfoDownView *)this)->create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),2);
    piVar7 = (int *)::operator new(0x140);
    ::new ((void *)piVar7) BLDebrisItemDataInfoDownView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x18)))(piVar7));
    if (iVar2 == 0) {
      (**(code **)(*(int *)(piVar7) + (8)))(piVar7);
      piVar7 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar7))->autorelease();
    }
    *(int *)((int)this + 4*(0x45)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    piVar7 = (int *)::operator new(0x140);
    ::new ((void *)piVar7) BLDebrisItemDataInfoDownView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x18)))(piVar7));
    if (iVar2 == 0) {
      (**(code **)(*(int *)(piVar7) + (8)))(piVar7);
      piVar7 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)(piVar7))->autorelease();
    }
    *(int *)((int)this + 4*(0x46)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),2);
    piVar7 = (int *)((BLItemDataInfoUpView *)this)->create();
    *(int *)((int)this + 4*(0x47)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),3);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x48)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006006f8 + (intptr_t)(g_00600750)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x30c))((int *)*(int *)((int)this + 4*(0x48)),uVar5,1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00600726 + (intptr_t)(g_00600754)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x30c))((int *)*(int *)((int)this + 4*(0x48)),uVar5,2);
    piVar7 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar7 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x30))((int *)*(int *)((int)this + 4*(0x48)),0x3f800000);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x38))((int *)*(int *)((int)this + 4*(0x48)),0x3f800000);
    piVar7 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),4);
    uVar5 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00600820 + (intptr_t)(g_00600998)),auStack_30);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_0060099c,uVar5));
    iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)auStack_20[0], (char const*)(unsigned char *)((char *)&g_0060084e + (intptr_t)(g_006009a0)), uVar5));
    *(int *)((int)this + 4*(0x49)) = iVar2;
    func_0079e2bc(auStack_20);
    func_0079e2bc(auStack_28);
    piVar7 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x1b4))();
    piVar7 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x49)),5);
    pcVar6 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_30[0],uVar5));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_24,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(((int)this),auStack_20);
    ((BLItemDataInfoPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLItemDataInfoView*)((int)this));
  }
  return iVar1;
}
