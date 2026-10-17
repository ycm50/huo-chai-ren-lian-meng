#include "BLFurnaceExchangeLayer.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "CCControlButton.h"
#include "CCSprite.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCString.h"
#include "BLFurnaceExchangeItemButton.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e8d4(...);
extern "C" unsigned long UNK_00533f98;
extern "C" unsigned long UNK_00533fe4;
extern "C" unsigned long UNK_0053400c;
extern "C" unsigned long UNK_00534038;
extern "C" unsigned long UNK_005340de;
extern "C" unsigned long UNK_00534244;
extern "C" unsigned long UNK_00534270;
extern "C" unsigned long UNK_00534562;
extern "C" unsigned long UNK_0053458e;
extern "C" unsigned long UNK_0053470e;
extern "C" unsigned long UNK_0053475e;
extern "C" unsigned long UNK_00534762;
extern "C" unsigned long UNK_00534788;
extern "C" unsigned long UNK_005348a6;
extern "C" unsigned long UNK_005349c0;
extern "C" unsigned long UNK_00534a12;
extern "C" unsigned long UNK_00534c9e;
extern "C" unsigned long UNK_00534cf2;
extern "C" unsigned long UNK_00534d2e;
extern "C" unsigned long UNK_00534ea2;
extern "C" unsigned long UNK_00534ea4;
extern "C" unsigned long _UNK_00533fd4;
extern "C" unsigned long _UNK_00533fe8;
extern "C" unsigned long _UNK_00534010;
extern "C" unsigned long _UNK_005340a0;
extern "C" unsigned long _UNK_00534218;
extern "C" unsigned long _UNK_0053421c;
extern "C" unsigned long _UNK_00534220;
extern "C" unsigned long _UNK_00534224;
extern "C" unsigned long _UNK_005343a8;
extern "C" unsigned long _UNK_005343ac;
extern "C" unsigned long _UNK_005343b0;
extern "C" unsigned long _UNK_005343b4;
extern "C" unsigned long _UNK_005343b8;
extern "C" unsigned long _UNK_005346a8;
extern "C" unsigned long _UNK_005346ac;
extern "C" unsigned long _UNK_005346b0;
extern "C" unsigned long _UNK_005346b4;
extern "C" unsigned long _UNK_005346b8;
extern "C" unsigned long _UNK_005346bc;
extern "C" unsigned long _UNK_005346c0;
extern "C" unsigned long _UNK_005346c4;
extern "C" unsigned long _UNK_005346c8;
extern "C" unsigned long _UNK_005346cc;
extern "C" unsigned long _UNK_005346d0;
extern "C" unsigned long _UNK_005346d4;
extern "C" unsigned long _UNK_00534aa8;
extern "C" unsigned long _UNK_00534aac;
extern "C" unsigned long _UNK_00534ab0;
extern "C" unsigned long _UNK_00534ab4;
extern "C" unsigned long _UNK_00534ab8;
extern "C" unsigned long _UNK_00534abc;
extern "C" unsigned long _UNK_00534ac0;
extern "C" unsigned long _UNK_00534ac4;
extern "C" unsigned long _UNK_00534ac8;
extern "C" unsigned long _UNK_00534acc;
extern "C" unsigned long _UNK_00534ad0;
extern "C" unsigned long _UNK_00534ad4;
extern "C" unsigned long _UNK_00534ad8;
extern "C" unsigned long _UNK_00534adc;
extern "C" unsigned long _UNK_00534ae0;
extern "C" unsigned long _UNK_00534ae4;
extern "C" unsigned long _UNK_00534ed8;
extern "C" unsigned long _UNK_00534edc;
extern "C" unsigned long _UNK_00534ee0;
extern "C" unsigned long _UNK_00534ee4;
extern "C" unsigned long _UNK_00534ee8;
extern "C" unsigned long _UNK_00534eec;
extern "C" unsigned long _UNK_00534ef0;
extern "C" unsigned long _UNK_00534ef4;
extern "C" unsigned long _UNK_00534ef8;
extern "C" unsigned long _UNK_00534efc;
extern "C" unsigned long _UNK_00534f00;
extern "C" unsigned long _UNK_00534f04;
extern "C" unsigned long _UNK_00534f08;
extern "C" unsigned long _UNK_00534f0c;
extern "C" unsigned long _UNK_00534f10;
extern "C" unsigned long _UNK_00534f14;
extern "C" unsigned long _UNK_00534f18;
extern "C" unsigned long _UNK_00534f1c;
extern "C" unsigned long _UNK_00534f20;
extern "C" unsigned long _UNK_00534f24;
extern "C" unsigned long g_00533f98;
extern "C" unsigned long g_00533fd4;
extern "C" unsigned long g_00533fe4;
extern "C" unsigned long g_00533fe8;
extern "C" unsigned long g_0053400c;
extern "C" unsigned long g_00534010;
extern "C" unsigned long g_00534038;
extern "C" unsigned long g_005340a0;
extern "C" unsigned long g_005340de;
extern "C" unsigned long g_00534218;
extern "C" unsigned long g_0053421c;
extern "C" unsigned long g_00534220;
extern "C" unsigned long g_00534224;
extern "C" unsigned long g_00534244;
extern "C" unsigned long g_00534270;
extern "C" unsigned long g_005343a8;
extern "C" unsigned long g_005343ac;
extern "C" unsigned long g_005343b0;
extern "C" unsigned long g_005343b4;
extern "C" unsigned long g_005343b8;
extern "C" unsigned long g_00534562;
extern "C" unsigned long g_0053458e;
extern "C" unsigned long g_005346a8;
extern "C" unsigned long g_005346ac;
extern "C" unsigned long g_005346b0;
extern "C" unsigned long g_005346b4;
extern "C" unsigned long g_005346b8;
extern "C" unsigned long g_005346bc;
extern "C" unsigned long g_005346c0;
extern "C" unsigned long g_005346c4;
extern "C" unsigned long g_005346c8;
extern "C" unsigned long g_005346cc;
extern "C" unsigned long g_005346d0;
extern "C" unsigned long g_005346d4;
extern "C" unsigned long g_0053470e;
extern "C" unsigned long g_0053475e;
extern "C" unsigned long g_00534762;
extern "C" unsigned long g_00534788;
extern "C" unsigned long g_005348a6;
extern "C" unsigned long g_005349c0;
extern "C" unsigned long g_00534a12;
extern "C" unsigned long g_00534aa8;
extern "C" unsigned long g_00534aac;
extern "C" unsigned long g_00534ab0;
extern "C" unsigned long g_00534ab4;
extern "C" unsigned long g_00534ab8;
extern "C" unsigned long g_00534abc;
extern "C" unsigned long g_00534ac0;
extern "C" unsigned long g_00534ac4;
extern "C" unsigned long g_00534ac8;
extern "C" unsigned long g_00534acc;
extern "C" unsigned long g_00534ad0;
extern "C" unsigned long g_00534ad4;
extern "C" unsigned long g_00534ad8;
extern "C" unsigned long g_00534adc;
extern "C" unsigned long g_00534ae0;
extern "C" unsigned long g_00534ae4;
extern "C" unsigned long g_00534c9e;
extern "C" unsigned long g_00534cf2;
extern "C" unsigned long g_00534d2e;
extern "C" unsigned long g_00534ea2;
extern "C" unsigned long g_00534ea4;
extern "C" unsigned long g_00534ed8;
extern "C" unsigned long g_00534edc;
extern "C" unsigned long g_00534ee0;
extern "C" unsigned long g_00534ee4;
extern "C" unsigned long g_00534ee8;
extern "C" unsigned long g_00534eec;
extern "C" unsigned long g_00534ef0;
extern "C" unsigned long g_00534ef4;
extern "C" unsigned long g_00534ef8;
extern "C" unsigned long g_00534efc;
extern "C" unsigned long g_00534f00;
extern "C" unsigned long g_00534f04;
extern "C" unsigned long g_00534f08;
extern "C" unsigned long g_00534f0c;
extern "C" unsigned long g_00534f10;
extern "C" unsigned long g_00534f14;
extern "C" unsigned long g_00534f18;
extern "C" unsigned long g_00534f1c;
extern "C" unsigned long g_00534f20;
extern "C" unsigned long g_00534f24;
BLFurnaceExchangeLayer::~BLFurnaceExchangeLayer()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_00533f98 + g_00533fd4);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x42)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int * BLFurnaceExchangeLayer::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
  (void)(((long long)::memset((void *)(piVar1),(int)(0),(size_t)(0x128))));
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00534038 + g_005340a0);
  *piVar1 = iVar2 + 8;
  piVar1[0x39] = iVar2 + 0x208;
  piVar1[0x3a] = iVar2 + 0x238;
  piVar1[0x3b] = iVar2 + 0x244;
  piVar1[0x42] = 0;
  piVar1[0x43] = 0;
  piVar1[0x44] = 0;
  iVar2 = ((BLFurnaceExchangeLayer *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

undefined4 BLFurnaceExchangeLayer::getItemButton(int p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0);
  if (-1 < (int)p1) {
    if (p1 < (uint)(*(int *)(((int)this) + 0x10c) - *(int *)(((int)this) + 0x108) >> 2)) {
      uVar1 = (undefined4)(*(undefined4 *)(p1 * 4 + *(int *)(((int)this) + 0x108)));
    }
    else {
      uVar1 = (undefined4)(0);
    }
  }
  return uVar1;
}

void BLFurnaceExchangeLayer::updateEssenceCount(int p1)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  piVar6 = *(int **)(((int)this) + 0x114);
  pcVar7 = *(code **)(*piVar6 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)&g_005340de + g_00534220);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar7)(piVar6,uVar1);
  piVar6 = *(int **)(((int)this) + 0x118);
  pcVar7 = *(code **)(*piVar6 + 0x4c);
  uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x114) + 0x60))());
  puVar2 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))();
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_00534224)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(*puVar2)))));
  uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x114) + 0x68))());
  iVar4 = (**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))();
  uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar3))));
  uVar9 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(undefined4 *)(iVar4 + 4)))));
  uVar9 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_00534218))|(((long long)(unsigned)(g_0053421c))<<32)))));
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32))))));
  uVar3 = (undefined4)(func_0079e7e4());
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar1)))));
  uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x114) + 0x60))());
  puVar2 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))();
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_00534224)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(*puVar2)))));
  uVar5 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x114) + 0x68))());
  iVar4 = (**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))();
  uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar5))));
  uVar9 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(undefined4 *)(iVar4 + 4)))));
  uVar9 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_00534218))|(((long long)(unsigned)(g_0053421c))<<32)))));
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32))))));
  uVar5 = (undefined4)(func_0079e7e4());
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar6,auStack_20);
  return;
}

