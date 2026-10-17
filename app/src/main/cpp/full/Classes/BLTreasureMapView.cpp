#include "BLTreasureMapView.h"
#include "CCAction.h"
#include "CCNode.h"
#include "CCObject.h"
#include "CCScrollView.h"
#include "CCDirector.h"
#include "CCLayer.h"
#include "CCControlButton.h"
#include "CCSprite.h"
#include "CCGeometry.h"
#include "BLLeakUtils.h"
#include "BLTreasureMapPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006aef84;
extern "C" unsigned long UNK_006aefc8;
extern "C" unsigned long UNK_006af00c;
extern "C" unsigned long UNK_006af034;
extern "C" unsigned long UNK_006af04c;
extern "C" unsigned long UNK_006af07a;
extern "C" unsigned long UNK_006af1fa;
extern "C" unsigned long UNK_006af292;
extern "C" unsigned long UNK_006af2f6;
extern "C" unsigned long UNK_006af330;
extern "C" unsigned long UNK_006af348;
extern "C" unsigned long _UNK_006aeff8;
extern "C" unsigned long _UNK_006aeffc;
extern "C" unsigned long _UNK_006af010;
extern "C" unsigned long _UNK_006af038;
extern "C" unsigned long _UNK_006af0a4;
extern "C" unsigned long _UNK_006af0a8;
extern "C" unsigned long _UNK_006af238;
extern "C" unsigned long _UNK_006af23c;
extern "C" unsigned long _UNK_006af240;
extern "C" unsigned long _UNK_006af244;
extern "C" unsigned long _UNK_006af248;
extern "C" unsigned long _UNK_006af24c;
extern "C" unsigned long _UNK_006af250;
extern "C" unsigned long _UNK_006af27c;
extern "C" unsigned long _UNK_006af280;
extern "C" unsigned long _UNK_006af2e0;
extern "C" unsigned long _UNK_006af2e4;
extern "C" unsigned long _UNK_006af3b0;
extern "C" unsigned long _UNK_006af3b4;
extern "C" unsigned long _UNK_006af3b8;
extern "C" unsigned long _UNK_006af3bc;
extern "C" unsigned long _UNK_006af3c0;
extern "C" unsigned long g_006aef84;
extern "C" unsigned long g_006aefc8;
extern "C" unsigned long g_006aeff8;
extern "C" unsigned long g_006aeffc;
extern "C" unsigned long g_006af00c;
extern "C" unsigned long g_006af010;
extern "C" unsigned long g_006af034;
extern "C" unsigned long g_006af038;
extern "C" unsigned long g_006af04c;
extern "C" unsigned long g_006af07a;
extern "C" unsigned long g_006af0a4;
extern "C" unsigned long g_006af0a8;
extern "C" unsigned long g_006af1fa;
extern "C" unsigned long g_006af238;
extern "C" unsigned long g_006af23c;
extern "C" unsigned long g_006af240;
extern "C" unsigned long g_006af244;
extern "C" unsigned long g_006af248;
extern "C" unsigned long g_006af24c;
extern "C" unsigned long g_006af250;
extern "C" unsigned long g_006af27c;
extern "C" unsigned long g_006af280;
extern "C" unsigned long g_006af292;
extern "C" unsigned long g_006af2e0;
extern "C" unsigned long g_006af2e4;
extern "C" unsigned long g_006af2f6;
extern "C" unsigned long g_006af330;
extern "C" unsigned long g_006af348;
extern "C" unsigned long g_006af3b0;
extern "C" unsigned long g_006af3b4;
extern "C" unsigned long g_006af3b8;
extern "C" unsigned long g_006af3bc;
extern "C" unsigned long g_006af3c0;
BLTreasureMapView::~BLTreasureMapView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006aef84 + g_006aeff8);
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
  func_0079e45c(&uStack_14,&g_006aefc8 + g_006aeffc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureMapView::BLTreasureMapView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006af04c + g_006af0a4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006af07a + g_006af0a8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}



undefined8 BLTreasureMapView::initView()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  (**(code **)(*(int *)this + 0x88))(((int)this),&piStack_18);
  BLTreasureMapView::initBgLayer();
  BLTreasureMapView::initMapLayer();
  return ghidra_CONCAT44(uStack_14,piStack_18);
}

void BLTreasureMapView::initSpPointer()
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  func_0079e45c(auStack_20,&g_006af292 + g_006af2e0,auStack_24);
  uVar1 = (undefined4)(0 /* ctorZero */);
  *(undefined4 *)(((int)this) + 0x118) = uVar1;
  func_0079e2bc(auStack_20);
  piVar2 = *(int **)(((int)this) + 0x118);
  pcVar3 = *(code **)(*piVar2 + 0x7c);
  0 /* ctorZero */;
  (*pcVar3)(piVar2,auStack_20);
  piVar2 = (int *)((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 0x10c))->getContainer();
  (**(code **)(*piVar2 + 0xcc))(piVar2,*(undefined4 *)(((int)this) + 0x118),10);
  return;
}

