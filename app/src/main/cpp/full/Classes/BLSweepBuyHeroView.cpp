#include "BLSweepBuyHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSweepBuyHeroPresenter.h"
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
extern "C" unsigned long UNK_005d7bc4;
extern "C" unsigned long UNK_005d7c08;
extern "C" unsigned long UNK_005d7c4c;
extern "C" unsigned long UNK_005d7c74;
extern "C" unsigned long UNK_005d7e22;
extern "C" unsigned long UNK_005d7f04;
extern "C" unsigned long UNK_005d7ffe;
extern "C" unsigned long UNK_005d802c;
extern "C" unsigned long UNK_005d810a;
extern "C" unsigned long UNK_005d8134;
extern "C" unsigned long UNK_005d8204;
extern "C" unsigned long UNK_005d8270;
extern "C" unsigned long UNK_005d832e;
extern "C" unsigned long UNK_005d8362;
extern "C" unsigned long UNK_005d847e;
extern "C" unsigned long UNK_005d84a8;
extern "C" unsigned long _DAT_005d7d14;
extern "C" unsigned long _DAT_005d7d18;
extern "C" unsigned long _UNK_005d7c38;
extern "C" unsigned long _UNK_005d7c3c;
extern "C" unsigned long _UNK_005d7c50;
extern "C" unsigned long _UNK_005d7c78;
extern "C" unsigned long _UNK_005d8204;
extern "C" unsigned long _UNK_005d8208;
extern "C" unsigned long _UNK_005d820c;
extern "C" unsigned long _UNK_005d8210;
extern "C" unsigned long _UNK_005d8214;
extern "C" unsigned long _UNK_005d8218;
extern "C" unsigned long _UNK_005d821c;
extern "C" unsigned long _UNK_005d8220;
extern "C" unsigned long _UNK_005d8224;
extern "C" unsigned long _UNK_005d8228;
extern "C" unsigned long _UNK_005d822c;
extern "C" unsigned long _UNK_005d8230;
extern "C" unsigned long _UNK_005d8234;
extern "C" unsigned long _UNK_005d8238;
extern "C" unsigned long _UNK_005d823c;
extern "C" unsigned long _UNK_005d8240;
extern "C" unsigned long _UNK_005d85fc;
extern "C" unsigned long _UNK_005d8600;
extern "C" unsigned long _UNK_005d8604;
extern "C" unsigned long _UNK_005d8608;
extern "C" unsigned long _UNK_005d860c;
extern "C" unsigned long _UNK_005d8610;
extern "C" unsigned long _UNK_005d8614;
extern "C" unsigned long _UNK_005d8618;
extern "C" unsigned long _UNK_005d861c;
extern "C" unsigned long _UNK_005d8620;
extern "C" unsigned long _UNK_005d8624;
extern "C" unsigned long _UNK_005d8628;
extern "C" unsigned long _UNK_005d862c;
extern "C" unsigned long _UNK_005d8630;
extern "C" unsigned long g_005d7bc4;
extern "C" unsigned long g_005d7c08;
extern "C" unsigned long g_005d7c38;
extern "C" unsigned long g_005d7c3c;
extern "C" unsigned long g_005d7c4c;
extern "C" unsigned long g_005d7c50;
extern "C" unsigned long g_005d7c74;
extern "C" unsigned long g_005d7c78;
extern "C" unsigned long g_005d7d14;
extern "C" unsigned long g_005d7d18;
extern "C" unsigned long g_005d7e22;
extern "C" unsigned long g_005d7f04;
extern "C" unsigned long g_005d7ffe;
extern "C" unsigned long g_005d802c;
extern "C" unsigned long g_005d810a;
extern "C" unsigned long g_005d8134;
extern "C" unsigned long g_005d8204;
extern "C" unsigned long g_005d8208;
extern "C" unsigned long g_005d820c;
extern "C" unsigned long g_005d8210;
extern "C" unsigned long g_005d8214;
extern "C" unsigned long g_005d8218;
extern "C" unsigned long g_005d821c;
extern "C" unsigned long g_005d8220;
extern "C" unsigned long g_005d8224;
extern "C" unsigned long g_005d8228;
extern "C" unsigned long g_005d822c;
extern "C" unsigned long g_005d8230;
extern "C" unsigned long g_005d8234;
extern "C" unsigned long g_005d8238;
extern "C" unsigned long g_005d823c;
extern "C" unsigned long g_005d8240;
extern "C" unsigned long g_005d8270;
extern "C" unsigned long g_005d832e;
extern "C" unsigned long g_005d8362;
extern "C" unsigned long g_005d847e;
extern "C" unsigned long g_005d84a8;
extern "C" unsigned long g_005d85fc;
extern "C" unsigned long g_005d8600;
extern "C" unsigned long g_005d8604;
extern "C" unsigned long g_005d8608;
extern "C" unsigned long g_005d860c;
extern "C" unsigned long g_005d8610;
extern "C" unsigned long g_005d8614;
extern "C" unsigned long g_005d8618;
extern "C" unsigned long g_005d861c;
extern "C" unsigned long g_005d8620;
extern "C" unsigned long g_005d8624;
extern "C" unsigned long g_005d8628;
extern "C" unsigned long g_005d862c;
extern "C" unsigned long g_005d8630;
BLSweepBuyHeroView::~BLSweepBuyHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005d7bc4 + g_005d7c38);
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
  func_0079e45c(&uStack_14,&g_005d7c08 + g_005d7c3c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSweepBuyHeroView::BLSweepBuyHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005d7d14 + 0x5d7cbc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSweepBuyHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSweepBuyHeroView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
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

undefined4 BLSweepBuyHeroView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLSweepBuyHeroView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLSweepBuyHeroView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLSweepBuyHeroView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLSweepBuyHeroView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLSweepBuyHeroView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLSweepBuyHeroView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLSweepBuyHeroView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLSweepBuyHeroView::onEnter()
{
  ((BLSweepBuyHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSweepBuyHeroView::onExit()
{
  ((BLSweepBuyHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSweepBuyHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
