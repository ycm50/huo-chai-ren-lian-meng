#include "BLMoneyTreeWinResultView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "BLLeakUtils.h"
#include "BLMoneyTreeWinResultPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "BLTableView.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00666a50;
extern "C" unsigned long UNK_00666a82;
extern "C" unsigned long UNK_00666adc;
extern "C" unsigned long UNK_00666b04;
extern "C" unsigned long UNK_00666bd0;
extern "C" unsigned long UNK_00666c24;
extern "C" unsigned long UNK_00666ca2;
extern "C" unsigned long UNK_00666ca8;
extern "C" unsigned long UNK_00666cba;
extern "C" unsigned long UNK_00666cbd;
extern "C" unsigned long UNK_00666d06;
extern "C" unsigned long UNK_00666d90;
extern "C" unsigned long UNK_00666e0e;
extern "C" unsigned long UNK_00666ef0;
extern "C" unsigned long UNK_00666f72;
extern "C" unsigned long UNK_00666f74;
extern "C" unsigned long UNK_00666f88;
extern "C" unsigned long _DAT_00666bac;
extern "C" unsigned long _DAT_00666bb0;
extern "C" unsigned long _UNK_00666ac8;
extern "C" unsigned long _UNK_00666acc;
extern "C" unsigned long _UNK_00666ae0;
extern "C" unsigned long _UNK_00666b08;
extern "C" unsigned long _UNK_00666f98;
extern "C" unsigned long _UNK_00666f9c;
extern "C" unsigned long _UNK_00666fa0;
extern "C" unsigned long _UNK_00666fa4;
extern "C" unsigned long _UNK_00666fa8;
extern "C" unsigned long _UNK_00666fac;
extern "C" unsigned long _UNK_00666fb0;
extern "C" unsigned long _UNK_00666fb4;
extern "C" unsigned long _UNK_00666fb8;
extern "C" unsigned long _UNK_00666fbc;
extern "C" unsigned long _UNK_00666fc0;
extern "C" unsigned long _UNK_00666fc4;
extern "C" unsigned long _UNK_00666fc8;
extern "C" unsigned long _UNK_00666fcc;
extern "C" unsigned long _UNK_00666fd0;
extern "C" unsigned long _UNK_00666fd4;
extern "C" unsigned long _UNK_00666fd8;
extern "C" unsigned long _UNK_00666fdc;
extern "C" unsigned long _UNK_00666fe0;
extern "C" unsigned long _UNK_00666fe4;
extern "C" unsigned long _UNK_00666fe8;
extern "C" unsigned long _UNK_00666fec;
extern "C" unsigned long _UNK_00666ff0;
extern "C" unsigned long _UNK_00666ff4;
extern "C" unsigned long _UNK_00666ff8;
extern "C" unsigned long _UNK_00666ffc;
extern "C" unsigned long _UNK_00667000;
extern "C" unsigned long _UNK_00667004;
extern "C" unsigned long g_00666a50;
extern "C" unsigned long g_00666a82;
extern "C" unsigned long g_00666ac8;
extern "C" unsigned long g_00666acc;
extern "C" unsigned long g_00666adc;
extern "C" unsigned long g_00666ae0;
extern "C" unsigned long g_00666b04;
extern "C" unsigned long g_00666b08;
extern "C" unsigned long g_00666bac;
extern "C" unsigned long g_00666bb0;
extern "C" unsigned long g_00666bd0;
extern "C" unsigned long g_00666c24;
extern "C" unsigned long g_00666ca2;
extern "C" unsigned long g_00666ca8;
extern "C" unsigned long g_00666cba;
extern "C" unsigned long g_00666cbd;
extern "C" unsigned long g_00666d06;
extern "C" unsigned long g_00666d90;
extern "C" unsigned long g_00666e0e;
extern "C" unsigned long g_00666ef0;
extern "C" unsigned long g_00666f72;
extern "C" unsigned long g_00666f74;
extern "C" unsigned long g_00666f88;
extern "C" unsigned long g_00666f98;
extern "C" unsigned long g_00666f9c;
extern "C" unsigned long g_00666fa0;
extern "C" unsigned long g_00666fa4;
extern "C" unsigned long g_00666fa8;
extern "C" unsigned long g_00666fac;
extern "C" unsigned long g_00666fb0;
extern "C" unsigned long g_00666fb4;
extern "C" unsigned long g_00666fb8;
extern "C" unsigned long g_00666fbc;
extern "C" unsigned long g_00666fc0;
extern "C" unsigned long g_00666fc4;
extern "C" unsigned long g_00666fc8;
extern "C" unsigned long g_00666fcc;
extern "C" unsigned long g_00666fd0;
extern "C" unsigned long g_00666fd4;
extern "C" unsigned long g_00666fd8;
extern "C" unsigned long g_00666fdc;
extern "C" unsigned long g_00666fe0;
extern "C" unsigned long g_00666fe4;
extern "C" unsigned long g_00666fe8;
extern "C" unsigned long g_00666fec;
extern "C" unsigned long g_00666ff0;
extern "C" unsigned long g_00666ff4;
extern "C" unsigned long g_00666ff8;
extern "C" unsigned long g_00666ffc;
extern "C" unsigned long g_00667000;
extern "C" unsigned long g_00667004;
BLMoneyTreeWinResultView::~BLMoneyTreeWinResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00666a50 + g_00666ac8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00666a82 + g_00666acc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMoneyTreeWinResultView::BLMoneyTreeWinResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00666bac + 0x666b4c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMoneyTreeWinResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(0x43)) = 0;
  return;
}


