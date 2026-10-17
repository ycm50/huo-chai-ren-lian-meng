#include "BLImmortalsRefineLockView.h"
#include "BLImmortalsRefineLockPresenter.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057226c;
extern "C" unsigned long UNK_0057229e;
extern "C" unsigned long UNK_005722f8;
extern "C" unsigned long UNK_00572320;
extern "C" unsigned long UNK_005729b4;
extern "C" unsigned long UNK_005729e2;
extern "C" unsigned long UNK_00572a7e;
extern "C" unsigned long UNK_00572b1e;
extern "C" unsigned long UNK_00572b8e;
extern "C" unsigned long UNK_00572b92;
extern "C" unsigned long UNK_00572bda;
extern "C" unsigned long UNK_00572bf8;
extern "C" unsigned long _UNK_005722e4;
extern "C" unsigned long _UNK_005722e8;
extern "C" unsigned long _UNK_005722fc;
extern "C" unsigned long _UNK_00572324;
extern "C" unsigned long _UNK_00572a0c;
extern "C" unsigned long _UNK_00572a10;
extern "C" unsigned long _UNK_00572c90;
extern "C" unsigned long _UNK_00572c94;
extern "C" unsigned long _UNK_00572c98;
extern "C" unsigned long _UNK_00572c9c;
extern "C" unsigned long _UNK_00572ca0;
extern "C" unsigned long _UNK_00572ca4;
extern "C" unsigned long _UNK_00572ca8;
extern "C" unsigned long _UNK_00572cac;
extern "C" unsigned long _UNK_00572cb0;
extern "C" unsigned long _UNK_00572cb4;
extern "C" unsigned long g_0057226c;
extern "C" unsigned long g_0057229e;
extern "C" unsigned long g_005722e4;
extern "C" unsigned long g_005722e8;
extern "C" unsigned long g_005722f8;
extern "C" unsigned long g_005722fc;
extern "C" unsigned long g_00572320;
extern "C" unsigned long g_00572324;
extern "C" unsigned long g_005729b4;
extern "C" unsigned long g_005729e2;
extern "C" unsigned long g_00572a0c;
extern "C" unsigned long g_00572a10;
extern "C" unsigned long g_00572a7e;
extern "C" unsigned long g_00572b1e;
extern "C" unsigned long g_00572b8e;
extern "C" unsigned long g_00572b92;
extern "C" unsigned long g_00572bda;
extern "C" unsigned long g_00572bf8;
extern "C" unsigned long g_00572c90;
extern "C" unsigned long g_00572c94;
extern "C" unsigned long g_00572c98;
extern "C" unsigned long g_00572c9c;
extern "C" unsigned long g_00572ca0;
extern "C" unsigned long g_00572ca4;
extern "C" unsigned long g_00572ca8;
extern "C" unsigned long g_00572cac;
extern "C" unsigned long g_00572cb0;
extern "C" unsigned long g_00572cb4;
BLImmortalsRefineLockView::~BLImmortalsRefineLockView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057226c + g_005722e4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057229e + g_005722e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLImmortalsRefineLockView::onEnter()
{
  ((BLImmortalsRefineLockPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsRefineLockView::onExit()
{
  ((BLImmortalsRefineLockPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

BLImmortalsRefineLockView::BLImmortalsRefineLockView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005729b4 + g_00572a0c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005729e2 + g_00572a10,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLImmortalsRefineLockView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsRefineLockPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsRefineLockView::initView();
    ((BLImmortalsRefineLockPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsRefineLockView*)((int)this));
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLImmortalsRefineLockView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int aiStack_30 [2];
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
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
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(aiStack_30[0] + -0x80000000),(int)(0x3f000000)))));
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00572a7e + (intptr_t)(g_00572c98)),auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar6 = *(code **)(*piVar3 + 0x1d4);
  (**(code **)(*piVar3 + 0x1cc))(&uStack_20,piVar3);
  (*pcVar6)(piVar3,&uStack_20);
  (**(code **)(*piVar3 + 0x1cc))(&uStack_20,piVar3);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  pcVar6 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  (**(code **)(*piVar3 + 0x1cc))(&uStack_20,piVar3);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00572b1e + (intptr_t)(g_00572c9c)),auStack_28);
  iVar4 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar4;
  func_0079e2bc(&uStack_20);
  piVar7 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar6 = *(code **)(*piVar7 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*piVar3 + 0x50))(piVar3));
  (*pcVar6)(piVar7,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x90))((int *)*(int *)((int)this + 4*(0x43)),0);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00572ca0),(int)(uVar2)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00572b92 + (intptr_t)(g_00572ca8)), (char const*)(unsigned char *)((char *)&g_00572b8e + (intptr_t)(g_00572ca4)), g_00572cac);
  *(int *)((int)this + 4*(0x45)) = (int)piVar7;
  pcVar6 = *(code **)(*piVar7 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar7,&uStack_20);
  piVar7 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar6 = *(code **)(*piVar7 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar7,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x45)),(unsigned char *)((char *)&g_00572bda + (intptr_t)(g_00572cb0)));
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar4 = (undefined4)(intptr_t)(g_00572cb4);
  *(int *)((int)this + 4*(0x44)) = iVar5;
  func_0079e45c(&uStack_20,&g_00572bf8 + iVar4,auStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar1,1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x294))((int *)*(int *)((int)this + 4*(0x44)),0);
  piVar7 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar7 + 0x28c);
  (**(code **)(*piVar3 + 0x1cc))(&uStack_20,piVar3);
  (*pcVar6)(piVar7,&uStack_20);
  piVar7 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar7 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*piVar3 + 0x50))(piVar3));
  (*pcVar6)(piVar7,uVar1);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),2);
  (**(code **)(*(int *)this + 0x88))(((int)this),aiStack_30);
  return;
}
