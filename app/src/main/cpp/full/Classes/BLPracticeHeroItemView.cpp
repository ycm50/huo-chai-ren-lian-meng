#include "BLPracticeHeroItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLPracticeHeroItemPresenter.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0063cddc;
extern "C" unsigned long UNK_0063ce20;
extern "C" unsigned long UNK_0063ce64;
extern "C" unsigned long UNK_0063ce8c;
extern "C" unsigned long UNK_0063cea4;
extern "C" unsigned long UNK_0063ced2;
extern "C" unsigned long UNK_0063cfe4;
extern "C" unsigned long UNK_0063d012;
extern "C" unsigned long UNK_0063d16a;
extern "C" unsigned long UNK_0063d1b0;
extern "C" unsigned long UNK_0063d200;
extern "C" unsigned long UNK_0063d22a;
extern "C" unsigned long UNK_0063d2f2;
extern "C" unsigned long UNK_0063d390;
extern "C" unsigned long UNK_0063d434;
extern "C" unsigned long UNK_0063d4dc;
extern "C" unsigned long UNK_0063d506;
extern "C" unsigned long UNK_0063d614;
extern "C" unsigned long UNK_0063d63e;
extern "C" unsigned long UNK_0063d6f2;
extern "C" unsigned long _UNK_0063ce50;
extern "C" unsigned long _UNK_0063ce54;
extern "C" unsigned long _UNK_0063ce68;
extern "C" unsigned long _UNK_0063ce90;
extern "C" unsigned long _UNK_0063cefc;
extern "C" unsigned long _UNK_0063cf00;
extern "C" unsigned long _UNK_0063d184;
extern "C" unsigned long _UNK_0063d188;
extern "C" unsigned long _UNK_0063d18c;
extern "C" unsigned long _UNK_0063d190;
extern "C" unsigned long _UNK_0063d194;
extern "C" unsigned long _UNK_0063d198;
extern "C" unsigned long _UNK_0063d590;
extern "C" unsigned long _UNK_0063d594;
extern "C" unsigned long _UNK_0063d598;
extern "C" unsigned long _UNK_0063d59c;
extern "C" unsigned long _UNK_0063d5a0;
extern "C" unsigned long _UNK_0063d5a4;
extern "C" unsigned long _UNK_0063d5a8;
extern "C" unsigned long _UNK_0063d5ac;
extern "C" unsigned long _UNK_0063d5b0;
extern "C" unsigned long _UNK_0063d5b4;
extern "C" unsigned long _UNK_0063d5b8;
extern "C" unsigned long _UNK_0063d5bc;
extern "C" unsigned long _UNK_0063d5c0;
extern "C" unsigned long _UNK_0063d5c4;
extern "C" unsigned long _UNK_0063d5c8;
extern "C" unsigned long _UNK_0063d5cc;
extern "C" unsigned long _UNK_0063d5d0;
extern "C" unsigned long _UNK_0063d5d4;
extern "C" unsigned long _UNK_0063d840;
extern "C" unsigned long _UNK_0063d844;
extern "C" unsigned long _UNK_0063d848;
extern "C" unsigned long _UNK_0063d84c;
extern "C" unsigned long _UNK_0063d850;
extern "C" unsigned long _UNK_0063d854;
extern "C" unsigned long _UNK_0063d858;
extern "C" unsigned long _UNK_0063d85c;
extern "C" unsigned long g_0063cddc;
extern "C" unsigned long g_0063ce20;
extern "C" unsigned long g_0063ce50;
extern "C" unsigned long g_0063ce54;
extern "C" unsigned long g_0063ce64;
extern "C" unsigned long g_0063ce68;
extern "C" unsigned long g_0063ce8c;
extern "C" unsigned long g_0063ce90;
extern "C" unsigned long g_0063cea4;
extern "C" unsigned long g_0063ced2;
extern "C" unsigned long g_0063cefc;
extern "C" unsigned long g_0063cf00;
extern "C" unsigned long g_0063cfe4;
extern "C" unsigned long g_0063d012;
extern "C" unsigned long g_0063d16a;
extern "C" unsigned long g_0063d184;
extern "C" unsigned long g_0063d188;
extern "C" unsigned long g_0063d18c;
extern "C" unsigned long g_0063d190;
extern "C" unsigned long g_0063d194;
extern "C" unsigned long g_0063d198;
extern "C" unsigned long g_0063d1b0;
extern "C" unsigned long g_0063d200;
extern "C" unsigned long g_0063d22a;
extern "C" unsigned long g_0063d2f2;
extern "C" unsigned long g_0063d390;
extern "C" unsigned long g_0063d434;
extern "C" unsigned long g_0063d4dc;
extern "C" unsigned long g_0063d506;
extern "C" unsigned long g_0063d590;
extern "C" unsigned long g_0063d594;
extern "C" unsigned long g_0063d598;
extern "C" unsigned long g_0063d59c;
extern "C" unsigned long g_0063d5a0;
extern "C" unsigned long g_0063d5a4;
extern "C" unsigned long g_0063d5a8;
extern "C" unsigned long g_0063d5ac;
extern "C" unsigned long g_0063d5b0;
extern "C" unsigned long g_0063d5b4;
extern "C" unsigned long g_0063d5b8;
extern "C" unsigned long g_0063d5bc;
extern "C" unsigned long g_0063d5c0;
extern "C" unsigned long g_0063d5c4;
extern "C" unsigned long g_0063d5c8;
extern "C" unsigned long g_0063d5cc;
extern "C" unsigned long g_0063d5d0;
extern "C" unsigned long g_0063d5d4;
extern "C" unsigned long g_0063d614;
extern "C" unsigned long g_0063d63e;
extern "C" unsigned long g_0063d6f2;
extern "C" unsigned long g_0063d840;
extern "C" unsigned long g_0063d844;
extern "C" unsigned long g_0063d848;
extern "C" unsigned long g_0063d84c;
extern "C" unsigned long g_0063d850;
extern "C" unsigned long g_0063d854;
extern "C" unsigned long g_0063d858;
extern "C" unsigned long g_0063d85c;
BLPracticeHeroItemView::~BLPracticeHeroItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0063cddc + g_0063ce50);
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
  func_0079e45c(&uStack_14,&g_0063ce20 + g_0063ce54,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLPracticeHeroItemView::BLPracticeHeroItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0063cea4 + g_0063cefc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0063ced2 + g_0063cf00,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLPracticeHeroItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x130)));
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

undefined4 BLPracticeHeroItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLPracticeHeroItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLPracticeHeroItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLPracticeHeroItemView::getBtnRole()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLPracticeHeroItemView::getSprSelected()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLPracticeHeroItemView::getSprUnLockBG()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLPracticeHeroItemView::getSprDiamondIcon()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLPracticeHeroItemView::getLabDiamond()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLPracticeHeroItemView::getLabUnLock()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLPracticeHeroItemView::getSprQuestion()
{
  return *(undefined4 *)(((int)this) + 300);
}

void BLPracticeHeroItemView::onEnter()
{
  ((BLPracticeHeroItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLPracticeHeroItemView::onExit()
{
  ((BLPracticeHeroItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLPracticeHeroItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
