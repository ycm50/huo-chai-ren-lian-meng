#include "BLFurnaceView.h"
#include "BLFurnaceBreakLayer.h"
#include "BLFurnaceEquipLayer.h"
#include "BLFurnaceExchangeLayer.h"
#include "BLFurnacePresenter.h"
#include "BLLanguage.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0053bc40;
extern "C" unsigned long UNK_0053bc96;
extern "C" unsigned long UNK_0053bcf0;
extern "C" unsigned long UNK_0053bd18;
extern "C" unsigned long UNK_0053c106;
extern "C" unsigned long UNK_0053c109;
extern "C" unsigned long UNK_0053c152;
extern "C" unsigned long UNK_0053c155;
extern "C" unsigned long UNK_0053c226;
extern "C" unsigned long UNK_0053c2ee;
extern "C" unsigned long UNK_0053c426;
extern "C" unsigned long UNK_0053c450;
extern "C" unsigned long UNK_0053c55a;
extern "C" unsigned long UNK_0053c594;
extern "C" unsigned long UNK_0053c6de;
extern "C" unsigned long UNK_0053c712;
extern "C" unsigned long UNK_0053c854;
extern "C" unsigned long UNK_0053c87c;
extern "C" unsigned long UNK_0053ca4e;
extern "C" unsigned long UNK_0053ca78;
extern "C" unsigned long UNK_0053cb82;
extern "C" unsigned long UNK_0053cbb0;
extern "C" unsigned long UNK_0053ccd2;
extern "C" unsigned long UNK_0053ccd6;
extern "C" unsigned long UNK_0053cd4c;
extern "C" unsigned long _DAT_0053bde8;
extern "C" unsigned long _DAT_0053bdec;
extern "C" unsigned long _UNK_0053bcdc;
extern "C" unsigned long _UNK_0053bce0;
extern "C" unsigned long _UNK_0053bcf4;
extern "C" unsigned long _UNK_0053bd1c;
extern "C" unsigned long _UNK_0053c020;
extern "C" unsigned long _UNK_0053c024;
extern "C" unsigned long _UNK_0053c028;
extern "C" unsigned long _UNK_0053c02c;
extern "C" unsigned long _UNK_0053c030;
extern "C" unsigned long _UNK_0053c034;
extern "C" unsigned long _UNK_0053c038;
extern "C" unsigned long _UNK_0053c03c;
extern "C" unsigned long _UNK_0053c040;
extern "C" unsigned long _UNK_0053c0d8;
extern "C" unsigned long _UNK_0053c12c;
extern "C" unsigned long _UNK_0053c178;
extern "C" unsigned long _UNK_0053c5a8;
extern "C" unsigned long _UNK_0053c5ac;
extern "C" unsigned long _UNK_0053c5b0;
extern "C" unsigned long _UNK_0053c5b4;
extern "C" unsigned long _UNK_0053c5b8;
extern "C" unsigned long _UNK_0053c5bc;
extern "C" unsigned long _UNK_0053c5c0;
extern "C" unsigned long _UNK_0053c5c4;
extern "C" unsigned long _UNK_0053c5c8;
extern "C" unsigned long _UNK_0053c5cc;
extern "C" unsigned long _UNK_0053c5d0;
extern "C" unsigned long _UNK_0053c5d4;
extern "C" unsigned long _UNK_0053c5d8;
extern "C" unsigned long _UNK_0053c5dc;
extern "C" unsigned long _UNK_0053c9b0;
extern "C" unsigned long _UNK_0053c9b4;
extern "C" unsigned long _UNK_0053c9b8;
extern "C" unsigned long _UNK_0053c9bc;
extern "C" unsigned long _UNK_0053c9c0;
extern "C" unsigned long _UNK_0053c9c4;
extern "C" unsigned long _UNK_0053c9c8;
extern "C" unsigned long _UNK_0053c9cc;
extern "C" unsigned long _UNK_0053c9d0;
extern "C" unsigned long _UNK_0053c9d4;
extern "C" unsigned long _UNK_0053c9d8;
extern "C" unsigned long _UNK_0053c9dc;
extern "C" unsigned long _UNK_0053c9e0;
extern "C" unsigned long _UNK_0053c9e4;
extern "C" unsigned long _UNK_0053c9e8;
extern "C" unsigned long _UNK_0053cd90;
extern "C" unsigned long _UNK_0053cd94;
extern "C" unsigned long _UNK_0053cd98;
extern "C" unsigned long _UNK_0053cd9c;
extern "C" unsigned long _UNK_0053cda0;
extern "C" unsigned long _UNK_0053cda4;
extern "C" unsigned long _UNK_0053cda8;
extern "C" unsigned long _UNK_0053cdac;
extern "C" unsigned long _UNK_0053cdb0;
extern "C" unsigned long _UNK_0053cdb4;
extern "C" unsigned long _UNK_0053cdb8;
extern "C" unsigned long _UNK_0053cdbc;
extern "C" unsigned long _UNK_0053cdc0;
extern "C" unsigned long _UNK_0053cdc4;
extern "C" unsigned long _UNK_0053cdc8;
extern "C" unsigned long _UNK_0053cdcc;
extern "C" unsigned long _UNK_0053cdd0;
extern "C" unsigned long _UNK_0053cdd4;
extern "C" unsigned long _UNK_0053cdd8;
extern "C" unsigned long _UNK_0053cddc;
extern "C" unsigned long _UNK_0053cde0;
extern "C" unsigned long _UNK_0053cde4;
extern "C" unsigned long g_0053bc40;
extern "C" unsigned long g_0053bc96;
extern "C" unsigned long g_0053bcdc;
extern "C" unsigned long g_0053bce0;
extern "C" unsigned long g_0053bcf0;
extern "C" unsigned long g_0053bcf4;
extern "C" unsigned long g_0053bd18;
extern "C" unsigned long g_0053bd1c;
extern "C" unsigned long g_0053bde8;
extern "C" unsigned long g_0053bdec;
extern "C" unsigned long g_0053c020;
extern "C" unsigned long g_0053c024;
extern "C" unsigned long g_0053c028;
extern "C" unsigned long g_0053c02c;
extern "C" unsigned long g_0053c030;
extern "C" unsigned long g_0053c034;
extern "C" unsigned long g_0053c038;
extern "C" unsigned long g_0053c03c;
extern "C" unsigned long g_0053c040;
extern "C" unsigned long g_0053c0d8;
extern "C" unsigned long g_0053c106;
extern "C" unsigned long g_0053c109;
extern "C" unsigned long g_0053c12c;
extern "C" unsigned long g_0053c152;
extern "C" unsigned long g_0053c155;
extern "C" unsigned long g_0053c178;
extern "C" unsigned long g_0053c226;
extern "C" unsigned long g_0053c2ee;
extern "C" unsigned long g_0053c426;
extern "C" unsigned long g_0053c450;
extern "C" unsigned long g_0053c55a;
extern "C" unsigned long g_0053c594;
extern "C" unsigned long g_0053c5a8;
extern "C" unsigned long g_0053c5ac;
extern "C" unsigned long g_0053c5b0;
extern "C" unsigned long g_0053c5b4;
extern "C" unsigned long g_0053c5b8;
extern "C" unsigned long g_0053c5bc;
extern "C" unsigned long g_0053c5c0;
extern "C" unsigned long g_0053c5c4;
extern "C" unsigned long g_0053c5c8;
extern "C" unsigned long g_0053c5cc;
extern "C" unsigned long g_0053c5d0;
extern "C" unsigned long g_0053c5d4;
extern "C" unsigned long g_0053c5d8;
extern "C" unsigned long g_0053c5dc;
extern "C" unsigned long g_0053c6de;
extern "C" unsigned long g_0053c712;
extern "C" unsigned long g_0053c854;
extern "C" unsigned long g_0053c87c;
extern "C" unsigned long g_0053c9b0;
extern "C" unsigned long g_0053c9b4;
extern "C" unsigned long g_0053c9b8;
extern "C" unsigned long g_0053c9bc;
extern "C" unsigned long g_0053c9c0;
extern "C" unsigned long g_0053c9c4;
extern "C" unsigned long g_0053c9c8;
extern "C" unsigned long g_0053c9cc;
extern "C" unsigned long g_0053c9d0;
extern "C" unsigned long g_0053c9d4;
extern "C" unsigned long g_0053c9d8;
extern "C" unsigned long g_0053c9dc;
extern "C" unsigned long g_0053c9e0;
extern "C" unsigned long g_0053c9e4;
extern "C" unsigned long g_0053c9e8;
extern "C" unsigned long g_0053ca4e;
extern "C" unsigned long g_0053ca78;
extern "C" unsigned long g_0053cb82;
extern "C" unsigned long g_0053cbb0;
extern "C" unsigned long g_0053ccd2;
extern "C" unsigned long g_0053ccd6;
extern "C" unsigned long g_0053cd4c;
extern "C" unsigned long g_0053cd90;
extern "C" unsigned long g_0053cd94;
extern "C" unsigned long g_0053cd98;
extern "C" unsigned long g_0053cd9c;
extern "C" unsigned long g_0053cda0;
extern "C" unsigned long g_0053cda4;
extern "C" unsigned long g_0053cda8;
extern "C" unsigned long g_0053cdac;
extern "C" unsigned long g_0053cdb0;
extern "C" unsigned long g_0053cdb4;
extern "C" unsigned long g_0053cdb8;
extern "C" unsigned long g_0053cdbc;
extern "C" unsigned long g_0053cdc0;
extern "C" unsigned long g_0053cdc4;
extern "C" unsigned long g_0053cdc8;
extern "C" unsigned long g_0053cdcc;
extern "C" unsigned long g_0053cdd0;
extern "C" unsigned long g_0053cdd4;
extern "C" unsigned long g_0053cdd8;
extern "C" unsigned long g_0053cddc;
extern "C" unsigned long g_0053cde0;
extern "C" unsigned long g_0053cde4;
BLFurnaceView::~BLFurnaceView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0053bc40 + g_0053bcdc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0053bc96 + g_0053bce0,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(0x4c)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x4c)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFurnaceView::BLFurnaceView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0053bde8 + 0x53bd60));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  *(int *)((int)this + 4*(0x4e)) = 0;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLFurnaceView"),&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

