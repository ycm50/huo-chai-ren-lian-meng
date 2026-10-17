#include "BLSignedItemView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLSignedItemPresenter.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00689088;
extern "C" unsigned long UNK_006890cc;
extern "C" unsigned long UNK_00689110;
extern "C" unsigned long UNK_00689138;
extern "C" unsigned long UNK_00689180;
extern "C" unsigned long UNK_006891ae;
extern "C" unsigned long UNK_006892f0;
extern "C" unsigned long UNK_006893d8;
extern "C" unsigned long UNK_00689432;
extern "C" unsigned long UNK_006894e4;
extern "C" unsigned long UNK_006894e6;
extern "C" unsigned long UNK_00689532;
extern "C" unsigned long UNK_0068954a;
extern "C" unsigned long UNK_006895fe;
extern "C" unsigned long UNK_00689600;
extern "C" unsigned long UNK_00689628;
extern "C" unsigned long UNK_00689684;
extern "C" unsigned long UNK_00689750;
extern "C" unsigned long UNK_006897da;
extern "C" unsigned long UNK_00689832;
extern "C" unsigned long UNK_00689912;
extern "C" unsigned long UNK_00689914;
extern "C" unsigned long UNK_00689926;
extern "C" unsigned long _UNK_006890fc;
extern "C" unsigned long _UNK_00689100;
extern "C" unsigned long _UNK_00689114;
extern "C" unsigned long _UNK_0068913c;
extern "C" unsigned long _UNK_006891d8;
extern "C" unsigned long _UNK_006891dc;
extern "C" unsigned long _UNK_006896cc;
extern "C" unsigned long _UNK_006896d0;
extern "C" unsigned long _UNK_006896d4;
extern "C" unsigned long _UNK_006896d8;
extern "C" unsigned long _UNK_006896dc;
extern "C" unsigned long _UNK_006896e0;
extern "C" unsigned long _UNK_006896e4;
extern "C" unsigned long _UNK_006896e8;
extern "C" unsigned long _UNK_006896ec;
extern "C" unsigned long _UNK_006896f0;
extern "C" unsigned long _UNK_006896f4;
extern "C" unsigned long _UNK_006896f8;
extern "C" unsigned long _UNK_006896fc;
extern "C" unsigned long _UNK_00689700;
extern "C" unsigned long _UNK_00689704;
extern "C" unsigned long _UNK_00689708;
extern "C" unsigned long _UNK_0068970c;
extern "C" unsigned long _UNK_00689710;
extern "C" unsigned long _UNK_00689714;
extern "C" unsigned long _UNK_00689a0c;
extern "C" unsigned long _UNK_00689a10;
extern "C" unsigned long _UNK_00689a14;
extern "C" unsigned long _UNK_00689a18;
extern "C" unsigned long _UNK_00689a1c;
extern "C" unsigned long _UNK_00689a20;
extern "C" unsigned long _UNK_00689a24;
extern "C" unsigned long _UNK_00689a28;
extern "C" unsigned long _UNK_00689a2c;
extern "C" unsigned long _UNK_00689a30;
extern "C" unsigned long _UNK_00689a34;
extern "C" unsigned long _UNK_00689a38;
extern "C" unsigned long _UNK_00689a3c;
extern "C" unsigned long _UNK_00689a40;
extern "C" unsigned long g_00689088;
extern "C" unsigned long g_006890cc;
extern "C" unsigned long g_006890fc;
extern "C" unsigned long g_00689100;
extern "C" unsigned long g_00689110;
extern "C" unsigned long g_00689114;
extern "C" unsigned long g_00689138;
extern "C" unsigned long g_0068913c;
extern "C" unsigned long g_00689180;
extern "C" unsigned long g_006891ae;
extern "C" unsigned long g_006891d8;
extern "C" unsigned long g_006891dc;
extern "C" unsigned long g_006892f0;
extern "C" unsigned long g_006893d8;
extern "C" unsigned long g_00689432;
extern "C" unsigned long g_006894e4;
extern "C" unsigned long g_006894e6;
extern "C" unsigned long g_00689532;
extern "C" unsigned long g_0068954a;
extern "C" unsigned long g_006895fe;
extern "C" unsigned long g_00689600;
extern "C" unsigned long g_00689628;
extern "C" unsigned long g_00689684;
extern "C" unsigned long g_006896cc;
extern "C" unsigned long g_006896d0;
extern "C" unsigned long g_006896d4;
extern "C" unsigned long g_006896d8;
extern "C" unsigned long g_006896dc;
extern "C" unsigned long g_006896e0;
extern "C" unsigned long g_006896e4;
extern "C" unsigned long g_006896e8;
extern "C" unsigned long g_006896ec;
extern "C" unsigned long g_006896f0;
extern "C" unsigned long g_006896f4;
extern "C" unsigned long g_006896f8;
extern "C" unsigned long g_006896fc;
extern "C" unsigned long g_00689700;
extern "C" unsigned long g_00689704;
extern "C" unsigned long g_00689708;
extern "C" unsigned long g_0068970c;
extern "C" unsigned long g_00689710;
extern "C" unsigned long g_00689714;
extern "C" unsigned long g_00689750;
extern "C" unsigned long g_006897da;
extern "C" unsigned long g_00689832;
extern "C" unsigned long g_00689912;
extern "C" unsigned long g_00689914;
extern "C" unsigned long g_00689926;
extern "C" unsigned long g_00689a0c;
extern "C" unsigned long g_00689a10;
extern "C" unsigned long g_00689a14;
extern "C" unsigned long g_00689a18;
extern "C" unsigned long g_00689a1c;
extern "C" unsigned long g_00689a20;
extern "C" unsigned long g_00689a24;
extern "C" unsigned long g_00689a28;
extern "C" unsigned long g_00689a2c;
extern "C" unsigned long g_00689a30;
extern "C" unsigned long g_00689a34;
extern "C" unsigned long g_00689a38;
extern "C" unsigned long g_00689a3c;
extern "C" unsigned long g_00689a40;
BLSignedItemView::~BLSignedItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00689088 + g_006890fc);
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
  func_0079e45c(&uStack_14,&g_006890cc + g_00689100,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSignedItemView::BLSignedItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00689180 + g_006891d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006891ae + g_006891dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSignedItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

undefined4 BLSignedItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLSignedItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLSignedItemView::getSprIcon()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLSignedItemView::getSprIconMeng()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLSignedItemView::getSprSelect()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLSignedItemView::getIconBtn()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLSignedItemView::getLabNum()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLSignedItemView::getSpDebris()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLSignedItemView::getSpStar()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLSignedItemView::getLabeStarNum()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

void BLSignedItemView::onEnter()
{
  ((BLSignedItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSignedItemView::onExit()
{
  ((BLSignedItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSignedItemView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *piVar8;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLSignedItemPresenter *)this)->create((BLSignedItemView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006892f0 + (intptr_t)(g_006896cc)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar8 + 0x1d4);
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
    (*pcVar7)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
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
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006893d8 + (intptr_t)(g_006896d8)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x45)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x40))((int *)*(int *)((int)this + 4*(0x45)),0x3f800000);
    piVar8 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00689432 + (intptr_t)(g_006896e0)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x49)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar7 = *(code **)(*piVar8 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
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
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x49)),1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x90))((int *)*(int *)((int)this + 4*(0x49)),0);
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006894e4 + (intptr_t)(g_006896e8)), (char const*)(unsigned char *)((char *)&g_006894e6 + (intptr_t)(g_006896ec)), g_006896f0);
    *(int *)((int)this + 4*(0x48)) = (int)piVar8;
    pcVar7 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x48)),(unsigned char *)((char *)&g_00689532 + (intptr_t)(g_006896f8)))
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),2);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0068954a + (intptr_t)(g_006896fc)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x4b)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x40))((int *)*(int *)((int)this + 4*(0x4b)),0x3f800000);
    piVar8 = (int *)*(int *)((int)this + 4*(0x4b));
    pcVar7 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x4b));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
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
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4b)),2);
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006895fe + (intptr_t)(g_00689704)), (char const*)(unsigned char *)((char *)&g_00689600 + (intptr_t)(g_00689708)), 0xc1000000);
    *(int *)((int)this + 4*(0x4c)) = (int)piVar8;
    pcVar7 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x4c)),(unsigned char *)((char *)&g_00689628 + (intptr_t)(g_0068970c)))
    ;
    piVar8 = (int *)*(int *)((int)this + 4*(0x4c));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x50))());
    puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x8c))();
    uVar3 = (undefined4)(func_0079e59c(*puVar6,0x40000000));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4c)),2);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00689684 + (intptr_t)(g_00689710)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x46)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar7 = *(code **)(*piVar8 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x50))());
    (*pcVar7)(piVar8,uVar5);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x90))((int *)*(int *)((int)this + 4*(0x46)),0);
    piVar8 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x4a)) = (int)piVar8;
    (**(code **)(*(int *)(piVar8) + (0x294)))(piVar8,0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00689750 + (intptr_t)(g_00689a0c)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x30c))((int *)*(int *)((int)this + 4*(0x4a)),uVar5,1);
    piVar8 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar7 = *(code **)(*piVar8 + 0x28c);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar7 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x50))());
    (*pcVar7)(piVar8,uVar5);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4a)),1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006897da + (intptr_t)(g_00689a14)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x47)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x40))((int *)*(int *)((int)this + 4*(0x47)),g_00689a18);
    piVar8 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x50))());
    (*pcVar7)(piVar8,uVar5);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x90))((int *)*(int *)((int)this + 4*(0x47)),0);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00689832 + (intptr_t)(g_00689a1c)),auStack_28);
    piVar8 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar7 = *(code **)(*piVar8 + 0x88);
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
    (*pcVar7)(piVar8,auStack_20);
    pcVar7 = *(code **)(*piVar8 + 0x4c);
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
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar8,2);
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00689914 + (intptr_t)(g_00689a2c)), (char const*)(unsigned char *)((char *)&g_00689912 + (intptr_t)(g_00689a30)), g_00689a34);
    *(int *)((int)this + 4*(0x43)) = (int)piVar8;
    (**(code **)(*(int *)(piVar8) + (0x1b4)))(piVar8,(unsigned char *)((char *)&g_00689926 + (intptr_t)(g_00689a38)));
    piVar8 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
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
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),3);
    pcVar7 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_30[0],uVar5));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_24,uVar3));
    0 /* ctorZero */;
    (*pcVar7)(((int)this),auStack_20);
    ((BLSignedItemPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLSignedItemView*)((int)this));
  }
  return iVar1;
}
