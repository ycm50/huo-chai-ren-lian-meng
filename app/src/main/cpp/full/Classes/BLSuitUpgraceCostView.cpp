#include "BLSuitUpgraceCostView.h"
#include "CCGeometry.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSuitUpGraceItemView.h"
#include "BLSuitUpgraceCostPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0069c148;
extern "C" unsigned long UNK_0069c184;
extern "C" unsigned long UNK_0069c530;
extern "C" unsigned long UNK_0069c57c;
extern "C" unsigned long UNK_0069c5d8;
extern "C" unsigned long UNK_0069c600;
extern "C" unsigned long UNK_0069c9fe;
extern "C" unsigned long UNK_0069ca76;
extern "C" unsigned long UNK_0069ca78;
extern "C" unsigned long UNK_0069cb0a;
extern "C" unsigned long UNK_0069cc6e;
extern "C" unsigned long UNK_0069cc98;
extern "C" unsigned long UNK_0069ccbc;
extern "C" unsigned long UNK_0069ccbf;
extern "C" unsigned long UNK_0069cd2a;
extern "C" unsigned long UNK_0069cd48;
extern "C" unsigned long UNK_0069ce38;
extern "C" unsigned long UNK_0069ceca;
extern "C" unsigned long UNK_0069d04a;
extern "C" unsigned long UNK_0069d074;
extern "C" unsigned long UNK_0069d0a6;
extern "C" unsigned long _UNK_0069c1b4;
extern "C" unsigned long _UNK_0069c1b8;
extern "C" unsigned long _UNK_0069c5c4;
extern "C" unsigned long _UNK_0069c5c8;
extern "C" unsigned long _UNK_0069c5dc;
extern "C" unsigned long _UNK_0069c604;
extern "C" unsigned long _UNK_0069cd80;
extern "C" unsigned long _UNK_0069cd84;
extern "C" unsigned long _UNK_0069cd88;
extern "C" unsigned long _UNK_0069cd8c;
extern "C" unsigned long _UNK_0069cd90;
extern "C" unsigned long _UNK_0069cd94;
extern "C" unsigned long _UNK_0069cd98;
extern "C" unsigned long _UNK_0069cd9c;
extern "C" unsigned long _UNK_0069cda0;
extern "C" unsigned long _UNK_0069cda4;
extern "C" unsigned long _UNK_0069cda8;
extern "C" unsigned long _UNK_0069cdac;
extern "C" unsigned long _UNK_0069cdb0;
extern "C" unsigned long _UNK_0069cdb4;
extern "C" unsigned long _UNK_0069cdb8;
extern "C" unsigned long _UNK_0069cdbc;
extern "C" unsigned long _UNK_0069cdc0;
extern "C" unsigned long _UNK_0069cdc4;
extern "C" unsigned long _UNK_0069cdc8;
extern "C" unsigned long _UNK_0069d0ec;
extern "C" unsigned long _UNK_0069d0f0;
extern "C" unsigned long _UNK_0069d0f4;
extern "C" unsigned long _UNK_0069d0f8;
extern "C" unsigned long _UNK_0069d0fc;
extern "C" unsigned long _UNK_0069d100;
extern "C" unsigned long _UNK_0069d104;
extern "C" unsigned long _UNK_0069d108;
extern "C" unsigned long _UNK_0069d10c;
extern "C" unsigned long g_0069c148;
extern "C" unsigned long g_0069c184;
extern "C" unsigned long g_0069c1b4;
extern "C" unsigned long g_0069c1b8;
extern "C" unsigned long g_0069c530;
extern "C" unsigned long g_0069c57c;
extern "C" unsigned long g_0069c5c4;
extern "C" unsigned long g_0069c5c8;
extern "C" unsigned long g_0069c5d8;
extern "C" unsigned long g_0069c5dc;
extern "C" unsigned long g_0069c600;
extern "C" unsigned long g_0069c604;
extern "C" unsigned long g_0069c9fe;
extern "C" unsigned long g_0069ca76;
extern "C" unsigned long g_0069ca78;
extern "C" unsigned long g_0069cb0a;
extern "C" unsigned long g_0069cc6e;
extern "C" unsigned long g_0069cc98;
extern "C" unsigned long g_0069ccbc;
extern "C" unsigned long g_0069ccbf;
extern "C" unsigned long g_0069cd2a;
extern "C" unsigned long g_0069cd48;
extern "C" unsigned long g_0069cd80;
extern "C" unsigned long g_0069cd84;
extern "C" unsigned long g_0069cd88;
extern "C" unsigned long g_0069cd8c;
extern "C" unsigned long g_0069cd90;
extern "C" unsigned long g_0069cd94;
extern "C" unsigned long g_0069cd98;
extern "C" unsigned long g_0069cd9c;
extern "C" unsigned long g_0069cda0;
extern "C" unsigned long g_0069cda4;
extern "C" unsigned long g_0069cda8;
extern "C" unsigned long g_0069cdac;
extern "C" unsigned long g_0069cdb0;
extern "C" unsigned long g_0069cdb4;
extern "C" unsigned long g_0069cdb8;
extern "C" unsigned long g_0069cdbc;
extern "C" unsigned long g_0069cdc0;
extern "C" unsigned long g_0069cdc4;
extern "C" unsigned long g_0069cdc8;
extern "C" unsigned long g_0069ce38;
extern "C" unsigned long g_0069ceca;
extern "C" unsigned long g_0069d04a;
extern "C" unsigned long g_0069d074;
extern "C" unsigned long g_0069d0a6;
extern "C" unsigned long g_0069d0ec;
extern "C" unsigned long g_0069d0f0;
extern "C" unsigned long g_0069d0f4;
extern "C" unsigned long g_0069d0f8;
extern "C" unsigned long g_0069d0fc;
extern "C" unsigned long g_0069d100;
extern "C" unsigned long g_0069d104;
extern "C" unsigned long g_0069d108;
extern "C" unsigned long g_0069d10c;
BLSuitUpgraceCostView::BLSuitUpgraceCostView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0069c148 + g_0069c1b4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0069c184 + g_0069c1b8,&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

