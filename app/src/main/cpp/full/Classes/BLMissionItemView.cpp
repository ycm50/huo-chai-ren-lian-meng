#include "BLMissionItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionItemPresenter.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005bcb44;
extern "C" unsigned long UNK_005bcb88;
extern "C" unsigned long UNK_005bcbcc;
extern "C" unsigned long UNK_005bcbf4;
extern "C" unsigned long UNK_005bcc3c;
extern "C" unsigned long UNK_005bcc6a;
extern "C" unsigned long UNK_005bcdce;
extern "C" unsigned long UNK_005bce02;
extern "C" unsigned long UNK_005bcec4;
extern "C" unsigned long UNK_005bcf6e;
extern "C" unsigned long UNK_005bd00a;
extern "C" unsigned long UNK_005bd0b8;
extern "C" unsigned long UNK_005bd0e4;
extern "C" unsigned long UNK_005bd1a6;
extern "C" unsigned long UNK_005bd21a;
extern "C" unsigned long UNK_005bd34e;
extern "C" unsigned long UNK_005bd37e;
extern "C" unsigned long UNK_005bd44c;
extern "C" unsigned long UNK_005bd484;
extern "C" unsigned long UNK_005bd55a;
extern "C" unsigned long UNK_005bd55c;
extern "C" unsigned long UNK_005bd644;
extern "C" unsigned long UNK_005bd664;
extern "C" unsigned long _UNK_005bcbb8;
extern "C" unsigned long _UNK_005bcbbc;
extern "C" unsigned long _UNK_005bcbd0;
extern "C" unsigned long _UNK_005bcbf8;
extern "C" unsigned long _UNK_005bcc94;
extern "C" unsigned long _UNK_005bcc98;
extern "C" unsigned long _UNK_005bd1ac;
extern "C" unsigned long _UNK_005bd1b0;
extern "C" unsigned long _UNK_005bd1b4;
extern "C" unsigned long _UNK_005bd1b8;
extern "C" unsigned long _UNK_005bd1bc;
extern "C" unsigned long _UNK_005bd1c0;
extern "C" unsigned long _UNK_005bd1c4;
extern "C" unsigned long _UNK_005bd1c8;
extern "C" unsigned long _UNK_005bd1cc;
extern "C" unsigned long _UNK_005bd1d0;
extern "C" unsigned long _UNK_005bd1d4;
extern "C" unsigned long _UNK_005bd1d8;
extern "C" unsigned long _UNK_005bd1dc;
extern "C" unsigned long _UNK_005bd1e0;
extern "C" unsigned long _UNK_005bd5fc;
extern "C" unsigned long _UNK_005bd600;
extern "C" unsigned long _UNK_005bd604;
extern "C" unsigned long _UNK_005bd608;
extern "C" unsigned long _UNK_005bd60c;
extern "C" unsigned long _UNK_005bd610;
extern "C" unsigned long _UNK_005bd614;
extern "C" unsigned long _UNK_005bd618;
extern "C" unsigned long _UNK_005bd61c;
extern "C" unsigned long _UNK_005bd620;
extern "C" unsigned long _UNK_005bd624;
extern "C" unsigned long _UNK_005bd628;
extern "C" unsigned long _UNK_005bd62c;
extern "C" unsigned long _UNK_005bd630;
extern "C" unsigned long _UNK_005bd634;
extern "C" unsigned long _UNK_005bd73c;
extern "C" unsigned long _UNK_005bd740;
extern "C" unsigned long _UNK_005bd744;
extern "C" unsigned long _UNK_005bd748;
extern "C" unsigned long g_005bcb44;
extern "C" unsigned long g_005bcb88;
extern "C" unsigned long g_005bcbb8;
extern "C" unsigned long g_005bcbbc;
extern "C" unsigned long g_005bcbcc;
extern "C" unsigned long g_005bcbd0;
extern "C" unsigned long g_005bcbf4;
extern "C" unsigned long g_005bcbf8;
extern "C" unsigned long g_005bcc3c;
extern "C" unsigned long g_005bcc6a;
extern "C" unsigned long g_005bcc94;
extern "C" unsigned long g_005bcc98;
extern "C" unsigned long g_005bcdce;
extern "C" unsigned long g_005bce02;
extern "C" unsigned long g_005bcec4;
extern "C" unsigned long g_005bcf6e;
extern "C" unsigned long g_005bd00a;
extern "C" unsigned long g_005bd0b8;
extern "C" unsigned long g_005bd0e4;
extern "C" unsigned long g_005bd1a6;
extern "C" unsigned long g_005bd1ac;
extern "C" unsigned long g_005bd1b0;
extern "C" unsigned long g_005bd1b4;
extern "C" unsigned long g_005bd1b8;
extern "C" unsigned long g_005bd1bc;
extern "C" unsigned long g_005bd1c0;
extern "C" unsigned long g_005bd1c4;
extern "C" unsigned long g_005bd1c8;
extern "C" unsigned long g_005bd1cc;
extern "C" unsigned long g_005bd1d0;
extern "C" unsigned long g_005bd1d4;
extern "C" unsigned long g_005bd1d8;
extern "C" unsigned long g_005bd1dc;
extern "C" unsigned long g_005bd1e0;
extern "C" unsigned long g_005bd21a;
extern "C" unsigned long g_005bd34e;
extern "C" unsigned long g_005bd37e;
extern "C" unsigned long g_005bd44c;
extern "C" unsigned long g_005bd484;
extern "C" unsigned long g_005bd55a;
extern "C" unsigned long g_005bd55c;
extern "C" unsigned long g_005bd5fc;
extern "C" unsigned long g_005bd600;
extern "C" unsigned long g_005bd604;
extern "C" unsigned long g_005bd608;
extern "C" unsigned long g_005bd60c;
extern "C" unsigned long g_005bd610;
extern "C" unsigned long g_005bd614;
extern "C" unsigned long g_005bd618;
extern "C" unsigned long g_005bd61c;
extern "C" unsigned long g_005bd620;
extern "C" unsigned long g_005bd624;
extern "C" unsigned long g_005bd628;
extern "C" unsigned long g_005bd62c;
extern "C" unsigned long g_005bd630;
extern "C" unsigned long g_005bd634;
extern "C" unsigned long g_005bd644;
extern "C" unsigned long g_005bd664;
extern "C" unsigned long g_005bd73c;
extern "C" unsigned long g_005bd740;
extern "C" unsigned long g_005bd744;
extern "C" unsigned long g_005bd748;
BLMissionItemView::~BLMissionItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005bcb44 + g_005bcbb8);
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
  func_0079e45c(&uStack_14,&g_005bcb88 + g_005bcbbc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionItemView::BLMissionItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005bcc3c + g_005bcc94);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005bcc6a + g_005bcc98,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMissionItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

undefined4 BLMissionItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMissionItemView::getBtnRole()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMissionItemView::getBtnSweep()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMissionItemView::getLabSweep()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMissionItemView::getSprArrow()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMissionItemView::getSprName()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMissionItemView::getSprLock()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMissionItemView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLMissionItemView::getLabDiamond()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLMissionItemView::getPageControlGrayStars()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLMissionItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

void BLMissionItemView::onEnter()
{
  ((BLMissionItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionItemView::onExit()
{
  ((BLMissionItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMissionItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