void BLFurnaceExchangeLayer::updateRefreshCost(int p1, bool p2)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  if (p2 != 0) {
    (**(code **)(**(int **)(((int)this) + 0x124) + 0x1e0))
              (*(int **)(((int)this) + 0x124),&g_00534244 + g_005343b0);
    piVar6 = *(int **)(((int)this) + 0x124);
    pcVar7 = *(code **)(*piVar6 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar6,auStack_20);
  }
  piVar6 = *(int **)(((int)this) + 0x120);
  pcVar7 = *(code **)(*piVar6 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)&g_00534270 + g_005343b4, p1);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar7)(piVar6,uVar1);
  piVar6 = *(int **)(((int)this) + 0x124);
  pcVar7 = *(code **)(*piVar6 + 0x4c);
  uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x120) + 0x60))());
  puVar2 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x120) + 0x8c))();
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_005343b8)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(*puVar2)))));
  uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x120) + 0x68))());
  iVar4 = (**(code **)(**(int **)(((int)this) + 0x120) + 0x8c))();
  uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar3))));
  uVar9 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(undefined4 *)(iVar4 + 4)))));
  uVar9 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_005343a8))|(((long long)(unsigned)(g_005343ac))<<32)))));
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32))))));
  uVar3 = (undefined4)(func_0079e7e4());
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar1)))));
  uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x120) + 0x60))());
  puVar2 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x120) + 0x8c))();
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_005343b8)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(*puVar2)))));
  uVar5 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x120) + 0x68))());
  iVar4 = (**(code **)(**(int **)(((int)this) + 0x120) + 0x8c))();
  uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar5))));
  uVar9 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(undefined4 *)(iVar4 + 4)))));
  uVar9 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_005343a8))|(((long long)(unsigned)(g_005343ac))<<32)))));
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32))))));
  uVar5 = (undefined4)(func_0079e7e4());
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar6,auStack_20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLFurnaceExchangeLayer::initExchangeItemsButtons()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLFurnaceExchangeLayer::init()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    0 /* ctorZero */;
    (**(code **)(*(int *)this + 0x88))(((int)this),auStack_38);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0053470e + (intptr_t)(g_00534ac8)),auStack_28);
    piVar2 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar11 = *(code **)(*piVar2 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar11)(piVar2,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar2);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(g_00534acc,uVar3));
    puVar12 = (unsigned char *)((char *)&g_0053475e + (intptr_t)(g_00534ad0));
    piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00534762 + (intptr_t)(g_00534ad4)), (char const*)puVar12, uVar3);
    pcVar11 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    puVar10 = (unsigned char *)((char *)&g_00534788 + (intptr_t)(g_00534ad8));
    (**(code **)(*(int *)(piVar4) + (0x1b4)))(piVar4,puVar10);
    pcVar11 = *(code **)(*piVar4 + 0x4c);
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*puVar5));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534aa8,
                             g_00534aac);
    func_0079e744((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ab0,g_00534ab4);
    uVar3 = (undefined4)(func_0079e7e4());
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar6 + 4)));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534aa8,
                             g_00534aac);
    func_0079e744((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ab0,g_00534ab4);
    uVar7 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar7 = (undefined4)(func_0079e4dc(uVar3,uVar7));
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*puVar5));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534aa8,
                             g_00534aac);
    func_0079e744((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ab0,g_00534ab4);
    uVar3 = (undefined4)(func_0079e7e4());
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar6 + 4)));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534aa8,
                             g_00534aac);
    func_0079e744((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ab0,g_00534ab4);
    uVar8 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar8 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar8));
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar4);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(g_00534acc,uVar3));
    puVar13 = (unsigned char *)((char *)&g_005348a6 + (intptr_t)(g_00534adc));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)puVar13, (char const*)puVar12, uVar3);
    *(int *)((int)this + 4*(0x45)) = (int)piVar9;
    pcVar11 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar9,&uStack_20);
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x45))))->enableStroke(*(const ccColor3B *)(void *)puVar10, 0x3f800000, 1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x1b4))();
    piVar9 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar11 = *(code **)(*piVar9 + 0x4c);
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))(piVar4));
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
    uVar3 = (undefined4)(func_0079e59c(uVar3,*puVar5));
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))(piVar4));
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar7 = (undefined4)(func_0079e4dc(uVar3,uVar7));
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))(piVar4));
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
    uVar3 = (undefined4)(func_0079e59c(uVar3,*puVar5));
    uVar8 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))(piVar4));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar8 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar8));
    0 /* ctorZero */;
    (*pcVar11)(piVar9,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
    piVar4 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_005349c0 + (intptr_t)(g_00534ae0)));
    *(int *)((int)this + 4*(0x46)) = (int)piVar4;
    pcVar11 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
    ((BLFurnaceExchangeLayer *)(((int)this)))->updateEssenceCount(0);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(g_00534acc,uVar3));
    piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00534a12 + (intptr_t)(g_00534ae4)), (char const*)puVar12, uVar3);
    pcVar11 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    (**(code **)(*(int *)(piVar4) + (0x1b4)))(piVar4,puVar10);
    pcVar11 = *(code **)(*piVar4 + 0x4c);
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*puVar5));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534aa8,
                             g_00534aac);
    func_0079e744((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ab8,g_00534abc);
    uVar3 = (undefined4)(func_0079e7e4());
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar6 + 4)));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534aa8,
                             g_00534aac);
    func_0079e744((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ab0,g_00534ab4);
    uVar7 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar7 = (undefined4)(func_0079e4dc(uVar3,uVar7));
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*puVar5));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ed8,
                             g_00534edc);
    func_0079e744((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ee0,g_00534ee4);
    uVar3 = (undefined4)(func_0079e7e4());
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar6 + 4)));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ed8,
                             g_00534edc);
    func_0079e744((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ee8,g_00534eec);
    uVar8 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar8 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar8));
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar4);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(g_00534f08,uVar3));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)puVar13, (char const*)puVar12, uVar3);
    *(int *)((int)this + 4*(0x48)) = (int)piVar9;
    pcVar11 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar9,&uStack_20);
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x48))))->enableStroke(*(const ccColor3B *)(void *)puVar10, 0x3f800000, 1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x1b4))();
    piVar9 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar11 = *(code **)(*piVar9 + 0x4c);
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))(piVar4));
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
    uVar3 = (undefined4)(func_0079e59c(uVar3,*puVar5));
    uVar7 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))(piVar4));
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar7 = (undefined4)(func_0079e4dc(uVar3,uVar7));
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x60)))(piVar4));
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4);
    uVar3 = (undefined4)(func_0079e59c(uVar3,*puVar5));
    uVar8 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))(piVar4));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar8 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar8));
    0 /* ctorZero */;
    (*pcVar11)(piVar9,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x48)));
    piVar4 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_00534c9e + (intptr_t)(g_00534f0c)));
    *(int *)((int)this + 4*(0x49)) = (int)piVar4;
    pcVar11 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x49)));
    ((BLFurnaceExchangeLayer *)(((int)this)))->updateRefreshCost(0, 0);
    piVar4 = (int *)cocos2d::extension::CCControlButton::create();
    iVar6 = (undefined4)(intptr_t)(g_00534f10);
    *(int *)((int)this + 4*(0x47)) = (int)piVar4;
    pcVar11 = *(code **)(*piVar4 + 0x30c);
    func_0079e45c(&uStack_20,&g_00534cf2 + iVar6,auStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    (*pcVar11)(piVar4,uVar3,1);
    func_0079e2bc(&uStack_20);
    piVar4 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar11 = *(code **)(*piVar4 + 0x30c);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00534d2e + (intptr_t)(g_00534f14)),auStack_28);
    uVar3 = (undefined4)(0 /* ctorZero */);
    (*pcVar11)(piVar4,uVar3,2);
    func_0079e2bc(&uStack_20);
    piVar4 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar11 = *(code **)(*piVar4 + 0x28c);
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x30))((int *)*(int *)((int)this + 4*(0x47)),0x3f800000);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x38))((int *)*(int *)((int)this + 4*(0x47)),0x3f800000);
    piVar4 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar11 = *(code **)(*piVar4 + 0x4c);
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*puVar5));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ef0,
                             g_00534ef4);
    func_0079e8d4((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ef8,g_00534efc);
    uVar3 = (undefined4)(func_0079e7e4());
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar6 + 4)));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ed8,
                             g_00534edc);
    func_0079e744((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534f00,g_00534f04);
    uVar7 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(auStack_30[0],uVar3));
    puVar5 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*puVar5));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ef0,
                             g_00534ef4);
    func_0079e8d4((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ef8,g_00534efc);
    uVar7 = (undefined4)(func_0079e7e4());
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
    uVar14 = (undefined4)(intptr_t)(func_0079e62c(*(undefined4 *)(iVar6 + 4)));
    uVar14 = func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534ed8,
                             g_00534edc);
    func_0079e744((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_00534f00,g_00534f04);
    uVar8 = (undefined4)(func_0079e7e4());
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar7 = (undefined4)(func_0079e4dc(uStack_24,uVar7));
    0 /* ctorZero */;
    (*pcVar11)(piVar4,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(g_00534f08,uVar3));
    piVar2 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00534ea4 + (intptr_t)(g_00534f24)), (char const*)(unsigned char *)((char *)&g_00534ea2 + (intptr_t)(g_00534f20)), uVar3);
    pcVar11 = *(code **)(*piVar2 + 0x7c);
    0 /* ctorZero */;
    (*pcVar11)(piVar2,&uStack_20);
    uStack_20 = 0xfe;
    uStack_1f = 0xcf;
    uStack_1e = 0x32;
    (**(code **)(*(int *)(piVar2) + (0x1b4)))(piVar2,&uStack_20);
    pcVar11 = *(code **)(*piVar2 + 0x4c);
    uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x50))());
    (*pcVar11)(piVar2,uVar3);
    (**(code **)(*(int *)this + 200))(((int)this),piVar2);
    ((BLFurnaceExchangeLayer *)(((int)this)))->initExchangeItemsButtons();
  }
  return iVar1;
}
