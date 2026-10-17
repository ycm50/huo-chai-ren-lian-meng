#include "BLTreasureDiceView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCString.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "BLLeakUtils.h"
#include "BLTreasureDicePresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006ac588;
extern "C" unsigned long UNK_006ac5cc;
extern "C" unsigned long UNK_006ac610;
extern "C" unsigned long UNK_006ac638;
extern "C" unsigned long UNK_006ac650;
extern "C" unsigned long UNK_006ac67e;
extern "C" unsigned long UNK_006ac6e2;
extern "C" unsigned long UNK_006ac778;
extern "C" unsigned long UNK_006ac838;
extern "C" unsigned long UNK_006ac8f2;
extern "C" unsigned long UNK_006ac9a0;
extern "C" unsigned long UNK_006aca58;
extern "C" unsigned long UNK_006aca5c;
extern "C" unsigned long UNK_006acaa4;
extern "C" unsigned long UNK_006acb2c;
extern "C" unsigned long UNK_006acbd0;
extern "C" unsigned long UNK_006acc60;
extern "C" unsigned long UNK_006acc62;
extern "C" unsigned long UNK_006accac;
extern "C" unsigned long UNK_006accc0;
extern "C" unsigned long UNK_006acd3a;
extern "C" unsigned long UNK_006acd3c;
extern "C" unsigned long UNK_006acd82;
extern "C" unsigned long UNK_006acda0;
extern "C" unsigned long UNK_006ace60;
extern "C" unsigned long UNK_006acfb2;
extern "C" unsigned long UNK_006ad0b4;
extern "C" unsigned long UNK_006ad1b6;
extern "C" unsigned long UNK_006ad1ba;
extern "C" unsigned long UNK_006ad25c;
extern "C" unsigned long UNK_006ad2f8;
extern "C" unsigned long UNK_006ad3d2;
extern "C" unsigned long UNK_006ad462;
extern "C" unsigned long UNK_006ad4a2;
extern "C" unsigned long UNK_006ad54e;
extern "C" unsigned long UNK_006ad550;
extern "C" unsigned long UNK_006ad5f4;
extern "C" unsigned long _UNK_006ac5fc;
extern "C" unsigned long _UNK_006ac600;
extern "C" unsigned long _UNK_006ac614;
extern "C" unsigned long _UNK_006ac63c;
extern "C" unsigned long _UNK_006ac6a8;
extern "C" unsigned long _UNK_006ac6ac;
extern "C" unsigned long _UNK_006acac4;
extern "C" unsigned long _UNK_006acac8;
extern "C" unsigned long _UNK_006acacc;
extern "C" unsigned long _UNK_006acad0;
extern "C" unsigned long _UNK_006acad4;
extern "C" unsigned long _UNK_006acad8;
extern "C" unsigned long _UNK_006acadc;
extern "C" unsigned long _UNK_006acae0;
extern "C" unsigned long _UNK_006acae4;
extern "C" unsigned long _UNK_006acae8;
extern "C" unsigned long _UNK_006acaec;
extern "C" unsigned long _UNK_006acaf0;
extern "C" unsigned long _UNK_006acaf4;
extern "C" unsigned long _UNK_006acaf8;
extern "C" unsigned long _UNK_006acafc;
extern "C" unsigned long _UNK_006acf04;
extern "C" unsigned long _UNK_006acf08;
extern "C" unsigned long _UNK_006acf0c;
extern "C" unsigned long _UNK_006acf10;
extern "C" unsigned long _UNK_006acf14;
extern "C" unsigned long _UNK_006acf18;
extern "C" unsigned long _UNK_006acf1c;
extern "C" unsigned long _UNK_006acf20;
extern "C" unsigned long _UNK_006acf24;
extern "C" unsigned long _UNK_006acf28;
extern "C" unsigned long _UNK_006acf2c;
extern "C" unsigned long _UNK_006acf30;
extern "C" unsigned long _UNK_006acf34;
extern "C" unsigned long _UNK_006acf38;
extern "C" unsigned long _UNK_006acf3c;
extern "C" unsigned long _UNK_006acf40;
extern "C" unsigned long _UNK_006acf44;
extern "C" unsigned long _UNK_006acf48;
extern "C" unsigned long _UNK_006acf4c;
extern "C" unsigned long _UNK_006ad394;
extern "C" unsigned long _UNK_006ad398;
extern "C" unsigned long _UNK_006ad39c;
extern "C" unsigned long _UNK_006ad3a0;
extern "C" unsigned long _UNK_006ad3a4;
extern "C" unsigned long _UNK_006ad3a8;
extern "C" unsigned long _UNK_006ad3ac;
extern "C" unsigned long _UNK_006ad3b0;
extern "C" unsigned long _UNK_006ad3b4;
extern "C" unsigned long _UNK_006ad3b8;
extern "C" unsigned long _UNK_006ad3bc;
extern "C" unsigned long _UNK_006ad3c0;
extern "C" unsigned long _UNK_006ad3c4;
extern "C" unsigned long _UNK_006ad6d4;
extern "C" unsigned long _UNK_006ad6d8;
extern "C" unsigned long _UNK_006ad6dc;
extern "C" unsigned long _UNK_006ad6e0;
extern "C" unsigned long _UNK_006ad6e4;
extern "C" unsigned long _UNK_006ad6e8;
extern "C" unsigned long _UNK_006ad6ec;
extern "C" unsigned long _UNK_006ad6f0;
extern "C" unsigned long g_006ac588;
extern "C" unsigned long g_006ac5cc;
extern "C" unsigned long g_006ac5fc;
extern "C" unsigned long g_006ac600;
extern "C" unsigned long g_006ac610;
extern "C" unsigned long g_006ac614;
extern "C" unsigned long g_006ac638;
extern "C" unsigned long g_006ac63c;
extern "C" unsigned long g_006ac650;
extern "C" unsigned long g_006ac67e;
extern "C" unsigned long g_006ac6a8;
extern "C" unsigned long g_006ac6ac;
extern "C" unsigned long g_006ac6e2;
extern "C" unsigned long g_006ac778;
extern "C" unsigned long g_006ac838;
extern "C" unsigned long g_006ac8f2;
extern "C" unsigned long g_006ac9a0;
extern "C" unsigned long g_006aca58;
extern "C" unsigned long g_006aca5c;
extern "C" unsigned long g_006acaa4;
extern "C" unsigned long g_006acac4;
extern "C" unsigned long g_006acac8;
extern "C" unsigned long g_006acacc;
extern "C" unsigned long g_006acad0;
extern "C" unsigned long g_006acad4;
extern "C" unsigned long g_006acad8;
extern "C" unsigned long g_006acadc;
extern "C" unsigned long g_006acae0;
extern "C" unsigned long g_006acae4;
extern "C" unsigned long g_006acae8;
extern "C" unsigned long g_006acaec;
extern "C" unsigned long g_006acaf0;
extern "C" unsigned long g_006acaf4;
extern "C" unsigned long g_006acaf8;
extern "C" unsigned long g_006acafc;
extern "C" unsigned long g_006acb2c;
extern "C" unsigned long g_006acbd0;
extern "C" unsigned long g_006acc60;
extern "C" unsigned long g_006acc62;
extern "C" unsigned long g_006accac;
extern "C" unsigned long g_006accc0;
extern "C" unsigned long g_006acd3a;
extern "C" unsigned long g_006acd3c;
extern "C" unsigned long g_006acd82;
extern "C" unsigned long g_006acda0;
extern "C" unsigned long g_006ace60;
extern "C" unsigned long g_006acf04;
extern "C" unsigned long g_006acf08;
extern "C" unsigned long g_006acf0c;
extern "C" unsigned long g_006acf10;
extern "C" unsigned long g_006acf14;
extern "C" unsigned long g_006acf18;
extern "C" unsigned long g_006acf1c;
extern "C" unsigned long g_006acf20;
extern "C" unsigned long g_006acf24;
extern "C" unsigned long g_006acf28;
extern "C" unsigned long g_006acf2c;
extern "C" unsigned long g_006acf30;
extern "C" unsigned long g_006acf34;
extern "C" unsigned long g_006acf38;
extern "C" unsigned long g_006acf3c;
extern "C" unsigned long g_006acf40;
extern "C" unsigned long g_006acf44;
extern "C" unsigned long g_006acf48;
extern "C" unsigned long g_006acf4c;
extern "C" unsigned long g_006acfb2;
extern "C" unsigned long g_006ad0b4;
extern "C" unsigned long g_006ad1b6;
extern "C" unsigned long g_006ad1ba;
extern "C" unsigned long g_006ad25c;
extern "C" unsigned long g_006ad2f8;
extern "C" unsigned long g_006ad394;
extern "C" unsigned long g_006ad398;
extern "C" unsigned long g_006ad39c;
extern "C" unsigned long g_006ad3a0;
extern "C" unsigned long g_006ad3a4;
extern "C" unsigned long g_006ad3a8;
extern "C" unsigned long g_006ad3ac;
extern "C" unsigned long g_006ad3b0;
extern "C" unsigned long g_006ad3b4;
extern "C" unsigned long g_006ad3b8;
extern "C" unsigned long g_006ad3bc;
extern "C" unsigned long g_006ad3c0;
extern "C" unsigned long g_006ad3c4;
extern "C" unsigned long g_006ad3d2;
extern "C" unsigned long g_006ad462;
extern "C" unsigned long g_006ad4a2;
extern "C" unsigned long g_006ad54e;
extern "C" unsigned long g_006ad550;
extern "C" unsigned long g_006ad5f4;
extern "C" unsigned long g_006ad6d4;
extern "C" unsigned long g_006ad6d8;
extern "C" unsigned long g_006ad6dc;
extern "C" unsigned long g_006ad6e0;
extern "C" unsigned long g_006ad6e4;
extern "C" unsigned long g_006ad6e8;
extern "C" unsigned long g_006ad6ec;
extern "C" unsigned long g_006ad6f0;
BLTreasureDiceView::~BLTreasureDiceView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006ac588 + g_006ac5fc);
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
  func_0079e45c(&uStack_14,&g_006ac5cc + g_006ac600,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureDiceView::BLTreasureDiceView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006ac650 + g_006ac6a8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006ac67e + g_006ac6ac,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


undefined4 BLTreasureDiceView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTreasureDiceView::getBtnRestart()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTreasureDiceView::getLabRestart()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLTreasureDiceView::getBtnGetReward()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLTreasureDiceView::getLabGetReward()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLTreasureDiceView::getLabRestartTimes()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLTreasureDiceView::getLabFreeIntro()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLTreasureDiceView::getLabFreeDiceTimes()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLTreasureDiceView::getLabSpecialDicePrice()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLTreasureDiceView::getSpDiamondIcon()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLTreasureDiceView::getBtnNormalDice()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLTreasureDiceView::getLabNormalDicePrice()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

bool BLTreasureDiceView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTreasureDicePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTreasureDiceView::initView();
    ((BLTreasureDicePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreasureDiceView*)((int)this));
  }
  return iVar1;
}

