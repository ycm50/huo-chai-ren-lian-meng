#include "BLMineCollectView.h"
#include "CCNode.h"
#include "CCScrollView.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "CCLayer.h"
#include "CCGeometry.h"
#include "BLLeakUtils.h"
#include "BLMineCollectPresenter.h"
#include "PagedScrollView.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a8a3c;
extern "C" unsigned long UNK_005a8a80;
extern "C" unsigned long UNK_005a8ac4;
extern "C" unsigned long UNK_005a8aec;
extern "C" unsigned long UNK_005a8b04;
extern "C" unsigned long UNK_005a8b32;
extern "C" unsigned long _UNK_005a8ab0;
extern "C" unsigned long _UNK_005a8ab4;
extern "C" unsigned long _UNK_005a8ac8;
extern "C" unsigned long _UNK_005a8af0;
extern "C" unsigned long _UNK_005a8b5c;
extern "C" unsigned long _UNK_005a8b60;
extern "C" unsigned long _UNK_005a8d44;
extern "C" unsigned long _UNK_005a8d48;
extern "C" unsigned long g_005a8a3c;
extern "C" unsigned long g_005a8a80;
extern "C" unsigned long g_005a8ab0;
extern "C" unsigned long g_005a8ab4;
extern "C" unsigned long g_005a8ac4;
extern "C" unsigned long g_005a8ac8;
extern "C" unsigned long g_005a8aec;
extern "C" unsigned long g_005a8af0;
extern "C" unsigned long g_005a8b04;
extern "C" unsigned long g_005a8b32;
extern "C" unsigned long g_005a8b5c;
extern "C" unsigned long g_005a8b60;
extern "C" unsigned long g_005a8d44;
extern "C" unsigned long g_005a8d48;
BLMineCollectView::~BLMineCollectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a8a3c + g_005a8ab0);
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
  func_0079e45c(&uStack_14,&g_005a8a80 + g_005a8ab4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineCollectView::BLMineCollectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005a8b04 + g_005a8b5c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a8b32 + g_005a8b60,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineCollectView::create()
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

undefined4 BLMineCollectView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineCollectView::getScrollView()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMineCollectView::getBtnCoinFresh()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMineCollectView::getBtnDimandFresh()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineCollectView::getLabeTip()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLMineCollectView::onExit()
{
  ((BLMineCollectPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

void BLMineCollectView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLMineCollectPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineCollectView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [2];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLMineCollectPresenter *)this)->create((BLMineCollectView*)((int)this)));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    uVar3 = (undefined4)(cocos2d::CCLayer::create());
    uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    *(CCSize *)(auStack_30) = ((cocos2d::CCDirector *)(uVar4))->getWinSize();
    uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar4))->getWinSize(); iStack_28 = hw_fbits(_ws.width); uStack_24 = hw_fbits(_ws.height); }
    uVar4 = (undefined4)(func_0079e57c(uStack_24,g_005a8d44));
    0 /* ctorZero */;
    uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar4))->getWinSize(); uStack_20 = hw_fbits(_ws.width); uStack_1c = hw_fbits(_ws.height); }
    iVar2 = (undefined4)((void)((((PagedScrollView *)this))->create(*(cocos2d::CCSize *)auStack_38,uStack_20)),(intptr_t)0);
    *(int *)((int)this + 4*(0x43)) = iVar2;
    *(undefined1 *)(iVar2 + 0x154) = 0;
    piVar7 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar4))->getWinSize(); iStack_28 = hw_fbits(_ws.width); uStack_24 = hw_fbits(_ws.height); }
    uVar4 = (undefined4)(func_0079e4fc(iStack_28 + -0x80000000,0x3f000000));
    uVar5 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar5))->getWinSize(); uStack_20 = hw_fbits(_ws.width); uStack_1c = hw_fbits(_ws.height); }
    uVar5 = (undefined4)(func_0079e4fc(uStack_1c,0x3f000000));
    iVar2 = (undefined4)(intptr_t)(func_0079e57c(uVar5,g_005a8d48));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_30);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1fc))((int *)*(int *)((int)this + 4*(0x43)),0);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1d4))((int *)*(int *)((int)this + 4*(0x43)),0xffffff7d);
    ((cocos2d::extension::CCScrollView *)(*(int *)((int)this + 4*(0x43))))->setContainer((cocos2d::CCNode*)uVar3);
    pcVar6 = *(code **)(*(int *)this + 0x88);
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar3))->getWinSize(); iStack_28 = hw_fbits(_ws.width); uStack_24 = hw_fbits(_ws.height); }
    uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar3))->getWinSize(); uStack_20 = hw_fbits(_ws.width); uStack_1c = hw_fbits(_ws.height); }
    uVar3 = (undefined4)(func_0079e57c(uStack_1c,g_005a8d44));
    0 /* ctorZero */;
    (*pcVar6)(((int)this),auStack_30);
    ((BLMineCollectPresenter *)(*(int *)((int)this + 4*(0x42))))->initWithView((BLMineCollectView*)((int)this));
  }
  return iVar1;
}