void BLTreasureMapView::initOnePiece()
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  piVar2 = (int *)cocos2d::CCSprite::create((char const*)&g_006af2f6 + g_006af3b0);
  (**(code **)(*piVar2 + 0x11c))(piVar2,g_006af3b4);
  (**(code **)(*piVar2 + 0x40))(piVar2,0x3f000000);
  piVar3 = (int *)((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 0x10c))->getContainer();
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar2,0xffffffff);
  uVar4 = (undefined4)(0 /* ctorZero */);
  ((cocos2d::CCNode *)piVar2)->runAction((cocos2d::CCAction*)uVar4);
  uVar4 = (undefined4)(cocos2d::extension::CCControlButton::create());
  iVar1 = g_006af3c0;
  *(undefined4 *)(((int)this) + 0x11c) = uVar4;
  func_0079e45c(auStack_20,&g_006af348 + iVar1,auStack_24);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  (**(code **)(**(int **)(((int)this) + 0x11c) + 0x30c))(*(int **)(((int)this) + 0x11c),piVar2,1);
  piVar3 = *(int **)(((int)this) + 0x11c);
  pcVar5 = *(code **)(*piVar3 + 0x28c);
  (**(code **)(*piVar2 + 0x1cc))(auStack_20,piVar2);
  (*pcVar5)(piVar3,auStack_20);
  piVar2 = (int *)((cocos2d::extension::CCScrollView *)*(undefined4 *)(((int)this) + 0x10c))->getContainer();
  (**(code **)(*piVar2 + 0xcc))(piVar2,*(undefined4 *)(((int)this) + 0x11c),0xffffffff);
  return;
}

undefined4 BLTreasureMapView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLTreasureMapView::getScrollView()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLTreasureMapView::getSpPointer()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLTreasureMapView::getBtnOnePiece()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

bool BLTreasureMapView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLTreasureMapPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLTreasureMapView::initView();
    ((BLTreasureMapPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLTreasureMapView*)((int)this));
  }
  return iVar1;
}

void BLTreasureMapView::onEnter()
{
  ((BLTreasureMapPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureMapView::onExit()
{
  ((BLTreasureMapPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLTreasureMapView::initBgLayer()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCLayer::create());
  *(int *)((int)this + 4*(0x44)) = iVar1;
  (**(code **)(*(int *)this + 200))(((int)this),iVar1);
  return;
}

void BLTreasureMapView::initMapLayer()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)(auStack_38) = ((cocos2d::CCDirector *)(uVar1))->getWinSize();
  0 /* ctorZero */;
  iVar4 = (undefined4)(intptr_t)(iStack_28);
  0 /* ctorZero */;
  uVar1 = (undefined4)(func_0079e4fc(auStack_20[0],g_006af240));
  uVar1 = (undefined4)(func_0079e59c(iVar4,uVar1));
  uVar2 = (undefined4)(func_0079e57c(uStack_34,g_006af244));
  0 /* ctorZero */;
  piVar3 = (int *)cocos2d::CCLayer::create();
  *(int *)((int)this + 4*(0x45)) = (int)piVar3;
  (**(code **)(*(int *)(piVar3) + (0x88)))(piVar3,&iStack_30);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(iStack_30 + -0x80000000,0x3f000000));
  uVar2 = (undefined4)(func_0079e4fc(iStack_2c + -0x80000000,0x3f000000));
  0 /* ctorZero */;
  (*pcVar5)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  0 /* ctorZero */;
  iVar4 = (undefined4)(intptr_t)(cocos2d::extension::CCScrollView::create(*(cocos2d::CCSize *)(void *)&auStack_20, 0));
  *(int *)((int)this + 4*(0x43)) = iVar4;
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 200))((int *)*(int *)((int)this + 4*(0x45)),iVar4);
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar3 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar3,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1fc))((int *)*(int *)((int)this + 4*(0x43)),1);
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar3 + 0x88);
  0 /* ctorZero */;
  uVar1 = (undefined4)(func_0079e4fc(uStack_24,g_006af248));
  0 /* ctorZero */;
  (*pcVar5)(piVar3,auStack_20);
  iVar4 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x43)));
  0 /* ctorZero */;
  ((cocos2d::extension::CCScrollView *)(iVar4))->setContentOffset(*(cocos2d::CCPoint *)(void *)&auStack_20, 0);
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  uVar1 = (undefined4)(func_0079e4dc(iStack_28 + -0x80000000,g_006af250));
  0 /* ctorZero */;
  (*pcVar5)(piVar3,auStack_20);
  return;
}
