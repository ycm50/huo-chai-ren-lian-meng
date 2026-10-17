#include "BLMineSnatchHeroItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineSnatchHeroItemPresenter.h"
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
extern "C" long long func_005b367a(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b2a18;
extern "C" unsigned long UNK_005b2a5c;
extern "C" unsigned long UNK_005b2aa0;
extern "C" unsigned long UNK_005b2ac8;
extern "C" unsigned long UNK_005b2b10;
extern "C" unsigned long UNK_005b2b3e;
extern "C" unsigned long UNK_005b2c94;
extern "C" unsigned long UNK_005b2cc2;
extern "C" unsigned long UNK_005b2e1c;
extern "C" unsigned long UNK_005b2e64;
extern "C" unsigned long UNK_005b2eb4;
extern "C" unsigned long UNK_005b2ede;
extern "C" unsigned long UNK_005b2fa6;
extern "C" unsigned long UNK_005b3044;
extern "C" unsigned long UNK_005b30e8;
extern "C" unsigned long UNK_005b3190;
extern "C" unsigned long UNK_005b31ba;
extern "C" unsigned long UNK_005b32c8;
extern "C" unsigned long UNK_005b32f2;
extern "C" unsigned long UNK_005b33b2;
extern "C" unsigned long UNK_005b33dc;
extern "C" unsigned long UNK_005b3494;
extern "C" unsigned long UNK_005b3532;
extern "C" unsigned long _UNK_005b2a8c;
extern "C" unsigned long _UNK_005b2a90;
extern "C" unsigned long _UNK_005b2aa4;
extern "C" unsigned long _UNK_005b2acc;
extern "C" unsigned long _UNK_005b2b68;
extern "C" unsigned long _UNK_005b2b6c;
extern "C" unsigned long _UNK_005b2e38;
extern "C" unsigned long _UNK_005b2e3c;
extern "C" unsigned long _UNK_005b2e40;
extern "C" unsigned long _UNK_005b2e44;
extern "C" unsigned long _UNK_005b2e48;
extern "C" unsigned long _UNK_005b2e4c;
extern "C" unsigned long _UNK_005b3244;
extern "C" unsigned long _UNK_005b3248;
extern "C" unsigned long _UNK_005b324c;
extern "C" unsigned long _UNK_005b3250;
extern "C" unsigned long _UNK_005b3254;
extern "C" unsigned long _UNK_005b3258;
extern "C" unsigned long _UNK_005b325c;
extern "C" unsigned long _UNK_005b3260;
extern "C" unsigned long _UNK_005b3264;
extern "C" unsigned long _UNK_005b3268;
extern "C" unsigned long _UNK_005b326c;
extern "C" unsigned long _UNK_005b3270;
extern "C" unsigned long _UNK_005b3274;
extern "C" unsigned long _UNK_005b3278;
extern "C" unsigned long _UNK_005b327c;
extern "C" unsigned long _UNK_005b3280;
extern "C" unsigned long _UNK_005b3284;
extern "C" unsigned long _UNK_005b3288;
extern "C" unsigned long _UNK_005b3688;
extern "C" unsigned long _UNK_005b368c;
extern "C" unsigned long _UNK_005b3690;
extern "C" unsigned long _UNK_005b3694;
extern "C" unsigned long _UNK_005b3698;
extern "C" unsigned long _UNK_005b369c;
extern "C" unsigned long _UNK_005b36a0;
extern "C" unsigned long _UNK_005b36a4;
extern "C" unsigned long _UNK_005b36a8;
extern "C" unsigned long _UNK_005b36ac;
extern "C" unsigned long _UNK_005b36b0;
extern "C" unsigned long _UNK_005b36b4;
extern "C" unsigned long _UNK_005b36b8;
extern "C" unsigned long _UNK_005b36bc;
extern "C" unsigned long g_005b2a18;
extern "C" unsigned long g_005b2a5c;
extern "C" unsigned long g_005b2a8c;
extern "C" unsigned long g_005b2a90;
extern "C" unsigned long g_005b2aa0;
extern "C" unsigned long g_005b2aa4;
extern "C" unsigned long g_005b2ac8;
extern "C" unsigned long g_005b2acc;
extern "C" unsigned long g_005b2b10;
extern "C" unsigned long g_005b2b3e;
extern "C" unsigned long g_005b2b68;
extern "C" unsigned long g_005b2b6c;
extern "C" unsigned long g_005b2c94;
extern "C" unsigned long g_005b2cc2;
extern "C" unsigned long g_005b2e1c;
extern "C" unsigned long g_005b2e38;
extern "C" unsigned long g_005b2e3c;
extern "C" unsigned long g_005b2e40;
extern "C" unsigned long g_005b2e44;
extern "C" unsigned long g_005b2e48;
extern "C" unsigned long g_005b2e4c;
extern "C" unsigned long g_005b2e64;
extern "C" unsigned long g_005b2eb4;
extern "C" unsigned long g_005b2ede;
extern "C" unsigned long g_005b2fa6;
extern "C" unsigned long g_005b3044;
extern "C" unsigned long g_005b30e8;
extern "C" unsigned long g_005b3190;
extern "C" unsigned long g_005b31ba;
extern "C" unsigned long g_005b3244;
extern "C" unsigned long g_005b3248;
extern "C" unsigned long g_005b324c;
extern "C" unsigned long g_005b3250;
extern "C" unsigned long g_005b3254;
extern "C" unsigned long g_005b3258;
extern "C" unsigned long g_005b325c;
extern "C" unsigned long g_005b3260;
extern "C" unsigned long g_005b3264;
extern "C" unsigned long g_005b3268;
extern "C" unsigned long g_005b326c;
extern "C" unsigned long g_005b3270;
extern "C" unsigned long g_005b3274;
extern "C" unsigned long g_005b3278;
extern "C" unsigned long g_005b327c;
extern "C" unsigned long g_005b3280;
extern "C" unsigned long g_005b3284;
extern "C" unsigned long g_005b3288;
extern "C" unsigned long g_005b32c8;
extern "C" unsigned long g_005b32f2;
extern "C" unsigned long g_005b33b2;
extern "C" unsigned long g_005b33dc;
extern "C" unsigned long g_005b3494;
extern "C" unsigned long g_005b3532;
extern "C" unsigned long g_005b3688;
extern "C" unsigned long g_005b368c;
extern "C" unsigned long g_005b3690;
extern "C" unsigned long g_005b3694;
extern "C" unsigned long g_005b3698;
extern "C" unsigned long g_005b369c;
extern "C" unsigned long g_005b36a0;
extern "C" unsigned long g_005b36a4;
extern "C" unsigned long g_005b36a8;
extern "C" unsigned long g_005b36ac;
extern "C" unsigned long g_005b36b0;
extern "C" unsigned long g_005b36b4;
extern "C" unsigned long g_005b36b8;
extern "C" unsigned long g_005b36bc;
BLMineSnatchHeroItemView::~BLMineSnatchHeroItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005b2a18 + g_005b2a8c);
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
  func_0079e45c(&uStack_14,&g_005b2a5c + g_005b2a90,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineSnatchHeroItemView::BLMineSnatchHeroItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005b2b10 + g_005b2b68);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b2b3e + g_005b2b6c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineSnatchHeroItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x138)));
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

undefined4 BLMineSnatchHeroItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineSnatchHeroItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMineSnatchHeroItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMineSnatchHeroItemView::getBtnRole()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineSnatchHeroItemView::getSprSelected()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMineSnatchHeroItemView::getSprUnLockBG()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMineSnatchHeroItemView::getSprDiamondIcon()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMineSnatchHeroItemView::getLabDiamond()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMineSnatchHeroItemView::getLabUnLock()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMineSnatchHeroItemView::getLabCombat()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMineSnatchHeroItemView::getSprQuestion()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLMineSnatchHeroItemView::getSprSprCombat()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

void BLMineSnatchHeroItemView::onEnter()
{
  ((BLMineSnatchHeroItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineSnatchHeroItemView::onExit()
{
  ((BLMineSnatchHeroItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineSnatchHeroItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
