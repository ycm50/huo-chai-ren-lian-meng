#include "BLSuitComposeInfoItemView.h"
#include "BLLeakUtils.h"
#include "BLSuitComposeInfoItemPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00692fa4;
extern "C" unsigned long UNK_00692fe8;
extern "C" unsigned long UNK_0069302c;
extern "C" unsigned long UNK_0069321c;
extern "C" unsigned long UNK_006933b8;
extern "C" unsigned long UNK_006933e6;
extern "C" unsigned long UNK_00693474;
extern "C" unsigned long UNK_006934b6;
extern "C" unsigned long UNK_00693504;
extern "C" unsigned long _UNK_00693018;
extern "C" unsigned long _UNK_0069301c;
extern "C" unsigned long _UNK_00693030;
extern "C" unsigned long _UNK_00693220;
extern "C" unsigned long _UNK_00693410;
extern "C" unsigned long _UNK_00693414;
extern "C" unsigned long _UNK_00693570;
extern "C" unsigned long _UNK_00693574;
extern "C" unsigned long _UNK_00693578;
extern "C" unsigned long _UNK_0069357c;
extern "C" unsigned long g_00692fa4;
extern "C" unsigned long g_00692fe8;
extern "C" unsigned long g_00693018;
extern "C" unsigned long g_0069301c;
extern "C" unsigned long g_0069302c;
extern "C" unsigned long g_00693030;
extern "C" unsigned long g_0069321c;
extern "C" unsigned long g_00693220;
extern "C" unsigned long g_006933b8;
extern "C" unsigned long g_006933e6;
extern "C" unsigned long g_00693410;
extern "C" unsigned long g_00693414;
extern "C" unsigned long g_00693474;
extern "C" unsigned long g_006934b6;
extern "C" unsigned long g_00693504;
extern "C" unsigned long g_00693570;
extern "C" unsigned long g_00693574;
extern "C" unsigned long g_00693578;
extern "C" unsigned long g_0069357c;
BLSuitComposeInfoItemView::~BLSuitComposeInfoItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00692fa4 + g_00693018);
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
  func_0079e45c(&uStack_14,&g_00692fe8 + g_0069301c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeInfoItemView::BLSuitComposeInfoItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006933b8 + g_00693410);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006933e6 + g_00693414,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSuitComposeInfoItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x114)));
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


bool BLSuitComposeInfoItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitComposeInfoItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitComposeInfoItemView::initView();
    ((BLSuitComposeInfoItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitComposeInfoItemView*)((int)this));
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLSuitComposeInfoItemView::initView()
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00693474 + (intptr_t)(g_00693574)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar5 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006934b6 + (intptr_t)(g_00693578)),auStack_2c);
  iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar2;
  func_0079e2bc(auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  iVar3 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar2 = (undefined4)(intptr_t)(g_0069357c);
  *(int *)((int)this + 4*(0x44)) = iVar3;
  func_0079e45c(auStack_20,&g_00693504 + iVar2,auStack_2c);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar4,1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_28);
  return;
}
