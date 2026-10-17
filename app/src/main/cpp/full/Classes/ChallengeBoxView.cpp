#include "ChallengeBoxView.h"
#include "BLLeakUtils.h"
#include "ChallengeBoxPresenter.h"
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
extern "C" unsigned long UNK_0050b500;
extern "C" unsigned long UNK_0050b544;
extern "C" unsigned long UNK_0050b588;
extern "C" unsigned long UNK_0050b5b0;
extern "C" unsigned long UNK_0050b5c8;
extern "C" unsigned long UNK_0050b5f6;
extern "C" unsigned long UNK_0050b6aa;
extern "C" unsigned long UNK_0050b770;
extern "C" unsigned long UNK_0050b864;
extern "C" unsigned long UNK_0050b866;
extern "C" unsigned long _UNK_0050b574;
extern "C" unsigned long _UNK_0050b578;
extern "C" unsigned long _UNK_0050b58c;
extern "C" unsigned long _UNK_0050b5b4;
extern "C" unsigned long _UNK_0050b620;
extern "C" unsigned long _UNK_0050b624;
extern "C" unsigned long _UNK_0050b8dc;
extern "C" unsigned long _UNK_0050b8e0;
extern "C" unsigned long _UNK_0050b8e4;
extern "C" unsigned long _UNK_0050b8e8;
extern "C" unsigned long _UNK_0050b8ec;
extern "C" unsigned long _UNK_0050b8f0;
extern "C" unsigned long _UNK_0050b8f4;
extern "C" unsigned long _UNK_0050b8f8;
extern "C" unsigned long _UNK_0050b8fc;
extern "C" unsigned long _UNK_0050b900;
extern "C" unsigned long g_0050b500;
extern "C" unsigned long g_0050b544;
extern "C" unsigned long g_0050b574;
extern "C" unsigned long g_0050b578;
extern "C" unsigned long g_0050b588;
extern "C" unsigned long g_0050b58c;
extern "C" unsigned long g_0050b5b0;
extern "C" unsigned long g_0050b5b4;
extern "C" unsigned long g_0050b5c8;
extern "C" unsigned long g_0050b5f6;
extern "C" unsigned long g_0050b620;
extern "C" unsigned long g_0050b624;
extern "C" unsigned long g_0050b6aa;
extern "C" unsigned long g_0050b770;
extern "C" unsigned long g_0050b864;
extern "C" unsigned long g_0050b866;
extern "C" unsigned long g_0050b8dc;
extern "C" unsigned long g_0050b8e0;
extern "C" unsigned long g_0050b8e4;
extern "C" unsigned long g_0050b8e8;
extern "C" unsigned long g_0050b8ec;
extern "C" unsigned long g_0050b8f0;
extern "C" unsigned long g_0050b8f4;
extern "C" unsigned long g_0050b8f8;
extern "C" unsigned long g_0050b8fc;
extern "C" unsigned long g_0050b900;
ChallengeBoxView::~ChallengeBoxView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0050b500 + g_0050b574);
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
  func_0079e45c(&uStack_14,&g_0050b544 + g_0050b578,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeBoxView::ChallengeBoxView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0050b5c8 + g_0050b620);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0050b5f6 + g_0050b624,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * ChallengeBoxView::create()
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

bool ChallengeBoxView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((ChallengeBoxPresenter *)this)->create((ChallengeBoxView*)((int)this));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    piVar3 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x43)) = (int)piVar3;
    (**(code **)(*piVar3 + 0x294))(piVar3,0);
    func_0079e45c(&uStack_20,&g_0050b6aa + g_0050b8dc,auStack_28);
    uVar4 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),uVar4,1);
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar3 + 0x28c);
    0 /* ctorZero */;
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30))((int *)*(int *)((int)this + 4*(0x43)),g_0050b8e4);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x38))((int *)*(int *)((int)this + 4*(0x43)),g_0050b8e4);
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar4 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar5)))));
    0 /* ctorZero */;
    uVar4 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar6)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
    func_0079e45c(&uStack_20,&g_0050b770 + g_0050b8e8,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar3 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar7)(piVar3,&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar2 + 4) + -0x80000000),(int)(0x3f000000)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar4)))));
    iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar2 + 4) + -0x80000000),(int)(0x3f000000)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30))((int *)*(int *)((int)this + 4*(0x44)),g_0050b8f4);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x38))((int *)*(int *)((int)this + 4*(0x44)),g_0050b8f4);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0050b8f8),(int)(uVar4)))));
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_0050b866 + g_0050b900, (char const*)&g_0050b864 + g_0050b8fc, uVar4);
    *(int *)((int)this + 4*(0x45)) = (int)piVar3;
    pcVar7 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar3,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x45)),&uStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
    (*pcVar7)(piVar3,uVar4);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
    ((ChallengeBoxPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((ChallengeBoxView*)((int)this));
  }
  return iVar1;
}

void ChallengeBoxView::onEnter()
{
  ((ChallengeBoxPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void ChallengeBoxView::onExit()
{
  ((ChallengeBoxPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
