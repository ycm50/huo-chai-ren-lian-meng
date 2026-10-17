#include "BLRenascenceTargetView.h"
#include "BLLeakUtils.h"
#include "BLRenascenceTargetPresenter.h"
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
extern "C" unsigned long UNK_00651c74;
extern "C" unsigned long UNK_00651ca6;
extern "C" unsigned long UNK_00651d00;
extern "C" unsigned long UNK_00651d50;
extern "C" unsigned long UNK_006522a4;
extern "C" unsigned long UNK_006522d2;
extern "C" unsigned long UNK_0065231e;
extern "C" unsigned long UNK_00652360;
extern "C" unsigned long UNK_00652362;
extern "C" unsigned long UNK_006523db;
extern "C" unsigned long _UNK_00651cec;
extern "C" unsigned long _UNK_00651cf0;
extern "C" unsigned long _UNK_00651d04;
extern "C" unsigned long _UNK_00651d54;
extern "C" unsigned long _UNK_006522fc;
extern "C" unsigned long _UNK_00652300;
extern "C" unsigned long _UNK_006524d0;
extern "C" unsigned long _UNK_006524d4;
extern "C" unsigned long _UNK_006524d8;
extern "C" unsigned long _UNK_006524dc;
extern "C" unsigned long _UNK_006524e0;
extern "C" unsigned long _UNK_006524e4;
extern "C" unsigned long _UNK_006524e8;
extern "C" unsigned long _UNK_006524ec;
extern "C" unsigned long _UNK_006524f0;
extern "C" unsigned long _UNK_006524f4;
extern "C" unsigned long g_00651c74;
extern "C" unsigned long g_00651ca6;
extern "C" unsigned long g_00651cec;
extern "C" unsigned long g_00651cf0;
extern "C" unsigned long g_00651d00;
extern "C" unsigned long g_00651d04;
extern "C" unsigned long g_00651d50;
extern "C" unsigned long g_00651d54;
extern "C" unsigned long g_006522a4;
extern "C" unsigned long g_006522d2;
extern "C" unsigned long g_006522fc;
extern "C" unsigned long g_00652300;
extern "C" unsigned long g_0065231e;
extern "C" unsigned long g_00652360;
extern "C" unsigned long g_00652362;
extern "C" unsigned long g_006523db;
extern "C" unsigned long g_006524d0;
extern "C" unsigned long g_006524d4;
extern "C" unsigned long g_006524d8;
extern "C" unsigned long g_006524dc;
extern "C" unsigned long g_006524e0;
extern "C" unsigned long g_006524e4;
extern "C" unsigned long g_006524e8;
extern "C" unsigned long g_006524ec;
extern "C" unsigned long g_006524f0;
extern "C" unsigned long g_006524f4;
BLRenascenceTargetView::~BLRenascenceTargetView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00651c74 + g_00651cec);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00651ca6 + g_00651cf0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRenascenceTargetView::BLRenascenceTargetView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006522a4 + g_006522fc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006522d2 + g_00652300,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLRenascenceTargetView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRenascenceTargetPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRenascenceTargetView::initView();
    ((BLRenascenceTargetPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRenascenceTargetView*)((int)this));
  }
  return iVar1;
}

void BLRenascenceTargetView::onEnter()
{
  ((BLRenascenceTargetPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLRenascenceTargetView::initView()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0065231e + (intptr_t)(g_006524d8)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar5 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00652360 + (intptr_t)(g_006524dc)), (char const*)(unsigned char *)((char *)&g_00652362 + (intptr_t)(g_006524e0)), g_006524e4);
  *(int *)((int)this + 4*(0x43)) = (int)piVar1;
  pcVar5 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_28 + -0x80000000),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_006524e8)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_006524e8)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x43)),(unsigned char *)((char *)&g_006523db + (intptr_t)(g_006524ec)));
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
  0 /* ctorZero */;
  iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x18))(piVar1));
  if (iVar4 != 0) {
    ((cocos2d::CCObject *)piVar1)->autorelease();
    *(int *)((int)this + 4*(0x44)) = (int)piVar1;
    pcVar5 = *(code **)(*piVar1 + 0x234);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_28),(int)(g_006524e8)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24),(int)(g_006524f0)))));
    0 /* ctorZero */;
    (*pcVar5)(piVar1,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x22c))((int *)*(int *)((int)this + 4*(0x44)),1);
    piVar1 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar5 = *(code **)(*piVar1 + 0x4c);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_28 + -0x80000000),(int)(0x3f000000)))));
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_006524f4)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24 + -0x80000000),(int)(0x3f000000)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_006524f4)))));
    0 /* ctorZero */;
    (*pcVar5)(piVar1,auStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
    (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_28);
    return;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  *(int *)((int)this + 4*(0x44)) = 0;
                    /* WARNING: Does not return;
  (*pcVar5)();
}

void BLRenascenceTargetView::onExit()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
