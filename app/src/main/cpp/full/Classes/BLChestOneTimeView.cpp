#include "BLChestOneTimeView.h"
#include "BLChestOneTimePresenter.h"
#include "BLChestRewardItemView.h"
#include "BLLanguage.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0051ab38;
extern "C" unsigned long UNK_0051ab8a;
extern "C" unsigned long UNK_0051abd0;
extern "C" unsigned long UNK_0051abf8;
extern "C" unsigned long UNK_0051adce;
extern "C" unsigned long UNK_0051aeb2;
extern "C" unsigned long UNK_0051afa0;
extern "C" unsigned long UNK_0051afca;
extern "C" unsigned long UNK_0051b092;
extern "C" unsigned long UNK_0051b0ca;
extern "C" unsigned long UNK_0051b19c;
extern "C" unsigned long UNK_0051b216;
extern "C" unsigned long UNK_0051b2ca;
extern "C" unsigned long UNK_0051b378;
extern "C" unsigned long UNK_0051b3a2;
extern "C" unsigned long UNK_0051b46c;
extern "C" unsigned long UNK_0051b498;
extern "C" unsigned long UNK_0051b56a;
extern "C" unsigned long UNK_0051b594;
extern "C" unsigned long _DAT_0051acb0;
extern "C" unsigned long _DAT_0051acb4;
extern "C" unsigned long _UNK_0051abbc;
extern "C" unsigned long _UNK_0051abc0;
extern "C" unsigned long _UNK_0051abd4;
extern "C" unsigned long _UNK_0051abfc;
extern "C" unsigned long _UNK_0051b1b0;
extern "C" unsigned long _UNK_0051b1b4;
extern "C" unsigned long _UNK_0051b1b8;
extern "C" unsigned long _UNK_0051b1bc;
extern "C" unsigned long _UNK_0051b1c0;
extern "C" unsigned long _UNK_0051b1c4;
extern "C" unsigned long _UNK_0051b1c8;
extern "C" unsigned long _UNK_0051b1cc;
extern "C" unsigned long _UNK_0051b1d0;
extern "C" unsigned long _UNK_0051b1d4;
extern "C" unsigned long _UNK_0051b1d8;
extern "C" unsigned long _UNK_0051b1dc;
extern "C" unsigned long _UNK_0051b1e0;
extern "C" unsigned long _UNK_0051b1e4;
extern "C" unsigned long _UNK_0051b1e8;
extern "C" unsigned long _UNK_0051b1ec;
extern "C" unsigned long _UNK_0051b1f0;
extern "C" unsigned long _UNK_0051b5f0;
extern "C" unsigned long _UNK_0051b5f4;
extern "C" unsigned long _UNK_0051b5f8;
extern "C" unsigned long _UNK_0051b5fc;
extern "C" unsigned long _UNK_0051b600;
extern "C" unsigned long _UNK_0051b604;
extern "C" unsigned long _UNK_0051b608;
extern "C" unsigned long _UNK_0051b60c;
extern "C" unsigned long _UNK_0051b610;
extern "C" unsigned long _UNK_0051b614;
extern "C" unsigned long _UNK_0051b618;
extern "C" unsigned long _UNK_0051b61c;
extern "C" unsigned long _UNK_0051b620;
extern "C" unsigned long _UNK_0051b624;
extern "C" unsigned long _UNK_0051b628;
extern "C" unsigned long _UNK_0051b62c;
extern "C" unsigned long _UNK_0051b630;
extern "C" unsigned long _UNK_0051b634;
extern "C" unsigned long _UNK_0051b638;
extern "C" unsigned long _UNK_0051b7a4;
extern "C" unsigned long _UNK_0051b7a8;
extern "C" unsigned long _UNK_0051b7ac;
extern "C" unsigned long _UNK_0051b7b0;
extern "C" unsigned long _UNK_0051b7b4;
extern "C" unsigned long g_0051ab38;
extern "C" unsigned long g_0051ab8a;
extern "C" unsigned long g_0051abbc;
extern "C" unsigned long g_0051abc0;
extern "C" unsigned long g_0051abd0;
extern "C" unsigned long g_0051abd4;
extern "C" unsigned long g_0051abf8;
extern "C" unsigned long g_0051abfc;
extern "C" unsigned long g_0051acb0;
extern "C" unsigned long g_0051acb4;
extern "C" unsigned long g_0051adce;
extern "C" unsigned long g_0051aeb2;
extern "C" unsigned long g_0051afa0;
extern "C" unsigned long g_0051afca;
extern "C" unsigned long g_0051b092;
extern "C" unsigned long g_0051b0ca;
extern "C" unsigned long g_0051b19c;
extern "C" unsigned long g_0051b1b0;
extern "C" unsigned long g_0051b1b4;
extern "C" unsigned long g_0051b1b8;
extern "C" unsigned long g_0051b1bc;
extern "C" unsigned long g_0051b1c0;
extern "C" unsigned long g_0051b1c4;
extern "C" unsigned long g_0051b1c8;
extern "C" unsigned long g_0051b1cc;
extern "C" unsigned long g_0051b1d0;
extern "C" unsigned long g_0051b1d4;
extern "C" unsigned long g_0051b1d8;
extern "C" unsigned long g_0051b1dc;
extern "C" unsigned long g_0051b1e0;
extern "C" unsigned long g_0051b1e4;
extern "C" unsigned long g_0051b1e8;
extern "C" unsigned long g_0051b1ec;
extern "C" unsigned long g_0051b1f0;
extern "C" unsigned long g_0051b216;
extern "C" unsigned long g_0051b2ca;
extern "C" unsigned long g_0051b378;
extern "C" unsigned long g_0051b3a2;
extern "C" unsigned long g_0051b46c;
extern "C" unsigned long g_0051b498;
extern "C" unsigned long g_0051b56a;
extern "C" unsigned long g_0051b594;
extern "C" unsigned long g_0051b5f0;
extern "C" unsigned long g_0051b5f4;
extern "C" unsigned long g_0051b5f8;
extern "C" unsigned long g_0051b5fc;
extern "C" unsigned long g_0051b600;
extern "C" unsigned long g_0051b604;
extern "C" unsigned long g_0051b608;
extern "C" unsigned long g_0051b60c;
extern "C" unsigned long g_0051b610;
extern "C" unsigned long g_0051b614;
extern "C" unsigned long g_0051b618;
extern "C" unsigned long g_0051b61c;
extern "C" unsigned long g_0051b620;
extern "C" unsigned long g_0051b624;
extern "C" unsigned long g_0051b628;
extern "C" unsigned long g_0051b62c;
extern "C" unsigned long g_0051b630;
extern "C" unsigned long g_0051b634;
extern "C" unsigned long g_0051b638;
extern "C" unsigned long g_0051b7a4;
extern "C" unsigned long g_0051b7a8;
extern "C" unsigned long g_0051b7ac;
extern "C" unsigned long g_0051b7b0;
extern "C" unsigned long g_0051b7b4;
BLChestOneTimeView::~BLChestOneTimeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0051ab38 + g_0051abbc);
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
  func_0079e45c(&uStack_14,&g_0051ab8a + g_0051abc0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLChestOneTimeView::create()
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

undefined4 BLChestOneTimeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLChestOneTimeView::getBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLChestOneTimeView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLChestOneTimeView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLChestOneTimeView::getBtnBuyAgain()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLChestOneTimeView::getLabCopper()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLChestOneTimeView::getSprCopperIcon()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLChestOneTimeView::getLabAgainTitle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLChestOneTimeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLChestOneTimeView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLChestOneTimeView::RewardItem()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

void BLChestOneTimeView::onEnter()
{
  ((BLChestOneTimePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLChestOneTimeView::onExit()
{
  ((BLChestOneTimePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLChestOneTimeView::BLChestOneTimeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0051acb0 + 0x51ac40));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLChestOneTimeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLChestOneTimeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
