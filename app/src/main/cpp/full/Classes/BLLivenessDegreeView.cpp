#include "BLLivenessDegreeView.h"
#include "CCSprite.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCProgressTimer.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLLivenessDegreePresenter.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057fe00;
extern "C" unsigned long UNK_0057fe36;
extern "C" unsigned long UNK_0057fea4;
extern "C" unsigned long UNK_0057fecc;
extern "C" unsigned long UNK_005801ac;
extern "C" unsigned long UNK_005801e8;
extern "C" unsigned long UNK_00580284;
extern "C" unsigned long UNK_005802c6;
extern "C" unsigned long UNK_005802ca;
extern "C" unsigned long UNK_00580364;
extern "C" unsigned long UNK_0058037a;
extern "C" unsigned long UNK_00580426;
extern "C" unsigned long UNK_005804a6;
extern "C" unsigned long _UNK_0057fe90;
extern "C" unsigned long _UNK_0057fe94;
extern "C" unsigned long _UNK_0057fea8;
extern "C" unsigned long _UNK_0057fed0;
extern "C" unsigned long _UNK_00580224;
extern "C" unsigned long _UNK_00580228;
extern "C" unsigned long _UNK_00580538;
extern "C" unsigned long _UNK_0058053c;
extern "C" unsigned long _UNK_00580540;
extern "C" unsigned long _UNK_00580544;
extern "C" unsigned long _UNK_00580548;
extern "C" unsigned long _UNK_0058054c;
extern "C" unsigned long _UNK_00580550;
extern "C" unsigned long _UNK_00580554;
extern "C" unsigned long _UNK_00580558;
extern "C" unsigned long _UNK_0058055c;
extern "C" unsigned long _UNK_00580560;
extern "C" unsigned long _UNK_00580564;
extern "C" unsigned long _UNK_00580568;
extern "C" unsigned long g_0057fe00;
extern "C" unsigned long g_0057fe36;
extern "C" unsigned long g_0057fe90;
extern "C" unsigned long g_0057fe94;
extern "C" unsigned long g_0057fea4;
extern "C" unsigned long g_0057fea8;
extern "C" unsigned long g_0057fecc;
extern "C" unsigned long g_0057fed0;
extern "C" unsigned long g_005801ac;
extern "C" unsigned long g_005801e8;
extern "C" unsigned long g_00580224;
extern "C" unsigned long g_00580228;
extern "C" unsigned long g_00580284;
extern "C" unsigned long g_005802c6;
extern "C" unsigned long g_005802ca;
extern "C" unsigned long g_00580364;
extern "C" unsigned long g_0058037a;
extern "C" unsigned long g_00580426;
extern "C" unsigned long g_005804a6;
extern "C" unsigned long g_00580538;
extern "C" unsigned long g_0058053c;
extern "C" unsigned long g_00580540;
extern "C" unsigned long g_00580544;
extern "C" unsigned long g_00580548;
extern "C" unsigned long g_0058054c;
extern "C" unsigned long g_00580550;
extern "C" unsigned long g_00580554;
extern "C" unsigned long g_00580558;
extern "C" unsigned long g_0058055c;
extern "C" unsigned long g_00580560;
extern "C" unsigned long g_00580564;
extern "C" unsigned long g_00580568;
BLLivenessDegreeView::~BLLivenessDegreeView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_0057fe00 + g_0057fe90);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_0057fe36 + g_0057fe94,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  *(int *)((int)this + 4*(0x46)) = *(int *)((int)this + 4*(0x45));
  if (*(int *)((int)this + 4*(0x45)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(0x45)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessDegreeView::BLLivenessDegreeView()
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
  iVar2 = *(int *)(&g_005801ac + g_00580224);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_005801e8 + g_00580228,&piStack_20);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(int *)((int)this + 4*(0x46)) = *(int *)((int)this + 4*(0x45));
  return;
}


bool BLLivenessDegreeView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLLivenessDegreePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLLivenessDegreeView::initView();
    ((BLLivenessDegreePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLLivenessDegreeView*)((int)this));
  }
  return iVar1;
}

void BLLivenessDegreeView::onEnter()
{
  ((BLLivenessDegreePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLivenessDegreeView::onExit()
{
  ((BLLivenessDegreePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLivenessDegreeView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined *puVar8;
  code *pcVar9;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(uStack_28,uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_1c,uVar2));
  0 /* ctorZero */;
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00580284 + (intptr_t)(g_00580540)),&uStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar9 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar9)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  puVar8 = (unsigned char *)((char *)&g_005802c6 + (intptr_t)(g_00580544));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005802ca + (intptr_t)(g_00580548)), (char const*)puVar8, g_0058054c);
  pcVar9 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar9)(piVar3,&uStack_20);
  pcVar9 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(0x41000000,uVar2));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar2));
  uVar2 = (undefined4)(func_0079e4fc(uStack_34,0x3f000000));
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(func_0079e4dc(0x41000000,uVar4));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar4));
  0 /* ctorZero */;
  (*pcVar9)(piVar3,&uStack_20);
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3,(unsigned char *)((char *)&g_00580364 + (intptr_t)(g_00580550)));
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  piVar5 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0058037a + (intptr_t)(g_00580554)), (char const*)puVar8, g_0058054c);
  *(int *)((int)this + 4*(0x43)) = (int)piVar5;
  uStack_20 = 0xff;
  uStack_1f = 0xdd;
  uStack_1e = 0;
  (**(code **)(*(int *)(piVar5) + (0x1b4)))(piVar5,&uStack_20);
  piVar5 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar9 = *(code **)(*piVar5 + 0x7c);
  0 /* ctorZero */;
  (*pcVar9)(piVar5,&uStack_20);
  piVar5 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar9 = *(code **)(*piVar5 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x50)))(piVar3));
  puVar6 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
  uVar4 = (undefined4)(*puVar6);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(g_00580558,uVar2));
  uVar2 = (undefined4)(func_0079e59c(uVar4,uVar2));
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar1))->operator+(*(cocos2d::CCPoint const*)&uStack_28);
  (*pcVar9)(piVar5,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_00580426 + (intptr_t)(g_0058055c)),&uStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar9 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(auStack_30[0],uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_24,uVar2));
  0 /* ctorZero */;
  (*pcVar9)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_005804a6 + (intptr_t)(g_00580568)),&uStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  iVar7 = (undefined4)(intptr_t)(cocos2d::CCProgressTimer::create((cocos2d::CCSprite*)uVar1));
  *(int *)((int)this + 4*(0x44)) = iVar7;
  ((cocos2d::CCProgressTimer *)(iVar7))->setType((cocos2d::CCProgressTimerType)1);
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar9 = *(code **)(*piVar3 + 0x1d8);
  0 /* ctorZero */;
  (*pcVar9)(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar9 = *(code **)(*piVar3 + 0x1e0);
  0 /* ctorZero */;
  (*pcVar9)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_38);
  return;
}
