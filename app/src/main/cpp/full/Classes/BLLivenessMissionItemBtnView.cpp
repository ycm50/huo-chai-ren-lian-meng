#include "BLLivenessMissionItemBtnView.h"
#include "BLLeakUtils.h"
#include "BLLivenessMissionItemBtnPresenter.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0058075c;
extern "C" unsigned long UNK_0058078e;
extern "C" unsigned long UNK_005807e8;
extern "C" unsigned long UNK_005808fc;
extern "C" unsigned long UNK_00580db4;
extern "C" unsigned long UNK_00580de2;
extern "C" unsigned long UNK_00580e6c;
extern "C" unsigned long UNK_00580eba;
extern "C" unsigned long UNK_00580ee2;
extern "C" unsigned long UNK_00580f5a;
extern "C" unsigned long UNK_00580f5c;
extern "C" unsigned long _UNK_005807d4;
extern "C" unsigned long _UNK_005807d8;
extern "C" unsigned long _UNK_005807ec;
extern "C" unsigned long _UNK_00580900;
extern "C" unsigned long _UNK_00580e0c;
extern "C" unsigned long _UNK_00580e10;
extern "C" unsigned long _UNK_00580fa4;
extern "C" unsigned long _UNK_00580fa8;
extern "C" unsigned long _UNK_00580fac;
extern "C" unsigned long _UNK_00580fb0;
extern "C" unsigned long _UNK_00580fb4;
extern "C" unsigned long _UNK_00580fb8;
extern "C" unsigned long _UNK_00580fbc;
extern "C" unsigned long _UNK_00580fc0;
extern "C" unsigned long g_0058075c;
extern "C" unsigned long g_0058078e;
extern "C" unsigned long g_005807d4;
extern "C" unsigned long g_005807d8;
extern "C" unsigned long g_005807e8;
extern "C" unsigned long g_005807ec;
extern "C" unsigned long g_005808fc;
extern "C" unsigned long g_00580900;
extern "C" unsigned long g_00580db4;
extern "C" unsigned long g_00580de2;
extern "C" unsigned long g_00580e0c;
extern "C" unsigned long g_00580e10;
extern "C" unsigned long g_00580e6c;
extern "C" unsigned long g_00580eba;
extern "C" unsigned long g_00580ee2;
extern "C" unsigned long g_00580f5a;
extern "C" unsigned long g_00580f5c;
extern "C" unsigned long g_00580fa4;
extern "C" unsigned long g_00580fa8;
extern "C" unsigned long g_00580fac;
extern "C" unsigned long g_00580fb0;
extern "C" unsigned long g_00580fb4;
extern "C" unsigned long g_00580fb8;
extern "C" unsigned long g_00580fbc;
extern "C" unsigned long g_00580fc0;
BLLivenessMissionItemBtnView::~BLLivenessMissionItemBtnView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0058075c + g_005807d4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058078e + g_005807d8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessMissionItemBtnView::BLLivenessMissionItemBtnView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00580db4 + g_00580e0c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00580de2 + g_00580e10,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLLivenessMissionItemBtnView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLLivenessMissionItemBtnPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLLivenessMissionItemBtnView::initView();
    ((BLLivenessMissionItemBtnPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLLivenessMissionItemBtnView*)((int)this));
  }
  return iVar1;
}

void BLLivenessMissionItemBtnView::onEnter()
{
  ((BLLivenessMissionItemBtnPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLivenessMissionItemBtnView::onExit()
{
  ((BLLivenessMissionItemBtnPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLivenessMissionItemBtnView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [2];
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar2)))));
  0 /* ctorZero */;
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00580e6c + (intptr_t)(g_00580fac)),auStack_28);
  iVar3 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar3;
  func_0079e2bc(&uStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar6 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar5)(piVar6,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  iVar4 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar3 = (undefined4)(intptr_t)(g_00580fb0);
  *(int *)((int)this + 4*(0x44)) = iVar4;
  func_0079e45c(&uStack_20,&g_00580eba + iVar3,auStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar1,1);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00580ee2 + (intptr_t)(g_00580fb4)),auStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar1,4);
  piVar6 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar6 + 0x28c);
  0 /* ctorZero */;
  (*pcVar5)(piVar6,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x294))((int *)*(int *)((int)this + 4*(0x44)),0);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00580fb8),(int)(uVar1)))));
  piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00580f5c + (intptr_t)(g_00580fc0)), (char const*)(unsigned char *)((char *)&g_00580f5a + (intptr_t)(g_00580fbc)), uVar1);
  *(int *)((int)this + 4*(0x45)) = (int)piVar6;
  uStack_20 = 0xff;
  uStack_1f = 0xdd;
  uStack_1e = 0;
  (**(code **)(*piVar6 + 0x1b4))(piVar6,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_30);
  return;
}