int * BLFurnaceView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x15c)));
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

undefined4 BLFurnaceView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}



undefined4 BLFurnaceView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

void BLFurnaceView::showBreakNode()
{
  int iVar1;
  
  iVar1 = g_0053c12c;
  (**(code **)(**(int **)(((int)this) + 0x140) + 0x90))(*(int **)(((int)this) + 0x140),1);
  (**(code **)(**(int **)(((int)this) + 0x144) + 0x90))(*(int **)(((int)this) + 0x144),1);
  (**(code **)(**(int **)(((int)this) + 0x148) + 0x90))(*(int **)(((int)this) + 0x148),0);
  (**(code **)(**(int **)(((int)this) + 0x154) + 0x1b4))
            (*(int **)(((int)this) + 0x154),&g_0053c106 + iVar1);
  (**(code **)(**(int **)(((int)this) + 0x158) + 0x1b4))
            (*(int **)(((int)this) + 0x158),&g_0053c109 + iVar1);
  return;
}

void BLFurnaceView::showExchangeNode()
{
  int iVar1;
  
  iVar1 = g_0053c178;
  (**(code **)(**(int **)(((int)this) + 0x140) + 0x90))(*(int **)(((int)this) + 0x140),0);
  (**(code **)(**(int **)(((int)this) + 0x144) + 0x90))(*(int **)(((int)this) + 0x144),0);
  (**(code **)(**(int **)(((int)this) + 0x148) + 0x90))(*(int **)(((int)this) + 0x148),1);
  (**(code **)(**(int **)(((int)this) + 0x154) + 0x1b4))
            (*(int **)(((int)this) + 0x154),&g_0053c155 + iVar1);
  (**(code **)(**(int **)(((int)this) + 0x158) + 0x1b4))
            (*(int **)(((int)this) + 0x158),&g_0053c152 + iVar1);
  return;
}

