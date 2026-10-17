#include "BLTreasureView.h"
#include "BLLeakUtils.h"
#include "BLTreasurePresenter.h"
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
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006b24d0;
extern "C" unsigned long UNK_006b2514;
extern "C" unsigned long UNK_006b2558;
extern "C" unsigned long UNK_006b2580;
extern "C" unsigned long UNK_006b2646;
extern "C" unsigned long _DAT_006b2620;
extern "C" unsigned long _DAT_006b2624;
extern "C" unsigned long _UNK_006b2544;
extern "C" unsigned long _UNK_006b2548;
extern "C" unsigned long _UNK_006b255c;
extern "C" unsigned long _UNK_006b2584;
extern "C" unsigned long _UNK_006b2898;
extern "C" unsigned long _UNK_006b289c;
extern "C" unsigned long _UNK_006b28a0;
extern "C" unsigned long _UNK_006b28a4;
extern "C" unsigned long _UNK_006b28a8;
extern "C" unsigned long _UNK_006b28ac;
extern "C" unsigned long _UNK_006b28b0;
extern "C" unsigned long _UNK_006b28b4;
extern "C" unsigned long g_006b24d0;
extern "C" unsigned long g_006b2514;
extern "C" unsigned long g_006b2544;
extern "C" unsigned long g_006b2548;
extern "C" unsigned long g_006b2558;
extern "C" unsigned long g_006b255c;
extern "C" unsigned long g_006b2580;
extern "C" unsigned long g_006b2584;
extern "C" unsigned long g_006b2620;
extern "C" unsigned long g_006b2624;
extern "C" unsigned long g_006b2646;
extern "C" unsigned long g_006b2898;
extern "C" unsigned long g_006b289c;
extern "C" unsigned long g_006b28a0;
extern "C" unsigned long g_006b28a4;
extern "C" unsigned long g_006b28a8;
extern "C" unsigned long g_006b28ac;
extern "C" unsigned long g_006b28b0;
extern "C" unsigned long g_006b28b4;
BLTreasureView::~BLTreasureView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006b24d0 + g_006b2544);
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
  func_0079e45c(&uStack_14,&g_006b2514 + g_006b2548,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureView::BLTreasureView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006b2620 + 0x6b25c8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTreasureView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLTreasureView::initView()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 auStack_38 [2];
  undefined4 auStack_30 [2];
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)auStack_38 = ((cocos2d::CCDirector *)uVar1)->getWinSize();
  func_0079e45c(&uStack_20,&g_006b2646 + g_006b28a0,auStack_28);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar5 = *(code **)(*piVar2 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar5)(piVar2,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar2);
  piVar2 = (int *)((long long)::operator new((size_t)(0x120)));
  0 /* ctorZero */;
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar3 == 0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar2 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar2)->autorelease();
  }
  *(int *)((int)this + 4*(0x43)) = (int)piVar2;
  (**(code **)(*(int *)this + 200))(((int)this));
  piVar2 = (int *)((long long)::operator new((size_t)(0x138)));
  0 /* ctorZero */;
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar3 == 0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar2 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar2)->autorelease();
  }
  *(int *)((int)this + 4*(0x44)) = (int)piVar2;
  pcVar5 = *(code **)(*piVar2 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_38[0]),(int)(g_006b28a4)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(0x3e000000)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar2,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar2 = (int *)((long long)::operator new((size_t)(0x134)));
  0 /* ctorZero */;
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar3 == 0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar2 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar2)->autorelease();
  }
  *(int *)((int)this + 4*(0x45)) = (int)piVar2;
  (**(code **)(*(int *)this + 0xcc))(((int)this),piVar2,2);
  piVar2 = (int *)((long long)::operator new((size_t)(0x110)));
  0 /* ctorZero */;
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar3 == 0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar2 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar2)->autorelease();
  }
  *(int *)((int)this + 4*(0x46)) = (int)piVar2;
  (**(code **)(*(int *)this + 0xcc))(((int)this),piVar2,100);
  piVar2 = (int *)((long long)::operator new((size_t)(0x110)));
  0 /* ctorZero */;
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar3 == 0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar2 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar2)->autorelease();
  }
  uVar1 = (undefined4)(g_006b28a8);
  *(int *)((int)this + 4*(0x47)) = (int)piVar2;
  0 /* ctorZero */;
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(g_006b28ac)))));
  0 /* ctorZero */;
  iVar3 = ((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(auStack_28[0]))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iVar3 + -0x80000000),(int)(0x3f000000)))));
  0 /* ctorZero */;
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(g_006b28b4)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar4)))));
  0 /* ctorZero */;
  uVar6 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uStack_1c))));
  (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar6))|(((long long)(unsigned)((int)((ulonglong)uVar6 >> 0x20)))<<32)),(((long long)(unsigned)(g_006b2898))|(((long long)(unsigned)(g_006b289c))<<32))))));
  uVar4 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar6))|(((long long)(unsigned)((int)((ulonglong)uVar6 >> 0x20)))<<32)),(((long long)(unsigned)(g_006b2898))|(((long long)(unsigned)(g_006b289c))<<32))))))))));
  piVar2 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar5 = *(code **)(*piVar2 + 0x4c);
  0 /* ctorZero */;
  (*pcVar5)(piVar2,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
  return;
}

undefined4 BLTreasureView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTreasureView::getMapView()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTreasureView::getDiceView()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTreasureView::getEffectView()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLTreasureView::getMenuView()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLTreasureView::getRecordView()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

bool BLTreasureView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTreasurePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTreasureView::initView();
    ((BLTreasurePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreasureView*)((int)this));
  }
  return iVar1;
}

void BLTreasureView::onEnter()
{
  ((BLTreasurePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureView::onExit()
{
  ((BLTreasurePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
