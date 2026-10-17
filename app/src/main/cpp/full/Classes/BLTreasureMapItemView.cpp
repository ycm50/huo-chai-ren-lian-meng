#include "BLTreasureMapItemView.h"
#include "BLLeakUtils.h"
#include "BLTreasureMapItemPresenter.h"
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
extern "C" unsigned long UNK_006aecd8;
extern "C" unsigned long UNK_006aed1c;
extern "C" unsigned long UNK_006aed60;
extern "C" unsigned long UNK_006aed88;
extern "C" unsigned long UNK_006aeda0;
extern "C" unsigned long UNK_006aedce;
extern "C" unsigned long UNK_006aee1e;
extern "C" unsigned long UNK_006aee64;
extern "C" unsigned long UNK_006aeeba;
extern "C" unsigned long UNK_006aeebc;
extern "C" unsigned long _UNK_006aed4c;
extern "C" unsigned long _UNK_006aed50;
extern "C" unsigned long _UNK_006aed64;
extern "C" unsigned long _UNK_006aed8c;
extern "C" unsigned long _UNK_006aedf8;
extern "C" unsigned long _UNK_006aedfc;
extern "C" unsigned long _UNK_006aeef4;
extern "C" unsigned long _UNK_006aeef8;
extern "C" unsigned long _UNK_006aeefc;
extern "C" unsigned long _UNK_006aef00;
extern "C" unsigned long _UNK_006aef04;
extern "C" unsigned long g_006aecd8;
extern "C" unsigned long g_006aed1c;
extern "C" unsigned long g_006aed4c;
extern "C" unsigned long g_006aed50;
extern "C" unsigned long g_006aed60;
extern "C" unsigned long g_006aed64;
extern "C" unsigned long g_006aed88;
extern "C" unsigned long g_006aed8c;
extern "C" unsigned long g_006aeda0;
extern "C" unsigned long g_006aedce;
extern "C" unsigned long g_006aedf8;
extern "C" unsigned long g_006aedfc;
extern "C" unsigned long g_006aee1e;
extern "C" unsigned long g_006aee64;
extern "C" unsigned long g_006aeeba;
extern "C" unsigned long g_006aeebc;
extern "C" unsigned long g_006aeef4;
extern "C" unsigned long g_006aeef8;
extern "C" unsigned long g_006aeefc;
extern "C" unsigned long g_006aef00;
extern "C" unsigned long g_006aef04;
BLTreasureMapItemView::~BLTreasureMapItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006aecd8 + g_006aed4c);
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
  func_0079e45c(&uStack_14,&g_006aed1c + g_006aed50,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureMapItemView::BLTreasureMapItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006aeda0 + g_006aedf8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006aedce + g_006aedfc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLTreasureMapItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTreasureMapItemView::getIcon()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTreasureMapItemView::getMask()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTreasureMapItemView::getLabPass()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

bool BLTreasureMapItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTreasureMapItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTreasureMapItemView::initView();
    ((BLTreasureMapItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreasureMapItemView*)((int)this));
  }
  return iVar1;
}

void BLTreasureMapItemView::onEnter()
{
  ((BLTreasureMapItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureMapItemView::onExit()
{
  ((BLTreasureMapItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTreasureMapItemView::initView()
{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006aee1e + (intptr_t)(g_006aeef8)),auStack_2c);
  iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar1;
  func_0079e2bc(auStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar2 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar2)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006aee64 + (intptr_t)(g_006aeefc)),auStack_2c);
  iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x44)) = iVar1;
  func_0079e2bc(auStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar2 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar2)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x90))((int *)*(int *)((int)this + 4*(0x44)),0);
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006aeeba + (intptr_t)(g_006aef00)), (char const*)(unsigned char *)((char *)&g_006aeebc + (intptr_t)(g_006aef04)), 0x41800000));
  *(int *)((int)this + 4*(0x45)) = iVar1;
  (**(code **)(*(int *)this + 200))(((int)this),iVar1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x90))((int *)*(int *)((int)this + 4*(0x45)),0);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_28);
  return;
}
