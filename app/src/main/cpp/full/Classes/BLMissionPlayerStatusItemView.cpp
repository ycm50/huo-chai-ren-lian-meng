#include "BLMissionPlayerStatusItemView.h"
#include "BLLeakUtils.h"
#include "BLMissionPlayerStatusItemPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005be80c;
extern "C" unsigned long UNK_005be83e;
extern "C" unsigned long UNK_005be898;
extern "C" unsigned long UNK_005be8c0;
extern "C" unsigned long UNK_005be8d8;
extern "C" unsigned long UNK_005be906;
extern "C" unsigned long UNK_005be980;
extern "C" unsigned long UNK_005be9ac;
extern "C" unsigned long _UNK_005be884;
extern "C" unsigned long _UNK_005be888;
extern "C" unsigned long _UNK_005be89c;
extern "C" unsigned long _UNK_005be8c4;
extern "C" unsigned long _UNK_005be930;
extern "C" unsigned long _UNK_005be934;
extern "C" unsigned long _UNK_005be9e4;
extern "C" unsigned long _UNK_005be9e8;
extern "C" unsigned long g_005be80c;
extern "C" unsigned long g_005be83e;
extern "C" unsigned long g_005be884;
extern "C" unsigned long g_005be888;
extern "C" unsigned long g_005be898;
extern "C" unsigned long g_005be89c;
extern "C" unsigned long g_005be8c0;
extern "C" unsigned long g_005be8c4;
extern "C" unsigned long g_005be8d8;
extern "C" unsigned long g_005be906;
extern "C" unsigned long g_005be930;
extern "C" unsigned long g_005be934;
extern "C" unsigned long g_005be980;
extern "C" unsigned long g_005be9ac;
extern "C" unsigned long g_005be9e4;
extern "C" unsigned long g_005be9e8;
BLMissionPlayerStatusItemView::~BLMissionPlayerStatusItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005be80c + g_005be884);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005be83e + g_005be888,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionPlayerStatusItemView::BLMissionPlayerStatusItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005be8d8 + g_005be930);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005be906 + g_005be934,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMissionPlayerStatusItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x114)));
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


bool BLMissionPlayerStatusItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionPlayerStatusItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionPlayerStatusItemView::initView();
    ((BLMissionPlayerStatusItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionPlayerStatusItemView*)((int)this));
  }
  return iVar1;
}

void BLMissionPlayerStatusItemView::onEnter()
{
  ((BLMissionPlayerStatusItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionPlayerStatusItemView::onExit()
{
  ((BLMissionPlayerStatusItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMissionPlayerStatusItemView::initView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  func_0079e45c(&uStack_1c,&g_005be980 + g_005be9e4,&piStack_20);
  iVar1 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x43)) = iVar1;
  func_0079e2bc(&uStack_1c);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  func_0079e45c(&uStack_1c,&g_005be9ac + g_005be9e8,&piStack_20);
  iVar1 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x44)) = iVar1;
  func_0079e2bc(&uStack_1c);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x90))((int *)*(int *)((int)this + 4*(0x44)),0);
  return;
}
