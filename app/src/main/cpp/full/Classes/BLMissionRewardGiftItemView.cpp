#include "BLMissionRewardGiftItemView.h"
#include "BLLeakUtils.h"
#include "BLMissionRewardGiftItemPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005bf3bc;
extern "C" unsigned long UNK_005bf3ee;
extern "C" unsigned long UNK_005bf448;
extern "C" unsigned long UNK_005bf498;
extern "C" unsigned long UNK_005bfb60;
extern "C" unsigned long UNK_005bfb8e;
extern "C" unsigned long UNK_005bfbe0;
extern "C" unsigned long UNK_005bfc0a;
extern "C" unsigned long UNK_005bfc48;
extern "C" unsigned long UNK_005bfc4a;
extern "C" unsigned long UNK_005bfc60;
extern "C" unsigned long UNK_005bfcd4;
extern "C" unsigned long _UNK_005bf434;
extern "C" unsigned long _UNK_005bf438;
extern "C" unsigned long _UNK_005bf44c;
extern "C" unsigned long _UNK_005bf49c;
extern "C" unsigned long _UNK_005bfbb8;
extern "C" unsigned long _UNK_005bfbbc;
extern "C" unsigned long _UNK_005bfd4c;
extern "C" unsigned long _UNK_005bfd50;
extern "C" unsigned long _UNK_005bfd54;
extern "C" unsigned long _UNK_005bfd58;
extern "C" unsigned long _UNK_005bfd5c;
extern "C" unsigned long _UNK_005bfd60;
extern "C" unsigned long _UNK_005bfd64;
extern "C" unsigned long _UNK_005bfd68;
extern "C" unsigned long _UNK_005bfd6c;
extern "C" unsigned long _UNK_005bfd70;
extern "C" unsigned long g_005bf3bc;
extern "C" unsigned long g_005bf3ee;
extern "C" unsigned long g_005bf434;
extern "C" unsigned long g_005bf438;
extern "C" unsigned long g_005bf448;
extern "C" unsigned long g_005bf44c;
extern "C" unsigned long g_005bf498;
extern "C" unsigned long g_005bf49c;
extern "C" unsigned long g_005bfb60;
extern "C" unsigned long g_005bfb8e;
extern "C" unsigned long g_005bfbb8;
extern "C" unsigned long g_005bfbbc;
extern "C" unsigned long g_005bfbe0;
extern "C" unsigned long g_005bfc0a;
extern "C" unsigned long g_005bfc48;
extern "C" unsigned long g_005bfc4a;
extern "C" unsigned long g_005bfc60;
extern "C" unsigned long g_005bfcd4;
extern "C" unsigned long g_005bfd4c;
extern "C" unsigned long g_005bfd50;
extern "C" unsigned long g_005bfd54;
extern "C" unsigned long g_005bfd58;
extern "C" unsigned long g_005bfd5c;
extern "C" unsigned long g_005bfd60;
extern "C" unsigned long g_005bfd64;
extern "C" unsigned long g_005bfd68;
extern "C" unsigned long g_005bfd6c;
extern "C" unsigned long g_005bfd70;
BLMissionRewardGiftItemView::~BLMissionRewardGiftItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005bf3bc + g_005bf434);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005bf3ee + g_005bf438,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionRewardGiftItemView::BLMissionRewardGiftItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005bfb60 + g_005bfbb8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005bfb8e + g_005bfbbc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMissionRewardGiftItemView::initView()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,&g_005bfbe0 + g_005bfd54,auStack_2c);
  iVar1 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x43)) = iVar1;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  func_0079e45c(auStack_20,&g_005bfc0a + g_005bfd58,auStack_2c);
  iVar1 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x44)) = iVar1;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x40))((int *)*(int *)((int)this + 4*(0x44)),g_005bfd5c);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x90))((int *)*(int *)((int)this + 4*(0x44)),0);
  piVar2 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_005bfc48 + g_005bfd60, (char const*)&g_005bfc4a + g_005bfd64, g_005bfd68);
  *(int *)((int)this + 4*(0x45)) = (int)piVar2;
  (**(code **)(*piVar2 + 0x1b4))(piVar2,&g_005bfc60 + g_005bfd6c);
  piVar2 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar2 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar2,auStack_20);
  piVar2 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar2 + 0x4c);
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_24 + -0x80000000),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar2,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  piVar2 = (int *)cocos2d::extension::CCControlButton::create();
  *(int *)((int)this + 4*(0x46)) = (int)piVar2;
  (**(code **)(*piVar2 + 0x294))(piVar2,0);
  func_0079e45c(auStack_20,&g_005bfcd4 + g_005bfd70,auStack_2c);
  uVar3 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  piVar2 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar5 = *(code **)(*piVar2 + 0x28c);
  uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  0 /* ctorZero */;
  (*pcVar5)(piVar2,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x30c))((int *)*(int *)((int)this + 4*(0x46)),uVar3,1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_28);
  return;
}

bool BLMissionRewardGiftItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionRewardGiftItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionRewardGiftItemView::initView();
    ((BLMissionRewardGiftItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionRewardGiftItemView*)((int)this));
  }
  return iVar1;
}

void BLMissionRewardGiftItemView::onEnter()
{
  ((BLMissionRewardGiftItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionRewardGiftItemView::onExit()
{
  ((BLMissionRewardGiftItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