void BLFurnaceView::onEnter()
{
  ((BLFurnacePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLFurnaceView::onExit()
{
  ((BLFurnacePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLFurnaceView::initFurnaceBreakNode()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 auStack_38 [2];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((BLFurnaceBreakLayer *)this)->create());
  *(int *)((int)this + 4*(0x50)) = iVar1;
  (**(code **)(*(int *)this + 0xcc))(((int)this),iVar1,10);
  uVar2 = (undefined4)((**(code **)(*(int *)this + 0x8c))(((int)this)));
  0 /* ctorZero */;
  uVar9 = (undefined4)(intptr_t)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(auStack_38[0])))));
  uVar2 = (undefined4)((undefined4)((ulonglong)uVar9 >> 0x20));
  piVar7 = (int *)*(int *)((int)this + 4*(0x50));
  pcVar8 = *(code **)(*piVar7 + 0x4c);
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)(uVar2))<<32)),(((long long)(unsigned)(g_0053c020))|(((long long)(unsigned)(g_0053c024))<<32))))));
  (void)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);return (long long)(int)_x;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)(uVar2))<<32)),(((long long)(unsigned)(g_0053c020))|(((long long)(unsigned)(g_0053c024))<<32))))))))));
  uVar10 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);return (long long)(int)_x;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)(uVar2))<<32)),(((long long)(unsigned)(g_0053c020))|(((long long)(unsigned)(g_0053c024))<<32))))))))))))));
  uVar6 = (undefined4)((undefined4)((ulonglong)uVar10 >> 0x20));
  uVar5 = (undefined4)((undefined4)uVar10);
  uVar9 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)(uVar2))<<32)),(((long long)(unsigned)(g_0053c028))|(((long long)(unsigned)(g_0053c02c))<<32))))));
  uVar9 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)(uVar5))|(((long long)(unsigned)(uVar6))<<32)),(((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32))))));
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_0053c030))|(((long long)(unsigned)(g_0053c034))<<32))))));
  uVar2 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_0053c030))|(((long long)(unsigned)(g_0053c034))<<32))))))))));
  0 /* ctorZero */;
  uVar2 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar3)))));
  uVar9 = (undefined4)(intptr_t)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(auStack_38[0])))));
  uVar9 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_0053c028))|(((long long)(unsigned)(g_0053c02c))<<32))))));
  uVar9 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)(uVar5))|(((long long)(unsigned)(uVar6))<<32)),(((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32))))));
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_0053c030))|(((long long)(unsigned)(g_0053c034))<<32))))));
  uVar2 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_0053c030))|(((long long)(unsigned)(g_0053c034))<<32))))))))));
  0 /* ctorZero */;
  uVar2 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  0 /* ctorZero */;
  (*pcVar8)(piVar7,auStack_20);
  iVar1 = (undefined4)(intptr_t)(((BLFurnaceEquipLayer *)this)->create());
  *(int *)((int)this + 4*(0x51)) = iVar1;
  (**(code **)(*(int *)this + 0xcc))(((int)this),iVar1,10);
  piVar7 = (int *)*(int *)((int)this + 4*(0x51));
  pcVar8 = *(code **)(*piVar7 + 0x4c);
  uVar9 = (undefined4)(intptr_t)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(auStack_38[0])))));
  uVar9 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_0053c038))|(((long long)(unsigned)(g_0053c03c))<<32))))));
  uVar9 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)(uVar5))|(((long long)(unsigned)(uVar6))<<32)),(((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32))))));
  func_0079e8d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),g_0053c030,g_0053c034);
  uVar2 = (undefined4)(func_0079e7e4());
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar2)))));
  uVar9 = (undefined4)(intptr_t)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(auStack_38[0])))));
  uVar9 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_0053c038))|(((long long)(unsigned)(g_0053c03c))<<32))))));
  uVar9 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)(uVar5))|(((long long)(unsigned)(uVar6))<<32)),(((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32))))));
  func_0079e8d4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),g_0053c030,g_0053c034);
  uVar5 = (undefined4)(func_0079e7e4());
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar5)))));
  0 /* ctorZero */;
  (*pcVar8)(piVar7,auStack_20);
  return;
}

void BLFurnaceView::initFurnaceExchangeNode()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = (undefined4)(intptr_t)(((BLFurnaceExchangeLayer *)this)->create());
  *(int *)((int)this + 4*(0x52)) = iVar1;
  (**(code **)(*(int *)this + 0xcc))(((int)this),iVar1,10);
  uVar2 = (undefined4)((**(code **)(*(int *)this + 0x8c))(((int)this)));
  0 /* ctorZero */;
  uVar2 = (undefined4)(g_0053c0d8);
  piVar5 = (int *)*(int *)((int)this + 4*(0x52));
  pcVar4 = *(code **)(*piVar5 + 0x4c);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar3)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar2)))));
  0 /* ctorZero */;
  (*pcVar4)(piVar5,auStack_20);
  return;
}

bool BLFurnaceView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
