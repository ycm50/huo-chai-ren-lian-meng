#include "BLEquipPageView.h"
#include "CCDirector.h"
#include "CCArray.h"
#include "BLEquipPagePresenter.h"
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
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0067a818;
extern "C" unsigned long UNK_0067a86a;
extern "C" unsigned long UNK_0067a8b0;
extern "C" unsigned long UNK_0067a8d8;
extern "C" unsigned long UNK_0067a920;
extern "C" unsigned long UNK_0067a95c;
extern "C" unsigned long UNK_0067aac8;
extern "C" unsigned long _UNK_0067a89c;
extern "C" unsigned long _UNK_0067a8a0;
extern "C" unsigned long _UNK_0067a8b4;
extern "C" unsigned long _UNK_0067a8dc;
extern "C" unsigned long _UNK_0067a990;
extern "C" unsigned long _UNK_0067a994;
extern "C" unsigned long _UNK_0067ab90;
extern "C" unsigned long _UNK_0067ab94;
extern "C" unsigned long _UNK_0067ab98;
extern "C" unsigned long _UNK_0067ab9c;
extern "C" unsigned long _UNK_0067aba0;
extern "C" unsigned long g_0067a818;
extern "C" unsigned long g_0067a86a;
extern "C" unsigned long g_0067a89c;
extern "C" unsigned long g_0067a8a0;
extern "C" unsigned long g_0067a8b0;
extern "C" unsigned long g_0067a8b4;
extern "C" unsigned long g_0067a8d8;
extern "C" unsigned long g_0067a8dc;
extern "C" unsigned long g_0067a920;
extern "C" unsigned long g_0067a95c;
extern "C" unsigned long g_0067a990;
extern "C" unsigned long g_0067a994;
extern "C" unsigned long g_0067aac8;
extern "C" unsigned long g_0067ab90;
extern "C" unsigned long g_0067ab94;
extern "C" unsigned long g_0067ab98;
extern "C" unsigned long g_0067ab9c;
extern "C" unsigned long g_0067aba0;
BLEquipPageView::~BLEquipPageView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0067a818 + g_0067a89c);
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
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0067a86a + g_0067a8a0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLEquipPageView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x114)));
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

undefined4 BLEquipPageView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLEquipPageView::getGridViewEquips()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

void BLEquipPageView::onEnter()
{
  ((BLEquipPagePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEquipPageView::onExit()
{
  ((BLEquipPagePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLEquipPageView::BLEquipPageView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0067a920 + (intptr_t)(g_0067a990))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0067a95c + (intptr_t)(g_0067a994)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLEquipPageView::init()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iStack_44;
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 == 0) {
    iStack_44 = 0;
  }
  else {
    iVar1 = (undefined4)(intptr_t)(((BLEquipPagePresenter *)this)->create((BLEquipPageView*)((int)this)));
    *(int *)((int)this + 4*(0x43)) = iVar1;
    if (iVar1 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    piVar2 = (int *)func_0079e2fc(300);
    0 /* ctorZero */;
    iStack_44 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x18)))(piVar2));
    if (iStack_44 == 0) {
      (**(code **)(*(int *)(piVar2) + (8)))(piVar2);
      *(int *)((int)this + 4*(0x44)) = 0;
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x67ab88);
      (*pcVar6)();
    }
    ((cocos2d::CCObject *)piVar2)->autorelease();
    *(int *)((int)this + 4*(0x44)) = (int)piVar2;
    (**(code **)(*(int *)(piVar2) + (0x7c)))(piVar2,(unsigned char *)((char *)&g_0067aac8 + (intptr_t)(g_0067ab90)));
    piVar2 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar2 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_28[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uVar5,uVar3));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_1c);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(uVar5,uVar4));
    0 /* ctorZero */;
    (*pcVar6)(piVar2,auStack_30);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),0);
    pcVar6 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(func_0079e4dc(auStack_28[0],uVar5));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(func_0079e4dc(uStack_1c,uVar3));
    0 /* ctorZero */;
    (*pcVar6)(((int)this),auStack_30);
    ((BLEquipPagePresenter *)*(int *)((int)this + 4*(0x43)))->initWithView((BLEquipPageView*)((int)this));
  }
  return iStack_44;
}
