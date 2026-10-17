#include "BLDeterminationView.h"
#include "BLDeterminationPresenter.h"
#include "BLLeakUtils.h"
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
extern "C" unsigned long UNK_005ce340;
extern "C" unsigned long UNK_005ce372;
extern "C" unsigned long UNK_005ce3cc;
extern "C" unsigned long UNK_005ce3f4;
extern "C" unsigned long UNK_005ce43c;
extern "C" unsigned long UNK_005ce46a;
extern "C" unsigned long UNK_005ce4f6;
extern "C" unsigned long _UNK_005ce3b8;
extern "C" unsigned long _UNK_005ce3bc;
extern "C" unsigned long _UNK_005ce3d0;
extern "C" unsigned long _UNK_005ce3f8;
extern "C" unsigned long _UNK_005ce494;
extern "C" unsigned long _UNK_005ce498;
extern "C" unsigned long _UNK_005ce544;
extern "C" unsigned long _UNK_005ce548;
extern "C" unsigned long _UNK_005ce54c;
extern "C" unsigned long g_005ce340;
extern "C" unsigned long g_005ce372;
extern "C" unsigned long g_005ce3b8;
extern "C" unsigned long g_005ce3bc;
extern "C" unsigned long g_005ce3cc;
extern "C" unsigned long g_005ce3d0;
extern "C" unsigned long g_005ce3f4;
extern "C" unsigned long g_005ce3f8;
extern "C" unsigned long g_005ce43c;
extern "C" unsigned long g_005ce46a;
extern "C" unsigned long g_005ce494;
extern "C" unsigned long g_005ce498;
extern "C" unsigned long g_005ce4f6;
extern "C" unsigned long g_005ce544;
extern "C" unsigned long g_005ce548;
extern "C" unsigned long g_005ce54c;
BLDeterminationView::~BLDeterminationView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ce340 + g_005ce3b8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ce372 + g_005ce3bc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDeterminationView::BLDeterminationView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005ce43c + g_005ce494);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ce46a + g_005ce498,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLDeterminationView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
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
  func_0079e45c(auStack_20,&g_005ce4f6 + g_005ce54c,auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar4 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar4)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_30);
  return;
}

bool BLDeterminationView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLDeterminationPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLDeterminationView::initView();
    ((BLDeterminationPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLDeterminationView*)((int)this));
  }
  return iVar1;
}

void BLDeterminationView::onEnter()
{
  ((BLDeterminationPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDeterminationView::onExit()
{
  ((BLDeterminationPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
