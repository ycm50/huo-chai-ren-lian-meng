#include "BLSuitComposeView.h"
#include "CCGeometry.h"
#include "CCObject.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLSuitComposeInfoView.h"
#include "BLSuitComposeListView.h"
#include "BLSuitComposePresenter.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00694b08;
extern "C" unsigned long UNK_00694b1c;
extern "C" unsigned long UNK_00694b5c;
extern "C" unsigned long UNK_00694ba0;
extern "C" unsigned long UNK_00694c4e;
extern "C" unsigned long UNK_00694c7a;
extern "C" unsigned long _UNK_00694b0c;
extern "C" unsigned long _UNK_00694b8c;
extern "C" unsigned long _UNK_00694b90;
extern "C" unsigned long _UNK_00694ba4;
extern "C" unsigned long _UNK_00694ca4;
extern "C" unsigned long _UNK_00694ca8;
extern "C" unsigned long _UNK_00694df4;
extern "C" unsigned long _UNK_00694df8;
extern "C" unsigned long _UNK_00694dfc;
extern "C" unsigned long g_00694b08;
extern "C" unsigned long g_00694b0c;
extern "C" unsigned long g_00694b1c;
extern "C" unsigned long g_00694b5c;
extern "C" unsigned long g_00694b8c;
extern "C" unsigned long g_00694b90;
extern "C" unsigned long g_00694ba0;
extern "C" unsigned long g_00694ba4;
extern "C" unsigned long g_00694c4e;
extern "C" unsigned long g_00694c7a;
extern "C" unsigned long g_00694ca4;
extern "C" unsigned long g_00694ca8;
extern "C" unsigned long g_00694df4;
extern "C" unsigned long g_00694df8;
extern "C" unsigned long g_00694dfc;
void BLSuitComposeView::onExit()
{
  ((BLSuitComposePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void BLSuitComposeView::onEnter()
{
  ((BLSuitComposePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

BLSuitComposeView::~BLSuitComposeView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(&g_00694b1c + g_00694b8c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00694b5c + g_00694b90,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeView::BLSuitComposeView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00694c4e + g_00694ca4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00694c7a + g_00694ca8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLSuitComposeView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitComposePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitComposeView::initView();
    ((BLSuitComposePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitComposeView*)((int)this));
  }
  return iVar1 != 0;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLSuitComposeView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int aiStack_48 [2];
  undefined4 auStack_40 [2];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  uVar5 = (undefined4)(g_00694df8);
  uVar2 = (undefined4)(g_00694df4);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(auStack_40[0],uVar1));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(func_0079e4dc(uStack_34,uVar2));
  0 /* ctorZero */;
  piVar3 = (int *)((BLSuitComposeListView *)this)->create();
  *(int *)((int)this + 4*(0x43)) = (int)piVar3;
  iVar7 = (int)*(int *)&(*piVar3);
  pcVar6 = *(code **)(iVar7 + 0x4c);
  uVar2 = (undefined4)(func_0079e4fc(aiStack_48[0] + -0x80000000,0x3f000000));
  puVar4 = (undefined4 *)(**(code **)(iVar7 + 0x8c))(piVar3);
  uVar5 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar5));
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_30);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piVar3 = (int *)((BLSuitComposeInfoView *)this)->create();
  *(int *)((int)this + 4*(0x44)) = (int)piVar3;
  pcVar6 = *(code **)(*piVar3 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
  puVar4 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
  uVar5 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  uVar5 = (undefined4)(func_0079e59c(uVar5,uVar1));
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(func_0079e4dc(g_00694dfc,uVar1));
  uVar5 = (undefined4)(func_0079e59c(uVar5,uVar1));
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar2))->operator+(*(const CCPoint *)(void *)auStack_28);
  (*pcVar6)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  (**(code **)(*(int *)this + 0x88))(((int)this),aiStack_48);
  return;
}
