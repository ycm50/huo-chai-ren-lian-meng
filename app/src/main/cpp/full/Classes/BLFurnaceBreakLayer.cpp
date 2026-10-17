#include "BLFurnaceBreakLayer.h"
#include "BLFurnaceItemInSlot.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005317c0;
extern "C" unsigned long UNK_0053180c;
extern "C" unsigned long UNK_00531834;
extern "C" unsigned long UNK_00531860;
extern "C" unsigned long UNK_005318de;
extern "C" unsigned long UNK_0053190e;
extern "C" unsigned long UNK_00531aa0;
extern "C" unsigned long UNK_00531be4;
extern "C" unsigned long UNK_00531c08;
extern "C" unsigned long UNK_00531e86;
extern "C" unsigned long UNK_00532336;
extern "C" unsigned long UNK_0053236c;
extern "C" unsigned long UNK_0053239c;
extern "C" unsigned long UNK_005324c4;
extern "C" unsigned long UNK_005324d4;
extern "C" unsigned long UNK_00532500;
extern "C" unsigned long UNK_00532504;
extern "C" unsigned long UNK_005325aa;
extern "C" unsigned long UNK_0053265c;
extern "C" unsigned long UNK_005326ea;
extern "C" unsigned long UNK_00532814;
extern "C" unsigned long UNK_0053296c;
extern "C" unsigned long UNK_005329aa;
extern "C" unsigned long UNK_00532a72;
extern "C" unsigned long UNK_00532aa8;
extern "C" unsigned long UNK_00532be2;
extern "C" unsigned long UNK_00532be6;
extern "C" unsigned long UNK_00532c5a;
extern "C" unsigned long UNK_00532ccc;
extern "C" unsigned long UNK_00532cf2;
extern "C" unsigned long UNK_00532e1c;
extern "C" unsigned long UNK_00532f1c;
extern "C" unsigned long UNK_00532f4e;
extern "C" unsigned long _UNK_005317fc;
extern "C" unsigned long _UNK_00531810;
extern "C" unsigned long _UNK_00531838;
extern "C" unsigned long _UNK_005318c8;
extern "C" unsigned long _UNK_005318f0;
extern "C" unsigned long _UNK_00531a48;
extern "C" unsigned long _UNK_00531a4c;
extern "C" unsigned long _UNK_00531a50;
extern "C" unsigned long _UNK_00531a54;
extern "C" unsigned long _UNK_00531ba8;
extern "C" unsigned long _UNK_00531bac;
extern "C" unsigned long _UNK_00531bb0;
extern "C" unsigned long _UNK_00531bb4;
extern "C" unsigned long _UNK_00531cc8;
extern "C" unsigned long _UNK_00531ccc;
extern "C" unsigned long _UNK_00531cd0;
extern "C" unsigned long _UNK_00531cd4;
extern "C" unsigned long _UNK_00531eb4;
extern "C" unsigned long _UNK_00532018;
extern "C" unsigned long _UNK_005320f4;
extern "C" unsigned long _UNK_00532144;
extern "C" unsigned long _UNK_005321ac;
extern "C" unsigned long _UNK_00532308;
extern "C" unsigned long _UNK_00532710;
extern "C" unsigned long _UNK_00532714;
extern "C" unsigned long _UNK_00532718;
extern "C" unsigned long _UNK_0053271c;
extern "C" unsigned long _UNK_00532720;
extern "C" unsigned long _UNK_00532724;
extern "C" unsigned long _UNK_00532728;
extern "C" unsigned long _UNK_0053272c;
extern "C" unsigned long _UNK_00532730;
extern "C" unsigned long _UNK_00532734;
extern "C" unsigned long _UNK_00532738;
extern "C" unsigned long _UNK_0053273c;
extern "C" unsigned long _UNK_00532740;
extern "C" unsigned long _UNK_00532744;
extern "C" unsigned long _UNK_00532748;
extern "C" unsigned long _UNK_0053274c;
extern "C" unsigned long _UNK_00532750;
extern "C" unsigned long _UNK_00532754;
extern "C" unsigned long _UNK_00532758;
extern "C" unsigned long _UNK_0053275c;
extern "C" unsigned long _UNK_00532760;
extern "C" unsigned long _UNK_00532764;
extern "C" unsigned long _UNK_00532768;
extern "C" unsigned long _UNK_00532b84;
extern "C" unsigned long _UNK_00532b88;
extern "C" unsigned long _UNK_00532b8c;
extern "C" unsigned long _UNK_00532b90;
extern "C" unsigned long _UNK_00532b94;
extern "C" unsigned long _UNK_00532b98;
extern "C" unsigned long _UNK_00532b9c;
extern "C" unsigned long _UNK_00532ba0;
extern "C" unsigned long _UNK_00532ba4;
extern "C" unsigned long _UNK_00532ba8;
extern "C" unsigned long _UNK_00532bac;
extern "C" unsigned long _UNK_00532bb0;
extern "C" unsigned long _UNK_00532bb4;
extern "C" unsigned long _UNK_00532bb8;
extern "C" unsigned long _UNK_00532bbc;
extern "C" unsigned long _UNK_00532bc0;
extern "C" unsigned long _UNK_00532bc4;
extern "C" unsigned long _UNK_00532bc8;
extern "C" unsigned long _UNK_00532bcc;
extern "C" unsigned long _UNK_00532f98;
extern "C" unsigned long _UNK_00532f9c;
extern "C" unsigned long _UNK_00532fa0;
extern "C" unsigned long _UNK_00532fa4;
extern "C" unsigned long _UNK_00532fa8;
extern "C" unsigned long _UNK_00532fac;
extern "C" unsigned long _UNK_00532fb0;
extern "C" unsigned long _UNK_00532fb4;
extern "C" unsigned long _UNK_00532fb8;
extern "C" unsigned long _UNK_00532fbc;
extern "C" unsigned long _UNK_00532fc0;
extern "C" unsigned long _UNK_00532fc4;
extern "C" unsigned long _UNK_00532fc8;
extern "C" unsigned long g_005317c0;
extern "C" unsigned long g_005317fc;
extern "C" unsigned long g_0053180c;
extern "C" unsigned long g_00531810;
extern "C" unsigned long g_00531834;
extern "C" unsigned long g_00531838;
extern "C" unsigned long g_00531860;
extern "C" unsigned long g_005318c8;
extern "C" unsigned long g_005318de;
extern "C" unsigned long g_005318f0;
extern "C" unsigned long g_0053190e;
extern "C" unsigned long g_00531a48;
extern "C" unsigned long g_00531a4c;
extern "C" unsigned long g_00531a50;
extern "C" unsigned long g_00531a54;
extern "C" unsigned long g_00531aa0;
extern "C" unsigned long g_00531ba8;
extern "C" unsigned long g_00531bac;
extern "C" unsigned long g_00531bb0;
extern "C" unsigned long g_00531bb4;
extern "C" unsigned long g_00531be4;
extern "C" unsigned long g_00531c08;
extern "C" unsigned long g_00531cc8;
extern "C" unsigned long g_00531ccc;
extern "C" unsigned long g_00531cd0;
extern "C" unsigned long g_00531cd4;
extern "C" unsigned long g_00531e86;
extern "C" unsigned long g_00531eb4;
extern "C" unsigned long g_00532018;
extern "C" unsigned long g_005320f4;
extern "C" unsigned long g_00532144;
extern "C" unsigned long g_005321ac;
extern "C" unsigned long g_00532308;
extern "C" unsigned long g_00532336;
extern "C" unsigned long g_0053236c;
extern "C" unsigned long g_0053239c;
extern "C" unsigned long g_005324c4;
extern "C" unsigned long g_005324d4;
extern "C" unsigned long g_00532500;
extern "C" unsigned long g_00532504;
extern "C" unsigned long g_005325aa;
extern "C" unsigned long g_0053265c;
extern "C" unsigned long g_005326ea;
extern "C" unsigned long g_00532710;
extern "C" unsigned long g_00532714;
extern "C" unsigned long g_00532718;
extern "C" unsigned long g_0053271c;
extern "C" unsigned long g_00532720;
extern "C" unsigned long g_00532724;
extern "C" unsigned long g_00532728;
extern "C" unsigned long g_0053272c;
extern "C" unsigned long g_00532730;
extern "C" unsigned long g_00532734;
extern "C" unsigned long g_00532738;
extern "C" unsigned long g_0053273c;
extern "C" unsigned long g_00532740;
extern "C" unsigned long g_00532744;
extern "C" unsigned long g_00532748;
extern "C" unsigned long g_0053274c;
extern "C" unsigned long g_00532750;
extern "C" unsigned long g_00532754;
extern "C" unsigned long g_00532758;
extern "C" unsigned long g_0053275c;
extern "C" unsigned long g_00532760;
extern "C" unsigned long g_00532764;
extern "C" unsigned long g_00532768;
extern "C" unsigned long g_00532814;
extern "C" unsigned long g_0053296c;
extern "C" unsigned long g_005329aa;
extern "C" unsigned long g_00532a72;
extern "C" unsigned long g_00532aa8;
extern "C" unsigned long g_00532b84;
extern "C" unsigned long g_00532b88;
extern "C" unsigned long g_00532b8c;
extern "C" unsigned long g_00532b90;
extern "C" unsigned long g_00532b94;
extern "C" unsigned long g_00532b98;
extern "C" unsigned long g_00532b9c;
extern "C" unsigned long g_00532ba0;
extern "C" unsigned long g_00532ba4;
extern "C" unsigned long g_00532ba8;
extern "C" unsigned long g_00532bac;
extern "C" unsigned long g_00532bb0;
extern "C" unsigned long g_00532bb4;
extern "C" unsigned long g_00532bb8;
extern "C" unsigned long g_00532bbc;
extern "C" unsigned long g_00532bc0;
extern "C" unsigned long g_00532bc4;
extern "C" unsigned long g_00532bc8;
extern "C" unsigned long g_00532bcc;
extern "C" unsigned long g_00532be2;
extern "C" unsigned long g_00532be6;
extern "C" unsigned long g_00532c5a;
extern "C" unsigned long g_00532ccc;
extern "C" unsigned long g_00532cf2;
extern "C" unsigned long g_00532e1c;
extern "C" unsigned long g_00532f1c;
extern "C" unsigned long g_00532f4e;
extern "C" unsigned long g_00532f98;
extern "C" unsigned long g_00532f9c;
extern "C" unsigned long g_00532fa0;
extern "C" unsigned long g_00532fa4;
extern "C" unsigned long g_00532fa8;
extern "C" unsigned long g_00532fac;
extern "C" unsigned long g_00532fb0;
extern "C" unsigned long g_00532fb4;
extern "C" unsigned long g_00532fb8;
extern "C" unsigned long g_00532fbc;
extern "C" unsigned long g_00532fc0;
extern "C" unsigned long g_00532fc4;
extern "C" unsigned long g_00532fc8;
BLFurnaceBreakLayer::~BLFurnaceBreakLayer()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_005317c0 + g_005317fc);
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

