#include "BLFunctionIntroductionView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCScrollView.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLFunctionIntroductionPresenter.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064ee64;
extern "C" unsigned long UNK_0064ee96;
extern "C" unsigned long UNK_0064eef0;
extern "C" unsigned long UNK_0064ef40;
extern "C" unsigned long UNK_0064f0de;
extern "C" unsigned long UNK_0064f120;
extern "C" unsigned long UNK_0064f17c;
extern "C" unsigned long UNK_0064f17e;
extern "C" unsigned long UNK_0064f1b0;
extern "C" unsigned long UNK_0064f21e;
extern "C" unsigned long _DAT_0064f07c;
extern "C" unsigned long _DAT_0064f080;
extern "C" unsigned long _UNK_0064eedc;
extern "C" unsigned long _UNK_0064eee0;
extern "C" unsigned long _UNK_0064eef4;
extern "C" unsigned long _UNK_0064ef44;
extern "C" unsigned long _UNK_0064f420;
extern "C" unsigned long _UNK_0064f424;
extern "C" unsigned long _UNK_0064f428;
extern "C" unsigned long _UNK_0064f42c;
extern "C" unsigned long _UNK_0064f430;
extern "C" unsigned long _UNK_0064f434;
extern "C" unsigned long _UNK_0064f438;
extern "C" unsigned long _UNK_0064f43c;
extern "C" unsigned long _UNK_0064f440;
extern "C" unsigned long _UNK_0064f444;
extern "C" unsigned long _UNK_0064f448;
extern "C" unsigned long _UNK_0064f44c;
extern "C" unsigned long _UNK_0064f450;
extern "C" unsigned long g_0064ee64;
extern "C" unsigned long g_0064ee96;
extern "C" unsigned long g_0064eedc;
extern "C" unsigned long g_0064eee0;
extern "C" unsigned long g_0064eef0;
extern "C" unsigned long g_0064eef4;
extern "C" unsigned long g_0064ef40;
extern "C" unsigned long g_0064ef44;
extern "C" unsigned long g_0064f07c;
extern "C" unsigned long g_0064f080;
extern "C" unsigned long g_0064f0de;
extern "C" unsigned long g_0064f120;
extern "C" unsigned long g_0064f17c;
extern "C" unsigned long g_0064f17e;
extern "C" unsigned long g_0064f1b0;
extern "C" unsigned long g_0064f21e;
extern "C" unsigned long g_0064f420;
extern "C" unsigned long g_0064f424;
extern "C" unsigned long g_0064f428;
extern "C" unsigned long g_0064f42c;
extern "C" unsigned long g_0064f430;
extern "C" unsigned long g_0064f434;
extern "C" unsigned long g_0064f438;
extern "C" unsigned long g_0064f43c;
extern "C" unsigned long g_0064f440;
extern "C" unsigned long g_0064f444;
extern "C" unsigned long g_0064f448;
extern "C" unsigned long g_0064f44c;
extern "C" unsigned long g_0064f450;
BLFunctionIntroductionView::~BLFunctionIntroductionView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0064ee64 + g_0064eedc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064ee96 + g_0064eee0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLFunctionIntroductionView::onEnter()
{
  ((BLFunctionIntroductionPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLFunctionIntroductionView::onExit()
{
  ((BLFunctionIntroductionPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

BLFunctionIntroductionView::BLFunctionIntroductionView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0064f07c + 0x64f024);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLFunctionIntroductionView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLFunctionIntroductionView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLFunctionIntroductionPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLFunctionIntroductionView::initView();
    ((BLFunctionIntroductionPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLFunctionIntroductionView*)((int)this));
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLFunctionIntroductionView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  int iStack_38;
  undefined4 uStack_34;
  int aiStack_30 [2];
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(uStack_28,uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_1c,uVar2));
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0064f0de + (intptr_t)(g_0064f428)),&uStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar7 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0064f120 + (intptr_t)(g_0064f42c)),&uStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar7 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(uStack_34,0x3f000000));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0064f17c + (intptr_t)(g_0064f434)), (char const*)(unsigned char *)((char *)&g_0064f17e + (intptr_t)(g_0064f438)), g_0064f43c);
  *(int *)((int)this + 4*(0x43)) = (int)piVar4;
  pcVar7 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x43)),(unsigned char *)((char *)&g_0064f1b0 + (intptr_t)(g_0064f440)));
  piVar4 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(g_0064f444,uVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))(piVar3));
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar9 = (undefined4)(intptr_t)(g_0064f448);
  *(int *)((int)this + 4*(0x44)) = iVar5;
  func_0079e45c(auStack_20,&g_0064f21e + iVar9,&uStack_28);
  piVar4 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),piVar4,1);
  piVar8 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar7 = *(code **)(*piVar8 + 0x28c);
  (**(code **)(*(int *)(piVar4) + (0x1cc)))(auStack_20,piVar4);
  (*pcVar7)(piVar8,auStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x44));
  iVar9 = (int)*(int *)&(*piVar4);
  pcVar7 = *(code **)(iVar9 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_38,0x3f000000));
  puVar6 = (undefined4 *)(**(code **)(iVar9 + 0x8c))(piVar4);
  uVar2 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,0x40800000));
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))(piVar3));
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  iVar9 = (undefined4)(intptr_t)(cocos2d::extension::CCScrollView::create());
  *(int *)((int)this + 4*(0x45)) = iVar9;
  uVar1 = (undefined4)(cocos2d::CCNode::create());
  ((cocos2d::extension::CCScrollView *)(iVar9))->setContainer((cocos2d::CCNode*)uVar1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x1c8))((int *)*(int *)((int)this + 4*(0x45)),1);
  iVar5 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x45)));
  0 /* ctorZero */;
  iVar9 = (undefined4)(intptr_t)(aiStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(iVar9,uVar1));
  0 /* ctorZero */;
  iVar9 = (undefined4)(intptr_t)(iStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(iVar9,uVar2));
  0 /* ctorZero */;
  ((cocos2d::extension::CCScrollView *)(iVar5))->setViewSize(*(cocos2d::CCSize *)(void *)&auStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar7 = *(code **)(*piVar3 + 0x88);
  0 /* ctorZero */;
  iVar9 = (undefined4)(intptr_t)(aiStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(iVar9,uVar1));
  0 /* ctorZero */;
  iVar9 = (undefined4)(intptr_t)(iStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(iVar9,uVar2));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  (**(code **)(*(int *)(piVar3) + (0x1f8)))(aiStack_30,piVar3);
  uVar1 = (undefined4)(func_0079e4fc(aiStack_30[0] + -0x80000000,0x3f000000));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x1f8))(&uStack_28);
  uVar2 = (undefined4)(func_0079e4fc(iStack_24 + -0x80000000,0x3f000000));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_38);
  return;
}
