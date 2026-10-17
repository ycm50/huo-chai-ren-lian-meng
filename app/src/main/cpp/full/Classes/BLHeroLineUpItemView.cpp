#include "BLHeroLineUpItemView.h"
#include "BLHeroLineUpItemPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_004c8aba(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004c7e30;
extern "C" unsigned long UNK_004c7e82;
extern "C" unsigned long UNK_004c7ec8;
extern "C" unsigned long UNK_004c7ef0;
extern "C" unsigned long UNK_004c7f38;
extern "C" unsigned long UNK_004c7f74;
extern "C" unsigned long UNK_004c80d4;
extern "C" unsigned long UNK_004c8102;
extern "C" unsigned long UNK_004c825c;
extern "C" unsigned long UNK_004c82a4;
extern "C" unsigned long UNK_004c82f4;
extern "C" unsigned long UNK_004c831e;
extern "C" unsigned long UNK_004c83e6;
extern "C" unsigned long UNK_004c8484;
extern "C" unsigned long UNK_004c8528;
extern "C" unsigned long UNK_004c85d0;
extern "C" unsigned long UNK_004c85fa;
extern "C" unsigned long UNK_004c8708;
extern "C" unsigned long UNK_004c8732;
extern "C" unsigned long UNK_004c87f2;
extern "C" unsigned long UNK_004c881c;
extern "C" unsigned long UNK_004c88d4;
extern "C" unsigned long UNK_004c8972;
extern "C" unsigned long _UNK_004c7eb4;
extern "C" unsigned long _UNK_004c7eb8;
extern "C" unsigned long _UNK_004c7ecc;
extern "C" unsigned long _UNK_004c7ef4;
extern "C" unsigned long _UNK_004c7fa8;
extern "C" unsigned long _UNK_004c7fac;
extern "C" unsigned long _UNK_004c8278;
extern "C" unsigned long _UNK_004c827c;
extern "C" unsigned long _UNK_004c8280;
extern "C" unsigned long _UNK_004c8284;
extern "C" unsigned long _UNK_004c8288;
extern "C" unsigned long _UNK_004c828c;
extern "C" unsigned long _UNK_004c8684;
extern "C" unsigned long _UNK_004c8688;
extern "C" unsigned long _UNK_004c868c;
extern "C" unsigned long _UNK_004c8690;
extern "C" unsigned long _UNK_004c8694;
extern "C" unsigned long _UNK_004c8698;
extern "C" unsigned long _UNK_004c869c;
extern "C" unsigned long _UNK_004c86a0;
extern "C" unsigned long _UNK_004c86a4;
extern "C" unsigned long _UNK_004c86a8;
extern "C" unsigned long _UNK_004c86ac;
extern "C" unsigned long _UNK_004c86b0;
extern "C" unsigned long _UNK_004c86b4;
extern "C" unsigned long _UNK_004c86b8;
extern "C" unsigned long _UNK_004c86bc;
extern "C" unsigned long _UNK_004c86c0;
extern "C" unsigned long _UNK_004c86c4;
extern "C" unsigned long _UNK_004c86c8;
extern "C" unsigned long _UNK_004c8ac8;
extern "C" unsigned long _UNK_004c8acc;
extern "C" unsigned long _UNK_004c8ad0;
extern "C" unsigned long _UNK_004c8ad4;
extern "C" unsigned long _UNK_004c8ad8;
extern "C" unsigned long _UNK_004c8adc;
extern "C" unsigned long _UNK_004c8ae0;
extern "C" unsigned long _UNK_004c8ae4;
extern "C" unsigned long _UNK_004c8ae8;
extern "C" unsigned long _UNK_004c8aec;
extern "C" unsigned long _UNK_004c8af0;
extern "C" unsigned long _UNK_004c8af4;
extern "C" unsigned long _UNK_004c8af8;
extern "C" unsigned long _UNK_004c8afc;
extern "C" unsigned long g_004c7e30;
extern "C" unsigned long g_004c7e82;
extern "C" unsigned long g_004c7eb4;
extern "C" unsigned long g_004c7eb8;
extern "C" unsigned long g_004c7ec8;
extern "C" unsigned long g_004c7ecc;
extern "C" unsigned long g_004c7ef0;
extern "C" unsigned long g_004c7ef4;
extern "C" unsigned long g_004c7f38;
extern "C" unsigned long g_004c7f74;
extern "C" unsigned long g_004c7fa8;
extern "C" unsigned long g_004c7fac;
extern "C" unsigned long g_004c80d4;
extern "C" unsigned long g_004c8102;
extern "C" unsigned long g_004c825c;
extern "C" unsigned long g_004c8278;
extern "C" unsigned long g_004c827c;
extern "C" unsigned long g_004c8280;
extern "C" unsigned long g_004c8284;
extern "C" unsigned long g_004c8288;
extern "C" unsigned long g_004c828c;
extern "C" unsigned long g_004c82a4;
extern "C" unsigned long g_004c82f4;
extern "C" unsigned long g_004c831e;
extern "C" unsigned long g_004c83e6;
extern "C" unsigned long g_004c8484;
extern "C" unsigned long g_004c8528;
extern "C" unsigned long g_004c85d0;
extern "C" unsigned long g_004c85fa;
extern "C" unsigned long g_004c8684;
extern "C" unsigned long g_004c8688;
extern "C" unsigned long g_004c868c;
extern "C" unsigned long g_004c8690;
extern "C" unsigned long g_004c8694;
extern "C" unsigned long g_004c8698;
extern "C" unsigned long g_004c869c;
extern "C" unsigned long g_004c86a0;
extern "C" unsigned long g_004c86a4;
extern "C" unsigned long g_004c86a8;
extern "C" unsigned long g_004c86ac;
extern "C" unsigned long g_004c86b0;
extern "C" unsigned long g_004c86b4;
extern "C" unsigned long g_004c86b8;
extern "C" unsigned long g_004c86bc;
extern "C" unsigned long g_004c86c0;
extern "C" unsigned long g_004c86c4;
extern "C" unsigned long g_004c86c8;
extern "C" unsigned long g_004c8708;
extern "C" unsigned long g_004c8732;
extern "C" unsigned long g_004c87f2;
extern "C" unsigned long g_004c881c;
extern "C" unsigned long g_004c88d4;
extern "C" unsigned long g_004c8972;
extern "C" unsigned long g_004c8ac8;
extern "C" unsigned long g_004c8acc;
extern "C" unsigned long g_004c8ad0;
extern "C" unsigned long g_004c8ad4;
extern "C" unsigned long g_004c8ad8;
extern "C" unsigned long g_004c8adc;
extern "C" unsigned long g_004c8ae0;
extern "C" unsigned long g_004c8ae4;
extern "C" unsigned long g_004c8ae8;
extern "C" unsigned long g_004c8aec;
extern "C" unsigned long g_004c8af0;
extern "C" unsigned long g_004c8af4;
extern "C" unsigned long g_004c8af8;
extern "C" unsigned long g_004c8afc;
BLHeroLineUpItemView::~BLHeroLineUpItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c7e30 + g_004c7eb4);
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
  func_0079e45c(&uStack_14,&g_004c7e82 + g_004c7eb8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLHeroLineUpItemView::BLHeroLineUpItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004c7f38 + (intptr_t)(g_004c7fa8))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_004c7f74 + (intptr_t)(g_004c7fac)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLHeroLineUpItemView::create()
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

undefined4 BLHeroLineUpItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLHeroLineUpItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLHeroLineUpItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLHeroLineUpItemView::getBtnRole()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLHeroLineUpItemView::getSprSelected()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLHeroLineUpItemView::getSprUnLockBG()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLHeroLineUpItemView::getSprDiamondIcon()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLHeroLineUpItemView::getLabDiamond()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLHeroLineUpItemView::getLabUnLock()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLHeroLineUpItemView::getLabCombat()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLHeroLineUpItemView::getSprQuestion()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLHeroLineUpItemView::getSprSprCombat()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

void BLHeroLineUpItemView::onEnter()
{
  ((BLHeroLineUpItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLHeroLineUpItemView::onExit()
{
  ((BLHeroLineUpItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLHeroLineUpItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
