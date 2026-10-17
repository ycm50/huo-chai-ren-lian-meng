#include "BLYuanZhengWinResultView.h"
#include "BLLeakUtils.h"
#include "BLYuanZhengWinResultPresenter.h"
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
extern "C" unsigned long UNK_0066d884;
extern "C" unsigned long UNK_0066d8b6;
extern "C" unsigned long UNK_0066d910;
extern "C" unsigned long UNK_0066d938;
extern "C" unsigned long UNK_0066da04;
extern "C" unsigned long UNK_0066da58;
extern "C" unsigned long UNK_0066dad8;
extern "C" unsigned long UNK_0066dada;
extern "C" unsigned long UNK_0066daec;
extern "C" unsigned long UNK_0066dbb4;
extern "C" unsigned long UNK_0066dc2a;
extern "C" unsigned long UNK_0066dc2c;
extern "C" unsigned long UNK_0066dc3d;
extern "C" unsigned long _DAT_0066d9e0;
extern "C" unsigned long _DAT_0066d9e4;
extern "C" unsigned long _UNK_0066d8fc;
extern "C" unsigned long _UNK_0066d900;
extern "C" unsigned long _UNK_0066d914;
extern "C" unsigned long _UNK_0066d93c;
extern "C" unsigned long _UNK_0066dc90;
extern "C" unsigned long _UNK_0066dc94;
extern "C" unsigned long _UNK_0066dc98;
extern "C" unsigned long _UNK_0066dc9c;
extern "C" unsigned long _UNK_0066dca0;
extern "C" unsigned long _UNK_0066dca4;
extern "C" unsigned long _UNK_0066dca8;
extern "C" unsigned long _UNK_0066dcac;
extern "C" unsigned long _UNK_0066dcb0;
extern "C" unsigned long _UNK_0066dcb4;
extern "C" unsigned long _UNK_0066dcb8;
extern "C" unsigned long _UNK_0066dcbc;
extern "C" unsigned long _UNK_0066dcc0;
extern "C" unsigned long _UNK_0066dcc4;
extern "C" unsigned long _UNK_0066dcc8;
extern "C" unsigned long _UNK_0066dccc;
extern "C" unsigned long _UNK_0066dcd0;
extern "C" unsigned long _UNK_0066dcd4;
extern "C" unsigned long _UNK_0066dcd8;
extern "C" unsigned long g_0066d884;
extern "C" unsigned long g_0066d8b6;
extern "C" unsigned long g_0066d8fc;
extern "C" unsigned long g_0066d900;
extern "C" unsigned long g_0066d910;
extern "C" unsigned long g_0066d914;
extern "C" unsigned long g_0066d938;
extern "C" unsigned long g_0066d93c;
extern "C" unsigned long g_0066d9e0;
extern "C" unsigned long g_0066d9e4;
extern "C" unsigned long g_0066da04;
extern "C" unsigned long g_0066da58;
extern "C" unsigned long g_0066dad8;
extern "C" unsigned long g_0066dada;
extern "C" unsigned long g_0066daec;
extern "C" unsigned long g_0066dbb4;
extern "C" unsigned long g_0066dc2a;
extern "C" unsigned long g_0066dc2c;
extern "C" unsigned long g_0066dc3d;
extern "C" unsigned long g_0066dc90;
extern "C" unsigned long g_0066dc94;
extern "C" unsigned long g_0066dc98;
extern "C" unsigned long g_0066dc9c;
extern "C" unsigned long g_0066dca0;
extern "C" unsigned long g_0066dca4;
extern "C" unsigned long g_0066dca8;
extern "C" unsigned long g_0066dcac;
extern "C" unsigned long g_0066dcb0;
extern "C" unsigned long g_0066dcb4;
extern "C" unsigned long g_0066dcb8;
extern "C" unsigned long g_0066dcbc;
extern "C" unsigned long g_0066dcc0;
extern "C" unsigned long g_0066dcc4;
extern "C" unsigned long g_0066dcc8;
extern "C" unsigned long g_0066dccc;
extern "C" unsigned long g_0066dcd0;
extern "C" unsigned long g_0066dcd4;
extern "C" unsigned long g_0066dcd8;
BLYuanZhengWinResultView::~BLYuanZhengWinResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0066d884 + g_0066d8fc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0066d8b6 + g_0066d900,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLYuanZhengWinResultView::BLYuanZhengWinResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0066d9e0 + 0x66d980);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLYuanZhengWinResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(0x43)) = 0;
  return;
}


bool BLYuanZhengWinResultView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLYuanZhengWinResultPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLYuanZhengWinResultView::initView();
    ((BLYuanZhengWinResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLYuanZhengWinResultView*)((int)this));
  }
  return iVar1;
}

void BLYuanZhengWinResultView::onEnter()
{
  ((BLYuanZhengWinResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLYuanZhengWinResultView::onExit()
{
  ((BLYuanZhengWinResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLYuanZhengWinResultView::initView()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0066da04 + (intptr_t)(g_0066dc94)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0066dc98)))));
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0066da58 + (intptr_t)(g_0066dc9c)),auStack_2c);
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
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0066dca0)))));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0066dada + (intptr_t)(g_0066dca8)), (char const*)(unsigned char *)((char *)&g_0066dad8 + (intptr_t)(g_0066dca4)), g_0066dcac);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,(unsigned char *)((char *)&g_0066daec + (intptr_t)(g_0066dcb0)));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x8c))(piVar1));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(g_0066dcb4)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0066dcb8)))));
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
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0066dcc4)))));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar3 = (undefined4)(intptr_t)(g_0066dcc8);
  *(int *)((int)this + 4*(0x44)) = iVar5;
  func_0079e45c(auStack_20,&g_0066dbb4 + iVar3,auStack_2c);
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
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0066dc2a + (intptr_t)(g_0066dcd0)), (char const*)(unsigned char *)((char *)&g_0066dc2c + (intptr_t)(g_0066dcd4)), g_0066dcac);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,(unsigned char *)((char *)&g_0066dc3d + (intptr_t)(g_0066dcd8)));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  (*pcVar6)(piVar1,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_28);
  return;
}
