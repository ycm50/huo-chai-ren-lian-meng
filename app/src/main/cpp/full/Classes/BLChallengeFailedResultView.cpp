#include "BLChallengeFailedResultView.h"
#include "BLChallengeFailedResultPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00661d94;
extern "C" unsigned long UNK_00661dc6;
extern "C" unsigned long UNK_00661e20;
extern "C" unsigned long UNK_00661e48;
extern "C" unsigned long UNK_00661f16;
extern "C" unsigned long UNK_00661f68;
extern "C" unsigned long UNK_00661fe8;
extern "C" unsigned long UNK_00661fea;
extern "C" unsigned long UNK_00661ffc;
extern "C" unsigned long UNK_006620d4;
extern "C" unsigned long UNK_0066214a;
extern "C" unsigned long UNK_0066214c;
extern "C" unsigned long UNK_0066215d;
extern "C" unsigned long _DAT_00661ef0;
extern "C" unsigned long _DAT_00661ef4;
extern "C" unsigned long _UNK_00661e0c;
extern "C" unsigned long _UNK_00661e10;
extern "C" unsigned long _UNK_00661e24;
extern "C" unsigned long _UNK_00661e4c;
extern "C" unsigned long _UNK_006621b0;
extern "C" unsigned long _UNK_006621b4;
extern "C" unsigned long _UNK_006621b8;
extern "C" unsigned long _UNK_006621bc;
extern "C" unsigned long _UNK_006621c0;
extern "C" unsigned long _UNK_006621c4;
extern "C" unsigned long _UNK_006621c8;
extern "C" unsigned long _UNK_006621cc;
extern "C" unsigned long _UNK_006621d0;
extern "C" unsigned long _UNK_006621d4;
extern "C" unsigned long _UNK_006621d8;
extern "C" unsigned long _UNK_006621dc;
extern "C" unsigned long _UNK_006621e0;
extern "C" unsigned long _UNK_006621e4;
extern "C" unsigned long _UNK_006621e8;
extern "C" unsigned long _UNK_006621ec;
extern "C" unsigned long _UNK_006621f0;
extern "C" unsigned long _UNK_006621f4;
extern "C" unsigned long _UNK_006621f8;
extern "C" unsigned long _UNK_006621fc;
extern "C" unsigned long g_00661d94;
extern "C" unsigned long g_00661dc6;
extern "C" unsigned long g_00661e0c;
extern "C" unsigned long g_00661e10;
extern "C" unsigned long g_00661e20;
extern "C" unsigned long g_00661e24;
extern "C" unsigned long g_00661e48;
extern "C" unsigned long g_00661e4c;
extern "C" unsigned long g_00661ef0;
extern "C" unsigned long g_00661ef4;
extern "C" unsigned long g_00661f16;
extern "C" unsigned long g_00661f68;
extern "C" unsigned long g_00661fe8;
extern "C" unsigned long g_00661fea;
extern "C" unsigned long g_00661ffc;
extern "C" unsigned long g_006620d4;
extern "C" unsigned long g_0066214a;
extern "C" unsigned long g_0066214c;
extern "C" unsigned long g_0066215d;
extern "C" unsigned long g_006621b0;
extern "C" unsigned long g_006621b4;
extern "C" unsigned long g_006621b8;
extern "C" unsigned long g_006621bc;
extern "C" unsigned long g_006621c0;
extern "C" unsigned long g_006621c4;
extern "C" unsigned long g_006621c8;
extern "C" unsigned long g_006621cc;
extern "C" unsigned long g_006621d0;
extern "C" unsigned long g_006621d4;
extern "C" unsigned long g_006621d8;
extern "C" unsigned long g_006621dc;
extern "C" unsigned long g_006621e0;
extern "C" unsigned long g_006621e4;
extern "C" unsigned long g_006621e8;
extern "C" unsigned long g_006621ec;
extern "C" unsigned long g_006621f0;
extern "C" unsigned long g_006621f4;
extern "C" unsigned long g_006621f8;
extern "C" unsigned long g_006621fc;
BLChallengeFailedResultView::~BLChallengeFailedResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00661d94 + g_00661e0c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00661dc6 + g_00661e10,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLChallengeFailedResultView::BLChallengeFailedResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00661ef0 + 0x661e90);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLChallengeFailedResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(0x43)) = 0;
  return;
}


bool BLChallengeFailedResultView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLChallengeFailedResultPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLChallengeFailedResultView::initView();
    ((BLChallengeFailedResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLChallengeFailedResultView*)((int)this));
  }
  return iVar1;
}

void BLChallengeFailedResultView::onEnter()
{
  ((BLChallengeFailedResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLChallengeFailedResultView::onExit()
{
  ((BLChallengeFailedResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLChallengeFailedResultView::initView()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00661f16 + (intptr_t)(g_006621b4)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_006621b8)))));
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00661f68 + (intptr_t)(g_006621bc)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x8c))(piVar1));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x8c))(piVar1));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_006621c0)))));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00661fea + (intptr_t)(g_006621c8)), (char const*)(unsigned char *)((char *)&g_00661fe8 + (intptr_t)(g_006621c4)), g_006621cc);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,(unsigned char *)((char *)&g_00661ffc + (intptr_t)(g_006621d0)));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x8c))(piVar1));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(g_006621d4)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_006621d8)))));
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x18))(piVar1));
  if (iVar3 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x43)) = (int)piVar1;
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar6 = *(code **)(*piVar1 + 0x234);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24 + -0x80000000),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_006621e8)))));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar3 = (undefined4)(intptr_t)(g_006621ec);
  *(int *)((int)this + 4*(0x44)) = iVar5;
  func_0079e45c(auStack_20,&g_006620d4 + iVar3,auStack_2c);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x294))((int *)*(int *)((int)this + 4*(0x44)),0);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar4,1);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0066214a + (intptr_t)(g_006621f4)), (char const*)(unsigned char *)((char *)&g_0066214c + (intptr_t)(g_006621f8)), g_006621cc);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,(unsigned char *)((char *)&g_0066215d + (intptr_t)(g_006621fc)));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  (*pcVar6)(piVar1,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_28);
  return;
}
