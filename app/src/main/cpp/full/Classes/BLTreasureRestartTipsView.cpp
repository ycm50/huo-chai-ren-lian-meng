#include "BLTreasureRestartTipsView.h"
#include "BLLeakUtils.h"
#include "BLTreasureRestartTipsPresenter.h"
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
extern "C" unsigned long UNK_006b0680;
extern "C" unsigned long UNK_006b06c4;
extern "C" unsigned long UNK_006b0708;
extern "C" unsigned long UNK_006b0730;
extern "C" unsigned long UNK_006b07f6;
extern "C" unsigned long UNK_006b0834;
extern "C" unsigned long UNK_006b0836;
extern "C" unsigned long UNK_006b0872;
extern "C" unsigned long UNK_006b089c;
extern "C" unsigned long UNK_006b0918;
extern "C" unsigned long UNK_006b091a;
extern "C" unsigned long UNK_006b0958;
extern "C" unsigned long UNK_006b09d6;
extern "C" unsigned long UNK_006b09d8;
extern "C" unsigned long _DAT_006b07d0;
extern "C" unsigned long _DAT_006b07d4;
extern "C" unsigned long _UNK_006b06f4;
extern "C" unsigned long _UNK_006b06f8;
extern "C" unsigned long _UNK_006b070c;
extern "C" unsigned long _UNK_006b0734;
extern "C" unsigned long _UNK_006b0a28;
extern "C" unsigned long _UNK_006b0a2c;
extern "C" unsigned long _UNK_006b0a30;
extern "C" unsigned long _UNK_006b0a34;
extern "C" unsigned long _UNK_006b0a38;
extern "C" unsigned long _UNK_006b0a3c;
extern "C" unsigned long _UNK_006b0a40;
extern "C" unsigned long _UNK_006b0a44;
extern "C" unsigned long _UNK_006b0a48;
extern "C" unsigned long _UNK_006b0a4c;
extern "C" unsigned long _UNK_006b0a50;
extern "C" unsigned long _UNK_006b0a54;
extern "C" unsigned long _UNK_006b0a58;
extern "C" unsigned long _UNK_006b0a5c;
extern "C" unsigned long _UNK_006b0a60;
extern "C" unsigned long _UNK_006b0a64;
extern "C" unsigned long _UNK_006b0a68;
extern "C" unsigned long _UNK_006b0a6c;
extern "C" unsigned long _UNK_006b0a70;
extern "C" unsigned long _UNK_006b0a74;
extern "C" unsigned long g_006b0680;
extern "C" unsigned long g_006b06c4;
extern "C" unsigned long g_006b06f4;
extern "C" unsigned long g_006b06f8;
extern "C" unsigned long g_006b0708;
extern "C" unsigned long g_006b070c;
extern "C" unsigned long g_006b0730;
extern "C" unsigned long g_006b0734;
extern "C" unsigned long g_006b07d0;
extern "C" unsigned long g_006b07d4;
extern "C" unsigned long g_006b07f6;
extern "C" unsigned long g_006b0834;
extern "C" unsigned long g_006b0836;
extern "C" unsigned long g_006b0872;
extern "C" unsigned long g_006b089c;
extern "C" unsigned long g_006b0918;
extern "C" unsigned long g_006b091a;
extern "C" unsigned long g_006b0958;
extern "C" unsigned long g_006b09d6;
extern "C" unsigned long g_006b09d8;
extern "C" unsigned long g_006b0a28;
extern "C" unsigned long g_006b0a2c;
extern "C" unsigned long g_006b0a30;
extern "C" unsigned long g_006b0a34;
extern "C" unsigned long g_006b0a38;
extern "C" unsigned long g_006b0a3c;
extern "C" unsigned long g_006b0a40;
extern "C" unsigned long g_006b0a44;
extern "C" unsigned long g_006b0a48;
extern "C" unsigned long g_006b0a4c;
extern "C" unsigned long g_006b0a50;
extern "C" unsigned long g_006b0a54;
extern "C" unsigned long g_006b0a58;
extern "C" unsigned long g_006b0a5c;
extern "C" unsigned long g_006b0a60;
extern "C" unsigned long g_006b0a64;
extern "C" unsigned long g_006b0a68;
extern "C" unsigned long g_006b0a6c;
extern "C" unsigned long g_006b0a70;
extern "C" unsigned long g_006b0a74;
BLTreasureRestartTipsView::~BLTreasureRestartTipsView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006b0680 + g_006b06f4);
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
  func_0079e45c(&uStack_14,&g_006b06c4 + g_006b06f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureRestartTipsView::BLTreasureRestartTipsView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006b07d0 + 0x6b0778);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTreasureRestartTipsView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLTreasureRestartTipsView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTreasureRestartTipsView::getLabIntroduce()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTreasureRestartTipsView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTreasureRestartTipsView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

bool BLTreasureRestartTipsView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTreasureRestartTipsPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTreasureRestartTipsView::initView();
    ((BLTreasureRestartTipsPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreasureRestartTipsView*)((int)this));
  }
  return iVar1;
}

void BLTreasureRestartTipsView::onEnter()
{
  ((BLTreasureRestartTipsPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureRestartTipsView::onExit()
{
  ((BLTreasureRestartTipsPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTreasureRestartTipsView::initView()
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 auStack_38 [4];
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006b07f6 + (intptr_t)(g_006b0a30)),auStack_28);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar5 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006b0834 + (intptr_t)(g_006b0a34)), (char const*)(unsigned char *)((char *)&g_006b0836 + (intptr_t)(g_006b0a38)), g_006b0a3c));
  *(int *)((int)this + 4*(0x43)) = iVar2;
  (**(code **)(*(int *)this + 200))(((int)this),iVar2);
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x43)),(unsigned char *)((char *)&g_006b0872 + (intptr_t)(g_006b0a44)));
  0 /* ctorZero */;
  uStack_34 = 0;
  uStack_33 = 0xe6;
  uStack_32 = 0x50;
  iVar3 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar2 = (undefined4)(intptr_t)(g_006b0a50);
  *(int *)((int)this + 4*(0x44)) = iVar3;
  func_0079e45c(auStack_20,&g_006b089c + iVar2,auStack_38);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar4,1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x294))((int *)*(int *)((int)this + 4*(0x44)),0);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006b0918 + (intptr_t)(g_006b0a5c)), (char const*)(unsigned char *)((char *)&g_006b091a + (intptr_t)(g_006b0a60)), g_006b0a64);
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  (*pcVar5)(piVar1,uVar4);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,&uStack_34);
  iVar3 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar2 = (undefined4)(intptr_t)(g_006b0a68);
  *(int *)((int)this + 4*(0x45)) = iVar3;
  func_0079e45c(auStack_20,&g_006b0958 + iVar2,auStack_38);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar4,1);
  piVar1 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x294))((int *)*(int *)((int)this + 4*(0x45)),0);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006b09d6 + (intptr_t)(g_006b0a70)), (char const*)(unsigned char *)((char *)&g_006b09d8 + (intptr_t)(g_006b0a74)), g_006b0a64);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,&uStack_34);
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  uVar4 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x50))());
  (*pcVar5)(piVar1,uVar4);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_30);
  return;
}
