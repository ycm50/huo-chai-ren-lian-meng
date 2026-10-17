#include "BLPoPSaleView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLPoPSalePresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006332bc;
extern "C" unsigned long UNK_00633300;
extern "C" unsigned long UNK_00633344;
extern "C" unsigned long UNK_0063336c;
extern "C" unsigned long UNK_006334ee;
extern "C" unsigned long UNK_006335ca;
extern "C" unsigned long UNK_006336c2;
extern "C" unsigned long UNK_006336fc;
extern "C" unsigned long UNK_006338a8;
extern "C" unsigned long UNK_006338aa;
extern "C" unsigned long UNK_006338bc;
extern "C" unsigned long UNK_00633994;
extern "C" unsigned long UNK_006339d0;
extern "C" unsigned long UNK_00633ae0;
extern "C" unsigned long UNK_00633ae2;
extern "C" unsigned long UNK_00633b3f;
extern "C" unsigned long UNK_00633b72;
extern "C" unsigned long UNK_00633ba2;
extern "C" unsigned long UNK_00633cae;
extern "C" unsigned long UNK_00633cb0;
extern "C" unsigned long UNK_00633d4b;
extern "C" unsigned long _DAT_0063340c;
extern "C" unsigned long _DAT_00633410;
extern "C" unsigned long _UNK_00633330;
extern "C" unsigned long _UNK_00633334;
extern "C" unsigned long _UNK_00633348;
extern "C" unsigned long _UNK_00633370;
extern "C" unsigned long _UNK_006338cc;
extern "C" unsigned long _UNK_006338d0;
extern "C" unsigned long _UNK_006338d4;
extern "C" unsigned long _UNK_006338d8;
extern "C" unsigned long _UNK_006338dc;
extern "C" unsigned long _UNK_006338e0;
extern "C" unsigned long _UNK_006338e4;
extern "C" unsigned long _UNK_006338e8;
extern "C" unsigned long _UNK_006338ec;
extern "C" unsigned long _UNK_006338f0;
extern "C" unsigned long _UNK_006338f4;
extern "C" unsigned long _UNK_006338f8;
extern "C" unsigned long _UNK_006338fc;
extern "C" unsigned long _UNK_00633900;
extern "C" unsigned long _UNK_00633904;
extern "C" unsigned long _UNK_00633908;
extern "C" unsigned long _UNK_00633cf4;
extern "C" unsigned long _UNK_00633cf8;
extern "C" unsigned long _UNK_00633cfc;
extern "C" unsigned long _UNK_00633d00;
extern "C" unsigned long _UNK_00633d04;
extern "C" unsigned long _UNK_00633d08;
extern "C" unsigned long _UNK_00633d0c;
extern "C" unsigned long _UNK_00633d10;
extern "C" unsigned long _UNK_00633d14;
extern "C" unsigned long _UNK_00633d18;
extern "C" unsigned long _UNK_00633d1c;
extern "C" unsigned long _UNK_00633d20;
extern "C" unsigned long _UNK_00633d24;
extern "C" unsigned long _UNK_00633d28;
extern "C" unsigned long _UNK_00633d2c;
extern "C" unsigned long _UNK_00633de4;
extern "C" unsigned long _UNK_00633de8;
extern "C" unsigned long _UNK_00633dec;
extern "C" unsigned long g_006332bc;
extern "C" unsigned long g_00633300;
extern "C" unsigned long g_00633330;
extern "C" unsigned long g_00633334;
extern "C" unsigned long g_00633344;
extern "C" unsigned long g_00633348;
extern "C" unsigned long g_0063336c;
extern "C" unsigned long g_00633370;
extern "C" unsigned long g_0063340c;
extern "C" unsigned long g_00633410;
extern "C" unsigned long g_006334ee;
extern "C" unsigned long g_006335ca;
extern "C" unsigned long g_006336c2;
extern "C" unsigned long g_006336fc;
extern "C" unsigned long g_006338a8;
extern "C" unsigned long g_006338aa;
extern "C" unsigned long g_006338bc;
extern "C" unsigned long g_006338cc;
extern "C" unsigned long g_006338d0;
extern "C" unsigned long g_006338d4;
extern "C" unsigned long g_006338d8;
extern "C" unsigned long g_006338dc;
extern "C" unsigned long g_006338e0;
extern "C" unsigned long g_006338e4;
extern "C" unsigned long g_006338e8;
extern "C" unsigned long g_006338ec;
extern "C" unsigned long g_006338f0;
extern "C" unsigned long g_006338f4;
extern "C" unsigned long g_006338f8;
extern "C" unsigned long g_006338fc;
extern "C" unsigned long g_00633900;
extern "C" unsigned long g_00633904;
extern "C" unsigned long g_00633908;
extern "C" unsigned long g_00633994;
extern "C" unsigned long g_006339d0;
extern "C" unsigned long g_00633ae0;
extern "C" unsigned long g_00633ae2;
extern "C" unsigned long g_00633b3f;
extern "C" unsigned long g_00633b72;
extern "C" unsigned long g_00633ba2;
extern "C" unsigned long g_00633cae;
extern "C" unsigned long g_00633cb0;
extern "C" unsigned long g_00633cf4;
extern "C" unsigned long g_00633cf8;
extern "C" unsigned long g_00633cfc;
extern "C" unsigned long g_00633d00;
extern "C" unsigned long g_00633d04;
extern "C" unsigned long g_00633d08;
extern "C" unsigned long g_00633d0c;
extern "C" unsigned long g_00633d10;
extern "C" unsigned long g_00633d14;
extern "C" unsigned long g_00633d18;
extern "C" unsigned long g_00633d1c;
extern "C" unsigned long g_00633d20;
extern "C" unsigned long g_00633d24;
extern "C" unsigned long g_00633d28;
extern "C" unsigned long g_00633d2c;
extern "C" unsigned long g_00633d4b;
extern "C" unsigned long g_00633de4;
extern "C" unsigned long g_00633de8;
extern "C" unsigned long g_00633dec;
BLPoPSaleView::~BLPoPSaleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006332bc + g_00633330);
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
  func_0079e45c(&uStack_14,&g_00633300 + g_00633334,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPoPSaleView::BLPoPSaleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0063340c + 0x6333b4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLPoPSaleView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPoPSaleView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
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

undefined4 BLPoPSaleView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLPoPSaleView::onEnter()
{
  ((BLPoPSalePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPoPSaleView::onExit()
{
  ((BLPoPSalePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLPoPSaleView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLPoPSalePresenter *)this)->create((BLPoPSaleView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006334ee + (intptr_t)(g_006338cc)),auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar10 = *(code **)(*piVar3 + 0x88);
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
    (*pcVar10)(piVar3,auStack_20);
    pcVar10 = *(code **)(*piVar3 + 0x4c);
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
    (*pcVar10)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,1);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006335ca + (intptr_t)(g_006338dc)),auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar10 = *(code **)(*piVar3 + 0x88);
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
    (*pcVar10)(piVar3,auStack_20);
    pcVar10 = *(code **)(*piVar3 + 0x4c);
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
    (*pcVar10)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,2);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x43)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar10 = *(code **)(*piVar7 + 0x30c);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006336c2 + (intptr_t)(g_006338e8)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    (*pcVar10)(piVar7,uVar6,1);
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar10 = *(code **)(*piVar7 + 0x30c);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006336fc + (intptr_t)(g_006338ec)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    (*pcVar10)(piVar7,uVar6,2);
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar10 = *(code **)(*piVar7 + 0x28c);
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
    (*pcVar10)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar10 = *(code **)(*piVar7 + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))(piVar3));
    puVar8 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
    uVar4 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
    uVar6 = (undefined4)(func_0079e59c(uVar6,uVar4));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_006338f4));
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))(piVar3));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,uVar5));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_006338f8));
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))(piVar3));
    puVar8 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
    uVar5 = (undefined4)(func_0079e4fc(*puVar8,0x3f000000));
    uVar6 = (undefined4)(func_0079e59c(uVar6,uVar5));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_006338f4));
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))(piVar3));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
    uVar9 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,uVar9));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_006338f8));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar10)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),3);
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006338a8 + (intptr_t)(g_006338fc)), (char const*)(unsigned char *)((char *)&g_006338aa + (intptr_t)(g_00633900)), g_00633904);
    (**(code **)(*(int *)(piVar7) + (0x1b4)))(piVar7,(unsigned char *)((char *)&g_006338bc + (intptr_t)(g_00633908)));
    pcVar10 = *(code **)(*piVar7 + 0x4c);
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar10)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar7,3);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar10 = *(code **)(*piVar7 + 0x30c);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00633994 + (intptr_t)(g_00633cf8)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    (*pcVar10)(piVar7,uVar6,1);
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar10 = *(code **)(*piVar7 + 0x30c);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006339d0 + (intptr_t)(g_00633cfc)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    (*pcVar10)(piVar7,uVar6,2);
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar10 = *(code **)(*piVar7 + 0x28c);
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
    (*pcVar10)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar10 = *(code **)(*piVar7 + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))(piVar3));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_00633d04));
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))(piVar3));
    uVar6 = (undefined4)(func_0079e57c(uVar6,g_00633d04));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar10)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),5);
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00633ae0 + (intptr_t)(g_00633d0c)), (char const*)(unsigned char *)((char *)&g_00633ae2 + (intptr_t)(g_00633d10)), g_00633d14);
    pcVar10 = *(code **)(*piVar7 + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
    uVar4 = (undefined4)(func_0079e4fc(*(int *)(iVar2 + 4) + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_00633d18));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar6))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar10)(piVar7,auStack_20);
    (**(code **)(*(int *)(piVar7) + (0x1b4)))(piVar7,(unsigned char *)((char *)&g_00633b3f + (intptr_t)(g_00633d1c)));
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar7,5);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x45)) = (int)piVar7;
    (**(code **)(*(int *)(piVar7) + (0x294)))(piVar7,0);
    piVar7 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar10 = *(code **)(*piVar7 + 0x30c);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00633b72 + (intptr_t)(g_00633d20)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    (*pcVar10)(piVar7,uVar6,1);
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar10 = *(code **)(*piVar7 + 0x30c);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00633ba2 + (intptr_t)(g_00633d24)),auStack_28);
    uVar6 = (undefined4)(0 /* ctorZero */);
    (*pcVar10)(piVar7,uVar6,2);
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar10 = *(code **)(*piVar7 + 0x28c);
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
    (*pcVar10)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar10 = *(code **)(*piVar7 + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))(piVar3));
    uVar6 = (undefined4)(func_0079e59c(uVar6,g_00633d04));
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uVar6,uVar4));
    uVar6 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))(piVar3));
    uVar6 = (undefined4)(func_0079e59c(uVar6,g_00633d04));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar6,uVar5));
    0 /* ctorZero */;
    (*pcVar10)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),5);
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00633cae + (intptr_t)(g_00633d28)), (char const*)(unsigned char *)((char *)&g_00633cb0 + (intptr_t)(g_00633d2c)), g_00633d14);
    pcVar10 = *(code **)(*piVar3 + 0x4c);
    uVar6 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x50))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))());
    uVar4 = (undefined4)(func_0079e4fc(*(int *)(iVar2 + 4) + -0x80000000,0x3f000000));
    uVar4 = (undefined4)(func_0079e57c(uVar4,g_00633d18));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar6))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar10)(piVar3,auStack_20);
    (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,(unsigned char *)((char *)&g_00633d4b + (intptr_t)(g_00633de4)));
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,5);
    pcVar10 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(auStack_30[0],uVar6));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(func_0079e4dc(uStack_24,uVar4));
    0 /* ctorZero */;
    (*pcVar10)(((int)this),auStack_20);
    ((BLPoPSalePresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLPoPSaleView*)((int)this));
  }
  return iVar1;
}
