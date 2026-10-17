#include "BLLivenessMissionItemRewardView.h"
#include "BLLeakUtils.h"
#include "BLLivenessMissionItemRewardPresenter.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005806c0;
extern "C" unsigned long UNK_005806f2;
extern "C" unsigned long UNK_0058074c;
extern "C" unsigned long UNK_005808d4;
extern "C" unsigned long UNK_00580ab4;
extern "C" unsigned long UNK_00580ae2;
extern "C" unsigned long UNK_00580b70;
extern "C" unsigned long UNK_00580bb0;
extern "C" unsigned long UNK_00580c18;
extern "C" unsigned long UNK_00580c1a;
extern "C" unsigned long UNK_00580c2c;
extern "C" unsigned long UNK_00580cd2;
extern "C" unsigned long _UNK_00580738;
extern "C" unsigned long _UNK_0058073c;
extern "C" unsigned long _UNK_00580750;
extern "C" unsigned long _UNK_005808d8;
extern "C" unsigned long _UNK_00580b0c;
extern "C" unsigned long _UNK_00580b10;
extern "C" unsigned long _UNK_00580d80;
extern "C" unsigned long _UNK_00580d84;
extern "C" unsigned long _UNK_00580d88;
extern "C" unsigned long _UNK_00580d8c;
extern "C" unsigned long _UNK_00580d90;
extern "C" unsigned long _UNK_00580d94;
extern "C" unsigned long _UNK_00580d98;
extern "C" unsigned long _UNK_00580d9c;
extern "C" unsigned long _UNK_00580da0;
extern "C" unsigned long g_005806c0;
extern "C" unsigned long g_005806f2;
extern "C" unsigned long g_00580738;
extern "C" unsigned long g_0058073c;
extern "C" unsigned long g_0058074c;
extern "C" unsigned long g_00580750;
extern "C" unsigned long g_005808d4;
extern "C" unsigned long g_005808d8;
extern "C" unsigned long g_00580ab4;
extern "C" unsigned long g_00580ae2;
extern "C" unsigned long g_00580b0c;
extern "C" unsigned long g_00580b10;
extern "C" unsigned long g_00580b70;
extern "C" unsigned long g_00580bb0;
extern "C" unsigned long g_00580c18;
extern "C" unsigned long g_00580c1a;
extern "C" unsigned long g_00580c2c;
extern "C" unsigned long g_00580cd2;
extern "C" unsigned long g_00580d80;
extern "C" unsigned long g_00580d84;
extern "C" unsigned long g_00580d88;
extern "C" unsigned long g_00580d8c;
extern "C" unsigned long g_00580d90;
extern "C" unsigned long g_00580d94;
extern "C" unsigned long g_00580d98;
extern "C" unsigned long g_00580d9c;
extern "C" unsigned long g_00580da0;
BLLivenessMissionItemRewardView::~BLLivenessMissionItemRewardView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005806c0 + g_00580738);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005806f2 + g_0058073c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessMissionItemRewardView::BLLivenessMissionItemRewardView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00580ab4 + g_00580b0c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00580ae2 + g_00580b10,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLLivenessMissionItemRewardView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLLivenessMissionItemRewardPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLLivenessMissionItemRewardView::initView();
    ((BLLivenessMissionItemRewardPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLLivenessMissionItemRewardView*)((int)this));
  }
  return iVar1;
}

void BLLivenessMissionItemRewardView::onEnter()
{
  ((BLLivenessMissionItemRewardPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLivenessMissionItemRewardView::onExit()
{
  ((BLLivenessMissionItemRewardPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLivenessMissionItemRewardView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar2)))));
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00580b70 + (intptr_t)(g_00580d84)),&uStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar7 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00580bb0 + (intptr_t)(g_00580d88)),&uStack_28);
  iVar4 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar4;
  func_0079e2bc(auStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar7 = *(code **)(*piVar3 + 0x1d4);
  (**(code **)(*piVar3 + 0x1cc))(auStack_20,piVar3);
  (*pcVar7)(piVar3,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x40))((int *)*(int *)((int)this + 4*(0x43)),0x3f400000);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00580d8c),(int)(uVar1)))));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00580c1a + (intptr_t)(g_00580d94)), (char const*)(unsigned char *)((char *)&g_00580c18 + (intptr_t)(g_00580d90)), uVar1);
  *(int *)((int)this + 4*(0x45)) = (int)piVar3;
  (**(code **)(*piVar3 + 0x1b4))(piVar3,(unsigned char *)((char *)&g_00580c2c + (intptr_t)(g_00580d98)));
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar7 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_38),(int)(0x3f000000)))));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(0x40800000),(int)(uVar2)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_34 + -0x80000000),(int)(0x3f000000)))));
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(0x40800000),(int)(uVar5)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar5)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  iVar6 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar4 = (undefined4)(intptr_t)(g_00580d9c);
  *(int *)((int)this + 4*(0x44)) = iVar6;
  func_0079e45c(auStack_20,&g_00580cd2 + iVar4,&uStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar1,1);
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar7 = *(code **)(*piVar3 + 0x28c);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar2)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&uStack_38);
  return;
}