int * BLFurnaceBreakLayer::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
  (void)(((long long)::memset((void *)(piVar1),(int)(0),(size_t)(0x134))));
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00531860 + g_005318c8);
  *piVar1 = iVar2 + 8;
  piVar1[0x39] = iVar2 + 0x208;
  piVar1[0x3a] = iVar2 + 0x238;
  piVar1[0x3b] = iVar2 + 0x244;
  piVar1[0x42] = 0;
  piVar1[0x43] = 0;
  piVar1[0x44] = 0;
  iVar2 = ((BLFurnaceBreakLayer *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

void BLFurnaceBreakLayer::updateEssenceObtainCount(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  piVar2 = *(int **)(((int)this) + 0x11c);
  pcVar3 = *(code **)(*piVar2 + 0x234);
  cocos2d::CCString::createWithFormat((char const*)&g_005318de + g_005318f0);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar3)(piVar2,uVar1);
  return;
}

void BLFurnaceBreakLayer::updateEssenceCount(int p1)
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
  cocos2d::CCString::createWithFormat((char const*)&g_0053190e + g_00531a50);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar7)(piVar6,uVar1);
  piVar6 = *(int **)(((int)this) + 0x120);
  pcVar7 = *(code **)(*piVar6 + 0x4c);
  uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x114) + 0x60))());
  puVar2 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))();
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_00531a54)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(*puVar2)))));
  uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x114) + 0x68))());
  iVar4 = (**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))();
  uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar3))));
  uVar9 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(undefined4 *)(iVar4 + 4)))));
  uVar9 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_00531a48))|(((long long)(unsigned)(g_00531a4c))<<32)))));
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32))))));
  uVar3 = (undefined4)(func_0079e7e4());
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar1)))));
  uVar3 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x114) + 0x60))());
  puVar2 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))();
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_00531a54)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(*puVar2)))));
  uVar5 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x114) + 0x68))());
  iVar4 = (**(code **)(**(int **)(((int)this) + 0x114) + 0x8c))();
  uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar5))));
  uVar9 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*(undefined4 *)(iVar4 + 4)))));
  uVar9 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_00531a48))|(((long long)(unsigned)(g_00531a4c))<<32)))));
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

