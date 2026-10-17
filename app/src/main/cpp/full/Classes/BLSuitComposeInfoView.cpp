#include "BLSuitComposeInfoView.h"
#include "BLLeakUtils.h"
#include "BLSuitComposeInfoItemView.h"
#include "BLSuitComposeInfoPresenter.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069316c;
extern "C" unsigned long UNK_006931b0;
extern "C" unsigned long UNK_006931f4;
extern "C" unsigned long UNK_00693294;
extern "C" unsigned long UNK_00693a30;
extern "C" unsigned long UNK_00693a5e;
extern "C" unsigned long UNK_00693aae;
extern "C" unsigned long UNK_00693bc4;
extern "C" unsigned long UNK_00693c08;
extern "C" unsigned long UNK_00693c6a;
extern "C" unsigned long UNK_00693c6c;
extern "C" unsigned long _UNK_006931e0;
extern "C" unsigned long _UNK_006931e4;
extern "C" unsigned long _UNK_006931f8;
extern "C" unsigned long _UNK_00693298;
extern "C" unsigned long _UNK_00693a88;
extern "C" unsigned long _UNK_00693a8c;
extern "C" unsigned long _UNK_00693b88;
extern "C" unsigned long _UNK_00693b8c;
extern "C" unsigned long _UNK_00693b90;
extern "C" unsigned long _UNK_00693f68;
extern "C" unsigned long _UNK_00693f6c;
extern "C" unsigned long _UNK_00693f70;
extern "C" unsigned long _UNK_00693f74;
extern "C" unsigned long _UNK_00693f78;
extern "C" unsigned long _UNK_00693f7c;
extern "C" unsigned long _UNK_00693f80;
extern "C" unsigned long _UNK_00693f84;
extern "C" unsigned long _UNK_00693f88;
extern "C" unsigned long g_0069316c;
extern "C" unsigned long g_006931b0;
extern "C" unsigned long g_006931e0;
extern "C" unsigned long g_006931e4;
extern "C" unsigned long g_006931f4;
extern "C" unsigned long g_006931f8;
extern "C" unsigned long g_00693294;
extern "C" unsigned long g_00693298;
extern "C" unsigned long g_00693a30;
extern "C" unsigned long g_00693a5e;
extern "C" unsigned long g_00693a88;
extern "C" unsigned long g_00693a8c;
extern "C" unsigned long g_00693aae;
extern "C" unsigned long g_00693b88;
extern "C" unsigned long g_00693b8c;
extern "C" unsigned long g_00693b90;
extern "C" unsigned long g_00693bc4;
extern "C" unsigned long g_00693c08;
extern "C" unsigned long g_00693c6a;
extern "C" unsigned long g_00693c6c;
extern "C" unsigned long g_00693f68;
extern "C" unsigned long g_00693f6c;
extern "C" unsigned long g_00693f70;
extern "C" unsigned long g_00693f74;
extern "C" unsigned long g_00693f78;
extern "C" unsigned long g_00693f7c;
extern "C" unsigned long g_00693f80;
extern "C" unsigned long g_00693f84;
extern "C" unsigned long g_00693f88;
BLSuitComposeInfoView::~BLSuitComposeInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069316c + g_006931e0);
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
  func_0079e45c(&uStack_14,&g_006931b0 + g_006931e4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSuitComposeInfoView::onEnter()
{
  ((BLSuitComposeInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitComposeInfoView::onExit()
{
  ((BLSuitComposeInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

BLSuitComposeInfoView::BLSuitComposeInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00693a30 + g_00693a88);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00693a5e + g_00693a8c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLSuitComposeInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitComposeInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitComposeInfoView::initView();
    ((BLSuitComposeInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitComposeInfoView*)((int)this));
  }
  return iVar1;
}

int * BLSuitComposeInfoView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
  0 /* ctorZero */;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar1)->autorelease();
    }
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLSuitComposeInfoView::initView()
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00693aae + (intptr_t)(g_00693b90)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar10 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  iVar2 = (undefined4)(intptr_t)(((BLSuitComposeInfoItemView *)this)->create());
  *(int *)((int)this + 4*(0x43)) = iVar2;
  (**(code **)(*(int *)this + 200))(((int)this),iVar2);
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x18))(piVar1));
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x44)) = (int)piVar1;
  (**(code **)(*(int *)this + 200))(((int)this));
  piVar1 = (int *)((long long)::operator new((size_t)(0x10c)));
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x18))(piVar1));
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x45)) = (int)piVar1;
  (**(code **)(*(int *)this + 200))(((int)this));
  piVar1 = (int *)((long long)::operator new((size_t)(0x110)));
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x18))(piVar1));
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x46)) = (int)piVar1;
  (**(code **)(*(int *)this + 200))(((int)this));
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00693bc4 + (intptr_t)(g_00693f68)),auStack_2c);
  iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x47)) = iVar2;
  func_0079e2bc(auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar10 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
  iVar3 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar2 = (undefined4)(intptr_t)(g_00693f74);
  *(int *)((int)this + 4*(0x48)) = iVar3;
  func_0079e45c(auStack_20,&g_00693c08 + iVar2,auStack_2c);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x294))((int *)*(int *)((int)this + 4*(0x48)),0);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x30c))((int *)*(int *)((int)this + 4*(0x48)),uVar4,1);
  piVar1 = (int *)*(int *)((int)this + 4*(0x48));
  pcVar10 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x48)));
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00693c6a + (intptr_t)(g_00693f78)), (char const*)(unsigned char *)((char *)&g_00693c6c + (intptr_t)(g_00693f7c)), g_00693f80));
  *(int *)((int)this + 4*(0x49)) = iVar2;
  (**(code **)(*(int *)this + 200))(((int)this),iVar2);
  iVar2 = (undefined4)(intptr_t)(iStack_28);
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))();
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar2),(int)(*puVar5)))));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*puVar5)))));
  uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_00693f84)))));
  uVar4 = (undefined4)(uStack_24);
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*(undefined4 *)(iVar2 + 4))))));
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*(undefined4 *)(iVar2 + 4))))));
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*(undefined4 *)(iVar2 + 4))))));
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x8c))());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(*(undefined4 *)(iVar2 + 4))))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_00693f88)))));
  uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
  uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar7),(int)(uVar4)))));
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
  uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar7),(int)(uVar8)))));
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
  uVar9 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar8),(int)(uVar9)))));
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar8),(int)(uVar4)))));
  uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar7),(int)(uVar8)))));
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))());
  uVar9 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar8),(int)(uVar9)))));
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar8),(int)(uVar4)))));
  uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar7),(int)(uVar8)))));
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_28 + -0x80000000),(int)(0x3f000000)))));
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar8),(int)(uVar6)))));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))();
  uVar9 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar8),(int)(uVar9)))));
  piVar1 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))();
  uVar9 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
  uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar9),(int)(uVar6)))));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
  piVar1 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  uVar9 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
  uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar9)))));
  uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar8),(int)(uVar6)))));
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))());
  uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x8c))());
  piVar1 = (int *)*(int *)((int)this + 4*(0x48));
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  uVar8 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
  uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar8)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar7),(int)(uVar4)))));
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x50))());
  (*pcVar10)(piVar1,uVar4);
  piVar1 = (int *)*(int *)((int)this + 4*(0x49));
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x50))());
  (*pcVar10)(piVar1,uVar4);
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_28);
  return;
}
