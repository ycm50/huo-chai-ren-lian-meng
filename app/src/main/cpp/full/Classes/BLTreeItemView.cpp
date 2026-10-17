#include "BLTreeItemView.h"
#include "BLLeakUtils.h"
#include "BLTreeItemPresenter.h"
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
extern "C" unsigned long UNK_005d2940;
extern "C" unsigned long UNK_005d2972;
extern "C" unsigned long UNK_005d29cc;
extern "C" unsigned long UNK_005d2a1c;
extern "C" unsigned long UNK_005d3178;
extern "C" unsigned long UNK_005d31a6;
extern "C" unsigned long UNK_005d31f8;
extern "C" unsigned long UNK_005d3238;
extern "C" unsigned long UNK_005d326e;
extern "C" unsigned long UNK_005d3270;
extern "C" unsigned long UNK_005d32fa;
extern "C" unsigned long _UNK_005d29b8;
extern "C" unsigned long _UNK_005d29bc;
extern "C" unsigned long _UNK_005d29d0;
extern "C" unsigned long _UNK_005d2a20;
extern "C" unsigned long _UNK_005d31d0;
extern "C" unsigned long _UNK_005d31d4;
extern "C" unsigned long _UNK_005d3378;
extern "C" unsigned long _UNK_005d337c;
extern "C" unsigned long _UNK_005d3380;
extern "C" unsigned long _UNK_005d3384;
extern "C" unsigned long _UNK_005d3388;
extern "C" unsigned long _UNK_005d338c;
extern "C" unsigned long _UNK_005d3390;
extern "C" unsigned long _UNK_005d3394;
extern "C" unsigned long g_005d2940;
extern "C" unsigned long g_005d2972;
extern "C" unsigned long g_005d29b8;
extern "C" unsigned long g_005d29bc;
extern "C" unsigned long g_005d29cc;
extern "C" unsigned long g_005d29d0;
extern "C" unsigned long g_005d2a1c;
extern "C" unsigned long g_005d2a20;
extern "C" unsigned long g_005d3178;
extern "C" unsigned long g_005d31a6;
extern "C" unsigned long g_005d31d0;
extern "C" unsigned long g_005d31d4;
extern "C" unsigned long g_005d31f8;
extern "C" unsigned long g_005d3238;
extern "C" unsigned long g_005d326e;
extern "C" unsigned long g_005d3270;
extern "C" unsigned long g_005d32fa;
extern "C" unsigned long g_005d3378;
extern "C" unsigned long g_005d337c;
extern "C" unsigned long g_005d3380;
extern "C" unsigned long g_005d3384;
extern "C" unsigned long g_005d3388;
extern "C" unsigned long g_005d338c;
extern "C" unsigned long g_005d3390;
extern "C" unsigned long g_005d3394;
BLTreeItemView::~BLTreeItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005d2940 + g_005d29b8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d2972 + g_005d29bc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreeItemView::BLTreeItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005d3178 + g_005d31d0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d31a6 + g_005d31d4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLTreeItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTreeItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTreeItemView::initView();
    ((BLTreeItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreeItemView*)((int)this));
  }
  return iVar1;
}

void BLTreeItemView::onEnter()
{
  ((BLTreeItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreeItemView::onExit()
{
  ((BLTreeItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTreeItemView::initView()
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
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005d31f8 + (intptr_t)(g_005d337c)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005d3238 + (intptr_t)(g_005d3380)),auStack_2c);
  iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar2;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x40))((int *)*(int *)((int)this + 4*(0x43)),g_005d3384);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005d326e + (intptr_t)(g_005d3388)), (char const*)(unsigned char *)((char *)&g_005d3270 + (intptr_t)(g_005d338c)), g_005d3390);
  *(int *)((int)this + 4*(0x44)) = (int)piVar1;
  pcVar6 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(0x40800000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24 + -0x80000000),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(0x40800000)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar2 = (undefined4)(intptr_t)(g_005d3394);
  *(int *)((int)this + 4*(0x45)) = iVar5;
  func_0079e45c(auStack_20,&g_005d32fa + iVar2,auStack_2c);
  uVar3 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar3,1);
  piVar1 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar6 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x294))((int *)*(int *)((int)this + 4*(0x45)),0);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&uStack_28);
  return;
}