void BLFurnaceBreakLayer::updateBreakCoinCount(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  piVar1 = *(int **)(((int)this) + 0x118);
  if (p1 < 1) {
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
    (**(code **)(**(int **)(((int)this) + 0x124) + 0x90))(*(int **)(((int)this) + 0x124),0);
  }
  else {
    (**(code **)(*piVar1 + 0x90))(piVar1,1);
    (**(code **)(**(int **)(((int)this) + 0x124) + 0x90))(*(int **)(((int)this) + 0x124),1);
    piVar1 = *(int **)(((int)this) + 0x118);
    pcVar6 = *(code **)(*piVar1 + 0x234);
    cocos2d::CCString::createWithFormat((char const*)&g_00531aa0 + g_00531bb0, p1);
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar6)(piVar1,uVar2);
    piVar1 = *(int **)(((int)this) + 0x124);
    pcVar6 = *(code **)(*piVar1 + 0x4c);
    uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x118) + 0x60))());
    puVar3 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x118) + 0x8c))();
    (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00531bb4)))));
    uVar7 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00531bb4))))))));
    uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*puVar3))));
    uVar8 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)(g_00531ba8))|(((long long)(unsigned)(g_00531bac))<<32)))));
    (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar7))|(((long long)(unsigned)((int)((ulonglong)uVar7 >> 0x20)))<<32)),(((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32))))));
    uVar2 = (undefined4)(func_0079e7e4());
    uVar4 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x118) + 0x68))());
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar2)))));
    uVar4 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x118) + 0x60))());
    puVar3 = (undefined4 *)(**(code **)(**(int **)(((int)this) + 0x118) + 0x8c))();
    (void)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_00531bb4)))));
    uVar7 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_00531bb4))))))));
    uVar8 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*puVar3))));
    uVar8 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)(g_00531ba8))|(((long long)(unsigned)(g_00531bac))<<32)))));
    (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar7))|(((long long)(unsigned)((int)((ulonglong)uVar7 >> 0x20)))<<32)),(((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32))))));
    uVar4 = (undefined4)(func_0079e7e4());
    uVar5 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x118) + 0x68))());
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar1,auStack_20);
  }
  return;
}


