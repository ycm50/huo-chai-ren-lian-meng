#include "BLMineGainsView.h"
#include "CCScale9Sprite.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLMineGainsPresenter.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00630cf4;
extern "C" unsigned long UNK_00630d38;
extern "C" unsigned long UNK_00630d7c;
extern "C" unsigned long UNK_00630da4;
extern "C" unsigned long UNK_00630f62;
extern "C" unsigned long UNK_00631046;
extern "C" unsigned long UNK_00631142;
extern "C" unsigned long UNK_00631146;
extern "C" unsigned long UNK_00631222;
extern "C" unsigned long UNK_006312d4;
extern "C" unsigned long UNK_006313ca;
extern "C" unsigned long UNK_006314fa;
extern "C" unsigned long UNK_006316ce;
extern "C" unsigned long UNK_0063189e;
extern "C" unsigned long UNK_00631a4c;
extern "C" unsigned long UNK_00631ace;
extern "C" unsigned long UNK_00631ad0;
extern "C" unsigned long _DAT_00630e44;
extern "C" unsigned long _DAT_00630e48;
extern "C" unsigned long _UNK_00630d68;
extern "C" unsigned long _UNK_00630d6c;
extern "C" unsigned long _UNK_00630d80;
extern "C" unsigned long _UNK_00630da8;
extern "C" unsigned long _UNK_00631348;
extern "C" unsigned long _UNK_0063134c;
extern "C" unsigned long _UNK_00631350;
extern "C" unsigned long _UNK_00631354;
extern "C" unsigned long _UNK_00631358;
extern "C" unsigned long _UNK_0063135c;
extern "C" unsigned long _UNK_00631360;
extern "C" unsigned long _UNK_00631364;
extern "C" unsigned long _UNK_00631368;
extern "C" unsigned long _UNK_0063136c;
extern "C" unsigned long _UNK_00631370;
extern "C" unsigned long _UNK_00631374;
extern "C" unsigned long _UNK_00631378;
extern "C" unsigned long _UNK_0063137c;
extern "C" unsigned long _UNK_00631380;
extern "C" unsigned long _UNK_006317ac;
extern "C" unsigned long _UNK_006317b0;
extern "C" unsigned long _UNK_006317b4;
extern "C" unsigned long _UNK_006317b8;
extern "C" unsigned long _UNK_006317bc;
extern "C" unsigned long _UNK_006317c0;
extern "C" unsigned long _UNK_006317c4;
extern "C" unsigned long _UNK_006317c8;
extern "C" unsigned long _UNK_006317cc;
extern "C" unsigned long _UNK_00631bc0;
extern "C" unsigned long _UNK_00631bc4;
extern "C" unsigned long _UNK_00631bc8;
extern "C" unsigned long _UNK_00631bcc;
extern "C" unsigned long _UNK_00631bd0;
extern "C" unsigned long _UNK_00631bd4;
extern "C" unsigned long _UNK_00631bd8;
extern "C" unsigned long _UNK_00631bdc;
extern "C" unsigned long _UNK_00631be0;
extern "C" unsigned long g_00630cf4;
extern "C" unsigned long g_00630d38;
extern "C" unsigned long g_00630d68;
extern "C" unsigned long g_00630d6c;
extern "C" unsigned long g_00630d7c;
extern "C" unsigned long g_00630d80;
extern "C" unsigned long g_00630da4;
extern "C" unsigned long g_00630da8;
extern "C" unsigned long g_00630e44;
extern "C" unsigned long g_00630e48;
extern "C" unsigned long g_00630f62;
extern "C" unsigned long g_00631046;
extern "C" unsigned long g_00631142;
extern "C" unsigned long g_00631146;
extern "C" unsigned long g_00631222;
extern "C" unsigned long g_006312d4;
extern "C" unsigned long g_00631348;
extern "C" unsigned long g_0063134c;
extern "C" unsigned long g_00631350;
extern "C" unsigned long g_00631354;
extern "C" unsigned long g_00631358;
extern "C" unsigned long g_0063135c;
extern "C" unsigned long g_00631360;
extern "C" unsigned long g_00631364;
extern "C" unsigned long g_00631368;
extern "C" unsigned long g_0063136c;
extern "C" unsigned long g_00631370;
extern "C" unsigned long g_00631374;
extern "C" unsigned long g_00631378;
extern "C" unsigned long g_0063137c;
extern "C" unsigned long g_00631380;
extern "C" unsigned long g_006313ca;
extern "C" unsigned long g_006314fa;
extern "C" unsigned long g_006316ce;
extern "C" unsigned long g_006317ac;
extern "C" unsigned long g_006317b0;
extern "C" unsigned long g_006317b4;
extern "C" unsigned long g_006317b8;
extern "C" unsigned long g_006317bc;
extern "C" unsigned long g_006317c0;
extern "C" unsigned long g_006317c4;
extern "C" unsigned long g_006317c8;
extern "C" unsigned long g_006317cc;
extern "C" unsigned long g_0063189e;
extern "C" unsigned long g_00631a4c;
extern "C" unsigned long g_00631ace;
extern "C" unsigned long g_00631ad0;
extern "C" unsigned long g_00631bc0;
extern "C" unsigned long g_00631bc4;
extern "C" unsigned long g_00631bc8;
extern "C" unsigned long g_00631bcc;
extern "C" unsigned long g_00631bd0;
extern "C" unsigned long g_00631bd4;
extern "C" unsigned long g_00631bd8;
extern "C" unsigned long g_00631bdc;
extern "C" unsigned long g_00631be0;
BLMineGainsView::~BLMineGainsView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00630cf4 + g_00630d68);
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
  func_0079e45c(&uStack_14,&g_00630d38 + g_00630d6c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineGainsView::BLMineGainsView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_00630e44 + 0x630dec);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineGainsView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineGainsView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