void BLTreasureDiceView::onEnter()
{
  ((BLTreasureDicePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureDiceView::onExit()
{
  ((BLTreasureDicePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLTreasureDiceView::initView()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined *puVar13;
  uint uVar14;
  code *pcVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); uStack_40 = hw_fbits(_ws.width); iStack_3c = hw_fbits(_ws.height); }
  uVar1 = (undefined4)(func_0079e4fc(uStack_40,0x3e800000));
  0 /* ctorZero */;
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006ac6e2 + (intptr_t)(g_006acac4)),auStack_28);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  iVar11 = (int)*(int *)&(*piVar2);
  pcVar15 = *(code **)(iVar11 + 0x1d4);
  uVar1 = (undefined4)(func_0079e4fc(iStack_3c,g_006acac8,0x1d4,iVar11,iVar11));
  uVar1 = (undefined4)(func_0079e4dc(uVar1,g_006acacc));
  0 /* ctorZero */;
  (*pcVar15)(piVar2,&uStack_20);
  iVar11 = (int)*(int *)&(*piVar2);
  pcVar15 = *(code **)(iVar11 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_3c + -0x80000000,0x3f000000));
  iVar11 = (undefined4)(intptr_t)((**(code **)(iVar11 + 0x8c))(piVar2));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar3));
  0 /* ctorZero */;
  (*pcVar15)(piVar2,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar2);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006ac778 + (intptr_t)(g_006acad4)),auStack_28);
  piVar4 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  iVar11 = (int)*(int *)&(*piVar4);
  pcVar15 = *(code **)(iVar11 + 0x1d4);
  uVar1 = (undefined4)(func_0079e4fc(iStack_3c,g_006acad8,0x1d4,iVar11,iVar11));
  uVar1 = (undefined4)(func_0079e4dc(uVar1,g_006acacc));
  0 /* ctorZero */;
  (*pcVar15)(piVar4,&uStack_20);
  pcVar15 = *(code **)(*piVar4 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_3c + -0x80000000,0x3f000000));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,*(undefined4 *)(iVar11 + 4)));
  uVar1 = (undefined4)(func_0079e59c(uVar1,g_006acadc));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar3));
  0 /* ctorZero */;
  (*pcVar15)(piVar4,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar4);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006ac838 + (intptr_t)(g_006acae0)),auStack_28);
  piVar5 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  iVar11 = (int)*(int *)&(*piVar5);
  pcVar15 = *(code **)(iVar11 + 0x1d4);
  uVar1 = (undefined4)(func_0079e4fc(iStack_3c,g_006acae4,0x1d4,iVar11,iVar11));
  uVar1 = (undefined4)(func_0079e4dc(uVar1,g_006acacc));
  0 /* ctorZero */;
  (*pcVar15)(piVar5,&uStack_20);
  pcVar15 = *(code **)(*piVar5 + 0x4c);
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x50)))(piVar4));
  uVar3 = (undefined4)(*(undefined4 *)(iVar11 + 4));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4));
  uVar1 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar3,uVar1));
  uVar1 = (undefined4)(func_0079e59c(uVar1,g_006acadc));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x8c)))(piVar5));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar3));
  0 /* ctorZero */;
  (*pcVar15)(piVar5,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar5);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006ac8f2 + (intptr_t)(g_006acae8)),auStack_28);
  piVar6 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar15 = *(code **)(*piVar6 + 0x1d4);
  (**(code **)(*(int *)(piVar6) + (0x1cc)))(&uStack_20,piVar6);
  (*pcVar15)(piVar6,&uStack_20);
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x50)))(piVar2);
  uVar12 = (undefined4)(*puVar7);
  uVar1 = (undefined4)(func_0079e4fc(iStack_3c + -0x80000000,0x3f000000));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,*(undefined4 *)(iVar11 + 4)));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar3));
  0 /* ctorZero */;
  (*pcVar15)(piVar6,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar6);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006ac9a0 + (intptr_t)(g_006acaec)),auStack_28);
  puVar16 = &uStack_20;
  piVar8 = (int *)0 /* ctorZero */;
  func_0079e2bc(puVar16);
  pcVar15 = *(code **)(*piVar8 + 0x1d4);
  (**(code **)(*(int *)(piVar8) + (0x1cc)))(puVar16,piVar8);
  (*pcVar15)(piVar8,puVar16);
  pcVar15 = *(code **)(*piVar8 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x50)))(piVar4);
  uVar12 = (undefined4)(*puVar7);
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x50)))(piVar4));
  uVar3 = (undefined4)(*(undefined4 *)(iVar11 + 4));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4));
  uVar1 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar3,uVar1));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar3));
  0 /* ctorZero */;
  (*pcVar15)(piVar8,puVar16);
  (**(code **)(*(int *)this + 200))(((int)this),piVar8);
  puVar13 = (unsigned char *)((char *)&g_006aca58 + (intptr_t)(g_006acaf0));
  piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006aca5c + (intptr_t)(g_006acaf4)), (char const*)puVar13, g_006acaf8);
  pcVar15 = *(code **)(*piVar9 + 0x1b4);
  puVar17 = puVar16;
  *puVar16 = 0xff;
  puVar16[1] = 0xff;
  puVar16[2] = 0;
  (*pcVar15)();
  pcVar15 = *(code **)(*piVar9 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x50)))(piVar6));
  (*pcVar15)(piVar9,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),piVar9);
  piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006acaa4 + (intptr_t)(g_006acafc)), (char const*)puVar13, g_006acaf8);
  pcVar15 = *(code **)(*piVar6 + 0x1b4);
  puVar16 = puVar17;
  *puVar17 = 0xff;
  puVar17[1] = 0xff;
  puVar17[2] = 0;
  (*pcVar15)();
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x50)))(piVar8));
  (*pcVar15)(piVar6,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),piVar6);
  iVar10 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar11 = (undefined4)(intptr_t)(g_006acf04);
  *(int *)((int)this + 4*(0x4c)) = iVar10;
  func_0079e45c(puVar16,&g_006acb2c + iVar11,auStack_28);
  puVar16 = &uStack_20;
  piVar6 = (int *)0 /* ctorZero */;
  func_0079e2bc(puVar16);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 0x30c))((int *)*(int *)((int)this + 4*(0x4c)),piVar6,1);
  piVar8 = (int *)*(int *)((int)this + 4*(0x4c));
  pcVar15 = *(code **)(*piVar8 + 0x28c);
  (**(code **)(*(int *)(piVar6) + (0x1cc)))(puVar16,piVar6);
  (*pcVar15)(piVar8,puVar16);
  piVar6 = (int *)*(int *)((int)this + 4*(0x4c));
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x50)))(piVar2));
  uVar1 = (undefined4)(func_0079e59c(*(undefined4 *)(iVar11 + 4),g_006acf08));
  0 /* ctorZero */;
  (*pcVar15)(piVar6,puVar16);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 0x294))((int *)*(int *)((int)this + 4*(0x4c)),0);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x4c)));
  iVar10 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar11 = (undefined4)(intptr_t)(g_006acf10);
  *(int *)((int)this + 4*(0x43)) = iVar10;
  func_0079e45c(puVar16,&g_006acbd0 + iVar11,auStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),uVar1,1);
  piVar6 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar15 = *(code **)(*piVar6 + 0x28c);
  0 /* ctorZero */;
  (*pcVar15)(piVar6,&uStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x50)))(piVar5));
  uVar1 = (undefined4)(func_0079e59c(*(undefined4 *)(iVar11 + 4),g_006acf08));
  0 /* ctorZero */;
  (*pcVar15)(piVar6,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006acc60 + (intptr_t)(g_006acf1c)), (char const*)(unsigned char *)((char *)&g_006acc62 + (intptr_t)(g_006acf20)), g_006acf24);
  *(int *)((int)this + 4*(0x44)) = (int)piVar6;
  uStack_20 = 0xff;
  uStack_1f = 0xa0;
  uStack_1e = 10;
  (**(code **)(*(int *)(piVar6) + (0x1b4)))(piVar6,&uStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
  (*pcVar15)(piVar6,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x44))))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_006accac + (intptr_t)(g_006acf28)), 0x3f800000, 1);
  iVar10 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar11 = (undefined4)(intptr_t)(g_006acf2c);
  *(int *)((int)this + 4*(0x45)) = iVar10;
  func_0079e45c(&uStack_20,&g_006accc0 + iVar11,auStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar1,1);
  piVar6 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar15 = *(code **)(*piVar6 + 0x28c);
  0 /* ctorZero */;
  (*pcVar15)(piVar6,&uStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
  (*pcVar15)(piVar6,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x90))((int *)*(int *)((int)this + 4*(0x45)),0);
  piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006acd3a + (intptr_t)(g_006acf30)), (char const*)(unsigned char *)((char *)&g_006acd3c + (intptr_t)(g_006acf34)), g_006acf24);
  *(int *)((int)this + 4*(0x46)) = (int)piVar6;
  uStack_20 = 0xff;
  uStack_1f = 0xa0;
  uStack_1e = 10;
  (**(code **)(*(int *)(piVar6) + (0x1b4)))(piVar6,&uStack_20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x50))());
  (*pcVar15)(piVar6,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x46))))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_006acd82 + (intptr_t)(g_006acf38)), 0x3f800000, 1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x90))((int *)*(int *)((int)this + 4*(0x46)),0);
  iVar11 = 1;
  do {
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_006acda0 + (intptr_t)(g_006acf3c)), iVar11);
    uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e45c(&uStack_20,uVar1,auStack_28);
    uVar1 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    piVar6 = (int *)cocos2d::extension::CCControlButton::create();
    (**(code **)(*(int *)(piVar6) + (0x30c)))(piVar6,uVar1,1);
    pcVar15 = *(code **)(*piVar6 + 0x28c);
    0 /* ctorZero */;
    (*pcVar15)(piVar6,&uStack_20);
    pcVar15 = *(code **)(*piVar6 + 0x4c);
    uVar14 = (undefined4)(iVar11 - 1);
    uVar1 = (undefined4)(func_0079e2ec((uVar14 & 1) * 0x46 + 10));
    uVar3 = (undefined4)(func_0079e2ec((1 - (int)uVar14 / 2) * 0x41));
    0 /* ctorZero */;
    (*pcVar15)(piVar6,&uStack_20);
    (**(code **)(*(int *)(piVar6) + (0x294)))(piVar6,0);
    (**(code **)(*(int *)(piVar6) + (0x11c)))(piVar6,iVar11);
    (**(code **)(*(int *)this + 200))(((int)this),piVar6);
    iVar11 = (undefined4)(intptr_t)(iVar11 + 1);
  } while (iVar11 != 7);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006ace60 + (intptr_t)(g_006acf44)),auStack_28);
  piVar6 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar15 = *(code **)(*piVar6 + 0x88);
  0 /* ctorZero */;
  uVar1 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(uVar1,uVar3));
  puVar16 = auStack_28;
  0 /* ctorZero */;
  uVar12 = (undefined4)(*(undefined4 *)(puVar16 + 4));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(uVar12,uVar3));
  0 /* ctorZero */;
  (*pcVar15)(piVar6,&uStack_20);
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar5) + (0x50)))(piVar5);
  uVar1 = (undefined4)(func_0079e59c(*puVar7,g_006acf4c));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x50)))(piVar5));
  uVar12 = (undefined4)(*(undefined4 *)(iVar11 + 4));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x8c)))(piVar5));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar3 = (undefined4)(func_0079e57c(uVar12,uVar3));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6));
  uVar12 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar3 = (undefined4)(func_0079e59c(uVar3,uVar12));
  uVar3 = (undefined4)(func_0079e59c(uVar3,0x40800000));
  0 /* ctorZero */;
  (*pcVar15)(piVar6,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar6);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006acfb2 + (intptr_t)(g_006ad394)),puVar16);
  piVar6 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar15 = *(code **)(*piVar6 + 0x88);
  0 /* ctorZero */;
  uVar1 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(uVar1,uVar3));
  puVar16 = auStack_28;
  0 /* ctorZero */;
  uVar12 = (undefined4)(*(undefined4 *)(puVar16 + 4));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(uVar12,uVar3));
  0 /* ctorZero */;
  (*pcVar15)(piVar6,&uStack_20);
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x50)))(piVar4);
  uVar1 = (undefined4)(func_0079e59c(*puVar7,g_006ad3a0));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x50)))(piVar4));
  uVar12 = (undefined4)(*(undefined4 *)(iVar11 + 4));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar3 = (undefined4)(func_0079e57c(uVar12,uVar3));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6));
  uVar12 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar3 = (undefined4)(func_0079e59c(uVar3,uVar12));
  uVar3 = (undefined4)(func_0079e59c(uVar3,0x40800000));
  0 /* ctorZero */;
  (*pcVar15)(piVar6,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar6);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006ad0b4 + (intptr_t)(g_006ad3a4)),puVar16);
  puVar16 = &uStack_20;
  piVar6 = (int *)0 /* ctorZero */;
  func_0079e2bc(puVar16);
  pcVar15 = *(code **)(*piVar6 + 0x88);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(auStack_30[0],uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(uStack_24,uVar3));
  0 /* ctorZero */;
  (*pcVar15)(piVar6,puVar16);
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x50)))(piVar2);
  uVar1 = (undefined4)(func_0079e59c(*puVar7,g_006ad3a0));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x50)))(piVar2));
  uVar12 = (undefined4)(*(undefined4 *)(iVar11 + 4));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar3 = (undefined4)(func_0079e57c(uVar12,uVar3));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6));
  uVar12 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar3 = (undefined4)(func_0079e59c(uVar3,uVar12));
  uVar3 = (undefined4)(func_0079e59c(uVar3,g_006ad3b0));
  0 /* ctorZero */;
  (*pcVar15)(piVar6,puVar16);
  (**(code **)(*(int *)this + 200))(((int)this),piVar6);
  puVar13 = (unsigned char *)((char *)&g_006ad1b6 + (intptr_t)(g_006ad3b4));
  piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006ad1ba + (intptr_t)(g_006ad3b8)), (char const*)puVar13, g_006ad3bc);
  pcVar15 = *(code **)(*piVar6 + 0x1b4);
  puVar17 = puVar16;
  *puVar16 = 0xff;
  puVar16[1] = 0xff;
  puVar16[2] = 0xff;
  (*pcVar15)();
  pcVar15 = *(code **)(*piVar6 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar5) + (0x50)))(piVar5);
  uVar12 = (undefined4)(*puVar7);
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x50)))(piVar5));
  uVar3 = (undefined4)(*(undefined4 *)(iVar11 + 4));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x8c)))(piVar5));
  uVar1 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar3,uVar1));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar3));
  uVar1 = (undefined4)(func_0079e59c(uVar1,g_006ad3b0));
  0 /* ctorZero */;
  (*pcVar15)(piVar6,puVar17);
  (**(code **)(*(int *)this + 200))(((int)this),piVar6);
  piVar5 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006ad25c + (intptr_t)(g_006ad3c0)), (char const*)puVar13, g_006ad3bc);
  *(int *)((int)this + 4*(0x47)) = (int)piVar5;
  pcVar15 = *(code **)(*piVar5 + 0x1b4);
  puVar16 = puVar17;
  *puVar17 = 0xff;
  puVar17[1] = 0xff;
  puVar17[2] = 0;
  (*pcVar15)();
  piVar5 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar15 = *(code **)(*piVar5 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar6) + (0x50)))(piVar6);
  uVar3 = (undefined4)(*puVar7);
  puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6);
  uVar1 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar3,uVar1));
  puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x8c))();
  uVar3 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar3));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x50)))(piVar6));
  0 /* ctorZero */;
  (*pcVar15)(piVar5,puVar16);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
  piVar5 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006ad2f8 + (intptr_t)(g_006ad3c4)), (char const*)puVar13, g_006ad3bc);
  *(int *)((int)this + 4*(0x48)) = (int)piVar5;
  pcVar15 = *(code **)(*piVar5 + 0x1b4);
  puVar17 = puVar16;
  *puVar16 = 0xff;
  puVar16[1] = 0xff;
  puVar16[2] = 0xff;
  (*pcVar15)();
  piVar5 = (int *)*(int *)((int)this + 4*(0x48));
  pcVar15 = *(code **)(*piVar5 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x50)))(piVar4);
  uVar12 = (undefined4)(*puVar7);
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x50)))(piVar4));
  uVar3 = (undefined4)(*(undefined4 *)(iVar11 + 4));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4));
  uVar1 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar3,uVar1));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x8c))());
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar3));
  uVar1 = (undefined4)(func_0079e59c(uVar1,g_006ad3b0));
  0 /* ctorZero */;
  (*pcVar15)(piVar5,puVar17);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x48)));
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006ad3d2 + (intptr_t)(g_006ad6d4)), (char const*)puVar13, g_006ad6d8);
  *(int *)((int)this + 4*(0x49)) = (int)piVar4;
  pcVar15 = *(code **)(*piVar4 + 0x1b4);
  puVar16 = puVar17;
  *puVar17 = 0xff;
  puVar17[1] = 0xff;
  puVar17[2] = 0;
  (*pcVar15)();
  piVar4 = (int *)*(int *)((int)this + 4*(0x49));
  pcVar15 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar15)(piVar4,puVar16);
  piVar4 = (int *)*(int *)((int)this + 4*(0x49));
  pcVar15 = *(code **)(*piVar4 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x50))();
  uVar3 = (undefined4)(*puVar7);
  puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x8c))();
  uVar1 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar3,uVar1));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x50))());
  0 /* ctorZero */;
  (*pcVar15)(piVar4,puVar16);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x49)));
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006ad462 + (intptr_t)(g_006ad6dc)), (char const*)puVar13, g_006ad6d8);
  *(int *)((int)this + 4*(0x4a)) = (int)piVar4;
  pcVar15 = *(code **)(*piVar4 + 0x1b4);
  puVar17 = puVar16;
  *puVar16 = 0xff;
  puVar16[1] = 0xff;
  puVar16[2] = 0xff;
  (*pcVar15)();
  piVar4 = (int *)*(int *)((int)this + 4*(0x4a));
  pcVar15 = *(code **)(*piVar4 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x50))());
  (*pcVar15)(piVar4,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x4a)));
  func_0079e45c(puVar17,(unsigned char *)((char *)&g_006ad4a2 + (intptr_t)(g_006ad6e0)),auStack_28);
  iVar11 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x4b)) = iVar11;
  func_0079e2bc(&uStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x4b));
  pcVar15 = *(code **)(*piVar4 + 0x1d4);
  (**(code **)(*(int *)(piVar4) + (0x1cc)))(&uStack_20,piVar4);
  (*pcVar15)(piVar4,&uStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x4b));
  pcVar15 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar15)(piVar4,&uStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x4b));
  pcVar15 = *(code **)(*piVar4 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x50))());
  puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x8c))();
  uVar3 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
  uVar3 = (undefined4)(func_0079e59c(uVar3,g_006ad6e4));
  puVar16 = auStack_28;
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar1))->operator+(*(const CCPoint *)(void *)puVar16);
  (*pcVar15)(piVar4,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x4b)));
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006ad54e + (intptr_t)(g_006ad6e8)), (char const*)(unsigned char *)((char *)&g_006ad550 + (intptr_t)(g_006ad6ec)), g_006ad6d8);
  *(int *)((int)this + 4*(0x4d)) = (int)piVar4;
  uStack_20 = 0xff;
  uStack_1f = 0xff;
  uStack_1e = 0xff;
  (**(code **)(*(int *)(piVar4) + (0x1b4)))(piVar4,&uStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x4d));
  pcVar15 = *(code **)(*piVar4 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x50)))(piVar2);
  uVar12 = (undefined4)(*puVar7);
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x50)))(piVar2));
  uVar3 = (undefined4)(*(undefined4 *)(iVar11 + 4));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  uVar1 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar3,uVar1));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4d)) + 0x8c))());
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar11 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar3));
  uVar1 = (undefined4)(func_0079e59c(uVar1,g_006ad6e4));
  0 /* ctorZero */;
  (*pcVar15)(piVar4,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x4d)));
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006ad5f4 + (intptr_t)(g_006ad6f0)),puVar16);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar15 = *(code **)(*piVar2 + 0x88);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(&uStack_20,piVar2);
  (*pcVar15)(piVar2,&uStack_20);
  pcVar15 = *(code **)(*piVar2 + 0x7c);
  0 /* ctorZero */;
  (*pcVar15)(piVar2,&uStack_20);
  pcVar15 = *(code **)(*piVar2 + 0x4c);
  puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x4d)) + 0x50))();
  uVar3 = (undefined4)(*puVar7);
  puVar7 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x4d)) + 0x8c))();
  uVar1 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar3,uVar1));
  uVar1 = (undefined4)(func_0079e59c(uVar1,0x40000000));
  iVar11 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4d)) + 0x50))());
  0 /* ctorZero */;
  (*pcVar15)(piVar2,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar2);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_38);
  return;
}
