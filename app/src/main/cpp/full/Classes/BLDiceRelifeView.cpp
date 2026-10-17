#include "BLDiceRelifeView.h"
#include "CCGeometry.h"
#include "CCScale9Sprite.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCLabelTTF.h"
#include "CCControlButton.h"
#include "CCDirector.h"
#include "BLDiceRelifePresenter.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062a298;
extern "C" unsigned long UNK_0062a2dc;
extern "C" unsigned long UNK_0062a320;
extern "C" unsigned long UNK_0062a348;
extern "C" unsigned long UNK_0062a500;
extern "C" unsigned long UNK_0062a5e2;
extern "C" unsigned long UNK_0062a678;
extern "C" unsigned long UNK_0062a778;
extern "C" unsigned long UNK_0062a77a;
extern "C" unsigned long UNK_0062a870;
extern "C" unsigned long UNK_0062a8a6;
extern "C" unsigned long UNK_0062a9e8;
extern "C" unsigned long UNK_0062a9ea;
extern "C" unsigned long UNK_0062aa68;
extern "C" unsigned long UNK_0062aa76;
extern "C" unsigned long UNK_0062ab8a;
extern "C" unsigned long UNK_0062abb4;
extern "C" unsigned long UNK_0062acbc;
extern "C" unsigned long UNK_0062acbe;
extern "C" unsigned long UNK_0062ad3c;
extern "C" unsigned long UNK_0062ad90;
extern "C" unsigned long UNK_0062ae36;
extern "C" unsigned long UNK_0062ae60;
extern "C" unsigned long UNK_0062af6e;
extern "C" unsigned long UNK_0062af70;
extern "C" unsigned long UNK_0062b064;
extern "C" unsigned long _DAT_0062a3e8;
extern "C" unsigned long _DAT_0062a3ec;
extern "C" unsigned long _UNK_0062a30c;
extern "C" unsigned long _UNK_0062a310;
extern "C" unsigned long _UNK_0062a324;
extern "C" unsigned long _UNK_0062a34c;
extern "C" unsigned long _UNK_0062a8e4;
extern "C" unsigned long _UNK_0062a8e8;
extern "C" unsigned long _UNK_0062a8ec;
extern "C" unsigned long _UNK_0062a8f0;
extern "C" unsigned long _UNK_0062a8f4;
extern "C" unsigned long _UNK_0062a8f8;
extern "C" unsigned long _UNK_0062a8fc;
extern "C" unsigned long _UNK_0062a900;
extern "C" unsigned long _UNK_0062a904;
extern "C" unsigned long _UNK_0062a908;
extern "C" unsigned long _UNK_0062a90c;
extern "C" unsigned long _UNK_0062a910;
extern "C" unsigned long _UNK_0062a914;
extern "C" unsigned long _UNK_0062a918;
extern "C" unsigned long _UNK_0062a91c;
extern "C" unsigned long _UNK_0062a920;
extern "C" unsigned long _UNK_0062ad44;
extern "C" unsigned long _UNK_0062ad48;
extern "C" unsigned long _UNK_0062ad4c;
extern "C" unsigned long _UNK_0062ad50;
extern "C" unsigned long _UNK_0062ad54;
extern "C" unsigned long _UNK_0062ad58;
extern "C" unsigned long _UNK_0062ad5c;
extern "C" unsigned long _UNK_0062ad60;
extern "C" unsigned long _UNK_0062ad64;
extern "C" unsigned long _UNK_0062ad68;
extern "C" unsigned long _UNK_0062ad6c;
extern "C" unsigned long _UNK_0062ad70;
extern "C" unsigned long _UNK_0062ad74;
extern "C" unsigned long _UNK_0062ad78;
extern "C" unsigned long _UNK_0062ad7c;
extern "C" unsigned long _UNK_0062ad80;
extern "C" unsigned long _UNK_0062ad84;
extern "C" unsigned long _UNK_0062b09c;
extern "C" unsigned long _UNK_0062b0a0;
extern "C" unsigned long _UNK_0062b0a4;
extern "C" unsigned long _UNK_0062b0a8;
extern "C" unsigned long _UNK_0062b0ac;
extern "C" unsigned long _UNK_0062b0b0;
extern "C" unsigned long _UNK_0062b0b4;
extern "C" unsigned long _UNK_0062b0b8;
extern "C" unsigned long _UNK_0062b0bc;
extern "C" unsigned long _UNK_0062b0c0;
extern "C" unsigned long _UNK_0062b0c4;
extern "C" unsigned long _UNK_0062b0c8;
extern "C" unsigned long _UNK_0062b0cc;
extern "C" unsigned long g_0062a298;
extern "C" unsigned long g_0062a2dc;
extern "C" unsigned long g_0062a30c;
extern "C" unsigned long g_0062a310;
extern "C" unsigned long g_0062a320;
extern "C" unsigned long g_0062a324;
extern "C" unsigned long g_0062a348;
extern "C" unsigned long g_0062a34c;
extern "C" unsigned long g_0062a3e8;
extern "C" unsigned long g_0062a3ec;
extern "C" unsigned long g_0062a500;
extern "C" unsigned long g_0062a5e2;
extern "C" unsigned long g_0062a678;
extern "C" unsigned long g_0062a778;
extern "C" unsigned long g_0062a77a;
extern "C" unsigned long g_0062a870;
extern "C" unsigned long g_0062a8a6;
extern "C" unsigned long g_0062a8e4;
extern "C" unsigned long g_0062a8e8;
extern "C" unsigned long g_0062a8ec;
extern "C" unsigned long g_0062a8f0;
extern "C" unsigned long g_0062a8f4;
extern "C" unsigned long g_0062a8f8;
extern "C" unsigned long g_0062a8fc;
extern "C" unsigned long g_0062a900;
extern "C" unsigned long g_0062a904;
extern "C" unsigned long g_0062a908;
extern "C" unsigned long g_0062a90c;
extern "C" unsigned long g_0062a910;
extern "C" unsigned long g_0062a914;
extern "C" unsigned long g_0062a918;
extern "C" unsigned long g_0062a91c;
extern "C" unsigned long g_0062a920;
extern "C" unsigned long g_0062a9e8;
extern "C" unsigned long g_0062a9ea;
extern "C" unsigned long g_0062aa68;
extern "C" unsigned long g_0062aa76;
extern "C" unsigned long g_0062ab8a;
extern "C" unsigned long g_0062abb4;
extern "C" unsigned long g_0062acbc;
extern "C" unsigned long g_0062acbe;
extern "C" unsigned long g_0062ad3c;
extern "C" unsigned long g_0062ad44;
extern "C" unsigned long g_0062ad48;
extern "C" unsigned long g_0062ad4c;
extern "C" unsigned long g_0062ad50;
extern "C" unsigned long g_0062ad54;
extern "C" unsigned long g_0062ad58;
extern "C" unsigned long g_0062ad5c;
extern "C" unsigned long g_0062ad60;
extern "C" unsigned long g_0062ad64;
extern "C" unsigned long g_0062ad68;
extern "C" unsigned long g_0062ad6c;
extern "C" unsigned long g_0062ad70;
extern "C" unsigned long g_0062ad74;
extern "C" unsigned long g_0062ad78;
extern "C" unsigned long g_0062ad7c;
extern "C" unsigned long g_0062ad80;
extern "C" unsigned long g_0062ad84;
extern "C" unsigned long g_0062ad90;
extern "C" unsigned long g_0062ae36;
extern "C" unsigned long g_0062ae60;
extern "C" unsigned long g_0062af6e;
extern "C" unsigned long g_0062af70;
extern "C" unsigned long g_0062b064;
extern "C" unsigned long g_0062b09c;
extern "C" unsigned long g_0062b0a0;
extern "C" unsigned long g_0062b0a4;
extern "C" unsigned long g_0062b0a8;
extern "C" unsigned long g_0062b0ac;
extern "C" unsigned long g_0062b0b0;
extern "C" unsigned long g_0062b0b4;
extern "C" unsigned long g_0062b0b8;
extern "C" unsigned long g_0062b0bc;
extern "C" unsigned long g_0062b0c0;
extern "C" unsigned long g_0062b0c4;
extern "C" unsigned long g_0062b0c8;
extern "C" unsigned long g_0062b0cc;
BLDiceRelifeView::~BLDiceRelifeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0062a298 + g_0062a30c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x4c)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x4c)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0062a2dc + g_0062a310,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDiceRelifeView::BLDiceRelifeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0062a3e8 + 0x62a390);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainPauseView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLDiceRelifeView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x144)));
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

