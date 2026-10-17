#include "BLCommonCostItemView.h"
#include "BLCommonCostItemPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060d4dc;
extern "C" unsigned long UNK_0060d50e;
extern "C" unsigned long UNK_0060d568;
extern "C" unsigned long UNK_0060d590;
extern "C" unsigned long UNK_0060d5a8;
extern "C" unsigned long UNK_0060d5d6;
extern "C" unsigned long UNK_0060d628;
extern "C" unsigned long UNK_0060d668;
extern "C" unsigned long UNK_0060d692;
extern "C" unsigned long UNK_0060d6c4;
extern "C" unsigned long UNK_0060d6c6;
extern "C" unsigned long UNK_0060d746;
extern "C" unsigned long _UNK_0060d554;
extern "C" unsigned long _UNK_0060d558;
extern "C" unsigned long _UNK_0060d56c;
extern "C" unsigned long _UNK_0060d594;
extern "C" unsigned long _UNK_0060d600;
extern "C" unsigned long _UNK_0060d604;
extern "C" unsigned long _UNK_0060d7bc;
extern "C" unsigned long _UNK_0060d7c0;
extern "C" unsigned long _UNK_0060d7c4;
extern "C" unsigned long _UNK_0060d7c8;
extern "C" unsigned long _UNK_0060d7cc;
extern "C" unsigned long _UNK_0060d7d0;
extern "C" unsigned long _UNK_0060d7d4;
extern "C" unsigned long _UNK_0060d7d8;
extern "C" unsigned long _UNK_0060d7dc;
extern "C" unsigned long _UNK_0060d7e0;
extern "C" unsigned long g_0060d4dc;
extern "C" unsigned long g_0060d50e;
extern "C" unsigned long g_0060d554;
extern "C" unsigned long g_0060d558;
extern "C" unsigned long g_0060d568;
extern "C" unsigned long g_0060d56c;
extern "C" unsigned long g_0060d590;
extern "C" unsigned long g_0060d594;
extern "C" unsigned long g_0060d5a8;
extern "C" unsigned long g_0060d5d6;
extern "C" unsigned long g_0060d600;
extern "C" unsigned long g_0060d604;
extern "C" unsigned long g_0060d628;
extern "C" unsigned long g_0060d668;
extern "C" unsigned long g_0060d692;
extern "C" unsigned long g_0060d6c4;
extern "C" unsigned long g_0060d6c6;
extern "C" unsigned long g_0060d746;
extern "C" unsigned long g_0060d7bc;
extern "C" unsigned long g_0060d7c0;
extern "C" unsigned long g_0060d7c4;
extern "C" unsigned long g_0060d7c8;
extern "C" unsigned long g_0060d7cc;
extern "C" unsigned long g_0060d7d0;
extern "C" unsigned long g_0060d7d4;
extern "C" unsigned long g_0060d7d8;
extern "C" unsigned long g_0060d7dc;
extern "C" unsigned long g_0060d7e0;
BLCommonCostItemView::~BLCommonCostItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0060d4dc + g_0060d554);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060d50e + g_0060d558,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLCommonCostItemView::BLCommonCostItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0060d5a8 + g_0060d600);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060d5d6 + g_0060d604,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLCommonCostItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLCommonCostItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLCommonCostItemView::initView();
    ((BLCommonCostItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLCommonCostItemView*)((int)this));
  }
  return iVar1;
}

void BLCommonCostItemView::onEnter()
{
  ((BLCommonCostItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLCommonCostItemView::onExit()
{
  ((BLCommonCostItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLCommonCostItemView::initView()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0060d628 + (intptr_t)(g_0060d7c0)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0060d668 + (intptr_t)(g_0060d7c4)),auStack_2c);
  iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar2;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0060d692 + (intptr_t)(g_0060d7c8)),auStack_2c);
  iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x44)) = iVar2;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x40))((int *)*(int *)((int)this + 4*(0x44)),g_0060d7cc);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0060d6c4 + (intptr_t)(g_0060d7d0)), (char const*)(unsigned char *)((char *)&g_0060d6c6 + (intptr_t)(g_0060d7d4)), g_0060d7d8);
  *(int *)((int)this + 4*(0x45)) = (int)piVar1;
  pcVar6 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0060d7dc)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24 + -0x80000000),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_0060d7dc)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar2 = (undefined4)(intptr_t)(g_0060d7e0);
  *(int *)((int)this + 4*(0x46)) = iVar5;
  func_0079e45c(auStack_20,&g_0060d746 + iVar2,auStack_2c);
  uVar3 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar6 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x30c))((int *)*(int *)((int)this + 4*(0x46)),uVar3,1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&uStack_28);
  return;
}
