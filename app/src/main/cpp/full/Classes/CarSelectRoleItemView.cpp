#include "CarSelectRoleItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "CarSelectRoleItemPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_006c32c6(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006c263c;
extern "C" unsigned long UNK_006c268e;
extern "C" unsigned long UNK_006c26d4;
extern "C" unsigned long UNK_006c26fc;
extern "C" unsigned long UNK_006c2744;
extern "C" unsigned long UNK_006c2780;
extern "C" unsigned long UNK_006c28e0;
extern "C" unsigned long UNK_006c290e;
extern "C" unsigned long UNK_006c2a68;
extern "C" unsigned long UNK_006c2ab0;
extern "C" unsigned long UNK_006c2b00;
extern "C" unsigned long UNK_006c2b2a;
extern "C" unsigned long UNK_006c2bf2;
extern "C" unsigned long UNK_006c2c90;
extern "C" unsigned long UNK_006c2d34;
extern "C" unsigned long UNK_006c2ddc;
extern "C" unsigned long UNK_006c2e06;
extern "C" unsigned long UNK_006c2f14;
extern "C" unsigned long UNK_006c2f3e;
extern "C" unsigned long UNK_006c2ffe;
extern "C" unsigned long UNK_006c3028;
extern "C" unsigned long UNK_006c30e0;
extern "C" unsigned long UNK_006c317e;
extern "C" unsigned long _UNK_006c26c0;
extern "C" unsigned long _UNK_006c26c4;
extern "C" unsigned long _UNK_006c26d8;
extern "C" unsigned long _UNK_006c2700;
extern "C" unsigned long _UNK_006c27b4;
extern "C" unsigned long _UNK_006c27b8;
extern "C" unsigned long _UNK_006c2a84;
extern "C" unsigned long _UNK_006c2a88;
extern "C" unsigned long _UNK_006c2a8c;
extern "C" unsigned long _UNK_006c2a90;
extern "C" unsigned long _UNK_006c2a94;
extern "C" unsigned long _UNK_006c2a98;
extern "C" unsigned long _UNK_006c2e90;
extern "C" unsigned long _UNK_006c2e94;
extern "C" unsigned long _UNK_006c2e98;
extern "C" unsigned long _UNK_006c2e9c;
extern "C" unsigned long _UNK_006c2ea0;
extern "C" unsigned long _UNK_006c2ea4;
extern "C" unsigned long _UNK_006c2ea8;
extern "C" unsigned long _UNK_006c2eac;
extern "C" unsigned long _UNK_006c2eb0;
extern "C" unsigned long _UNK_006c2eb4;
extern "C" unsigned long _UNK_006c2eb8;
extern "C" unsigned long _UNK_006c2ebc;
extern "C" unsigned long _UNK_006c2ec0;
extern "C" unsigned long _UNK_006c2ec4;
extern "C" unsigned long _UNK_006c2ec8;
extern "C" unsigned long _UNK_006c2ecc;
extern "C" unsigned long _UNK_006c2ed0;
extern "C" unsigned long _UNK_006c2ed4;
extern "C" unsigned long _UNK_006c32d4;
extern "C" unsigned long _UNK_006c32d8;
extern "C" unsigned long _UNK_006c32dc;
extern "C" unsigned long _UNK_006c32e0;
extern "C" unsigned long _UNK_006c32e4;
extern "C" unsigned long _UNK_006c32e8;
extern "C" unsigned long _UNK_006c32ec;
extern "C" unsigned long _UNK_006c32f0;
extern "C" unsigned long _UNK_006c32f4;
extern "C" unsigned long _UNK_006c32f8;
extern "C" unsigned long _UNK_006c32fc;
extern "C" unsigned long _UNK_006c3300;
extern "C" unsigned long _UNK_006c3304;
extern "C" unsigned long _UNK_006c3308;
extern "C" unsigned long g_006c263c;
extern "C" unsigned long g_006c268e;
extern "C" unsigned long g_006c26c0;
extern "C" unsigned long g_006c26c4;
extern "C" unsigned long g_006c26d4;
extern "C" unsigned long g_006c26d8;
extern "C" unsigned long g_006c26fc;
extern "C" unsigned long g_006c2700;
extern "C" unsigned long g_006c2744;
extern "C" unsigned long g_006c2780;
extern "C" unsigned long g_006c27b4;
extern "C" unsigned long g_006c27b8;
extern "C" unsigned long g_006c28e0;
extern "C" unsigned long g_006c290e;
extern "C" unsigned long g_006c2a68;
extern "C" unsigned long g_006c2a84;
extern "C" unsigned long g_006c2a88;
extern "C" unsigned long g_006c2a8c;
extern "C" unsigned long g_006c2a90;
extern "C" unsigned long g_006c2a94;
extern "C" unsigned long g_006c2a98;
extern "C" unsigned long g_006c2ab0;
extern "C" unsigned long g_006c2b00;
extern "C" unsigned long g_006c2b2a;
extern "C" unsigned long g_006c2bf2;
extern "C" unsigned long g_006c2c90;
extern "C" unsigned long g_006c2d34;
extern "C" unsigned long g_006c2ddc;
extern "C" unsigned long g_006c2e06;
extern "C" unsigned long g_006c2e90;
extern "C" unsigned long g_006c2e94;
extern "C" unsigned long g_006c2e98;
extern "C" unsigned long g_006c2e9c;
extern "C" unsigned long g_006c2ea0;
extern "C" unsigned long g_006c2ea4;
extern "C" unsigned long g_006c2ea8;
extern "C" unsigned long g_006c2eac;
extern "C" unsigned long g_006c2eb0;
extern "C" unsigned long g_006c2eb4;
extern "C" unsigned long g_006c2eb8;
extern "C" unsigned long g_006c2ebc;
extern "C" unsigned long g_006c2ec0;
extern "C" unsigned long g_006c2ec4;
extern "C" unsigned long g_006c2ec8;
extern "C" unsigned long g_006c2ecc;
extern "C" unsigned long g_006c2ed0;
extern "C" unsigned long g_006c2ed4;
extern "C" unsigned long g_006c2f14;
extern "C" unsigned long g_006c2f3e;
extern "C" unsigned long g_006c2ffe;
extern "C" unsigned long g_006c3028;
extern "C" unsigned long g_006c30e0;
extern "C" unsigned long g_006c317e;
extern "C" unsigned long g_006c32d4;
extern "C" unsigned long g_006c32d8;
extern "C" unsigned long g_006c32dc;
extern "C" unsigned long g_006c32e0;
extern "C" unsigned long g_006c32e4;
extern "C" unsigned long g_006c32e8;
extern "C" unsigned long g_006c32ec;
extern "C" unsigned long g_006c32f0;
extern "C" unsigned long g_006c32f4;
extern "C" unsigned long g_006c32f8;
extern "C" unsigned long g_006c32fc;
extern "C" unsigned long g_006c3300;
extern "C" unsigned long g_006c3304;
extern "C" unsigned long g_006c3308;
CarSelectRoleItemView::~CarSelectRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006c263c + g_006c26c0);
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
  func_0079e45c(&uStack_14,&g_006c268e + g_006c26c4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

CarSelectRoleItemView::CarSelectRoleItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006c2744 + (intptr_t)(g_006c27b4))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_006c2780 + (intptr_t)(g_006c27b8)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * CarSelectRoleItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x13c)));
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

undefined4 CarSelectRoleItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 CarSelectRoleItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 CarSelectRoleItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 CarSelectRoleItemView::getBtnRole()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 CarSelectRoleItemView::getSprSelected()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 CarSelectRoleItemView::getSprUnLockBG()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 CarSelectRoleItemView::getSprDiamondIcon()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 CarSelectRoleItemView::getLabDiamond()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 CarSelectRoleItemView::getLabUnLock()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 CarSelectRoleItemView::getLabCombat()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 CarSelectRoleItemView::getSprQuestion()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 CarSelectRoleItemView::getSprSprCombat()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

void CarSelectRoleItemView::onEnter()
{
  ((CarSelectRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void CarSelectRoleItemView::onExit()
{
  ((CarSelectRoleItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool CarSelectRoleItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
