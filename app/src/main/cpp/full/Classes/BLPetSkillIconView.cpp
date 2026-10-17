#include "BLPetSkillIconView.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCControlButton.h"
#include "CCLabelTTF.h"
#include "BLLeakUtils.h"
#include "BLPetSkillIconPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0060e260;
extern "C" unsigned long UNK_0060e292;
extern "C" unsigned long UNK_0060e2ec;
extern "C" unsigned long UNK_0060e314;
extern "C" unsigned long UNK_0060e32c;
extern "C" unsigned long UNK_0060e35a;
extern "C" unsigned long UNK_0060e3ac;
extern "C" unsigned long UNK_0060e3ec;
extern "C" unsigned long UNK_0060e418;
extern "C" unsigned long UNK_0060e41c;
extern "C" unsigned long UNK_0060e49e;
extern "C" unsigned long UNK_0060e4a1;
extern "C" unsigned long UNK_0060e4b8;
extern "C" unsigned long UNK_0060e550;
extern "C" unsigned long _UNK_0060e2d8;
extern "C" unsigned long _UNK_0060e2dc;
extern "C" unsigned long _UNK_0060e2f0;
extern "C" unsigned long _UNK_0060e318;
extern "C" unsigned long _UNK_0060e384;
extern "C" unsigned long _UNK_0060e388;
extern "C" unsigned long _UNK_0060e5cc;
extern "C" unsigned long _UNK_0060e5d0;
extern "C" unsigned long _UNK_0060e5d4;
extern "C" unsigned long _UNK_0060e5d8;
extern "C" unsigned long _UNK_0060e5dc;
extern "C" unsigned long _UNK_0060e5e0;
extern "C" unsigned long _UNK_0060e5e4;
extern "C" unsigned long _UNK_0060e5e8;
extern "C" unsigned long _UNK_0060e5ec;
extern "C" unsigned long _UNK_0060e5f0;
extern "C" unsigned long _UNK_0060e5f4;
extern "C" unsigned long g_0060e260;
extern "C" unsigned long g_0060e292;
extern "C" unsigned long g_0060e2d8;
extern "C" unsigned long g_0060e2dc;
extern "C" unsigned long g_0060e2ec;
extern "C" unsigned long g_0060e2f0;
extern "C" unsigned long g_0060e314;
extern "C" unsigned long g_0060e318;
extern "C" unsigned long g_0060e32c;
extern "C" unsigned long g_0060e35a;
extern "C" unsigned long g_0060e384;
extern "C" unsigned long g_0060e388;
extern "C" unsigned long g_0060e3ac;
extern "C" unsigned long g_0060e3ec;
extern "C" unsigned long g_0060e418;
extern "C" unsigned long g_0060e41c;
extern "C" unsigned long g_0060e49e;
extern "C" unsigned long g_0060e4a1;
extern "C" unsigned long g_0060e4b8;
extern "C" unsigned long g_0060e550;
extern "C" unsigned long g_0060e5cc;
extern "C" unsigned long g_0060e5d0;
extern "C" unsigned long g_0060e5d4;
extern "C" unsigned long g_0060e5d8;
extern "C" unsigned long g_0060e5dc;
extern "C" unsigned long g_0060e5e0;
extern "C" unsigned long g_0060e5e4;
extern "C" unsigned long g_0060e5e8;
extern "C" unsigned long g_0060e5ec;
extern "C" unsigned long g_0060e5f0;
extern "C" unsigned long g_0060e5f4;
int * BLPetSkillIconView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x11c)));
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

BLPetSkillIconView::~BLPetSkillIconView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0060e260 + g_0060e2d8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060e292 + g_0060e2dc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPetSkillIconView::BLPetSkillIconView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0060e32c + g_0060e384);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0060e35a + g_0060e388,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLPetSkillIconView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLPetSkillIconPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLPetSkillIconView::initView();
    ((BLPetSkillIconPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLPetSkillIconView*)((int)this));
  }
  return iVar1;
}

void BLPetSkillIconView::onEnter()
{
  ((BLPetSkillIconPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPetSkillIconView::onExit()
{
  ((BLPetSkillIconPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLPetSkillIconView::initView()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0060e3ac + (intptr_t)(g_0060e5d0)),auStack_28);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0060e3ec + (intptr_t)(g_0060e5d4)),auStack_28);
  iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar2;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  puVar7 = (unsigned char *)((char *)&g_0060e418 + (intptr_t)(g_0060e5d8));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0060e41c + (intptr_t)(g_0060e5dc)), (char const*)puVar7, g_0060e5e0);
  *(int *)((int)this + 4*(0x44)) = (int)piVar1;
  pcVar6 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  uVar3 = (undefined4)(func_0079e4fc(uStack_30,0x3f000000));
  uVar3 = (undefined4)(func_0079e57c(uVar3,0x40800000));
  uVar4 = (undefined4)(func_0079e4fc(iStack_2c + -0x80000000,0x3f000000));
  uVar4 = (undefined4)(func_0079e59c(uVar4,0x40800000));
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  iVar2 = (undefined4)(intptr_t)(g_0060e5e4);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x44)),(unsigned char *)((char *)&g_0060e49e + (intptr_t)(g_0060e5e4)));
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0060e4b8 + (intptr_t)(g_0060e5e8)), (char const*)puVar7, g_0060e5e0);
  *(int *)((int)this + 4*(0x45)) = (int)piVar1;
  (**(code **)(*(int *)(piVar1) + (0x1b4)))(piVar1,&g_0060e4a1 + iVar2);
  iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x45)));
  0 /* ctorZero */;
  uVar3 = (undefined4)(func_0079e57c(auStack_28[0],g_0060e5ec));
  0 /* ctorZero */;
  ((cocos2d::CCLabelTTF *)(iVar2))->setDimensions(*(const CCSize *)(void *)auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar6 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x90))((int *)*(int *)((int)this + 4*(0x45)),0);
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar2 = (undefined4)(intptr_t)(g_0060e5f4);
  *(int *)((int)this + 4*(0x46)) = iVar5;
  func_0079e45c(auStack_20,&g_0060e550 + iVar2,auStack_28);
  uVar3 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x30c))((int *)*(int *)((int)this + 4*(0x46)),uVar3,1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x294))((int *)*(int *)((int)this + 4*(0x46)),0);
  piVar1 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar6 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&uStack_30);
  return;
}