undefined4 BLDiceRelifeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLDiceRelifeView::getBtnRelife()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLDiceRelifeView::getBtnRelease()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLDiceRelifeView::getBtnRestar()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLDiceRelifeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLDiceRelifeView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLDiceRelifeView::getLab_1()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLDiceRelifeView::getLab_2()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLDiceRelifeView::getLab_3()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLDiceRelifeView::getLabBtnRelife()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLDiceRelifeView::getLabBtnRelease()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLDiceRelifeView::getSPBackGround()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLDiceRelifeView::getSPTabBg()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLDiceRelifeView::getSPZuanshi()
{
  return *(undefined4 *)(((int)this) + 0x124);
}


void BLDiceRelifeView::onEnter()
{
  ((BLDiceRelifePresenter *)*(undefined4 *)(((int)this) + 0x130))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDiceRelifeView::onExit()
{
  ((BLDiceRelifePresenter *)*(undefined4 *)(((int)this) + 0x130))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLDiceRelifeView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [2];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x11c))(((int)this),0x24c);
    iVar2 = (undefined4)(intptr_t)(((BLDiceRelifePresenter *)this)->create((BLDiceRelifeView*)((int)this)));
    *(int *)((int)this + 4*(0x4c)) = iVar2;
    piVar11 = (int *)((int)this);
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062a500 + (intptr_t)(g_0062a8e4)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x4a)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar8 = *(code **)(*piVar9 + 0x88);
    puVar7 = auStack_30;
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    pcVar8 = *(code **)(*piVar11 + 0xcc);
    (*pcVar8)(piVar11,*(int *)((int)this + 4*(0x4a)),2,pcVar8,piVar11,*piVar11);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062a5e2 + (intptr_t)(g_0062a8f4)),auStack_28);
    piVar6 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    iVar2 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar6));
    piVar11[0x4d] = iVar2;
    piVar9 = piVar11;
    (**(code **)(*(int *)piVar11[0x4a] + 0xcc))((int *)piVar11[0x4a],iVar2,3);
    piVar10 = (int *)piVar11[0x4d];
    pcVar8 = *(code **)(*piVar10 + 0x28c);
    (**(code **)(*(int *)(piVar6) + (0x1cc)))(&uStack_20,piVar6);
    (*pcVar8)(piVar10,&uStack_20);
    piVar6 = (int *)piVar11[0x4d];
    pcVar8 = *(code **)(*piVar6 + 0x5c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar11[0x4a] + 0x8c))();
    uVar5 = (undefined4)(func_0079e57c(*puVar7,g_0062a8f8));
    (*pcVar8)(piVar6,uVar5);
    piVar6 = (int *)piVar11[0x4d];
    pcVar8 = *(code **)(*piVar6 + 100);
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x4a] + 0x8c))());
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    (*pcVar8)(piVar6,uVar5);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062a678 + (intptr_t)(g_0062a8fc)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    piVar11[0x4b] = iVar2;
    func_0079e2bc(&uStack_20);
    piVar6 = (int *)piVar11[0x4b];
    pcVar8 = *(code **)(*piVar6 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar12 = auStack_28;
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    piVar6 = (int *)piVar11[0x4b];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)(piVar9) + (0xcc)))(piVar9,piVar11[0x4b],1);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_0062a904,uVar5));
    piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0062a77a + (intptr_t)(g_0062a90c)), (char const*)(unsigned char *)((char *)&g_0062a778 + (intptr_t)(g_0062a908)), uVar5);
    piVar11[0x43] = (int)piVar6;
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar6) + (0x1b4)))(piVar6,&uStack_20);
    piVar6 = (int *)piVar11[0x43];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar11[0x4b] + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x4b] + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar3 = (undefined4)(func_0079e59c(uVar3,g_0062a910));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar11[0x4b] + 0x8c))();
    uVar3 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x4b] + 0x8c))());
    uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    uVar4 = (undefined4)(func_0079e59c(uVar4,g_0062a910));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar11[0x4b] + 200))((int *)piVar11[0x4b],piVar11[0x43]);
    piVar6 = (int *)cocos2d::extension::CCControlButton::create();
    piVar11[0x4e] = (int)piVar6;
    (**(code **)(*(int *)(piVar6) + (0x294)))(piVar6,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062a870 + (intptr_t)(g_0062a914)),puVar12);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)piVar9[0x4e] + 0x30c))((int *)piVar9[0x4e],uVar5,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062a8a6 + (intptr_t)(g_0062a918)),puVar12);
    iVar13 = 0x30c;
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    piVar11 = piVar9;
    (**(code **)(*(int *)piVar9[0x4e] + iVar13))((int *)piVar9[0x4e],uVar5,2);
    piVar6 = (int *)piVar9[0x4e];
    pcVar8 = *(code **)(*piVar6 + 0x28c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x4e] + 0x30))((int *)piVar9[0x4e],0x3f800000);
    (**(code **)(*(int *)piVar9[0x4e] + 0x38))((int *)piVar9[0x4e],0x3f800000);
    piVar6 = (int *)piVar9[0x4e];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x4b] + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x4b] + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x4b] + 0xcc))((int *)piVar9[0x4b],piVar9[0x4e],10);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_0062ad48,uVar5));
    piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0062a9ea + (intptr_t)(g_0062ad50)), (char const*)(unsigned char *)((char *)&g_0062a9e8 + (intptr_t)(g_0062ad4c)), uVar5);
    piVar9[0x46] = (int)piVar6;
    pcVar8 = *(code **)(*piVar6 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)piVar9[0x46] + 0x1b4))((int *)piVar9[0x46],&uStack_20);
    piVar6 = (int *)piVar9[0x46];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)piVar9[0x4e] + 0x50))());
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x4b] + 0xcc))((int *)piVar9[0x4b],piVar9[0x46],10);
    ((cocos2d::CCLabelTTF *)(piVar9[0x46]))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0062aa68 + (intptr_t)(g_0062ad58)), 0x3f800000, 1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062aa76 + (intptr_t)(g_0062ad5c)),auStack_28);
    piVar6 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar8 = *(code **)(*piVar6 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    piVar9 = piVar11;
    uVar5 = (undefined4)((**(code **)(*(int *)piVar11[0x46] + 0x50))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x46] + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(int *)(iVar2 + 4) + -0x80000000,0x3e800000));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_40);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(auStack_38[0],uVar5));
    uVar5 = (undefined4)((**(code **)(*(int *)piVar11[0x46] + 0x50))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x46] + 0x8c))());
    uVar4 = (undefined4)(func_0079e4fc(*(int *)(iVar2 + 4) + -0x80000000,0x3e800000));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_30);
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)(piVar6) + (0x40)))(piVar6,g_0062ad64);
    (**(code **)(*(int *)piVar11[0x4b] + 0xcc))((int *)piVar11[0x4b],piVar6,10);
    piVar6 = (int *)cocos2d::extension::CCControlButton::create();
    piVar11[0x50] = (int)piVar6;
    (**(code **)(*(int *)(piVar6) + (0x294)))(piVar6,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062ab8a + (intptr_t)(g_0062ad68)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)piVar11[0x50] + iVar13))((int *)piVar11[0x50],uVar5,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062abb4 + (intptr_t)(g_0062ad6c)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    piVar11 = piVar9;
    (**(code **)(*(int *)piVar9[0x50] + iVar13))((int *)piVar9[0x50],uVar5,2);
    piVar6 = (int *)piVar9[0x50];
    pcVar8 = *(code **)(*piVar6 + 0x28c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x50] + 0x30))((int *)piVar9[0x50],0x3f800000);
    (**(code **)(*(int *)piVar9[0x50] + 0x38))((int *)piVar9[0x50],0x3f800000);
    piVar6 = (int *)piVar9[0x50];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x4b] + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar5 = (undefined4)(func_0079e57c(uVar5,g_0062ad78));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x4b] + 0x8c))();
    uVar3 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar3 = (undefined4)(func_0079e57c(uVar3,g_0062ad78));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_24,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x4b] + 0xcc))((int *)piVar9[0x4b],piVar9[0x50],10);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_0062ad48,uVar5));
    piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0062acbe + (intptr_t)(g_0062ad80)), (char const*)(unsigned char *)((char *)&g_0062acbc + (intptr_t)(g_0062ad7c)), uVar5);
    piVar9[0x48] = (int)piVar6;
    pcVar8 = *(code **)(*piVar6 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)piVar9[0x48] + 0x1b4))((int *)piVar9[0x48],&uStack_20);
    piVar6 = (int *)piVar9[0x48];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)piVar9[0x50] + 0x50))());
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x4b] + 0xcc))((int *)piVar9[0x4b],piVar9[0x48],10);
    ((cocos2d::CCLabelTTF *)(piVar9[0x48]))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0062ad3c + (intptr_t)(g_0062ad84)), 0x3f800000, 1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062ad90 + (intptr_t)(g_0062b09c)),auStack_28);
    piVar6 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar8 = *(code **)(*piVar6 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    piVar9 = piVar11;
    uVar5 = (undefined4)((**(code **)(*(int *)piVar11[0x48] + 0x50))());
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar11[0x48] + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(int *)(iVar2 + 4) + -0x80000000,0x3e800000));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)(piVar6) + (0x40)))(piVar6,g_0062b0a4);
    (**(code **)(*(int *)piVar11[0x4b] + 0xcc))((int *)piVar11[0x4b],piVar6,10);
    piVar6 = (int *)cocos2d::extension::CCControlButton::create();
    piVar11[0x4f] = (int)piVar6;
    (**(code **)(*(int *)(piVar6) + (0x294)))(piVar6,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062ae36 + (intptr_t)(g_0062b0a8)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)piVar11[0x4f] + iVar13))((int *)piVar11[0x4f],uVar5,1);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0062ae60 + (intptr_t)(g_0062b0ac)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    piVar11 = piVar9;
    (**(code **)(*(int *)piVar9[0x4f] + iVar13))((int *)piVar9[0x4f],uVar5,2);
    piVar6 = (int *)piVar9[0x4f];
    pcVar8 = *(code **)(*piVar6 + 0x28c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x4f] + 0x30))((int *)piVar9[0x4f],0x3f800000);
    (**(code **)(*(int *)piVar9[0x4f] + 0x38))((int *)piVar9[0x4f],0x3f800000);
    piVar6 = (int *)piVar9[0x4f];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x4b] + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_0062b0b8));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x4b] + 0x8c))();
    uVar3 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar3 = (undefined4)(func_0079e59c(uVar3,g_0062b0b8));
    puVar12 = auStack_28;
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x4b] + 0xcc))((int *)piVar9[0x4b],piVar9[0x4f],10);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_0062b0c0,uVar5));
    piVar6 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0062af70 + (intptr_t)(g_0062b0c8)), (char const*)(unsigned char *)((char *)&g_0062af6e + (intptr_t)(g_0062b0c4)), uVar5);
    piVar9[0x47] = (int)piVar6;
    pcVar8 = *(code **)(*piVar6 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)piVar9[0x47] + 0x1b4))((int *)piVar9[0x47],&uStack_20);
    piVar6 = (int *)piVar9[0x47];
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x4f] + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar9[0x4f] + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_30[0],uVar5));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar9[0x4f] + 0x8c))();
    uVar3 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar9[0x4f] + 0x8c))());
    uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar12 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    (**(code **)(*(int *)piVar9[0x4f] + 200))((int *)piVar9[0x4f],piVar9[0x47]);
    ((cocos2d::CCLabelTTF *)(piVar9[0x47]))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_0062b064 + (intptr_t)(g_0062b0cc)), 0x3f800000, 1);
    ((BLDiceRelifePresenter *)(piVar9[0x4c]))->initWithView((BLDiceRelifeView*)piVar11);
  }
  return iVar1;
}
