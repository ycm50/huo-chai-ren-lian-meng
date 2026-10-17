#include "BLPetRefreshSkillView.h"
#include "BLLeakUtils.h"
#include "BLPetRefreshSkillPresenter.h"
#include "BLPetSkillIconView.h"
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
extern "C" unsigned long UNK_0060dab0;
extern "C" unsigned long UNK_0060dae2;
extern "C" unsigned long UNK_0060db3c;
extern "C" unsigned long UNK_0060db64;
extern "C" unsigned long UNK_0060dbb8;
extern "C" unsigned long UNK_0060dbe6;
extern "C" unsigned long UNK_0060dc36;
extern "C" unsigned long UNK_0060dc74;
extern "C" unsigned long UNK_0060dc76;
extern "C" unsigned long UNK_0060dc88;
extern "C" unsigned long UNK_0060dda6;
extern "C" unsigned long UNK_0060de38;
extern "C" unsigned long UNK_0060de3e;
extern "C" unsigned long UNK_0060de68;
extern "C" unsigned long UNK_0060dfb4;
extern "C" unsigned long UNK_0060e0b0;
extern "C" unsigned long UNK_0060e16e;
extern "C" unsigned long UNK_0060e170;
extern "C" unsigned long UNK_0060e181;
extern "C" unsigned long _UNK_0060db28;
extern "C" unsigned long _UNK_0060db2c;
extern "C" unsigned long _UNK_0060db40;
extern "C" unsigned long _UNK_0060db68;
extern "C" unsigned long _UNK_0060dc10;
extern "C" unsigned long _UNK_0060dc14;
extern "C" unsigned long _UNK_0060e000;
extern "C" unsigned long _UNK_0060e004;
extern "C" unsigned long _UNK_0060e008;
extern "C" unsigned long _UNK_0060e00c;
extern "C" unsigned long _UNK_0060e010;
extern "C" unsigned long _UNK_0060e014;
extern "C" unsigned long _UNK_0060e018;
extern "C" unsigned long _UNK_0060e01c;
extern "C" unsigned long _UNK_0060e020;
extern "C" unsigned long _UNK_0060e024;
extern "C" unsigned long _UNK_0060e028;
extern "C" unsigned long _UNK_0060e02c;
extern "C" unsigned long _UNK_0060e030;
extern "C" unsigned long _UNK_0060e034;
extern "C" unsigned long _UNK_0060e038;
extern "C" unsigned long _UNK_0060e03c;
extern "C" unsigned long _UNK_0060e040;
extern "C" unsigned long _UNK_0060e1e0;
extern "C" unsigned long _UNK_0060e1e4;
extern "C" unsigned long _UNK_0060e1e8;
extern "C" unsigned long _UNK_0060e1ec;
extern "C" unsigned long _UNK_0060e1f0;
extern "C" unsigned long _UNK_0060e1f4;
extern "C" unsigned long _UNK_0060e1f8;
extern "C" unsigned long _UNK_0060e1fc;
extern "C" unsigned long g_0060dab0;
extern "C" unsigned long g_0060dae2;
extern "C" unsigned long g_0060db28;
extern "C" unsigned long g_0060db2c;
extern "C" unsigned long g_0060db3c;
extern "C" unsigned long g_0060db40;
extern "C" unsigned long g_0060db64;
extern "C" unsigned long g_0060db68;
extern "C" unsigned long g_0060dbb8;
extern "C" unsigned long g_0060dbe6;
extern "C" unsigned long g_0060dc10;
extern "C" unsigned long g_0060dc14;
extern "C" unsigned long g_0060dc36;
extern "C" unsigned long g_0060dc74;
extern "C" unsigned long g_0060dc76;
extern "C" unsigned long g_0060dc88;
extern "C" unsigned long g_0060dda6;
extern "C" unsigned long g_0060de38;
extern "C" unsigned long g_0060de3e;
extern "C" unsigned long g_0060de68;
extern "C" unsigned long g_0060dfb4;
extern "C" unsigned long g_0060e000;
extern "C" unsigned long g_0060e004;
extern "C" unsigned long g_0060e008;
extern "C" unsigned long g_0060e00c;
extern "C" unsigned long g_0060e010;
extern "C" unsigned long g_0060e014;
extern "C" unsigned long g_0060e018;
extern "C" unsigned long g_0060e01c;
extern "C" unsigned long g_0060e020;
extern "C" unsigned long g_0060e024;
extern "C" unsigned long g_0060e028;
extern "C" unsigned long g_0060e02c;
extern "C" unsigned long g_0060e030;
extern "C" unsigned long g_0060e034;
extern "C" unsigned long g_0060e038;
extern "C" unsigned long g_0060e03c;
extern "C" unsigned long g_0060e040;
extern "C" unsigned long g_0060e0b0;
extern "C" unsigned long g_0060e16e;
extern "C" unsigned long g_0060e170;
extern "C" unsigned long g_0060e181;
extern "C" unsigned long g_0060e1e0;
extern "C" unsigned long g_0060e1e4;
extern "C" unsigned long g_0060e1e8;
extern "C" unsigned long g_0060e1ec;
extern "C" unsigned long g_0060e1f0;
extern "C" unsigned long g_0060e1f4;
extern "C" unsigned long g_0060e1f8;
extern "C" unsigned long g_0060e1fc;
BLPetRefreshSkillView::~BLPetRefreshSkillView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0060dab0 + g_0060db28);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060dae2 + g_0060db2c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPetRefreshSkillView::BLPetRefreshSkillView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0060dbb8 + g_0060dc10);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060dbe6 + g_0060dc14,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLPetRefreshSkillView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLPetRefreshSkillPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLPetRefreshSkillView::initView();
    ((BLPetRefreshSkillPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLPetRefreshSkillView*)((int)this));
  }
  return iVar1;
}

