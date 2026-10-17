#include "BLActivityView.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCScrollView.h"
#include "CCLayer.h"
#include "CCControlButton.h"
#include "CCLabelBMFont.h"
#include "CCSprite.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "CCGeometry.h"
#include "BLActivityPresenter.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f26e8;
extern "C" unsigned long UNK_004f273a;
extern "C" unsigned long UNK_004f2780;
extern "C" unsigned long UNK_004f27a8;
extern "C" unsigned long UNK_004f2974;
extern "C" unsigned long UNK_004f2aaa;
extern "C" unsigned long UNK_004f2b7e;
extern "C" unsigned long UNK_004f2b80;
extern "C" unsigned long UNK_004f2c58;
extern "C" unsigned long UNK_004f2c8a;
extern "C" unsigned long UNK_004f2dc6;
extern "C" unsigned long UNK_004f2eec;
extern "C" unsigned long _DAT_004f2860;
extern "C" unsigned long _DAT_004f2864;
extern "C" unsigned long _UNK_004f276c;
extern "C" unsigned long _UNK_004f2770;
extern "C" unsigned long _UNK_004f2784;
extern "C" unsigned long _UNK_004f27ac;
extern "C" unsigned long _UNK_004f2d48;
extern "C" unsigned long _UNK_004f2d4c;
extern "C" unsigned long _UNK_004f2d50;
extern "C" unsigned long _UNK_004f2d54;
extern "C" unsigned long _UNK_004f2d58;
extern "C" unsigned long _UNK_004f2d5c;
extern "C" unsigned long _UNK_004f2d60;
extern "C" unsigned long _UNK_004f2d64;
extern "C" unsigned long _UNK_004f2d68;
extern "C" unsigned long _UNK_004f2d6c;
extern "C" unsigned long _UNK_004f2d70;
extern "C" unsigned long _UNK_004f2f98;
extern "C" unsigned long _UNK_004f2f9c;
extern "C" unsigned long _UNK_004f2fa0;
extern "C" unsigned long _UNK_004f2fa4;
extern "C" unsigned long _UNK_004f2fa8;
extern "C" unsigned long _UNK_004f2fac;
extern "C" unsigned long _UNK_004f2fb0;
extern "C" unsigned long _UNK_004f2fb4;
extern "C" unsigned long g_004f26e8;
extern "C" unsigned long g_004f273a;
extern "C" unsigned long g_004f276c;
extern "C" unsigned long g_004f2770;
extern "C" unsigned long g_004f2780;
extern "C" unsigned long g_004f2784;
extern "C" unsigned long g_004f27a8;
extern "C" unsigned long g_004f27ac;
extern "C" unsigned long g_004f2860;
extern "C" unsigned long g_004f2864;
extern "C" unsigned long g_004f2974;
extern "C" unsigned long g_004f2aaa;
extern "C" unsigned long g_004f2b7e;
extern "C" unsigned long g_004f2b80;
extern "C" unsigned long g_004f2c58;
extern "C" unsigned long g_004f2c8a;
extern "C" unsigned long g_004f2d48;
extern "C" unsigned long g_004f2d4c;
extern "C" unsigned long g_004f2d50;
extern "C" unsigned long g_004f2d54;
extern "C" unsigned long g_004f2d58;
extern "C" unsigned long g_004f2d5c;
extern "C" unsigned long g_004f2d60;
extern "C" unsigned long g_004f2d64;
extern "C" unsigned long g_004f2d68;
extern "C" unsigned long g_004f2d6c;
extern "C" unsigned long g_004f2d70;
extern "C" unsigned long g_004f2dc6;
extern "C" unsigned long g_004f2eec;
extern "C" unsigned long g_004f2f98;
extern "C" unsigned long g_004f2f9c;
extern "C" unsigned long g_004f2fa0;
extern "C" unsigned long g_004f2fa4;
extern "C" unsigned long g_004f2fa8;
extern "C" unsigned long g_004f2fac;
extern "C" unsigned long g_004f2fb0;
extern "C" unsigned long g_004f2fb4;
BLActivityView::~BLActivityView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f26e8 + g_004f276c);
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
  func_0079e45c(&uStack_14,&g_004f273a + g_004f2770,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLActivityView::create()
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

undefined4 BLActivityView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLActivityView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLActivityView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLActivityView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLActivityView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLActivityView::getcontainerLayer()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLActivityView::getScrollview()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLActivityView::onEnter()
{
  ((BLActivityPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLActivityView::onExit()
{
  ((BLActivityPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLActivityView::BLActivityView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_004f2860 + 0x4f27f0));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLActivityView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLActivityView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  undefined8 uVar11;
  int iStack_40;
  int iStack_3c;
  undefined4 auStack_38 [2];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [20];
  
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar2 != 0) {
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar3))->getWinSize(); iStack_40 = hw_fbits(_ws.width); iStack_3c = hw_fbits(_ws.height); }
    iVar4 = (undefined4)(intptr_t)(((BLActivityPresenter *)this)->create((BLActivityView*)((int)this)));
    *(int *)((int)this + 4*(0x43)) = iVar4;
    if (iVar4 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_004f2974 + (intptr_t)(g_004f2d50)),auStack_30);
    iVar4 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar4;
    func_0079e2bc(auStack_28);
    piVar10 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar9 = *(code **)(*piVar10 + 0x88);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_38[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_2c);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar10,auStack_28);
    piVar10 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar9 = *(code **)(*piVar10 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_38[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_2c);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar10,auStack_28);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    piVar10 = (int *)cocos2d::CCSprite::create();
    iVar4 = (undefined4)(intptr_t)(iStack_40);
    *(int *)((int)this + 4*(0x45)) = (int)piVar10;
    pcVar9 = *(code **)(*piVar10 + 0x200);
    uVar11 = (undefined4)(intptr_t)(func_0079e62c(iStack_3c));
    func_0079e724((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_004f2d48,g_004f2d4c);
    uVar3 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    (*pcVar9)(piVar10,auStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x45)),(unsigned char *)((char *)&g_004f2aaa + (intptr_t)(g_004f2d54)))
    ;
    piVar10 = (int *)*(int *)((int)this + 4*(0x45));
    iVar4 = (int)*(int *)&(*piVar10);
    pcVar9 = *(code **)(iVar4 + 0x4c);
    uVar3 = (undefined4)(func_0079e4fc(iStack_3c,0x3f000000));
    iVar4 = (undefined4)(intptr_t)((**(code **)(iVar4 + 0x8c))(piVar10));
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
    uVar3 = (undefined4)(func_0079e57c(uVar3,uVar5));
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_38[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    uVar3 = (undefined4)(func_0079e4fc(iStack_3c,0x3f000000));
    piVar10 = (int *)*(int *)((int)this + 4*(0x45));
    iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar10) + (0x8c)))(piVar10));
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
    uVar3 = (undefined4)(func_0079e57c(uVar3,uVar6));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_2c);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar10,auStack_28);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(g_004f2d58,uVar3));
    piVar10 = (int *)cocos2d::CCLabelBMFont::create((char const*)(unsigned char *)((char *)&g_004f2b80 + (intptr_t)(g_004f2d60)), (char const*)(unsigned char *)((char *)&g_004f2b7e + (intptr_t)(g_004f2d5c)), uVar3);
    *(int *)((int)this + 4*(0x46)) = (int)piVar10;
    iVar4 = (int)*(int *)&(*piVar10);
    pcVar9 = *(code **)(iVar4 + 0x4c);
    uVar3 = (undefined4)(func_0079e4fc(iStack_3c,0x3f000000));
    iVar4 = (undefined4)(intptr_t)((**(code **)(iVar4 + 0x8c))(piVar10));
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
    uVar3 = (undefined4)(func_0079e57c(uVar3,uVar5));
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_38[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    uVar3 = (undefined4)(func_0079e4fc(iStack_3c,0x3f000000));
    piVar10 = (int *)*(int *)((int)this + 4*(0x46));
    iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar10) + (0x8c)))(piVar10));
    uVar6 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
    uVar3 = (undefined4)(func_0079e57c(uVar3,uVar6));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_2c);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar10,auStack_28);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),3);
    piVar10 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x47)) = (int)piVar10;
    (**(code **)(*(int *)(piVar10) + (0x294)))(piVar10,0);
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_004f2c58 + (intptr_t)(g_004f2d64)),auStack_30);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x30c))((int *)*(int *)((int)this + 4*(0x47)),uVar3,1);
    func_0079e45c(auStack_28,(unsigned char *)((char *)&g_004f2c8a + (intptr_t)(g_004f2d68)),auStack_30);
    uVar3 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x30c))((int *)*(int *)((int)this + 4*(0x47)),uVar3,2);
    piVar10 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar9 = *(code **)(*piVar10 + 0x28c);
    0 /* ctorZero */;
    (*pcVar9)(piVar10,auStack_28);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x30))((int *)*(int *)((int)this + 4*(0x47)),0x3f800000);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x38))((int *)*(int *)((int)this + 4*(0x47)),0x3f800000);
    piVar10 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar9 = *(code **)(*piVar10 + 0x4c);
    uVar3 = (undefined4)(func_0079e4fc(iStack_40,0x3f000000));
    uVar3 = (undefined4)(func_0079e57c(uVar3,g_004f2d70));
    uVar5 = (undefined4)(func_0079e4fc(iStack_3c,0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_004f2d70));
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_38[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    uVar3 = (undefined4)(func_0079e4fc(iStack_40,0x3f000000));
    uVar3 = (undefined4)(func_0079e57c(uVar3,g_004f2d70));
    uVar6 = (undefined4)(func_0079e4fc(iStack_3c,0x3f000000));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_004f2fa0));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_2c);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar10,auStack_28);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),0xe);
    piVar10 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_004f2dc6 + (intptr_t)(g_004f2fa4)));
    pcVar9 = *(code **)(*piVar10 + 0x4c);
    uVar11 = (undefined4)(intptr_t)(func_0079e62c(iStack_3c));
    func_0079e724((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_004f2f98,g_004f2f9c);
    uVar3 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_38[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar3,uVar5));
    uVar11 = (undefined4)(intptr_t)(func_0079e62c(iStack_3c));
    func_0079e724((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),g_004f2f98,g_004f2f9c);
    uVar3 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_2c);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    (*pcVar9)(piVar10,auStack_28);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar10,5);
    iVar4 = (undefined4)(intptr_t)(iStack_40);
    pcVar9 = *(code **)(*piVar10 + 0x30);
    puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar10) + (0x8c)))(piVar10);
    uVar3 = (undefined4)(func_0079e4dc(iVar4,*puVar7));
    (*pcVar9)(piVar10,uVar3);
    iVar8 = (undefined4)(intptr_t)(cocos2d::CCLayer::create());
    iVar1 = (undefined4)(intptr_t)(iStack_3c);
    iVar4 = (undefined4)(intptr_t)(iStack_40);
    *(int *)((int)this + 4*(0x48)) = iVar8;
    iVar8 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))());
    uVar3 = (undefined4)(func_0079e57c(iVar1,*(undefined4 *)(iVar8 + 4)));
    uVar3 = (undefined4)(func_0079e57c(uVar3,g_004f2fa8));
    0 /* ctorZero */;
    iVar4 = (undefined4)(intptr_t)(cocos2d::extension::CCScrollView::create(*(cocos2d::CCSize *)(void *)&auStack_28, 0));
    *(int *)((int)this + 4*(0x49)) = iVar4;
    ((cocos2d::extension::CCScrollView *)(iVar4))->setContainer((cocos2d::CCNode*)*(int *)((int)this + 4*(0x48)));
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x7c))((int *)*(int *)((int)this + 4*(0x49)),(unsigned char *)((char *)&g_004f2eec + (intptr_t)(g_004f2fac)));
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x1fc))((int *)*(int *)((int)this + 4*(0x49)),1);
    piVar10 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar9 = *(code **)(*piVar10 + 0x4c);
    uVar3 = (undefined4)(func_0079e4fc(iStack_40 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e4fc(iStack_3c + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_004f2fa8));
    0 /* ctorZero */;
    (*pcVar9)(piVar10,auStack_28);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x49)),6);
    pcVar9 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(auStack_38[0],uVar3));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uStack_2c,uVar5));
    0 /* ctorZero */;
    (*pcVar9)(((int)this),auStack_28);
    ((BLActivityPresenter *)(*(int *)((int)this + 4*(0x43))))->initWithView((BLActivityView*)((int)this));
  }
  return iVar2;
}
