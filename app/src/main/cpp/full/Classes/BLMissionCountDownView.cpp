#include "BLMissionCountDownView.h"
#include "BLLeakUtils.h"
#include "BLMissionCountDownPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005bc8d0;
extern "C" unsigned long UNK_005bc902;
extern "C" unsigned long UNK_005bc95c;
extern "C" unsigned long UNK_005bc984;
extern "C" unsigned long UNK_005bca86;
extern "C" unsigned long UNK_005bca88;
extern "C" unsigned long UNK_005bca9c;
extern "C" unsigned long _DAT_005bca5c;
extern "C" unsigned long _DAT_005bca60;
extern "C" unsigned long _UNK_005bc948;
extern "C" unsigned long _UNK_005bc94c;
extern "C" unsigned long _UNK_005bc960;
extern "C" unsigned long _UNK_005bc988;
extern "C" unsigned long _UNK_005bcad4;
extern "C" unsigned long _UNK_005bcad8;
extern "C" unsigned long _UNK_005bcadc;
extern "C" unsigned long _UNK_005bcae0;
extern "C" unsigned long g_005bc8d0;
extern "C" unsigned long g_005bc902;
extern "C" unsigned long g_005bc948;
extern "C" unsigned long g_005bc94c;
extern "C" unsigned long g_005bc95c;
extern "C" unsigned long g_005bc960;
extern "C" unsigned long g_005bc984;
extern "C" unsigned long g_005bc988;
extern "C" unsigned long g_005bca5c;
extern "C" unsigned long g_005bca60;
extern "C" unsigned long g_005bca86;
extern "C" unsigned long g_005bca88;
extern "C" unsigned long g_005bca9c;
extern "C" unsigned long g_005bcad4;
extern "C" unsigned long g_005bcad8;
extern "C" unsigned long g_005bcadc;
extern "C" unsigned long g_005bcae0;
BLMissionCountDownView::~BLMissionCountDownView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005bc8d0 + g_005bc948);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005bc902 + g_005bc94c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionCountDownView::BLMissionCountDownView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005bca5c + 0x5bca04);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionCountDownView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMissionCountDownView::initView()
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)auStack_28 = ((cocos2d::CCDirector *)uVar1)->getWinSize();
  piVar2 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_005bca88 + g_005bcad4, (char const*)&g_005bca86 + g_005bcad8, g_005bcadc);
  *(int *)((int)this + 4*(0x43)) = (int)piVar2;
  (**(code **)(*piVar2 + 0x1b4))(piVar2,&g_005bca9c + g_005bcae0);
  piVar2 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar3 = *(code **)(*piVar2 + 0x4c);
  0 /* ctorZero */;
  (*pcVar3)(piVar2,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_28);
  return;
}

bool BLMissionCountDownView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionCountDownPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionCountDownView::initView();
    ((BLMissionCountDownPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionCountDownView*)((int)this));
  }
  return iVar1;
}

void BLMissionCountDownView::onEnter()
{
  ((BLMissionCountDownPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionCountDownView::onExit()
{
  ((BLMissionCountDownPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
