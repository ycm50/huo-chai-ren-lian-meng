#include "BLPracticeResultView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLPracticeResultPresenter.h"
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
extern "C" unsigned long UNK_0063fa80;
extern "C" unsigned long UNK_0063fac4;
extern "C" unsigned long UNK_0063fb08;
extern "C" unsigned long UNK_0063fb30;
extern "C" unsigned long UNK_0063fcb0;
extern "C" unsigned long UNK_0063fd92;
extern "C" unsigned long UNK_0063fe38;
extern "C" unsigned long UNK_0063ff1a;
extern "C" unsigned long UNK_0063ffa4;
extern "C" unsigned long UNK_0063fffa;
extern "C" unsigned long UNK_006400f2;
extern "C" unsigned long UNK_006400f4;
extern "C" unsigned long UNK_006401a2;
extern "C" unsigned long UNK_006401ae;
extern "C" unsigned long UNK_006402aa;
extern "C" unsigned long UNK_00640380;
extern "C" unsigned long UNK_00640382;
extern "C" unsigned long _DAT_0063fbd0;
extern "C" unsigned long _DAT_0063fbd4;
extern "C" unsigned long _UNK_0063faf4;
extern "C" unsigned long _UNK_0063faf8;
extern "C" unsigned long _UNK_0063fb0c;
extern "C" unsigned long _UNK_0063fb34;
extern "C" unsigned long _UNK_00640094;
extern "C" unsigned long _UNK_00640098;
extern "C" unsigned long _UNK_0064009c;
extern "C" unsigned long _UNK_006400a0;
extern "C" unsigned long _UNK_006400a4;
extern "C" unsigned long _UNK_006400a8;
extern "C" unsigned long _UNK_006400ac;
extern "C" unsigned long _UNK_006400b0;
extern "C" unsigned long _UNK_006400b4;
extern "C" unsigned long _UNK_006400b8;
extern "C" unsigned long _UNK_006400bc;
extern "C" unsigned long _UNK_006400c0;
extern "C" unsigned long _UNK_006400c4;
extern "C" unsigned long _UNK_006400c8;
extern "C" unsigned long _UNK_006400cc;
extern "C" unsigned long _UNK_006400d0;
extern "C" unsigned long _UNK_006400d4;
extern "C" unsigned long _UNK_00640444;
extern "C" unsigned long _UNK_00640448;
extern "C" unsigned long _UNK_0064044c;
extern "C" unsigned long _UNK_00640450;
extern "C" unsigned long _UNK_00640454;
extern "C" unsigned long _UNK_00640458;
extern "C" unsigned long _UNK_0064045c;
extern "C" unsigned long _UNK_00640460;
extern "C" unsigned long _UNK_00640464;
extern "C" unsigned long _UNK_00640468;
extern "C" unsigned long _UNK_0064046c;
extern "C" unsigned long _UNK_00640470;
extern "C" unsigned long _UNK_00640474;
extern "C" unsigned long _UNK_00640478;
extern "C" unsigned long _UNK_0064047c;
extern "C" unsigned long _UNK_00640480;
extern "C" unsigned long _UNK_00640484;
extern "C" unsigned long g_0063fa80;
extern "C" unsigned long g_0063fac4;
extern "C" unsigned long g_0063faf4;
extern "C" unsigned long g_0063faf8;
extern "C" unsigned long g_0063fb08;
extern "C" unsigned long g_0063fb0c;
extern "C" unsigned long g_0063fb30;
extern "C" unsigned long g_0063fb34;
extern "C" unsigned long g_0063fbd0;
extern "C" unsigned long g_0063fbd4;
extern "C" unsigned long g_0063fcb0;
extern "C" unsigned long g_0063fd92;
extern "C" unsigned long g_0063fe38;
extern "C" unsigned long g_0063ff1a;
extern "C" unsigned long g_0063ffa4;
extern "C" unsigned long g_0063fffa;
extern "C" unsigned long g_00640094;
extern "C" unsigned long g_00640098;
extern "C" unsigned long g_0064009c;
extern "C" unsigned long g_006400a0;
extern "C" unsigned long g_006400a4;
extern "C" unsigned long g_006400a8;
extern "C" unsigned long g_006400ac;
extern "C" unsigned long g_006400b0;
extern "C" unsigned long g_006400b4;
extern "C" unsigned long g_006400b8;
extern "C" unsigned long g_006400bc;
extern "C" unsigned long g_006400c0;
extern "C" unsigned long g_006400c4;
extern "C" unsigned long g_006400c8;
extern "C" unsigned long g_006400cc;
extern "C" unsigned long g_006400d0;
extern "C" unsigned long g_006400d4;
extern "C" unsigned long g_006400f2;
extern "C" unsigned long g_006400f4;
extern "C" unsigned long g_006401a2;
extern "C" unsigned long g_006401ae;
extern "C" unsigned long g_006402aa;
extern "C" unsigned long g_00640380;
extern "C" unsigned long g_00640382;
extern "C" unsigned long g_00640444;
extern "C" unsigned long g_00640448;
extern "C" unsigned long g_0064044c;
extern "C" unsigned long g_00640450;
extern "C" unsigned long g_00640454;
extern "C" unsigned long g_00640458;
extern "C" unsigned long g_0064045c;
extern "C" unsigned long g_00640460;
extern "C" unsigned long g_00640464;
extern "C" unsigned long g_00640468;
extern "C" unsigned long g_0064046c;
extern "C" unsigned long g_00640470;
extern "C" unsigned long g_00640474;
extern "C" unsigned long g_00640478;
extern "C" unsigned long g_0064047c;
extern "C" unsigned long g_00640480;
extern "C" unsigned long g_00640484;
BLPracticeResultView::~BLPracticeResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0063fa80 + g_0063faf4);
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
  func_0079e45c(&uStack_14,&g_0063fac4 + g_0063faf8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPracticeResultView::BLPracticeResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0063fbd0 + 0x63fb78);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLPracticeResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPracticeResultView::create()
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