undefined8 BLFurnaceBreakLayer::getItemNumInSlot(int p1, int p2)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = (undefined4)(0);
  do {
    if ((uint)(*(int *)(((int)this) + 0x10c) - *(int *)(((int)this) + 0x108) >> 2) <= uVar4) {
      iVar1 = -1;
code_r0x00531d4e:
      return ghidra_CONCAT44(p1,iVar1);
    }
    piVar3 = *(int **)(uVar4 * 4 + *(int *)(((int)this) + 0x108));
    iVar1 = (**(code **)(*piVar3 + 0x120))(piVar3);
    if (iVar1 != 0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x120))(piVar3);
      piVar2 = (int *)(**(code **)(*piVar3 + 0x194))();
      iVar1 = (**(code **)(*piVar2 + 0x20))();
      if (iVar1 == p1) {
        piVar2 = (int *)(**(code **)(*piVar3 + 0x194))(piVar3);
        iVar1 = (**(code **)(*piVar2 + 0x30))();
        if (iVar1 == p2) {
          iVar1 = piVar3[0x3c];
          goto code_r0x00531d4e;
        }
      }
    }
    uVar4 = (undefined4)(uVar4 + 1);
  } while( true );
}



undefined4 BLFurnaceBreakLayer::isAdded(int p1)
{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = (undefined4)(0);
  while( true ) {
    if ((uint)(*(int *)(((int)this) + 0x10c) - *(int *)(((int)this) + 0x108) >> 2) <= uVar2) {
      return 0;
    }
    piVar3 = *(int **)(uVar2 * 4 + *(int *)(((int)this) + 0x108));
    iVar1 = (**(code **)(*piVar3 + 0x120))(piVar3);
    if (((iVar1 != 0) &&
        (piVar3 = (int *)(**(code **)(*piVar3 + 0xd4))(piVar3,g_005320f4), piVar3 != (int *)0x0))
       && (iVar1 = (**(code **)(*piVar3 + 0x19c))(), iVar1 == p1)) break;
    uVar2 = (undefined4)(uVar2 + 1);
  }
  return 1;
}

