#include "ChallengeTicketView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "ChallengeTicketPresenter.h"
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
extern "C" unsigned long UNK_00510780;
extern "C" unsigned long UNK_005107c4;
extern "C" unsigned long UNK_00510808;
extern "C" unsigned long UNK_00510830;
extern "C" unsigned long UNK_00510848;
extern "C" unsigned long UNK_00510876;
extern "C" unsigned long UNK_0051091a;
extern "C" unsigned long UNK_005109ca;
extern "C" unsigned long UNK_005109cc;
extern "C" unsigned long UNK_00510a3e;
extern "C" unsigned long UNK_00510b1a;
extern "C" unsigned long UNK_00510b1c;
extern "C" unsigned long UNK_00510b92;
extern "C" unsigned long UNK_00510c64;
extern "C" unsigned long UNK_00510d82;
extern "C" unsigned long UNK_00510d84;
extern "C" unsigned long UNK_00510dfa;
extern "C" unsigned long UNK_00510ec0;
extern "C" unsigned long UNK_00510f8a;
extern "C" unsigned long UNK_00510f8c;
extern "C" unsigned long UNK_00511002;
extern "C" unsigned long UNK_005110c8;
extern "C" unsigned long UNK_005111da;
extern "C" unsigned long UNK_005111dc;
extern "C" unsigned long _UNK_005107f4;
extern "C" unsigned long _UNK_005107f8;
extern "C" unsigned long _UNK_0051080c;
extern "C" unsigned long _UNK_00510834;
extern "C" unsigned long _UNK_005108a0;
extern "C" unsigned long _UNK_005108a4;
extern "C" unsigned long _UNK_00510cfc;
extern "C" unsigned long _UNK_00510d00;
extern "C" unsigned long _UNK_00510d04;
extern "C" unsigned long _UNK_00510d08;
extern "C" unsigned long _UNK_00510d0c;
extern "C" unsigned long _UNK_00510d10;
extern "C" unsigned long _UNK_00510d14;
extern "C" unsigned long _UNK_00510d18;
extern "C" unsigned long _UNK_00510d1c;
extern "C" unsigned long _UNK_00510d20;
extern "C" unsigned long _UNK_00510d24;
extern "C" unsigned long _UNK_00510d28;
extern "C" unsigned long _UNK_00510d2c;
extern "C" unsigned long _UNK_00510d30;
extern "C" unsigned long _UNK_00510d34;
extern "C" unsigned long _UNK_00510d38;
extern "C" unsigned long _UNK_00510d3c;
extern "C" unsigned long _UNK_00510d40;
extern "C" unsigned long _UNK_00510d44;
extern "C" unsigned long _UNK_00510d48;
extern "C" unsigned long _UNK_0051115c;
extern "C" unsigned long _UNK_00511160;
extern "C" unsigned long _UNK_00511164;
extern "C" unsigned long _UNK_00511168;
extern "C" unsigned long _UNK_0051116c;
extern "C" unsigned long _UNK_00511170;
extern "C" unsigned long _UNK_00511174;
extern "C" unsigned long _UNK_00511178;
extern "C" unsigned long _UNK_0051117c;
extern "C" unsigned long _UNK_00511180;
extern "C" unsigned long _UNK_00511184;
extern "C" unsigned long _UNK_00511188;
extern "C" unsigned long _UNK_0051118c;
extern "C" unsigned long _UNK_00511190;
extern "C" unsigned long _UNK_00511194;
extern "C" unsigned long _UNK_00511198;
extern "C" unsigned long _UNK_0051119c;
extern "C" unsigned long _UNK_005111a0;
extern "C" unsigned long _UNK_00511268;
extern "C" unsigned long _UNK_0051126c;
extern "C" unsigned long _UNK_00511270;
extern "C" unsigned long g_00510780;
extern "C" unsigned long g_005107c4;
extern "C" unsigned long g_005107f4;
extern "C" unsigned long g_005107f8;
extern "C" unsigned long g_00510808;
extern "C" unsigned long g_0051080c;
extern "C" unsigned long g_00510830;
extern "C" unsigned long g_00510834;
extern "C" unsigned long g_00510848;
extern "C" unsigned long g_00510876;
extern "C" unsigned long g_005108a0;
extern "C" unsigned long g_005108a4;
extern "C" unsigned long g_0051091a;
extern "C" unsigned long g_005109ca;
extern "C" unsigned long g_005109cc;
extern "C" unsigned long g_00510a3e;
extern "C" unsigned long g_00510b1a;
extern "C" unsigned long g_00510b1c;
extern "C" unsigned long g_00510b92;
extern "C" unsigned long g_00510c64;
extern "C" unsigned long g_00510cfc;
extern "C" unsigned long g_00510d00;
extern "C" unsigned long g_00510d04;
extern "C" unsigned long g_00510d08;
extern "C" unsigned long g_00510d0c;
extern "C" unsigned long g_00510d10;
extern "C" unsigned long g_00510d14;
extern "C" unsigned long g_00510d18;
extern "C" unsigned long g_00510d1c;
extern "C" unsigned long g_00510d20;
extern "C" unsigned long g_00510d24;
extern "C" unsigned long g_00510d28;
extern "C" unsigned long g_00510d2c;
extern "C" unsigned long g_00510d30;
extern "C" unsigned long g_00510d34;
extern "C" unsigned long g_00510d38;
extern "C" unsigned long g_00510d3c;
extern "C" unsigned long g_00510d40;
extern "C" unsigned long g_00510d44;
extern "C" unsigned long g_00510d48;
extern "C" unsigned long g_00510d82;
extern "C" unsigned long g_00510d84;
extern "C" unsigned long g_00510dfa;
extern "C" unsigned long g_00510ec0;
extern "C" unsigned long g_00510f8a;
extern "C" unsigned long g_00510f8c;
extern "C" unsigned long g_00511002;
extern "C" unsigned long g_005110c8;
extern "C" unsigned long g_0051115c;
extern "C" unsigned long g_00511160;
extern "C" unsigned long g_00511164;
extern "C" unsigned long g_00511168;
extern "C" unsigned long g_0051116c;
extern "C" unsigned long g_00511170;
extern "C" unsigned long g_00511174;
extern "C" unsigned long g_00511178;
extern "C" unsigned long g_0051117c;
extern "C" unsigned long g_00511180;
extern "C" unsigned long g_00511184;
extern "C" unsigned long g_00511188;
extern "C" unsigned long g_0051118c;
extern "C" unsigned long g_00511190;
extern "C" unsigned long g_00511194;
extern "C" unsigned long g_00511198;
extern "C" unsigned long g_0051119c;
extern "C" unsigned long g_005111a0;
extern "C" unsigned long g_005111da;
extern "C" unsigned long g_005111dc;
extern "C" unsigned long g_00511268;
extern "C" unsigned long g_0051126c;
extern "C" unsigned long g_00511270;
ChallengeTicketView::~ChallengeTicketView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00510780 + g_005107f4);
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
  func_0079e45c(&uStack_14,&g_005107c4 + g_005107f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeTicketView::ChallengeTicketView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00510848 + g_005108a0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00510876 + g_005108a4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * ChallengeTicketView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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


void ChallengeTicketView::onEnter()
{
  ((ChallengeTicketPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void ChallengeTicketView::onExit()
{
  ((ChallengeTicketPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool ChallengeTicketView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  code *pcVar9;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((ChallengeTicketPresenter *)this)->create((ChallengeTicketView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_0051091a + (intptr_t)(g_00510cfc)),auStack_28);
    iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
    *(int *)((int)this + 4*(0x43)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar9 = *(code **)(*piVar8 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    piVar8 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar9 = *(code **)(*piVar8 + 0x4c);
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
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_00510d08,uVar5));
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005109cc + (intptr_t)(g_00510d10)), (char const*)(unsigned char *)((char *)&g_005109ca + (intptr_t)(g_00510d0c)), uVar5);
    pcVar9 = *(code **)(*piVar8 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    uStack_20 = 0;
    uStack_1f = 0;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar8) + (0x1b4)))(piVar8,&uStack_20);
    pcVar9 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar8);
    piVar8 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar8;
    (**(code **)(*(int *)(piVar8) + (0x294)))(piVar8,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00510a3e + (intptr_t)(g_00510d18)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar5,1);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar9 = *(code **)(*piVar8 + 0x28c);
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x40))((int *)*(int *)((int)this + 4*(0x44)),g_00510d24);
    piVar8 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar9 = *(code **)(*piVar8 + 0x4c);
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
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_00510d08,uVar5));
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00510b1c + (intptr_t)(g_00510d34)), (char const*)(unsigned char *)((char *)&g_00510b1a + (intptr_t)(g_00510d30)), uVar5);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar8) + (0x1b4)))(piVar8,&uStack_20);
    pcVar9 = *(code **)(*piVar8 + 0x4c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_00510d38));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 200))((int *)*(int *)((int)this + 4*(0x44)),piVar8);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00510b92 + (intptr_t)(g_00510d3c)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar9 = *(code **)(*piVar7 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar9)(piVar7,&uStack_20);
    (**(code **)(*(int *)(piVar7) + (0x40)))(piVar7,0x3f000000);
    pcVar9 = *(code **)(*piVar7 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x50)))(piVar8));
    piVar8 = (int *)(**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8);
    uVar3 = (undefined4)(func_0079e4fc(*piVar8 + -0x80000000,0x3f000000));
    puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
    uVar4 = (undefined4)(func_0079e4dc(*puVar6,g_00510d44));
    uVar3 = (undefined4)(func_0079e57c(uVar3,uVar4));
    uVar3 = (undefined4)(func_0079e57c(uVar3,g_00510d44));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar9)(piVar7,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 200))((int *)*(int *)((int)this + 4*(0x44)),piVar7);
    piVar8 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x45)) = (int)piVar8;
    (**(code **)(*(int *)(piVar8) + (0x294)))(piVar8,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00510c64 + (intptr_t)(g_00510d48)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar5,1);
    piVar8 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar9 = *(code **)(*piVar8 + 0x28c);
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x40))((int *)*(int *)((int)this + 4*(0x45)),g_00510d24);
    piVar8 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar9 = *(code **)(*piVar8 + 0x4c);
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
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_0051115c,uVar5));
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00510d84 + (intptr_t)(g_00511164)), (char const*)(unsigned char *)((char *)&g_00510d82 + (intptr_t)(g_00511160)), uVar5);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar8) + (0x1b4)))(piVar8,&uStack_20);
    pcVar9 = *(code **)(*piVar8 + 0x4c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_00511168));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 200))((int *)*(int *)((int)this + 4*(0x45)),piVar8);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00510dfa + (intptr_t)(g_0051116c)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar9 = *(code **)(*piVar7 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar9)(piVar7,&uStack_20);
    (**(code **)(*(int *)(piVar7) + (0x40)))(piVar7,0x3f000000);
    pcVar9 = *(code **)(*piVar7 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x50)))(piVar8));
    piVar8 = (int *)(**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8);
    uVar3 = (undefined4)(func_0079e4fc(*piVar8 + -0x80000000,0x3f000000));
    puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
    uVar4 = (undefined4)(func_0079e4dc(*puVar6,g_00511174));
    uVar3 = (undefined4)(func_0079e57c(uVar3,uVar4));
    uVar3 = (undefined4)(func_0079e57c(uVar3,g_00511174));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar9)(piVar7,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 200))((int *)*(int *)((int)this + 4*(0x45)),piVar7);
    piVar8 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x46)) = (int)piVar8;
    (**(code **)(*(int *)(piVar8) + (0x294)))(piVar8,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00510ec0 + (intptr_t)(g_00511178)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x30c))((int *)*(int *)((int)this + 4*(0x46)),uVar5,1);
    piVar8 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar9 = *(code **)(*piVar8 + 0x28c);
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x40))((int *)*(int *)((int)this + 4*(0x46)),g_00511184);
    piVar8 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar9 = *(code **)(*piVar8 + 0x4c);
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
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_0051115c,uVar5));
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_00510f8c + (intptr_t)(g_00511190)), (char const*)(unsigned char *)((char *)&g_00510f8a + (intptr_t)(g_0051118c)), uVar5);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar8) + (0x1b4)))(piVar8,&uStack_20);
    pcVar9 = *(code **)(*piVar8 + 0x4c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    uVar5 = (undefined4)(func_0079e59c(uVar5,g_00511168));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 200))((int *)*(int *)((int)this + 4*(0x46)),piVar8);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00511002 + (intptr_t)(g_00511194)),auStack_28);
    piVar7 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar9 = *(code **)(*piVar7 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar9)(piVar7,&uStack_20);
    (**(code **)(*(int *)(piVar7) + (0x40)))(piVar7,0x3f000000);
    pcVar9 = *(code **)(*piVar7 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x50)))(piVar8));
    piVar8 = (int *)(**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8);
    uVar3 = (undefined4)(func_0079e4fc(*piVar8 + -0x80000000,0x3f000000));
    puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7);
    uVar4 = (undefined4)(func_0079e4dc(*puVar6,g_00511174));
    uVar3 = (undefined4)(func_0079e57c(uVar3,uVar4));
    uVar3 = (undefined4)(func_0079e57c(uVar3,g_00511174));
    0 /* ctorZero */;
    ((cocos2d::CCPoint *)(uVar5))->operator+(*(const CCPoint *)(void *)auStack_28);
    (*pcVar9)(piVar7,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 200))((int *)*(int *)((int)this + 4*(0x46)),piVar7);
    piVar8 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x47)) = (int)piVar8;
    (**(code **)(*(int *)(piVar8) + (0x294)))(piVar8,0);
    func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_005110c8 + (intptr_t)(g_00511198)),auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x30c))((int *)*(int *)((int)this + 4*(0x47)),uVar5,1);
    piVar8 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar9 = *(code **)(*piVar8 + 0x28c);
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x40))((int *)*(int *)((int)this + 4*(0x47)),g_0051119c);
    piVar8 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar9 = *(code **)(*piVar8 + 0x4c);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_30[0],uVar5));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_24,uVar3));
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(g_00511268,uVar5));
    piVar8 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005111dc + (intptr_t)(g_00511270)), (char const*)(unsigned char *)((char *)&g_005111da + (intptr_t)(g_0051126c)), uVar5);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)(piVar8) + (0x1b4)))(piVar8,&uStack_20);
    pcVar9 = *(code **)(*piVar8 + 0x4c);
    puVar6 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x8c))();
    uVar5 = (undefined4)(func_0079e4fc(*puVar6,0x3f000000));
    iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x8c))());
    uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar2 + 4),0x3f000000));
    0 /* ctorZero */;
    (*pcVar9)(piVar8,&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 200))((int *)*(int *)((int)this + 4*(0x47)),piVar8);
    ((ChallengeTicketPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((ChallengeTicketView*)((int)this));
  }
  return iVar1;
}
