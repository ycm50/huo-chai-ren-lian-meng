#include "BLDebugLogView.h"
#include "BLDebugLogPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e6090;
extern "C" unsigned long UNK_005e60d4;
extern "C" unsigned long UNK_005e6118;
extern "C" unsigned long UNK_005e6140;
extern "C" unsigned long UNK_005e628e;
extern "C" unsigned long UNK_005e630a;
extern "C" unsigned long UNK_005e641a;
extern "C" unsigned long _DAT_005e61e0;
extern "C" unsigned long _DAT_005e61e4;
extern "C" unsigned long _UNK_005e6104;
extern "C" unsigned long _UNK_005e6108;
extern "C" unsigned long _UNK_005e611c;
extern "C" unsigned long _UNK_005e6144;
extern "C" unsigned long _UNK_005e655c;
extern "C" unsigned long _UNK_005e6560;
extern "C" unsigned long _UNK_005e6564;
extern "C" unsigned long _UNK_005e6568;
extern "C" unsigned long _UNK_005e656c;
extern "C" unsigned long _UNK_005e6570;
extern "C" unsigned long _UNK_005e6574;
extern "C" unsigned long _UNK_005e6578;
extern "C" unsigned long _UNK_005e657c;
extern "C" unsigned long _UNK_005e6580;
extern "C" unsigned long _UNK_005e6584;
extern "C" unsigned long g_005e6090;
extern "C" unsigned long g_005e60d4;
extern "C" unsigned long g_005e6104;
extern "C" unsigned long g_005e6108;
extern "C" unsigned long g_005e6118;
extern "C" unsigned long g_005e611c;
extern "C" unsigned long g_005e6140;
extern "C" unsigned long g_005e6144;
extern "C" unsigned long g_005e61e0;
extern "C" unsigned long g_005e61e4;
extern "C" unsigned long g_005e628e;
extern "C" unsigned long g_005e630a;
extern "C" unsigned long g_005e641a;
extern "C" unsigned long g_005e655c;
extern "C" unsigned long g_005e6560;
extern "C" unsigned long g_005e6564;
extern "C" unsigned long g_005e6568;
extern "C" unsigned long g_005e656c;
extern "C" unsigned long g_005e6570;
extern "C" unsigned long g_005e6574;
extern "C" unsigned long g_005e6578;
extern "C" unsigned long g_005e657c;
extern "C" unsigned long g_005e6580;
extern "C" unsigned long g_005e6584;
BLDebugLogView::~BLDebugLogView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005e6090 + g_005e6104);
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
  func_0079e45c(&uStack_14,&g_005e60d4 + g_005e6108,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDebugLogView::BLDebugLogView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005e61e0 + 0x5e6188);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDebugLogView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLDebugLogView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    ((cocos2d::CCObject *)piVar1)->release();
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 BLDebugLogView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLDebugLogView::getTableViewTotal()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLDebugLogView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x114);
}


void BLDebugLogView::onEnter()
{
  ((BLDebugLogPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDebugLogView::onExit()
{
  ((BLDebugLogPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLDebugLogView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLDebugLogPresenter *)this)->create());
    *(int *)((int)this + 4*(0x42)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005e628e + (intptr_t)(g_005e655c)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar7 = *(code **)(*piVar8 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x4c))((int *)*(int *)((int)this + 4*(0x44)),(unsigned char *)((char *)&g_005e630a + (intptr_t)(g_005e6568)));
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    piVar8 = (int *)((long long)::operator new((size_t)(0x134)));
    0 /* ctorZero */;
    iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar8 + 0x18))(piVar8));
    if (iVar2 == 0) {
      (**(code **)(*piVar8 + 8))(piVar8);
      piVar8 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar8)->autorelease();
    }
    *(int *)((int)this + 4*(0x43)) = (int)piVar8;
    pcVar7 = *(code **)(*piVar8 + 0x234);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),8);
    iVar6 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
    iVar2 = (undefined4)(intptr_t)(g_005e6578);
    *(int *)((int)this + 4*(0x45)) = iVar6;
    func_0079e45c(auStack_20,&g_005e641a + iVar2,auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar5,1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x294))((int *)*(int *)((int)this + 4*(0x45)),0);
    piVar8 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar7 = *(code **)(*piVar8 + 0x28c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar7 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar5)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar8,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),7);
    pcVar7 = *(code **)(*(int *)this + 0x88);
    uVar5 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)auStack_20 = ((cocos2d::CCDirector *)uVar5)->getWinSize();
    (*pcVar7)(((int)this),auStack_20);
    ((BLDebugLogPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((BLDebugLogView*)((int)this));
  }
  return iVar1;
}