bool BLMoneyTreeWinResultView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMoneyTreeWinResultPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMoneyTreeWinResultView::initView();
    ((BLMoneyTreeWinResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMoneyTreeWinResultView*)((int)this));
  }
  return iVar1;
}

void BLMoneyTreeWinResultView::onEnter()
{
  ((BLMoneyTreeWinResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMoneyTreeWinResultView::onExit()
{
  ((BLMoneyTreeWinResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMoneyTreeWinResultView::initView()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00666bd0 + (intptr_t)(g_00666fa0)),auStack_28);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar9 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  uVar2 = (undefined4)(func_0079e4fc(uStack_2c,0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_00666fa4));
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00666c24 + (intptr_t)(g_00666fa8)),auStack_28);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1));
  uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar3 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar4));
  pcVar9 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1));
  uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar3 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar4));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_00666fa4));
  puVar10 = (unsigned char *)((char *)&g_00666ca2 + (intptr_t)(g_00666fac));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00666ca8 + (intptr_t)(g_00666fb0)), (char const*)puVar10, g_00666fb4);
  iVar3 = (undefined4)(intptr_t)(g_00666fb8);
  puVar8 = (unsigned char *)((char *)&g_00666cba + (intptr_t)(g_00666fb8));
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,puVar8);
  pcVar9 = *(code **)(*piVar1 + 0x4c);
  uVar4 = (undefined4)(func_0079e57c(uVar2,g_00666fbc));
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  pcVar9 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  piVar5 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00666d06 + (intptr_t)(g_00666fc4)), (char const*)puVar10, g_00666fc8);
  *(int *)((int)this + 4*(0x45)) = (int)piVar5;
  (**(code **)(*(int *)(piVar5) + (0x1b4)))(piVar5,&g_00666cbd + iVar3);
  piVar5 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar9 = *(code **)(*piVar5 + 0x4c);
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))(piVar1));
  puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1);
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar4))->operator+(*(const CCPoint *)(void *)auStack_28);
  (*pcVar9)(piVar5,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar9 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00666d90 + (intptr_t)(g_00666fcc)), (char const*)puVar10, g_00666fb4);
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,puVar8);
  pcVar9 = *(code **)(*piVar1 + 0x4c);
  uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x50))());
  puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))();
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar4))->operator+(*(const CCPoint *)(void *)auStack_28);
  (*pcVar9)(piVar1,auStack_20);
  pcVar9 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_00666fd0));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00666e0e + (intptr_t)(g_00666fd4)), (char const*)puVar10, g_00666fd8);
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,puVar8);
  pcVar9 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1));
  uVar4 = (undefined4)(func_0079e59c(*(undefined4 *)(iVar3 + 4),g_00666fdc));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar4));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_00666fd0));
  piVar1 = (int *)::operator new(0x134);
  ::new ((void *)piVar1) BLTableView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
  if (iVar3 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar1))->autorelease();
  }
  *(int *)((int)this + 4*(0x43)) = (int)piVar1;
  pcVar9 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar9 = *(code **)(*piVar1 + 0x234);
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_00666fec));
  iVar7 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar3 = (undefined4)(intptr_t)(g_00666ff0);
  *(int *)((int)this + 4*(0x44)) = iVar7;
  func_0079e45c(auStack_20,&g_00666ef0 + iVar3,auStack_28);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x294))((int *)*(int *)((int)this + 4*(0x44)),0);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar4,1);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar9 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar9 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar9)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00666f72 + (intptr_t)(g_00666ff8)), (char const*)(unsigned char *)((char *)&g_00666f74 + (intptr_t)(g_00666ffc)), g_00667000);
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,(unsigned char *)((char *)&g_00666f88 + (intptr_t)(g_00667004)));
  pcVar9 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  (*pcVar9)(piVar1,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_30);
  return;
}
