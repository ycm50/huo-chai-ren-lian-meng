#include "BLMainEffectPresenter.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f2e68;
extern "C" unsigned long UNK_005f2e80;
extern "C" unsigned long UNK_005f2e98;
extern "C" unsigned long UNK_005f2f0c;
extern "C" unsigned long UNK_005f2f26;
extern "C" unsigned long UNK_005f2f6c;
extern "C" unsigned long UNK_005f2f94;
extern "C" unsigned long UNK_005f2faa;
extern "C" unsigned long UNK_005f2fc2;
extern "C" unsigned long UNK_005f3026;
extern "C" unsigned long _UNK_005f2e6c;
extern "C" unsigned long _UNK_005f2e84;
extern "C" unsigned long _UNK_005f2e9c;
extern "C" unsigned long _UNK_005f2f58;
extern "C" unsigned long _UNK_005f2f5c;
extern "C" unsigned long _UNK_005f2f70;
extern "C" unsigned long _UNK_005f2f98;
extern "C" unsigned long _UNK_005f2fec;
extern "C" unsigned long _UNK_005f2ff0;
extern "C" unsigned long _UNK_005f302c;
extern "C" unsigned long g_005f2e68;
extern "C" unsigned long g_005f2e6c;
extern "C" unsigned long g_005f2e80;
extern "C" unsigned long g_005f2e84;
extern "C" unsigned long g_005f2e98;
extern "C" unsigned long g_005f2e9c;
extern "C" unsigned long g_005f2f0c;
extern "C" unsigned long g_005f2f26;
extern "C" unsigned long g_005f2f58;
extern "C" unsigned long g_005f2f5c;
extern "C" unsigned long g_005f2f6c;
extern "C" unsigned long g_005f2f70;
extern "C" unsigned long g_005f2f94;
extern "C" unsigned long g_005f2f98;
extern "C" unsigned long g_005f2faa;
extern "C" unsigned long g_005f2fc2;
extern "C" unsigned long g_005f2fec;
extern "C" unsigned long g_005f2ff0;
extern "C" unsigned long g_005f3026;
extern "C" unsigned long g_005f302c;
bool BLMainEffectPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainEffectPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainEffectPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainEffectPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainEffectPresenter::tick(float p1)
{
  return;
}

BLMainEffectPresenter::~BLMainEffectPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f2f0c + g_005f2f58);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f2f26 + g_005f2f5c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMainEffectPresenter::BLMainEffectPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005f2faa + g_005f2fec);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f2fc2 + g_005f2ff0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLMainEffectPresenter::create(BLMainEffectView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainEffectPresenter::onExit()
{
  return;
}

void BLMainEffectPresenter::onEnter()
{
  return;
}


void BLMainEffectPresenter::removeliuxing()
{
  return;
}

void BLMainEffectPresenter::showliuxing()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMainEffectPresenter::initWithView(BLMainEffectView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  cocos2d::CCLog((char const*)&g_005f3026 + g_005f302c);
  return;
}