BLSuitUpgraceCostView::~BLSuitUpgraceCostView()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0069c530 + (intptr_t)(g_0069c5c4))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_0069c57c + (intptr_t)(g_0069c5c8)),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  *(int *)((int)this + 4*(0x45)) = *(int *)((int)this + 4*(0x44));
  ((std::vector<BLSuitUpGraceItemView*, std::allocator<BLSuitUpGraceItemView*>> *)((int)this) + 0x44)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSuitUpgraceCostView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack_60;
  int iStack_5c;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_28,uVar1));
  0 /* ctorZero */;
  uVar1 = (undefined4)(uStack_1c);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(uVar1,uVar3));
  0 /* ctorZero */;
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0069c9fe + (intptr_t)(g_0069cd90)),&uStack_28);
  piVar4 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar12 = *(code **)(*piVar4 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar12)(piVar4,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar4);
  piVar4 = (int *)cocos2d::CCLayer::create();
  *(int *)((int)this + 4*(0x43)) = (int)piVar4;
  (**(code **)(*(int *)(piVar4) + (0x88)))(piVar4,&iStack_38);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(g_0069cd94,uVar1));
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0069ca78 + (intptr_t)(g_0069cd9c)), (char const*)(unsigned char *)((char *)&g_0069ca76 + (intptr_t)(g_0069cd98)), uVar1);
  iVar10 = (int)*(int *)&(*piVar4);
  pcVar12 = *(code **)(iVar10 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
  puVar5 = (undefined4 *)(**(code **)(iVar10 + 0x8c))(piVar4);
  uVar2 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,g_0069cda0));
  uVar2 = (undefined4)(func_0079e4fc(iStack_34,0x3f000000));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar3));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_0069cd94));
  0 /* ctorZero */;
  (*pcVar12)(piVar4,&uStack_20);
  (**(code **)(*(int *)(piVar4) + (0x1b4)))(piVar4,(unsigned char *)((char *)&g_0069cb0a + (intptr_t)(g_0069cda4)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 200))((int *)*(int *)((int)this + 4*(0x43)),piVar4);
  iVar10 = (undefined4)(intptr_t)(iStack_38);
  0 /* ctorZero */;
  uVar1 = (undefined4)(func_0079e4fc(uStack_20,g_0069cdac));
  uVar1 = (undefined4)(func_0079e57c(iVar10,uVar1));
  uVar1 = (undefined4)(func_0079e4dc(uVar1,g_0069cdb0));
  uVar2 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
  0 /* ctorZero */;
  uVar3 = (undefined4)(func_0079e4fc(uStack_20,0x3f000000));
  func_0079e59c(uVar2,uVar3);
  uVar13 = (undefined4)(intptr_t)(func_0079e62c());
  uVar14 = (undefined4)(intptr_t)(func_0079e62c(uVar1));
  uVar14 = (undefined4)(intptr_t)(func_0079e724((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),g_0069cd80,g_0069cd84));
  func_0079e744((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                  (int)((ulonglong)uVar14 >> 0x20));
  uStack_60 = (undefined4)(func_0079e7e4());
  0 /* ctorZero */;
  uVar2 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
  iStack_5c = 3;
  do {
    piStack_3c = (int *)((BLSuitUpGraceItemView *)this)->create();
    (**(code **)(*(int *)piStack_3c[0x42] + 0x24))((int *)piStack_3c[0x42],2);
    piVar4 = piStack_3c;
    pcVar12 = *(code **)(*piStack_3c + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uVar3,uVar6));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar3,uVar7));
    0 /* ctorZero */;
    (*pcVar12)(piVar4,&uStack_20);
    0 /* ctorZero */;
    uVar3 = (undefined4)(func_0079e59c(uVar1,uStack_20));
    uStack_60 = (undefined4)(func_0079e59c(uStack_60,uVar3));
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 200))((int *)*(int *)((int)this + 4*(0x43)),piStack_3c);
    ((std::vector<BLSuitUpGraceItemView*, std::allocator<BLSuitUpGraceItemView*>> *)(((int)this) + 0x44))->push_back(*(BLSuitUpGraceItemView* const*)&piStack_3c);
    iStack_5c = (undefined4)(intptr_t)(iStack_5c + -1);
  } while (iStack_5c != 0);
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(&uStack_28,(unsigned char *)((char *)&g_0069cc6e + (intptr_t)(g_0069cdb4)),auStack_30);
  ((BLLanguage *)(uVar1))->getString((std::string)(char*)uStack_28);
  uVar1 = (undefined4)(uStack_20);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(g_0069cd94,uVar2));
  iVar10 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)uVar1, (char const*)(unsigned char *)((char *)&g_0069cc98 + (intptr_t)(g_0069cdb8)), uVar2));
  *(int *)((int)this + 4*(0x47)) = iVar10;
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_28);
  iVar10 = (undefined4)(intptr_t)(g_0069cdbc);
  puVar9 = (unsigned char *)((char *)&g_0069ccbc + (intptr_t)(g_0069cdbc));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x47)),puVar9);
  piVar4 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar12 = *(code **)(*piVar4 + 0x4c);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4fc(iStack_34 + -0x80000000,0x3f000000));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(0xc1000000,uVar1));
  uVar3 = (undefined4)(func_0079e4dc(g_0069cdc0,uVar3));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  0 /* ctorZero */;
  (*pcVar12)(piVar4,&uStack_20);
  puVar11 = (unsigned char *)((char *)&g_0069cd2a + (intptr_t)(g_0069cdc4));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 200))((int *)*(int *)((int)this + 4*(0x43)),*(int *)((int)this + 4*(0x47)));
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(g_0069cd94,uVar1));
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0069cd48 + (intptr_t)(g_0069cdc8)), (char const*)puVar11, uVar1);
  *(int *)((int)this + 4*(0x48)) = (int)piVar4;
  pcVar12 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar12)(piVar4,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x48)),&g_0069ccbf + iVar10);
  ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x48))))->enableStroke(*(const ccColor3B *)(void *)puVar9, 0x3f800000, 1);
  piVar4 = (int *)*(int *)((int)this + 4*(0x48));
  pcVar12 = *(code **)(*piVar4 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x50))());
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x8c))();
  uVar2 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar1))->operator+(*(cocos2d::CCPoint const*)&uStack_28);
  (*pcVar12)(piVar4,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 200))((int *)*(int *)((int)this + 4*(0x43)),*(int *)((int)this + 4*(0x48)));
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(g_0069d0ec,uVar1));
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0069ce38 + (intptr_t)(g_0069d0f0)), (char const*)puVar11, uVar1);
  *(int *)((int)this + 4*(0x49)) = (int)piVar4;
  pcVar12 = *(code **)(*piVar4 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x68))());
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x8c))());
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x8c))());
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar2));
  uVar1 = (undefined4)(func_0079e57c(uVar1,0x40000000));
  0 /* ctorZero */;
  (*pcVar12)(piVar4,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x49)),puVar9);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 200))((int *)*(int *)((int)this + 4*(0x43)),*(int *)((int)this + 4*(0x49)));
  iVar8 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar10 = (undefined4)(intptr_t)(g_0069d0f4);
  *(int *)((int)this + 4*(0x4a)) = iVar8;
  func_0079e45c(&uStack_20,&g_0069ceca + iVar10,&uStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x30c))((int *)*(int *)((int)this + 4*(0x4a)),uVar1,1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x294))((int *)*(int *)((int)this + 4*(0x4a)),0);
  piVar4 = (int *)*(int *)((int)this + 4*(0x4a));
  pcVar12 = *(code **)(*piVar4 + 0x28c);
  0 /* ctorZero */;
  uVar1 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uVar1,uVar2));
  0 /* ctorZero */;
  uVar1 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(uVar1,uVar3));
  0 /* ctorZero */;
  (*pcVar12)(piVar4,&uStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x4a));
  iVar10 = (int)*(int *)&(*piVar4);
  pcVar12 = *(code **)(iVar10 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_34 + -0x80000000,0x3f000000));
  iVar10 = (undefined4)(intptr_t)((**(code **)(iVar10 + 0x8c))(piVar4));
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,g_0069d100));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(auStack_30[0],uVar1));
  uVar2 = (undefined4)(func_0079e4fc(iStack_34 + -0x80000000,0x3f000000));
  piVar4 = (int *)*(int *)((int)this + 4*(0x4a));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  uVar2 = (undefined4)(func_0079e59c(uVar2,g_0069d100));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_24,uVar2));
  0 /* ctorZero */;
  (*pcVar12)(piVar4,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 200))((int *)*(int *)((int)this + 4*(0x43)),*(int *)((int)this + 4*(0x4a)));
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(&uStack_28,(unsigned char *)((char *)&g_0069d04a + (intptr_t)(g_0069d104)),auStack_30);
  ((BLLanguage *)(uVar1))->getString((std::string)(char*)uStack_28);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(g_0069d0ec,uVar1));
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)uStack_20, (char const*)(unsigned char *)((char *)&g_0069d074 + (intptr_t)(g_0069d108)), uVar1);
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_28);
  pcVar12 = *(code **)(*piVar4 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x50))());
  (*pcVar12)(piVar4,uVar1);
  (**(code **)(*(int *)(piVar4) + (0x1b4)))(piVar4,(unsigned char *)((char *)&g_0069d0a6 + (intptr_t)(g_0069d10c)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 200))((int *)*(int *)((int)this + 4*(0x43)),piVar4);
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_38);
  return;
}

bool BLSuitUpgraceCostView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitUpgraceCostPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitUpgraceCostView::initView();
    ((BLSuitUpgraceCostPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitUpgraceCostView*)((int)this));
  }
  return iVar1;
}

void BLSuitUpgraceCostView::onEnter()
{
  ((BLSuitUpgraceCostPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitUpgraceCostView::onExit()
{
  ((BLSuitUpgraceCostPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
