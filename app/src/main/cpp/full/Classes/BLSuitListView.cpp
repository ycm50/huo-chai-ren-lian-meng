#include "BLSuitListView.h"
#include "BLLeakUtils.h"
#include "BLSuitListPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00695e28;
extern "C" unsigned long UNK_00695e6c;
extern "C" unsigned long UNK_00695eb0;
extern "C" unsigned long UNK_00695ed8;
extern "C" unsigned long UNK_00695f58;
extern "C" unsigned long UNK_00695f86;
extern "C" unsigned long UNK_00696054;
extern "C" unsigned long UNK_00696222;
extern "C" unsigned long UNK_006962b4;
extern "C" unsigned long _UNK_00695e9c;
extern "C" unsigned long _UNK_00695ea0;
extern "C" unsigned long _UNK_00695eb4;
extern "C" unsigned long _UNK_00695edc;
extern "C" unsigned long _UNK_00695fb0;
extern "C" unsigned long _UNK_00695fb4;
extern "C" unsigned long _UNK_006963cc;
extern "C" unsigned long _UNK_006963d0;
extern "C" unsigned long _UNK_006963d4;
extern "C" unsigned long _UNK_006963d8;
extern "C" unsigned long _UNK_006963dc;
extern "C" unsigned long _UNK_006963e0;
extern "C" unsigned long _UNK_006963e4;
extern "C" unsigned long _UNK_006963e8;
extern "C" unsigned long _UNK_006963ec;
extern "C" unsigned long _UNK_006963f0;
extern "C" unsigned long _UNK_006963f4;
extern "C" unsigned long _UNK_006963f8;
extern "C" unsigned long _UNK_006963fc;
extern "C" unsigned long _UNK_00696400;
extern "C" unsigned long _UNK_00696404;
extern "C" unsigned long _UNK_00696408;
extern "C" unsigned long _UNK_0069640c;
extern "C" unsigned long g_00695e28;
extern "C" unsigned long g_00695e6c;
extern "C" unsigned long g_00695e9c;
extern "C" unsigned long g_00695ea0;
extern "C" unsigned long g_00695eb0;
extern "C" unsigned long g_00695eb4;
extern "C" unsigned long g_00695ed8;
extern "C" unsigned long g_00695edc;
extern "C" unsigned long g_00695f58;
extern "C" unsigned long g_00695f86;
extern "C" unsigned long g_00695fb0;
extern "C" unsigned long g_00695fb4;
extern "C" unsigned long g_00696054;
extern "C" unsigned long g_00696222;
extern "C" unsigned long g_006962b4;
extern "C" unsigned long g_006963cc;
extern "C" unsigned long g_006963d0;
extern "C" unsigned long g_006963d4;
extern "C" unsigned long g_006963d8;
extern "C" unsigned long g_006963dc;
extern "C" unsigned long g_006963e0;
extern "C" unsigned long g_006963e4;
extern "C" unsigned long g_006963e8;
extern "C" unsigned long g_006963ec;
extern "C" unsigned long g_006963f0;
extern "C" unsigned long g_006963f4;
extern "C" unsigned long g_006963f8;
extern "C" unsigned long g_006963fc;
extern "C" unsigned long g_00696400;
extern "C" unsigned long g_00696404;
extern "C" unsigned long g_00696408;
extern "C" unsigned long g_0069640c;
BLSuitListView::~BLSuitListView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00695e28 + g_00695e9c);
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
  func_0079e45c(&uStack_14,&g_00695e6c + g_00695ea0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitListView::BLSuitListView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00695f58 + g_00695fb0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00695f86 + g_00695fb4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSuitListView::create()
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

void BLSuitListView::onEnter()
{
  ((BLSuitListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitListView::onExit()
{
  ((BLSuitListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLSuitListView::init()
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
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLSuitListPresenter *)this)->create((BLSuitListView*)((int)this));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,&g_00696054 + g_006963cc,auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    pcVar7 = *(code **)(*piVar3 + 0x88);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,1);
    piVar3 = (int *)((long long)::operator new((size_t)(0x134)));
    0 /* ctorZero */;
    iVar2 = (**(code **)(*piVar3 + 0x18))(piVar3);
    if (iVar2 == 0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      piVar3 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar3)->autorelease();
    }
    *(int *)((int)this + 4*(0x43)) = (int)piVar3;
    pcVar7 = *(code **)(*piVar3 + 0x234);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),4);
    func_0079e45c(auStack_20,&g_00696222 + g_006963ec,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x98))((int *)*(int *)((int)this + 4*(0x44)),g_006963f0);
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),5);
    func_0079e45c(auStack_20,&g_006962b4 + g_006963f8,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x45)) = iVar2;
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x98))((int *)*(int *)((int)this + 4*(0x45)),g_006963fc);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),6);
    pcVar7 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar6)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(((int)this),auStack_20);
    ((BLSuitListPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((BLSuitListView*)((int)this));
  }
  return iVar1;
}