undefined4 BLMineGainsView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineGainsView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMineGainsView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMineGainsView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineGainsView::getLabGains()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMineGainsView::getLabGains2()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMineGainsView::getLabGainsNumber()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMineGainsView::getLabGains2Number()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMineGainsView::getMineItme1()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMineGainsView::getMineItme2()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMineGainsView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

void BLMineGainsView::onEnter()
{
  ((BLMineGainsPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineGainsView::onExit()
{
  ((BLMineGainsPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineGainsView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int *piVar9;
  undefined *puVar10;
  undefined *puVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLMineGainsPresenter *)this)->create((BLMineGainsView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    piVar14 = (int *)((int)this);
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00630f62 + (intptr_t)(g_00631348)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar12 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar8 = *(code **)(*piVar12 + 0x88);
    puVar6 = auStack_30;
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
    (*pcVar8)(piVar12,&uStack_20);
    piVar12 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar8 = *(code **)(*piVar12 + 0x4c);
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
    (*pcVar8)(piVar12,&uStack_20);
    pcVar8 = *(code **)(*piVar14 + 0xcc);
    (*pcVar8)(piVar14,*(int *)((int)this + 4*(0x44)),1,pcVar8,piVar14,*piVar14);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00631046 + (intptr_t)(g_00631354)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    piVar14[0x43] = iVar2;
    piVar12 = piVar14;
    func_0079e2bc(&uStack_20);
    piVar9 = (int *)piVar14[0x43];
    pcVar8 = *(code **)(*piVar9 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar15 = auStack_28;
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar15 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    piVar9 = (int *)piVar14[0x43];
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar15 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)(piVar12) + (0xcc)))(piVar12,piVar14[0x43],2);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_00631360,uVar5));
    puVar10 = (unsigned char *)((char *)&g_00631142 + (intptr_t)(g_00631364));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00631146 + (intptr_t)(g_00631368)), (char const*)puVar10, uVar5);
    piVar14[0x45] = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0xff;
    (**(code **)(*(int *)piVar14[0x45] + 0x1b4))((int *)piVar14[0x45],&uStack_20);
    piVar9 = (int *)piVar14[0x45];
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar14[0x43] + 0x8c))());
    uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar14[0x43] + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar15 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)piVar14[0x43] + 200))((int *)piVar14[0x43],piVar14[0x45]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_0063136c,uVar5));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00631222 + (intptr_t)(g_00631370)), (char const*)puVar10, uVar5);
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar9) + (0x1b4)))(piVar9,&uStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar15 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)(piVar12) + (0xcc)))(piVar12,piVar9,3);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_0063136c,uVar5));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006312d4 + (intptr_t)(g_0063137c)), (char const*)puVar10, uVar5);
    piVar14[0x46] = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    (**(code **)(*(int *)piVar14[0x46] + 0x1b4))((int *)piVar14[0x46],&uStack_20);
    piVar9 = (int *)piVar14[0x46];
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar15 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)(piVar12) + (0xcc)))(piVar12,piVar14[0x46],3);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_006317ac,uVar5));
    puVar11 = (unsigned char *)((char *)&g_006313ca + (intptr_t)(g_006317b0));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)puVar11, (char const*)puVar10, uVar5);
    piVar14[0x48] = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    ((cocos2d::CCLabelTTF *)(piVar14[0x48]))->enableStroke(*(cocos2d::_ccColor3B const*)&uStack_20, 0x40000000, 1);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)piVar14[0x48] + 0x1b4))((int *)piVar14[0x48],&uStack_20);
    piVar9 = (int *)piVar14[0x48];
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x46] + 0x50))();
    uVar5 = (undefined4)(func_0079e59c(*puVar6,g_006317b4));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x46] + 0x8c))();
    uVar5 = (undefined4)(func_0079e59c(uVar5,*puVar6));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar14[0x46] + 0x50))());
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x46] + 0x50))();
    uVar3 = (undefined4)(func_0079e59c(*puVar6,g_006317b4));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x46] + 0x8c))();
    uVar3 = (undefined4)(func_0079e59c(uVar3,*puVar6));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar14[0x46] + 0x50))());
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar15 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)(piVar12) + (0xcc)))(piVar12,piVar14[0x48],3);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_006317ac,uVar5));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006314fa + (intptr_t)(g_006317b8)), (char const*)puVar10, uVar5);
    piVar14[0x47] = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    (**(code **)(*(int *)piVar14[0x47] + 0x1b4))((int *)piVar14[0x47],&uStack_20);
    piVar9 = (int *)piVar14[0x47];
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar15 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)(piVar12) + (0xcc)))(piVar12,piVar14[0x47],3);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_006317ac,uVar5));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)puVar11, (char const*)puVar10, uVar5);
    piVar14[0x49] = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    ((cocos2d::CCLabelTTF *)(piVar14[0x49]))->enableStroke(*(cocos2d::_ccColor3B const*)&uStack_20, 0x40000000, 1);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)piVar14[0x49] + 0x1b4))((int *)piVar14[0x49],&uStack_20);
    piVar9 = (int *)piVar14[0x49];
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x47] + 0x50))();
    uVar5 = (undefined4)(func_0079e59c(*puVar6,g_006317b4));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x47] + 0x8c))();
    uVar5 = (undefined4)(func_0079e59c(uVar5,*puVar6));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar14[0x47] + 0x50))());
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x47] + 0x50))();
    uVar3 = (undefined4)(func_0079e59c(*puVar6,g_006317b4));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x47] + 0x8c))();
    uVar3 = (undefined4)(func_0079e59c(uVar3,*puVar6));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar14[0x47] + 0x50))());
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar15 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)(piVar12) + (0xcc)))(piVar12,piVar14[0x49],3);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_006316ce + (intptr_t)(g_006317c0)),puVar15);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    piVar14[0x4a] = iVar2;
    func_0079e2bc(&uStack_20);
    piVar9 = (int *)piVar14[0x4a];
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    piVar9 = (int *)piVar14[0x4a];
    pcVar8 = *(code **)(*piVar9 + 0x1d4);
    puVar6 = auStack_30;
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
    pcVar8 = *(code **)(*(int *)piVar14[0x4a] + 0x4c);
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar14[0x48] + 0x50))();
    uVar5 = (undefined4)(func_0079e59c(*puVar7,g_006317c8));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar14[0x48] + 0x8c))();
    uVar5 = (undefined4)(func_0079e59c(uVar5,*puVar7));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_006317cc));
    puVar7 = (undefined4 *)(**(code **)(*(int *)piVar14[0x4a] + 0x8c))();
    uVar3 = (undefined4)(func_0079e4fc(*puVar7,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,uVar3));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar14[0x48] + 0x50))());
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x48] + 0x50))();
    uVar5 = (undefined4)(func_0079e59c(*puVar6,g_00631bc0));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x48] + 0x8c))();
    uVar5 = (undefined4)(func_0079e59c(uVar5,*puVar6));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_00631bc4));
    piVar9 = (int *)piVar14[0x4a];
    puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9);
    uVar4 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,uVar4));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar14[0x48] + 0x50))());
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    pcVar8 = *(code **)(*piVar12 + 0xcc);
    (*pcVar8)(piVar12,piVar14[0x4a],3,pcVar8,piVar12,*piVar12);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0063189e + (intptr_t)(g_00631bc8)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    piVar12[0x4b] = iVar2;
    piVar14 = piVar12;
    func_0079e2bc(&uStack_20);
    piVar9 = (int *)piVar12[0x4b];
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    piVar9 = (int *)piVar12[0x4b];
    pcVar8 = *(code **)(*piVar9 + 0x1d4);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar15 = auStack_28;
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar15 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    pcVar8 = *(code **)(*(int *)piVar12[0x4b] + 0x4c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar12[0x49] + 0x50))();
    uVar5 = (undefined4)(func_0079e59c(*puVar6,g_00631bc0));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar12[0x49] + 0x8c))();
    uVar5 = (undefined4)(func_0079e59c(uVar5,*puVar6));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_00631bc4));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar12[0x4b] + 0x8c))();
    uVar3 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,uVar3));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar12[0x49] + 0x50))());
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar12[0x49] + 0x50))();
    uVar3 = (undefined4)(func_0079e59c(*puVar6,g_00631bc0));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar12[0x49] + 0x8c))();
    uVar3 = (undefined4)(func_0079e59c(uVar3,*puVar6));
    uVar3 = (undefined4)(func_0079e59c(uVar3,g_00631bc4));
    piVar9 = (int *)piVar12[0x4b];
    puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9);
    uVar4 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    uVar3 = (undefined4)(func_0079e59c(uVar3,uVar4));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar12[0x49] + 0x50))());
    0 /* ctorZero */;
    uVar4 = (undefined4)(*(undefined4 *)(puVar15 + 4));
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar4,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)(piVar14) + (0xcc)))(piVar14,piVar12[0x4b],3);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00631a4c + (intptr_t)(g_00631bd0)),puVar15);
    piVar9 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    iVar2 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar9));
    piVar14[0x4c] = iVar2;
    pcVar8 = *(code **)(*piVar14 + 0xcc);
    piVar12 = piVar14;
    (*pcVar8)(piVar14,iVar2,3,pcVar8,piVar14,*piVar14);
    piVar13 = (int *)piVar14[0x4c];
    pcVar8 = *(code **)(*piVar13 + 0x28c);
    (**(code **)(*(int *)(piVar9) + (0x1cc)))(&uStack_20,piVar9);
    (*pcVar8)(piVar13,&uStack_20);
    (**(code **)(*(int *)piVar14[0x4c] + 0x5c))((int *)piVar14[0x4c],0);
    (**(code **)(*(int *)piVar14[0x4c] + 100))((int *)piVar14[0x4c],g_00631bd4);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_00631bd8,uVar5));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00631ad0 + (intptr_t)(g_00631be0)), (char const*)(unsigned char *)((char *)&g_00631ace + (intptr_t)(g_00631bdc)), uVar5);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar9) + (0x1b4)))(piVar9,&uStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x4c] + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar14[0x4c] + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_30[0],uVar5));
    puVar6 = (undefined4 *)(**(code **)(*(int *)piVar14[0x4c] + 0x8c))();
    uVar3 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)piVar14[0x4c] + 0x8c))());
    uVar4 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_24,uVar3));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)piVar14[0x4c] + 0xcc))((int *)piVar14[0x4c],piVar9,3);
    ((BLMineGainsPresenter *)(piVar14[0x42]))->initWithView((BLMineGainsView*)piVar12);
  }
  return iVar1;
}