undefined4 BLPracticeResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLPracticeResultView::onEnter()
{
  ((BLPracticeResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPracticeResultView::onExit()
{
  ((BLPracticeResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLPracticeResultView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLPracticeResultPresenter *)this)->create((BLPracticeResultView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0063fcb0 + (intptr_t)(g_00640094)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x43)) = iVar2;
    func_0079e2bc(&uStack_20);
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
    (*pcVar6)(piVar7,&uStack_20);
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
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0063fd92 + (intptr_t)(g_006400a0)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
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
    (*pcVar6)(piVar7,&uStack_20);
    pcVar6 = *(code **)(*piVar7 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)(piVar7) + (0x40)))(piVar7,0x3f800000);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar7,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0063fe38 + (intptr_t)(g_006400b0)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
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
    (*pcVar6)(piVar7,&uStack_20);
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
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar7,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0063ff1a + (intptr_t)(g_006400bc)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
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
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)(piVar7) + (0x40)))(piVar7,g_006400c4);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar7,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0063ffa4 + (intptr_t)(g_006400c8)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x45)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar6 = *(code **)(*piVar8 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x50)))(piVar7));
    (*pcVar6)(piVar8,uVar5);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x40))((int *)*(int *)((int)this + 4*(0x45)),0x3fc00000);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0063fffa + (intptr_t)(g_006400cc)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)(piVar7) + (0x30)))(piVar7,0x3f800000);
    (**(code **)(*(int *)(piVar7) + (0x38)))(piVar7,0x3f800000);
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
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar7,1);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_00640444,uVar5));
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006400f4 + (intptr_t)(g_0064044c)), (char const*)(unsigned char *)((char *)&g_006400f2 + (intptr_t)(g_00640448)), uVar5);
    *(int *)((int)this + 4*(0x46)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    uStack_20 = 0;
    uStack_1f = 0xe6;
    uStack_1e = 0x50;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x46)),&uStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x46));
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
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),1);
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x46))))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_006401a2 + (intptr_t)(g_00640454)), 0x40000000, 1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006401ae + (intptr_t)(g_00640458)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
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
    (*pcVar6)(piVar7,&uStack_20);
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
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar7,1);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006402aa + (intptr_t)(g_00640464)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar5,1);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar7 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x40))((int *)*(int *)((int)this + 4*(0x44)),0x3f800000);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
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
    (*pcVar6)(piVar7,&uStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_00640474,uVar5));
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00640382 + (intptr_t)(g_0064047c)), (char const*)(unsigned char *)((char *)&g_00640380 + (intptr_t)(g_00640478)), uVar5);
    uStack_20 = 0xff;
    uStack_1f = 0xb4;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar7) + (0x1b4)))(piVar7,&uStack_20);
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
    (*pcVar6)(piVar7,uVar5);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar7,1);
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
    (*pcVar6)(((int)this),&uStack_20);
    ((BLPracticeResultPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLPracticeResultView*)((int)this));
  }
  return iVar1;
}
