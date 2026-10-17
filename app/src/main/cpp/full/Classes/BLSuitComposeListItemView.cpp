#include "BLSuitComposeListItemView.h"
#include "BLLeakUtils.h"
#include "BLSuitComposeListItemPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00694434;
extern "C" unsigned long UNK_00694478;
extern "C" unsigned long UNK_006944bc;
extern "C" unsigned long UNK_006944e4;
extern "C" unsigned long UNK_006944fc;
extern "C" unsigned long UNK_0069452a;
extern "C" unsigned long UNK_00694576;
extern "C" unsigned long UNK_006945e2;
extern "C" unsigned long UNK_0069464c;
extern "C" unsigned long UNK_0069464e;
extern "C" unsigned long UNK_00694660;
extern "C" unsigned long UNK_006946d2;
extern "C" unsigned long _UNK_006944a8;
extern "C" unsigned long _UNK_006944ac;
extern "C" unsigned long _UNK_006944c0;
extern "C" unsigned long _UNK_006944e8;
extern "C" unsigned long _UNK_00694554;
extern "C" unsigned long _UNK_00694558;
extern "C" unsigned long _UNK_0069476c;
extern "C" unsigned long _UNK_00694770;
extern "C" unsigned long _UNK_00694774;
extern "C" unsigned long _UNK_00694778;
extern "C" unsigned long _UNK_0069477c;
extern "C" unsigned long _UNK_00694780;
extern "C" unsigned long _UNK_00694784;
extern "C" unsigned long _UNK_00694788;
extern "C" unsigned long _UNK_0069478c;
extern "C" unsigned long _UNK_00694790;
extern "C" unsigned long g_00694434;
extern "C" unsigned long g_00694478;
extern "C" unsigned long g_006944a8;
extern "C" unsigned long g_006944ac;
extern "C" unsigned long g_006944bc;
extern "C" unsigned long g_006944c0;
extern "C" unsigned long g_006944e4;
extern "C" unsigned long g_006944e8;
extern "C" unsigned long g_006944fc;
extern "C" unsigned long g_0069452a;
extern "C" unsigned long g_00694554;
extern "C" unsigned long g_00694558;
extern "C" unsigned long g_00694576;
extern "C" unsigned long g_006945e2;
extern "C" unsigned long g_0069464c;
extern "C" unsigned long g_0069464e;
extern "C" unsigned long g_00694660;
extern "C" unsigned long g_006946d2;
extern "C" unsigned long g_0069476c;
extern "C" unsigned long g_00694770;
extern "C" unsigned long g_00694774;
extern "C" unsigned long g_00694778;
extern "C" unsigned long g_0069477c;
extern "C" unsigned long g_00694780;
extern "C" unsigned long g_00694784;
extern "C" unsigned long g_00694788;
extern "C" unsigned long g_0069478c;
extern "C" unsigned long g_00694790;
BLSuitComposeListItemView::~BLSuitComposeListItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00694434 + g_006944a8);
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
  func_0079e45c(&uStack_14,&g_00694478 + g_006944ac,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeListItemView::BLSuitComposeListItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006944fc + g_00694554);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069452a + g_00694558,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLSuitComposeListItemView::initView()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,&g_00694576 + g_00694774,auStack_2c);
  iVar1 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x46)) = iVar1;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  piVar6 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar5 = *(code **)(*piVar6 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x90))((int *)*(int *)((int)this + 4*(0x46)),0);
  piVar6 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar5 = *(code **)(*piVar6 + 0x4c);
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  func_0079e45c(auStack_20,&g_006945e2 + g_00694778,auStack_2c);
  iVar1 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x44)) = iVar1;
  func_0079e2bc(auStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x44));
  iVar1 = (int)*(int *)&(*piVar6);
  pcVar5 = *(code **)(iVar1 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_28 + -0x80000000),(int)(0x3f000000)))));
  puVar3 = (undefined4 *)(**(code **)(iVar1 + 0x8c))(piVar6);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(*puVar3)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_0069464c + g_0069477c, (char const*)&g_0069464e + g_00694780, g_00694784);
  *(int *)((int)this + 4*(0x43)) = (int)piVar6;
  (**(code **)(*piVar6 + 0x1b4))(piVar6,&g_00694660 + g_00694788);
  piVar6 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar6 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar6 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x60))());
  puVar3 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar3),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),1);
  func_0079e45c(auStack_20,&g_006946d2 + g_0069478c,auStack_2c);
  iVar1 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x45)) = iVar1;
  func_0079e2bc(auStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar6 + 0x1d4);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_28),(int)(g_00694790)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar6,auStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x45));
  iVar1 = (int)*(int *)&(*piVar6);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24 + -0x80000000),(int)(0x3f000000)))));
  (**(code **)(iVar1 + 0x54))(piVar6,0,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x90))((int *)*(int *)((int)this + 4*(0x45)),0);
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_28);
  return;
}

bool BLSuitComposeListItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitComposeListItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitComposeListItemView::initView();
    ((BLSuitComposeListItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitComposeListItemView*)((int)this));
  }
  return iVar1;
}

void BLSuitComposeListItemView::onEnter()
{
  ((BLSuitComposeListItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitComposeListItemView::onExit()
{
  ((BLSuitComposeListItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