void BLPetRefreshSkillView::onEnter()
{
  ((BLPetRefreshSkillPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPetRefreshSkillView::onExit()
{
  ((BLPetRefreshSkillPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLPetRefreshSkillView::initView()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  int iStack_38;
  int iStack_34;
  int aiStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0060dc36 + (intptr_t)(g_0060e008)),&uStack_28);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar10 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0060dc74 + (intptr_t)(g_0060e00c)), (char const*)(unsigned char *)((char *)&g_0060dc76 + (intptr_t)(g_0060e010)), g_0060e014);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,(unsigned char *)((char *)&g_0060dc88 + (intptr_t)(g_0060e018)));
  iVar11 = (int)*(int *)&(*piVar1);
  pcVar10 = *(code **)(iVar11 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_34),(int)(0x3f000000)))));
  iVar11 = (undefined4)(intptr_t)((**(code **)(iVar11 + 0x8c))(piVar1));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(*(undefined4 *)(iVar11 + 4))))));
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  0 /* ctorZero */;
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x40800000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0060e020)))));
  0 /* ctorZero */;
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uStack_1c)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0060e024)))));
  0 /* ctorZero */;
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
  0 /* ctorZero */;
  iVar11 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x18))(piVar1));
  if (iVar11 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x44)) = (int)piVar1;
  (**(code **)(*piVar1 + 0x22c))(piVar1,1);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar10 = *(code **)(*piVar1 + 0x234);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(aiStack_30[0] + -0x80000000),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0060dda6 + (intptr_t)(g_0060e028)),&uStack_28);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar10 = *(code **)(*piVar1 + 0x1d4);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_38),(int)(g_0060e024)))));
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  (**(code **)(*piVar1 + 0x1d0))(auStack_20,piVar1);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0060e024)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0060e02c),(int)(uVar2)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_38 + -0x80000000),(int)(g_0060e030)))));
  puVar9 = (unsigned char *)((char *)&g_0060de38 + (intptr_t)(g_0060e034));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0060de3e + (intptr_t)(g_0060e038)), (char const*)puVar9, g_0060e014);
  iVar11 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x8c))());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar11 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  puVar8 = (unsigned char *)((char *)&g_0060de68 + (intptr_t)(g_0060e03c));
  (**(code **)(*piVar1 + 0x1b4))(piVar1,puVar8);
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  iVar11 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x8c))(piVar1));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar11 + 4)),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_0060e024)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  0 /* ctorZero */;
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  piVar5 = (int *)((BLPetSkillIconView *)this)->create();
  *(int *)((int)this + 4*(0x45)) = (int)piVar5;
  pcVar10 = *(code **)(*piVar5 + 0x4c);
  0 /* ctorZero */;
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0060e024)))));
  uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar6)))));
  0 /* ctorZero */;
  (*pcVar10)(piVar5,auStack_20);
  *(undefined4 *)(*(int *)(*(int *)((int)this + 4*(0x45)) + 0x108) + 0x20) = 1;
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  piVar5 = (int *)((BLPetSkillIconView *)this)->create();
  *(int *)((int)this + 4*(0x46)) = (int)piVar5;
  pcVar10 = *(code **)(*piVar5 + 0x4c);
  0 /* ctorZero */;
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0060e024)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar4)))));
  0 /* ctorZero */;
  (*pcVar10)(piVar5,auStack_20);
  *(undefined4 *)(*(int *)(*(int *)((int)this + 4*(0x46)) + 0x108) + 0x20) = 1;
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_38),(int)(0x3e800000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0060e024)))));
  piVar5 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0060dfb4 + (intptr_t)(g_0060e040)), (char const*)puVar9, g_0060e014);
  (**(code **)(*piVar5 + 0x1b4))(piVar5,puVar8);
  pcVar10 = *(code **)(*piVar5 + 0x4c);
  uVar3 = (undefined4)((**(code **)(*piVar1 + 0x68))(piVar1));
  0 /* ctorZero */;
  (*pcVar10)(piVar5,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar5);
  piVar1 = (int *)((long long)::operator new((size_t)(0x11c)));
  0 /* ctorZero */;
  iVar11 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x18))(piVar1));
  if (iVar11 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x47)) = (int)piVar1;
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*piVar5 + 0x60))(piVar5));
  uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x68))());
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
  iVar7 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar11 = (undefined4)(intptr_t)(g_0060e1e0);
  *(int *)((int)this + 4*(0x43)) = iVar7;
  func_0079e45c(auStack_20,&g_0060e0b0 + iVar11,&uStack_28);
  uVar2 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),uVar2,1);
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar10 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x294))((int *)*(int *)((int)this + 4*(0x43)),0);
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  iVar11 = (int)*(int *)&(*piVar1);
  pcVar10 = *(code **)(iVar11 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_34 + -0x80000000),(int)(0x3f000000)))));
  (**(code **)(iVar11 + 0x288))(&uStack_28,piVar1);
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar3)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_0060e1ec)))));
  0 /* ctorZero */;
  (*pcVar10)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0060e16e + (intptr_t)(g_0060e1f0)), (char const*)(unsigned char *)((char *)&g_0060e170 + (intptr_t)(g_0060e1f4)), g_0060e1f8);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,(unsigned char *)((char *)&g_0060e181 + (intptr_t)(g_0060e1fc)));
  pcVar10 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
  (*pcVar10)(piVar1,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_38);
  return;
}
