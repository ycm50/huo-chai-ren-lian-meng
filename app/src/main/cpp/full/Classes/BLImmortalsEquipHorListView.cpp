#include "BLImmortalsEquipHorListView.h"
#include "BLImmortalsEquipHorListPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056ffb8;
extern "C" unsigned long UNK_0056ffea;
extern "C" unsigned long UNK_00570044;
extern "C" unsigned long UNK_00570094;
extern "C" unsigned long UNK_0057029c;
extern "C" unsigned long UNK_005702ca;
extern "C" unsigned long UNK_00570486;
extern "C" unsigned long UNK_005704f4;
extern "C" unsigned long _UNK_00570030;
extern "C" unsigned long _UNK_00570034;
extern "C" unsigned long _UNK_00570048;
extern "C" unsigned long _UNK_00570098;
extern "C" unsigned long _UNK_005702f4;
extern "C" unsigned long _UNK_005702f8;
extern "C" unsigned long _UNK_005705f0;
extern "C" unsigned long _UNK_005705f4;
extern "C" unsigned long _UNK_005705f8;
extern "C" unsigned long _UNK_005705fc;
extern "C" unsigned long _UNK_00570600;
extern "C" unsigned long _UNK_00570604;
extern "C" unsigned long _UNK_00570608;
extern "C" unsigned long _UNK_0057060c;
extern "C" unsigned long g_0056ffb8;
extern "C" unsigned long g_0056ffea;
extern "C" unsigned long g_00570030;
extern "C" unsigned long g_00570034;
extern "C" unsigned long g_00570044;
extern "C" unsigned long g_00570048;
extern "C" unsigned long g_00570094;
extern "C" unsigned long g_00570098;
extern "C" unsigned long g_0057029c;
extern "C" unsigned long g_005702ca;
extern "C" unsigned long g_005702f4;
extern "C" unsigned long g_005702f8;
extern "C" unsigned long g_00570486;
extern "C" unsigned long g_005704f4;
extern "C" unsigned long g_005705f0;
extern "C" unsigned long g_005705f4;
extern "C" unsigned long g_005705f8;
extern "C" unsigned long g_005705fc;
extern "C" unsigned long g_00570600;
extern "C" unsigned long g_00570604;
extern "C" unsigned long g_00570608;
extern "C" unsigned long g_0057060c;
BLImmortalsEquipHorListView::~BLImmortalsEquipHorListView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0056ffb8 + g_00570030);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056ffea + g_00570034,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsEquipHorListView::BLImmortalsEquipHorListView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0057029c + g_005702f4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005702ca + g_005702f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLImmortalsEquipHorListView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uStack_58;
  int iStack_54;
  int aiStack_50 [2];
  undefined4 auStack_48 [2];
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 auStack_38 [2];
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(uVar1)))));
  0 /* ctorZero */;
  uVar1 = (undefined4)(uStack_1c);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar3)))));
  0 /* ctorZero */;
  piVar4 = (int *)((long long)::operator new((size_t)(0x134)));
  0 /* ctorZero */;
  iVar5 = (**(code **)(*piVar4 + 0x18))(piVar4);
  if (iVar5 == 0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    piVar4 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar4)->autorelease();
  }
  uVar1 = (undefined4)(g_005705f8);
  *(int *)((int)this + 4*(0x43)) = (int)piVar4;
  piVar9 = (int *)((int)this);
  0 /* ctorZero */;
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_48[0]),(int)(g_005705fc)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(g_00570600)))));
  0 /* ctorZero */;
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_38[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(g_005705fc)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00570600)))));
  0 /* ctorZero */;
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar2)))));
  piVar4 = aiStack_50;
  0 /* ctorZero */;
  piVar8 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar7 = *(code **)(*piVar8 + 0x234);
  0 /* ctorZero */;
  (*pcVar7)(piVar8,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x22c))((int *)*(int *)((int)this + 4*(0x43)),0);
  piVar8 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar7 = *(code **)(*piVar8 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(aiStack_50[0] + -0x80000000),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(piVar4[1] + -0x80000000),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar8,auStack_20);
  iVar5 = (int)*(int *)&(*piVar9);
  (**(code **)(iVar5 + 200))(piVar9,*(int *)((int)this + 4*(0x43)));
  func_0079e45c(auStack_20,&g_00570486 + g_00570604,&uStack_28);
  piVar4 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar7 = *(code **)(*piVar4 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_54 + -0x80000000),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*piVar9 + 200))(piVar9,piVar4);
  func_0079e45c(auStack_20,&g_005704f4 + g_00570608,&uStack_28);
  iVar5 = 0 /* ctorZero */;
  piVar9[0x44] = iVar5;
  piVar4 = piVar9;
  func_0079e2bc(auStack_20);
  piVar8 = (int *)piVar9[0x44];
  pcVar7 = *(code **)(*piVar8 + 0x1d4);
  (**(code **)(*piVar8 + 0x1cc))(auStack_20,piVar8);
  (*pcVar7)(piVar8,auStack_20);
  piVar8 = (int *)piVar9[0x44];
  pcVar7 = *(code **)(*piVar8 + 0x4c);
  puVar6 = (undefined4 *)(**(code **)(*(int *)piVar9[0x43] + 0x50))();
  uVar2 = (undefined4)(*puVar6);
  0 /* ctorZero */;
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar1)))));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0057060c),(int)(uVar2)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  iVar5 = (**(code **)(*(int *)piVar9[0x43] + 0x50))();
  uVar3 = (undefined4)(*(undefined4 *)(iVar5 + 4));
  0 /* ctorZero */;
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar2)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar8,auStack_20);
  (**(code **)(*piVar4 + 200))(piVar4,piVar9[0x44]);
  (**(code **)(*piVar4 + 0x88))(piVar4,&uStack_58);
  return;
}

bool BLImmortalsEquipHorListView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLImmortalsEquipHorListPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLImmortalsEquipHorListView::initView();
    ((BLImmortalsEquipHorListPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLImmortalsEquipHorListView*)((int)this));
  }
  return iVar1;
}

void BLImmortalsEquipHorListView::onEnter()
{
  ((BLImmortalsEquipHorListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLImmortalsEquipHorListView::onExit()
{
  ((BLImmortalsEquipHorListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
