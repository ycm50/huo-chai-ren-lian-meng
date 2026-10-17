#include "BLSweepHeroItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLSweepHeroItemPresenter.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005da452(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005d97c8;
extern "C" unsigned long UNK_005d981a;
extern "C" unsigned long UNK_005d9860;
extern "C" unsigned long UNK_005d9888;
extern "C" unsigned long UNK_005d98d0;
extern "C" unsigned long UNK_005d990c;
extern "C" unsigned long UNK_005d9a6c;
extern "C" unsigned long UNK_005d9a9a;
extern "C" unsigned long UNK_005d9bf4;
extern "C" unsigned long UNK_005d9c3c;
extern "C" unsigned long UNK_005d9c8c;
extern "C" unsigned long UNK_005d9cb6;
extern "C" unsigned long UNK_005d9d7e;
extern "C" unsigned long UNK_005d9e1c;
extern "C" unsigned long UNK_005d9ec0;
extern "C" unsigned long UNK_005d9f68;
extern "C" unsigned long UNK_005d9f92;
extern "C" unsigned long UNK_005da0a0;
extern "C" unsigned long UNK_005da0ca;
extern "C" unsigned long UNK_005da18a;
extern "C" unsigned long UNK_005da1b4;
extern "C" unsigned long UNK_005da26c;
extern "C" unsigned long UNK_005da30a;
extern "C" unsigned long _UNK_005d984c;
extern "C" unsigned long _UNK_005d9850;
extern "C" unsigned long _UNK_005d9864;
extern "C" unsigned long _UNK_005d988c;
extern "C" unsigned long _UNK_005d9940;
extern "C" unsigned long _UNK_005d9944;
extern "C" unsigned long _UNK_005d9c10;
extern "C" unsigned long _UNK_005d9c14;
extern "C" unsigned long _UNK_005d9c18;
extern "C" unsigned long _UNK_005d9c1c;
extern "C" unsigned long _UNK_005d9c20;
extern "C" unsigned long _UNK_005d9c24;
extern "C" unsigned long _UNK_005da01c;
extern "C" unsigned long _UNK_005da020;
extern "C" unsigned long _UNK_005da024;
extern "C" unsigned long _UNK_005da028;
extern "C" unsigned long _UNK_005da02c;
extern "C" unsigned long _UNK_005da030;
extern "C" unsigned long _UNK_005da034;
extern "C" unsigned long _UNK_005da038;
extern "C" unsigned long _UNK_005da03c;
extern "C" unsigned long _UNK_005da040;
extern "C" unsigned long _UNK_005da044;
extern "C" unsigned long _UNK_005da048;
extern "C" unsigned long _UNK_005da04c;
extern "C" unsigned long _UNK_005da050;
extern "C" unsigned long _UNK_005da054;
extern "C" unsigned long _UNK_005da058;
extern "C" unsigned long _UNK_005da05c;
extern "C" unsigned long _UNK_005da060;
extern "C" unsigned long _UNK_005da460;
extern "C" unsigned long _UNK_005da464;
extern "C" unsigned long _UNK_005da468;
extern "C" unsigned long _UNK_005da46c;
extern "C" unsigned long _UNK_005da470;
extern "C" unsigned long _UNK_005da474;
extern "C" unsigned long _UNK_005da478;
extern "C" unsigned long _UNK_005da47c;
extern "C" unsigned long _UNK_005da480;
extern "C" unsigned long _UNK_005da484;
extern "C" unsigned long _UNK_005da488;
extern "C" unsigned long _UNK_005da48c;
extern "C" unsigned long _UNK_005da490;
extern "C" unsigned long _UNK_005da494;
extern "C" unsigned long g_005d97c8;
extern "C" unsigned long g_005d981a;
extern "C" unsigned long g_005d984c;
extern "C" unsigned long g_005d9850;
extern "C" unsigned long g_005d9860;
extern "C" unsigned long g_005d9864;
extern "C" unsigned long g_005d9888;
extern "C" unsigned long g_005d988c;
extern "C" unsigned long g_005d98d0;
extern "C" unsigned long g_005d990c;
extern "C" unsigned long g_005d9940;
extern "C" unsigned long g_005d9944;
extern "C" unsigned long g_005d9a6c;
extern "C" unsigned long g_005d9a9a;
extern "C" unsigned long g_005d9bf4;
extern "C" unsigned long g_005d9c10;
extern "C" unsigned long g_005d9c14;
extern "C" unsigned long g_005d9c18;
extern "C" unsigned long g_005d9c1c;
extern "C" unsigned long g_005d9c20;
extern "C" unsigned long g_005d9c24;
extern "C" unsigned long g_005d9c3c;
extern "C" unsigned long g_005d9c8c;
extern "C" unsigned long g_005d9cb6;
extern "C" unsigned long g_005d9d7e;
extern "C" unsigned long g_005d9e1c;
extern "C" unsigned long g_005d9ec0;
extern "C" unsigned long g_005d9f68;
extern "C" unsigned long g_005d9f92;
extern "C" unsigned long g_005da01c;
extern "C" unsigned long g_005da020;
extern "C" unsigned long g_005da024;
extern "C" unsigned long g_005da028;
extern "C" unsigned long g_005da02c;
extern "C" unsigned long g_005da030;
extern "C" unsigned long g_005da034;
extern "C" unsigned long g_005da038;
extern "C" unsigned long g_005da03c;
extern "C" unsigned long g_005da040;
extern "C" unsigned long g_005da044;
extern "C" unsigned long g_005da048;
extern "C" unsigned long g_005da04c;
extern "C" unsigned long g_005da050;
extern "C" unsigned long g_005da054;
extern "C" unsigned long g_005da058;
extern "C" unsigned long g_005da05c;
extern "C" unsigned long g_005da060;
extern "C" unsigned long g_005da0a0;
extern "C" unsigned long g_005da0ca;
extern "C" unsigned long g_005da18a;
extern "C" unsigned long g_005da1b4;
extern "C" unsigned long g_005da26c;
extern "C" unsigned long g_005da30a;
extern "C" unsigned long g_005da460;
extern "C" unsigned long g_005da464;
extern "C" unsigned long g_005da468;
extern "C" unsigned long g_005da46c;
extern "C" unsigned long g_005da470;
extern "C" unsigned long g_005da474;
extern "C" unsigned long g_005da478;
extern "C" unsigned long g_005da47c;
extern "C" unsigned long g_005da480;
extern "C" unsigned long g_005da484;
extern "C" unsigned long g_005da488;
extern "C" unsigned long g_005da48c;
extern "C" unsigned long g_005da490;
extern "C" unsigned long g_005da494;
BLSweepHeroItemView::~BLSweepHeroItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005d97c8 + g_005d984c);
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
  func_0079e45c(&uStack_14,&g_005d981a + g_005d9850,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLSweepHeroItemView::create()
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

undefined4 BLSweepHeroItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLSweepHeroItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLSweepHeroItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLSweepHeroItemView::getBtnRole()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLSweepHeroItemView::getSprSelected()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLSweepHeroItemView::getSprUnLockBG()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLSweepHeroItemView::getSprDiamondIcon()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLSweepHeroItemView::getLabDiamond()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLSweepHeroItemView::getLabUnLock()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLSweepHeroItemView::getLabCombat()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLSweepHeroItemView::getSprQuestion()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLSweepHeroItemView::getSprSprCombat()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

void BLSweepHeroItemView::onEnter()
{
  ((BLSweepHeroItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSweepHeroItemView::onExit()
{
  ((BLSweepHeroItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLSweepHeroItemView::BLSweepHeroItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005d98d0 + (intptr_t)(g_005d9940))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_005d990c + (intptr_t)(g_005d9944)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLSweepHeroItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