undefined4 BLFurnaceBreakLayer::hasItem()
{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = (undefined4)(0);
  while( true ) {
    if ((uint)(*(int *)(((int)this) + 0x10c) - *(int *)(((int)this) + 0x108) >> 2) <= uVar2) {
      return 0;
    }
    piVar3 = *(int **)(uVar2 * 4 + *(int *)(((int)this) + 0x108));
    iVar1 = (**(code **)(*piVar3 + 0x120))(piVar3);
    if ((iVar1 != 0) && (iVar1 = (**(code **)(*piVar3 + 0xd4))(piVar3,g_00532144), iVar1 != 0))
    break;
    uVar2 = (undefined4)(uVar2 + 1);
  }
  return 1;
}

void BLFurnaceBreakLayer::cleanSlotItems()
{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  *(undefined4 *)(((int)this) + 0x130) = 0;
  for (uVar3 = 0; uVar3 < (uint)(*(int *)(((int)this) + 0x10c) - *(int *)(((int)this) + 0x108) >> 2);
      uVar3 = uVar3 + 1) {
    piVar2 = *(int **)(uVar3 * 4 + *(int *)(((int)this) + 0x108));
    iVar1 = (**(code **)(*piVar2 + 0x120))(piVar2);
    if (iVar1 != 0) {
      (**(code **)(*piVar2 + 0x124))(piVar2,0);
      iVar1 = (**(code **)(*piVar2 + 0xd4))(piVar2,g_005321ac);
      if (iVar1 != 0) {
        (**(code **)(*piVar2 + 0xfc))(piVar2,g_005321ac,1);
      }
    }
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void BLFurnaceBreakLayer::createOneBtnItem(float p1, float p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  piVar1 = (int *)cocos2d::extension::CCControlButton::create();
  (**(code **)(*piVar1 + 0x294))(piVar1,0);
  pcVar4 = *(code **)(*piVar1 + 0x30c);
  func_0079e45c(auStack_20,&g_00531be4 + g_00531cc8,auStack_28);
  uVar2 = (undefined4)(0 /* ctorZero */);
  (*pcVar4)(piVar1,uVar2,1);
  func_0079e2bc(auStack_20);
  pcVar4 = *(code **)(*piVar1 + 0x30c);
  func_0079e45c(auStack_20,&g_00531c08 + g_00531ccc,auStack_28);
  uVar2 = (undefined4)(0 /* ctorZero */);
  (*pcVar4)(piVar1,uVar2,2);
  func_0079e2bc(auStack_20);
  pcVar4 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar4)(piVar1,auStack_20);
  (**(code **)(*piVar1 + 0x30))(piVar1,g_00531cd4);
  (**(code **)(*piVar1 + 0x38))(piVar1,g_00531cd4);
  pcVar4 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar2)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
  0 /* ctorZero */;
  (*pcVar4)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  return;
}

void BLFurnaceBreakLayer::getEmptySlotPositionScreen(BackPackItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLFurnaceBreakLayer::addSlotItem(BLFurnaceItemInSlot* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLFurnaceBreakLayer::removeBreakItem(cocos2d::extension::CCControlButton* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLFurnaceBreakLayer::getSlotItems()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLFurnaceBreakLayer::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
