#include "JingJiShopItemNumPresenter.h"
#include "CCObject.h"
#include "JingJiShopItemNumView.h"
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
extern "C" unsigned long UNK_00576ac6;
extern "C" unsigned long UNK_00576ad8;
extern "C" unsigned long UNK_00576b32;
extern "C" unsigned long UNK_00576b44;
extern "C" unsigned long _UNK_00576b08;
extern "C" unsigned long _UNK_00576b0c;
extern "C" unsigned long _UNK_00576b70;
extern "C" unsigned long _UNK_00576b74;
extern "C" unsigned long g_00576ac6;
extern "C" unsigned long g_00576ad8;
extern "C" unsigned long g_00576b08;
extern "C" unsigned long g_00576b0c;
extern "C" unsigned long g_00576b32;
extern "C" unsigned long g_00576b44;
extern "C" unsigned long g_00576b70;
extern "C" unsigned long g_00576b74;
JingJiShopItemNumPresenter::~JingJiShopItemNumPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00576ad8 + g_00576b0c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

JingJiShopItemNumPresenter::JingJiShopItemNumPresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00576b44 + g_00576b74,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void JingJiShopItemNumPresenter::onEnter()
{
  return;
}

void JingJiShopItemNumPresenter::onExit()
{
  return;
}

undefined4 JingJiShopItemNumPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void JingJiShopItemNumPresenter::tick(float p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void JingJiShopItemNumPresenter::initWithView(JingJiShopItemNumView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}
