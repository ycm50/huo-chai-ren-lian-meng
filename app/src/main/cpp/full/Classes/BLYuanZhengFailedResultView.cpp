#include "BLYuanZhengFailedResultView.h"
#include "BLLeakUtils.h"
#include "BLYuanZhengFailedResultPresenter.h"
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
extern "C" unsigned long UNK_0066d488;
extern "C" unsigned long UNK_0066d4ba;
extern "C" unsigned long UNK_0066d514;
extern "C" unsigned long UNK_0066d53c;
extern "C" unsigned long UNK_0066d608;
extern "C" unsigned long UNK_0066d65c;
extern "C" unsigned long UNK_0066d6d4;
extern "C" unsigned long UNK_0066d758;
extern "C" unsigned long UNK_0066d75a;
extern "C" unsigned long UNK_0066d76c;
extern "C" unsigned long _DAT_0066d5e4;
extern "C" unsigned long _DAT_0066d5e8;
extern "C" unsigned long _UNK_0066d500;
extern "C" unsigned long _UNK_0066d504;
extern "C" unsigned long _UNK_0066d518;
extern "C" unsigned long _UNK_0066d540;
extern "C" unsigned long _UNK_0066d7a8;
extern "C" unsigned long _UNK_0066d7ac;
extern "C" unsigned long _UNK_0066d7b0;
extern "C" unsigned long _UNK_0066d7b4;
extern "C" unsigned long _UNK_0066d7b8;
extern "C" unsigned long _UNK_0066d7bc;
extern "C" unsigned long _UNK_0066d7c0;
extern "C" unsigned long _UNK_0066d7c4;
extern "C" unsigned long _UNK_0066d7c8;
extern "C" unsigned long _UNK_0066d7cc;
extern "C" unsigned long _UNK_0066d7d0;
extern "C" unsigned long _UNK_0066d7d4;
extern "C" unsigned long g_0066d488;
extern "C" unsigned long g_0066d4ba;
extern "C" unsigned long g_0066d500;
extern "C" unsigned long g_0066d504;
extern "C" unsigned long g_0066d514;
extern "C" unsigned long g_0066d518;
extern "C" unsigned long g_0066d53c;
extern "C" unsigned long g_0066d540;
extern "C" unsigned long g_0066d5e4;
extern "C" unsigned long g_0066d5e8;
extern "C" unsigned long g_0066d608;
extern "C" unsigned long g_0066d65c;
extern "C" unsigned long g_0066d6d4;
extern "C" unsigned long g_0066d758;
extern "C" unsigned long g_0066d75a;
extern "C" unsigned long g_0066d76c;
extern "C" unsigned long g_0066d7a8;
extern "C" unsigned long g_0066d7ac;
extern "C" unsigned long g_0066d7b0;
extern "C" unsigned long g_0066d7b4;
extern "C" unsigned long g_0066d7b8;
extern "C" unsigned long g_0066d7bc;
extern "C" unsigned long g_0066d7c0;
extern "C" unsigned long g_0066d7c4;
extern "C" unsigned long g_0066d7c8;
extern "C" unsigned long g_0066d7cc;
extern "C" unsigned long g_0066d7d0;
extern "C" unsigned long g_0066d7d4;
BLYuanZhengFailedResultView::~BLYuanZhengFailedResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0066d488 + g_0066d500);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0066d4ba + g_0066d504,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLYuanZhengFailedResultView::BLYuanZhengFailedResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0066d5e4 + 0x66d584);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLYuanZhengFailedResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(0x43)) = 0;
  return;
}


bool BLYuanZhengFailedResultView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLYuanZhengFailedResultPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLYuanZhengFailedResultView::initView();
    ((BLYuanZhengFailedResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLYuanZhengFailedResultView*)((int)this));
  }
  return iVar1;
}

void BLYuanZhengFailedResultView::onEnter()
{
  ((BLYuanZhengFailedResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLYuanZhengFailedResultView::onExit()
{
  ((BLYuanZhengFailedResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLYuanZhengFailedResultView::initView()
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
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0066d608 + (intptr_t)(g_0066d7ac)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0066d7b0)))));
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0066d65c + (intptr_t)(g_0066d7b4)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x8c))(piVar1));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24 + -0x80000000),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0066d7b8)))));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar3 = (undefined4)(intptr_t)(g_0066d7bc);
  *(int *)((int)this + 4*(0x44)) = iVar5;
  func_0079e45c(auStack_20,&g_0066d6d4 + iVar3,auStack_2c);
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
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0066d758 + (intptr_t)(g_0066d7c8)), (char const*)(unsigned char *)((char *)&g_0066d75a + (intptr_t)(g_0066d7cc)), g_0066d7d0);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,(unsigned char *)((char *)&g_0066d76c + (intptr_t)(g_0066d7d4)));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  (*pcVar6)(piVar1,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_28);
  return;
}
