#include "BLImmortalsItemView.h"
#include "BLImmortalsItemPresenter.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00571e34;
extern "C" unsigned long UNK_00571e66;
extern "C" unsigned long UNK_00571ec0;
extern "C" unsigned long UNK_00571ee8;
extern "C" unsigned long UNK_00571f00;
extern "C" unsigned long UNK_00571f2e;
extern "C" unsigned long UNK_00571fbc;
extern "C" unsigned long UNK_00571ff8;
extern "C" unsigned long UNK_00572024;
extern "C" unsigned long UNK_00572026;
extern "C" unsigned long UNK_00572038;
extern "C" unsigned long UNK_005720a6;
extern "C" unsigned long _UNK_00571eac;
extern "C" unsigned long _UNK_00571eb0;
extern "C" unsigned long _UNK_00571ec4;
extern "C" unsigned long _UNK_00571eec;
extern "C" unsigned long _UNK_00571f58;
extern "C" unsigned long _UNK_00571f5c;
extern "C" unsigned long _UNK_00572128;
extern "C" unsigned long _UNK_0057212c;
extern "C" unsigned long _UNK_00572130;
extern "C" unsigned long _UNK_00572134;
extern "C" unsigned long _UNK_00572138;
extern "C" unsigned long _UNK_0057213c;
extern "C" unsigned long _UNK_00572140;
extern "C" unsigned long _UNK_00572144;
extern "C" unsigned long g_00571e34;
extern "C" unsigned long g_00571e66;
extern "C" unsigned long g_00571eac;
extern "C" unsigned long g_00571eb0;
extern "C" unsigned long g_00571ec0;
extern "C" unsigned long g_00571ec4;
extern "C" unsigned long g_00571ee8;
extern "C" unsigned long g_00571eec;
extern "C" unsigned long g_00571f00;
extern "C" unsigned long g_00571f2e;
extern "C" unsigned long g_00571f58;
extern "C" unsigned long g_00571f5c;
extern "C" unsigned long g_00571fbc;
extern "C" unsigned long g_00571ff8;
extern "C" unsigned long g_00572024;
extern "C" unsigned long g_00572026;
extern "C" unsigned long g_00572038;
extern "C" unsigned long g_005720a6;
extern "C" unsigned long g_00572128;
extern "C" unsigned long g_0057212c;
extern "C" unsigned long g_00572130;
extern "C" unsigned long g_00572134;
extern "C" unsigned long g_00572138;
extern "C" unsigned long g_0057213c;
extern "C" unsigned long g_00572140;
extern "C" unsigned long g_00572144;
BLImmortalsItemView::~BLImmortalsItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00571e34 + g_00571eac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00571e66 + g_00571eb0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsItemView::BLImmortalsItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00571f00 + g_00571f58);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00571f2e + g_00571f5c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLImmortalsItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsItemView::initView();
    ((BLImmortalsItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsItemView*)((int)this));
  }
  return iVar1;
}

void BLImmortalsItemView::onEnter()
{
  ((BLImmortalsItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsItemView::onExit()
{
  ((BLImmortalsItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

int * BLImmortalsItemView::create()
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

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsItemView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar2)))));
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00571fbc + (intptr_t)(g_0057212c)),auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00571ff8 + (intptr_t)(g_00572130)),auStack_28);
  iVar4 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar4;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00572024 + (intptr_t)(g_00572134)), (char const*)(unsigned char *)((char *)&g_00572026 + (intptr_t)(g_00572138)), g_0057213c);
  *(int *)((int)this + 4*(0x44)) = (int)piVar3;
  (**(code **)(*piVar3 + 0x1b4))(piVar3,(unsigned char *)((char *)&g_00572038 + (intptr_t)(g_00572140)));
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_30),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_2c + -0x80000000),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar4 = (undefined4)(intptr_t)(g_00572144);
  *(int *)((int)this + 4*(0x45)) = iVar5;
  func_0079e45c(auStack_20,&g_005720a6 + iVar4,auStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar1,1);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar6 = *(code **)(*piVar3 + 0x28c);
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x294))((int *)*(int *)((int)this + 4*(0x45)),0);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
  (**(code **)(*(int *)this + 0x88))(((int)this),&uStack_30);
  return;
}
