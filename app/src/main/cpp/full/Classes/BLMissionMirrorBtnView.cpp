#include "BLMissionMirrorBtnView.h"
#include "BLLeakUtils.h"
#include "BLMissionMirrorBtnPresenter.h"
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
extern "C" unsigned long UNK_005cfa78;
extern "C" unsigned long UNK_005cfaaa;
extern "C" unsigned long UNK_005cfb04;
extern "C" unsigned long UNK_005cfbc8;
extern "C" unsigned long UNK_005cfc38;
extern "C" unsigned long UNK_005cfc66;
extern "C" unsigned long UNK_005cfce2;
extern "C" unsigned long UNK_005cfd80;
extern "C" unsigned long UNK_005cfde2;
extern "C" unsigned long UNK_005cfde4;
extern "C" unsigned long UNK_005cfdf6;
extern "C" unsigned long UNK_005cfe68;
extern "C" unsigned long UNK_005cfeb4;
extern "C" unsigned long UNK_005cfeb6;
extern "C" unsigned long UNK_005cfec7;
extern "C" unsigned long _UNK_005cfaf0;
extern "C" unsigned long _UNK_005cfaf4;
extern "C" unsigned long _UNK_005cfb08;
extern "C" unsigned long _UNK_005cfbcc;
extern "C" unsigned long _UNK_005cfc90;
extern "C" unsigned long _UNK_005cfc94;
extern "C" unsigned long _UNK_005d0018;
extern "C" unsigned long _UNK_005d001c;
extern "C" unsigned long _UNK_005d0020;
extern "C" unsigned long _UNK_005d0024;
extern "C" unsigned long _UNK_005d0028;
extern "C" unsigned long _UNK_005d002c;
extern "C" unsigned long _UNK_005d0030;
extern "C" unsigned long _UNK_005d0034;
extern "C" unsigned long _UNK_005d0038;
extern "C" unsigned long _UNK_005d003c;
extern "C" unsigned long _UNK_005d0040;
extern "C" unsigned long _UNK_005d0044;
extern "C" unsigned long _UNK_005d0048;
extern "C" unsigned long g_005cfa78;
extern "C" unsigned long g_005cfaaa;
extern "C" unsigned long g_005cfaf0;
extern "C" unsigned long g_005cfaf4;
extern "C" unsigned long g_005cfb04;
extern "C" unsigned long g_005cfb08;
extern "C" unsigned long g_005cfbc8;
extern "C" unsigned long g_005cfbcc;
extern "C" unsigned long g_005cfc38;
extern "C" unsigned long g_005cfc66;
extern "C" unsigned long g_005cfc90;
extern "C" unsigned long g_005cfc94;
extern "C" unsigned long g_005cfce2;
extern "C" unsigned long g_005cfd80;
extern "C" unsigned long g_005cfde2;
extern "C" unsigned long g_005cfde4;
extern "C" unsigned long g_005cfdf6;
extern "C" unsigned long g_005cfe68;
extern "C" unsigned long g_005cfeb4;
extern "C" unsigned long g_005cfeb6;
extern "C" unsigned long g_005cfec7;
extern "C" unsigned long g_005d0018;
extern "C" unsigned long g_005d001c;
extern "C" unsigned long g_005d0020;
extern "C" unsigned long g_005d0024;
extern "C" unsigned long g_005d0028;
extern "C" unsigned long g_005d002c;
extern "C" unsigned long g_005d0030;
extern "C" unsigned long g_005d0034;
extern "C" unsigned long g_005d0038;
extern "C" unsigned long g_005d003c;
extern "C" unsigned long g_005d0040;
extern "C" unsigned long g_005d0044;
extern "C" unsigned long g_005d0048;
BLMissionMirrorBtnView::~BLMissionMirrorBtnView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005cfa78 + g_005cfaf0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cfaaa + g_005cfaf4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionMirrorBtnView::BLMissionMirrorBtnView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005cfc38 + g_005cfc90);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005cfc66 + g_005cfc94,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMissionMirrorBtnView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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


bool BLMissionMirrorBtnView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionMirrorBtnPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionMirrorBtnView::initView();
    ((BLMissionMirrorBtnPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionMirrorBtnView*)((int)this));
  }
  return iVar1;
}

void BLMissionMirrorBtnView::onEnter()
{
  ((BLMissionMirrorBtnPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionMirrorBtnView::onExit()
{
  ((BLMissionMirrorBtnPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMissionMirrorBtnView::initView()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005cfce2 + (intptr_t)(g_005d0018)),&uStack_28);
  iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar1;
  func_0079e2bc(auStack_20);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(uVar2)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar3)))));
  0 /* ctorZero */;
  piVar7 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar6 = *(code **)(*piVar7 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar7,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  iVar4 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar1 = (undefined4)(intptr_t)(g_005d0024);
  *(int *)((int)this + 4*(0x44)) = iVar4;
  func_0079e45c(auStack_20,&g_005cfd80 + iVar1,&uStack_28);
  uVar2 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar2,1);
  piVar7 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar7 + 0x28c);
  0 /* ctorZero */;
  (*pcVar6)(piVar7,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x294))((int *)*(int *)((int)this + 4*(0x44)),0);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005cfde2 + (intptr_t)(g_005d0028)), (char const*)(unsigned char *)((char *)&g_005cfde4 + (intptr_t)(g_005d002c)), g_005d0030);
  *(int *)((int)this + 4*(0x45)) = (int)piVar7;
  (**(code **)(*piVar7 + 0x1b4))(piVar7,(unsigned char *)((char *)&g_005cfdf6 + (intptr_t)(g_005d0034)));
  piVar7 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar6 = *(code **)(*piVar7 + 0x4c);
  0 /* ctorZero */;
  uVar2 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar3)))));
  0 /* ctorZero */;
  uVar2 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar5)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar7,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005cfe68 + (intptr_t)(g_005d0038)),&uStack_28);
  iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x47)) = iVar1;
  func_0079e2bc(auStack_20);
  piVar7 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar6 = *(code **)(*piVar7 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar7,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
  piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005cfeb4 + (intptr_t)(g_005d003c)), (char const*)(unsigned char *)((char *)&g_005cfeb6 + (intptr_t)(g_005d0040)), g_005d0044);
  iVar1 = (undefined4)(intptr_t)(g_005d0048);
  *(int *)((int)this + 4*(0x46)) = (int)piVar7;
  (**(code **)(*piVar7 + 0x1b4))(piVar7,&g_005cfec7 + iVar1);
  piVar7 = (int *)*(int *)((int)this + 4*(0x46));
  iVar1 = (int)*(int *)&(*piVar7);
  pcVar6 = *(code **)(iVar1 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_34 + -0x80000000),(int)(0x3f000000)))));
  iVar1 = (undefined4)(intptr_t)((**(code **)(iVar1 + 0x8c))(piVar7));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar1 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar3)))));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(0x40800000),(int)(uVar3)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar3)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar2)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_34 + -0x80000000),(int)(0x3f000000)))));
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))());
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar1 + 4)),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(0x40800000),(int)(uVar5)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar7,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  pcVar6 = *(code **)(*(int *)this + 0x88);
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar1 + 4)),(int)(0x3f000000)))));
  uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x68))());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar3)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar2)))));
  0 /* ctorZero */;
  (*pcVar6)(((int)this),auStack_20);
  return;
}
