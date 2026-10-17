#include "BLLivenessMissionItemIconView.h"
#include "BLLeakUtils.h"
#include "BLLivenessMissionItemIconPresenter.h"
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
extern "C" unsigned long UNK_00580624;
extern "C" unsigned long UNK_00580656;
extern "C" unsigned long UNK_005806b0;
extern "C" unsigned long UNK_005808ac;
extern "C" unsigned long UNK_0058093c;
extern "C" unsigned long UNK_0058096a;
extern "C" unsigned long UNK_005809f8;
extern "C" unsigned long UNK_00580a38;
extern "C" unsigned long _UNK_0058069c;
extern "C" unsigned long _UNK_005806a0;
extern "C" unsigned long _UNK_005806b4;
extern "C" unsigned long _UNK_005808b0;
extern "C" unsigned long _UNK_00580994;
extern "C" unsigned long _UNK_00580998;
extern "C" unsigned long _UNK_00580a98;
extern "C" unsigned long _UNK_00580a9c;
extern "C" unsigned long _UNK_00580aa0;
extern "C" unsigned long g_00580624;
extern "C" unsigned long g_00580656;
extern "C" unsigned long g_0058069c;
extern "C" unsigned long g_005806a0;
extern "C" unsigned long g_005806b0;
extern "C" unsigned long g_005806b4;
extern "C" unsigned long g_005808ac;
extern "C" unsigned long g_005808b0;
extern "C" unsigned long g_0058093c;
extern "C" unsigned long g_0058096a;
extern "C" unsigned long g_00580994;
extern "C" unsigned long g_00580998;
extern "C" unsigned long g_005809f8;
extern "C" unsigned long g_00580a38;
extern "C" unsigned long g_00580a98;
extern "C" unsigned long g_00580a9c;
extern "C" unsigned long g_00580aa0;
BLLivenessMissionItemIconView::~BLLivenessMissionItemIconView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00580624 + g_0058069c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00580656 + g_005806a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessMissionItemIconView::BLLivenessMissionItemIconView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0058093c + g_00580994);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0058096a + g_00580998,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLLivenessMissionItemIconView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
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
  func_0079e45c(auStack_20,&g_005809f8 + g_00580a9c,auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar5 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar5)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  func_0079e45c(auStack_20,&g_00580a38 + g_00580aa0,auStack_28);
  iVar4 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x43)) = iVar4;
  func_0079e2bc(auStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar3 + 0x1d4);
  (**(code **)(*piVar3 + 0x1cc))(auStack_20,piVar3);
  (*pcVar5)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_30);
  return;
}

bool BLLivenessMissionItemIconView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLLivenessMissionItemIconPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLLivenessMissionItemIconView::initView();
    ((BLLivenessMissionItemIconPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLLivenessMissionItemIconView*)((int)this));
  }
  return iVar1;
}

void BLLivenessMissionItemIconView::onEnter()
{
  ((BLLivenessMissionItemIconPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLivenessMissionItemIconView::onExit()
{
  ((BLLivenessMissionItemIconPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
