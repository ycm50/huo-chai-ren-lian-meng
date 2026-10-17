#include "BLSuitUpGraceView.h"
#include "CCGeometry.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCSprite.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLSuitUpGracePresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "BLSuitUpGraceListView.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
#include "BLSuitUpGraceInfoView.h"   /* ALLOC+CTOR_FIX(R120): ???????? placement new */
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
extern "C" unsigned long UNK_0069b5cc;
extern "C" unsigned long UNK_0069b610;
extern "C" unsigned long UNK_0069b654;
extern "C" unsigned long UNK_0069b6f4;
extern "C" unsigned long UNK_0069bf64;
extern "C" unsigned long UNK_0069bf92;
extern "C" unsigned long _UNK_0069b640;
extern "C" unsigned long _UNK_0069b644;
extern "C" unsigned long _UNK_0069b658;
extern "C" unsigned long _UNK_0069b6f8;
extern "C" unsigned long _UNK_0069bfbc;
extern "C" unsigned long _UNK_0069bfc0;
extern "C" unsigned long _UNK_0069c514;
extern "C" unsigned long _UNK_0069c518;
extern "C" unsigned long _UNK_0069c51c;
extern "C" unsigned long _UNK_0069c520;
extern "C" unsigned long _UNK_0069c524;
extern "C" unsigned long g_0069b5cc;
extern "C" unsigned long g_0069b610;
extern "C" unsigned long g_0069b640;
extern "C" unsigned long g_0069b644;
extern "C" unsigned long g_0069b654;
extern "C" unsigned long g_0069b658;
extern "C" unsigned long g_0069b6f4;
extern "C" unsigned long g_0069b6f8;
extern "C" unsigned long g_0069bf64;
extern "C" unsigned long g_0069bf92;
extern "C" unsigned long g_0069bfbc;
extern "C" unsigned long g_0069bfc0;
extern "C" unsigned long g_0069c514;
extern "C" unsigned long g_0069c518;
extern "C" unsigned long g_0069c51c;
extern "C" unsigned long g_0069c520;
extern "C" unsigned long g_0069c524;
BLSuitUpGraceView::~BLSuitUpGraceView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069b5cc + g_0069b640);
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
  func_0079e45c(&uStack_14,&g_0069b610 + g_0069b644,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitUpGraceView::BLSuitUpGraceView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0069bf64 + g_0069bfbc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069bf92 + g_0069bfc0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLSuitUpGraceView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitUpGracePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitUpGraceView::initView();
    ((BLSuitUpGracePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitUpGraceView*)((int)this));
  }
  return iVar1;
}

void BLSuitUpGraceView::onEnter()
{
  ((BLSuitUpGracePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitUpGraceView::onExit()
{
  ((BLSuitUpGracePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLSuitUpGraceView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(auStack_28[0],uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_1c,uVar2));
  0 /* ctorZero */;
  piVar3 = (int *)::operator new(0x11c);
  ::new ((void *)piVar3) BLSuitUpGraceListView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar4 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    piVar3 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar3))->autorelease();
  }
  *(int *)((int)this + 4*(0x43)) = (int)piVar3;
  (**(code **)(*(int *)this + 200))(((int)this));
  piVar3 = (int *)::operator new(0x124);
  ::new ((void *)piVar3) BLSuitUpGraceInfoView();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar4 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    piVar3 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar3))->autorelease();
  }
  *(int *)((int)this + 4*(0x44)) = (int)piVar3;
  (**(code **)(*(int *)this + 200))(((int)this));
  piVar3 = (int *)func_0079e2fc(300);
  0 /* ctorZero */;
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x18)))(piVar3));
  if (iVar4 == 0) {
    (**(code **)(*(int *)(piVar3) + (8)))(piVar3);
    piVar3 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar3))->autorelease();
  }
  *(int *)((int)this + 4*(0x45)) = (int)piVar3;
  (**(code **)(*(int *)this + 200))(((int)this));
  uVar1 = (undefined4)(uStack_34);
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  uVar1 = (undefined4)(func_0079e57c(uVar1,*(undefined4 *)(iVar4 + 4)));
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
  uVar1 = (undefined4)(func_0079e57c(uVar1,*(undefined4 *)(iVar4 + 4)));
  uVar1 = (undefined4)(func_0079e4dc(uVar1,g_0069c51c));
  iVar4 = (undefined4)(intptr_t)(iStack_38);
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
  uVar2 = (undefined4)(func_0079e57c(iVar4,*puVar5));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))();
  uVar2 = (undefined4)(func_0079e57c(uVar2,*puVar5));
  uVar2 = (undefined4)(func_0079e4dc(uVar2,g_0069c51c));
  uVar6 = (undefined4)(func_0079e4fc(uStack_34,0x3f000000));
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar6 = (undefined4)(func_0079e57c(uVar6,uVar7));
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,auStack_20);
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar7));
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
  uVar7 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,uVar7));
  uVar1 = (undefined4)(func_0079e57c(uVar6,uVar1));
  uVar6 = (undefined4)(func_0079e4fc(iStack_38 + -0x80000000,0x3f000000));
  uVar6 = (undefined4)(func_0079e59c(uVar6,uVar2));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
  uVar7 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar6 = (undefined4)(func_0079e59c(uVar6,uVar7));
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar8)(piVar3,auStack_20);
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
  uVar7 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar7,uVar2));
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x8c))();
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  uVar7 = (undefined4)(func_0079e4fc(*puVar5,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar7));
  uVar2 = (undefined4)(func_0079e59c(uVar6,uVar2));
  0 /* ctorZero */;
  (*pcVar8)(piVar3,auStack_20);
  piVar3 = (int *)cocos2d::CCSprite::create();
  *(int *)((int)this + 4*(0x46)) = (int)piVar3;
  pcVar8 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  0 /* ctorZero */;
  uVar6 = (undefined4)(func_0079e4fc(uStack_2c,0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar6));
  cocos2d::CCDirector::sharedDirector();
  uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar6 = (undefined4)(func_0079e4dc(g_0069c524,uVar6));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar6));
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar1))->operator+(*(const CCPoint *)(void *)auStack_28);
  (*pcVar8)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_38);
  return;
}
