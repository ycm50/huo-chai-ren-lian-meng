#include "BLTreasureResultView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "BLTreasureResultPresenter.h"
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
extern "C" unsigned long UNK_0066afc0;
extern "C" unsigned long UNK_0066b012;
extern "C" unsigned long UNK_0066b058;
extern "C" unsigned long UNK_0066b080;
extern "C" unsigned long UNK_0066b230;
extern "C" unsigned long UNK_0066b30c;
extern "C" unsigned long UNK_0066b3a0;
extern "C" unsigned long UNK_0066b43a;
extern "C" unsigned long UNK_0066b51a;
extern "C" unsigned long UNK_0066b532;
extern "C" unsigned long UNK_0066b658;
extern "C" unsigned long UNK_0066b688;
extern "C" unsigned long UNK_0066b744;
extern "C" unsigned long UNK_0066b746;
extern "C" unsigned long UNK_0066b780;
extern "C" unsigned long _DAT_0066b138;
extern "C" unsigned long _DAT_0066b13c;
extern "C" unsigned long _UNK_0066b044;
extern "C" unsigned long _UNK_0066b048;
extern "C" unsigned long _UNK_0066b05c;
extern "C" unsigned long _UNK_0066b084;
extern "C" unsigned long _UNK_0066b614;
extern "C" unsigned long _UNK_0066b618;
extern "C" unsigned long _UNK_0066b61c;
extern "C" unsigned long _UNK_0066b620;
extern "C" unsigned long _UNK_0066b624;
extern "C" unsigned long _UNK_0066b628;
extern "C" unsigned long _UNK_0066b62c;
extern "C" unsigned long _UNK_0066b630;
extern "C" unsigned long _UNK_0066b634;
extern "C" unsigned long _UNK_0066b638;
extern "C" unsigned long _UNK_0066b63c;
extern "C" unsigned long _UNK_0066b640;
extern "C" unsigned long _UNK_0066b814;
extern "C" unsigned long _UNK_0066b818;
extern "C" unsigned long _UNK_0066b81c;
extern "C" unsigned long _UNK_0066b820;
extern "C" unsigned long _UNK_0066b824;
extern "C" unsigned long _UNK_0066b828;
extern "C" unsigned long _UNK_0066b82c;
extern "C" unsigned long _UNK_0066b830;
extern "C" unsigned long _UNK_0066b834;
extern "C" unsigned long _UNK_0066b838;
extern "C" unsigned long _UNK_0066b83c;
extern "C" unsigned long g_0066afc0;
extern "C" unsigned long g_0066b012;
extern "C" unsigned long g_0066b044;
extern "C" unsigned long g_0066b048;
extern "C" unsigned long g_0066b058;
extern "C" unsigned long g_0066b05c;
extern "C" unsigned long g_0066b080;
extern "C" unsigned long g_0066b084;
extern "C" unsigned long g_0066b138;
extern "C" unsigned long g_0066b13c;
extern "C" unsigned long g_0066b230;
extern "C" unsigned long g_0066b30c;
extern "C" unsigned long g_0066b3a0;
extern "C" unsigned long g_0066b43a;
extern "C" unsigned long g_0066b51a;
extern "C" unsigned long g_0066b532;
extern "C" unsigned long g_0066b614;
extern "C" unsigned long g_0066b618;
extern "C" unsigned long g_0066b61c;
extern "C" unsigned long g_0066b620;
extern "C" unsigned long g_0066b624;
extern "C" unsigned long g_0066b628;
extern "C" unsigned long g_0066b62c;
extern "C" unsigned long g_0066b630;
extern "C" unsigned long g_0066b634;
extern "C" unsigned long g_0066b638;
extern "C" unsigned long g_0066b63c;
extern "C" unsigned long g_0066b640;
extern "C" unsigned long g_0066b658;
extern "C" unsigned long g_0066b688;
extern "C" unsigned long g_0066b744;
extern "C" unsigned long g_0066b746;
extern "C" unsigned long g_0066b780;
extern "C" unsigned long g_0066b814;
extern "C" unsigned long g_0066b818;
extern "C" unsigned long g_0066b81c;
extern "C" unsigned long g_0066b820;
extern "C" unsigned long g_0066b824;
extern "C" unsigned long g_0066b828;
extern "C" unsigned long g_0066b82c;
extern "C" unsigned long g_0066b830;
extern "C" unsigned long g_0066b834;
extern "C" unsigned long g_0066b838;
extern "C" unsigned long g_0066b83c;
BLTreasureResultView::~BLTreasureResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0066afc0 + g_0066b044);
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
  func_0079e45c(&uStack_14,&g_0066b012 + g_0066b048,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureResultView::BLTreasureResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0066b138 + 0x66b0c8));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLTreasureResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLTreasureResultView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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

undefined4 BLTreasureResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTreasureResultView::getSpWin()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTreasureResultView::getSpFail()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLTreasureResultView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLTreasureResultView::getLabeContent()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

void BLTreasureResultView::onEnter()
{
  ((BLTreasureResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureResultView::onExit()
{
  ((BLTreasureResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLTreasureResultView::init()
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
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLTreasureResultPresenter *)this)->create((BLTreasureResultView*)((int)this)));
    *(int *)((int)this + 4*(0x43)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0066b230 + (intptr_t)(g_0066b614)),auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
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
    (*pcVar7)(piVar3,&uStack_20);
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
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0066b30c + (intptr_t)(g_0066b620)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x40))((int *)*(int *)((int)this + 4*(0x44)),0x3f800000);
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
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0066b3a0 + (intptr_t)(g_0066b628)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x47)) = iVar2;
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x40))((int *)*(int *)((int)this + 4*(0x47)),0x3f800000);
    piVar3 = (int *)*(int *)((int)this + 4*(0x47));
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
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x90))((int *)*(int *)((int)this + 4*(0x47)),0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0066b43a + (intptr_t)(g_0066b62c)),auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
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
    (*pcVar7)(piVar3,&uStack_20);
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
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0066b51a + (intptr_t)(g_0066b638)),auStack_28);
    0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0066b532 + (intptr_t)(g_0066b63c)),auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
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
    (*pcVar7)(piVar3,&uStack_20);
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
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,1);
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x46)) = (int)piVar3;
    (**(code **)(*(int *)(piVar3) + (0x294)))(piVar3,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0066b658 + (intptr_t)(g_0066b814)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x30c))((int *)*(int *)((int)this + 4*(0x46)),uVar6,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0066b688 + (intptr_t)(g_0066b818)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x30c))((int *)*(int *)((int)this + 4*(0x46)),uVar6,2);
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar7 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x40))((int *)*(int *)((int)this + 4*(0x46)),0x3f800000);
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
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),2);
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0066b744 + (intptr_t)(g_0066b828)), (char const*)(unsigned char *)((char *)&g_0066b746 + (intptr_t)(g_0066b82c)), g_0066b830);
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x50))());
    (*pcVar7)(piVar3,uVar6);
    uStack_20 = 0xe9;
    uStack_1f = 0x7c;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3);
    ((cocos2d::CCLabelTTF *)(piVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0066b780 + (intptr_t)(g_0066b834)), 0x3f000000, 1);
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
    (*pcVar7)(((int)this),&uStack_20);
    ((BLTreasureResultPresenter *)(*(int *)((int)this + 4*(0x43))))->initWithView((BLTreasureResultView*)((int)this));
  }
  return iVar1;
}
