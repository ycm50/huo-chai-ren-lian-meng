#include "BLMineSnatchBuyHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMineSnatchBuyHeroPresenter.h"
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
extern "C" unsigned long UNK_005af940;
extern "C" unsigned long UNK_005af984;
extern "C" unsigned long UNK_005af9c8;
extern "C" unsigned long UNK_005af9f0;
extern "C" unsigned long UNK_005afb9e;
extern "C" unsigned long UNK_005afc80;
extern "C" unsigned long UNK_005afd7a;
extern "C" unsigned long UNK_005afda8;
extern "C" unsigned long UNK_005afe86;
extern "C" unsigned long UNK_005afeb0;
extern "C" unsigned long UNK_005aff80;
extern "C" unsigned long UNK_005affec;
extern "C" unsigned long UNK_005b00aa;
extern "C" unsigned long UNK_005b00de;
extern "C" unsigned long UNK_005b01fa;
extern "C" unsigned long UNK_005b0224;
extern "C" unsigned long _DAT_005afa90;
extern "C" unsigned long _DAT_005afa94;
extern "C" unsigned long _UNK_005af9b4;
extern "C" unsigned long _UNK_005af9b8;
extern "C" unsigned long _UNK_005af9cc;
extern "C" unsigned long _UNK_005af9f4;
extern "C" unsigned long _UNK_005aff80;
extern "C" unsigned long _UNK_005aff84;
extern "C" unsigned long _UNK_005aff88;
extern "C" unsigned long _UNK_005aff8c;
extern "C" unsigned long _UNK_005aff90;
extern "C" unsigned long _UNK_005aff94;
extern "C" unsigned long _UNK_005aff98;
extern "C" unsigned long _UNK_005aff9c;
extern "C" unsigned long _UNK_005affa0;
extern "C" unsigned long _UNK_005affa4;
extern "C" unsigned long _UNK_005affa8;
extern "C" unsigned long _UNK_005affac;
extern "C" unsigned long _UNK_005affb0;
extern "C" unsigned long _UNK_005affb4;
extern "C" unsigned long _UNK_005affb8;
extern "C" unsigned long _UNK_005affbc;
extern "C" unsigned long _UNK_005b0378;
extern "C" unsigned long _UNK_005b037c;
extern "C" unsigned long _UNK_005b0380;
extern "C" unsigned long _UNK_005b0384;
extern "C" unsigned long _UNK_005b0388;
extern "C" unsigned long _UNK_005b038c;
extern "C" unsigned long _UNK_005b0390;
extern "C" unsigned long _UNK_005b0394;
extern "C" unsigned long _UNK_005b0398;
extern "C" unsigned long _UNK_005b039c;
extern "C" unsigned long _UNK_005b03a0;
extern "C" unsigned long _UNK_005b03a4;
extern "C" unsigned long _UNK_005b03a8;
extern "C" unsigned long _UNK_005b03ac;
extern "C" unsigned long g_005af940;
extern "C" unsigned long g_005af984;
extern "C" unsigned long g_005af9b4;
extern "C" unsigned long g_005af9b8;
extern "C" unsigned long g_005af9c8;
extern "C" unsigned long g_005af9cc;
extern "C" unsigned long g_005af9f0;
extern "C" unsigned long g_005af9f4;
extern "C" unsigned long g_005afa90;
extern "C" unsigned long g_005afa94;
extern "C" unsigned long g_005afb9e;
extern "C" unsigned long g_005afc80;
extern "C" unsigned long g_005afd7a;
extern "C" unsigned long g_005afda8;
extern "C" unsigned long g_005afe86;
extern "C" unsigned long g_005afeb0;
extern "C" unsigned long g_005aff80;
extern "C" unsigned long g_005aff84;
extern "C" unsigned long g_005aff88;
extern "C" unsigned long g_005aff8c;
extern "C" unsigned long g_005aff90;
extern "C" unsigned long g_005aff94;
extern "C" unsigned long g_005aff98;
extern "C" unsigned long g_005aff9c;
extern "C" unsigned long g_005affa0;
extern "C" unsigned long g_005affa4;
extern "C" unsigned long g_005affa8;
extern "C" unsigned long g_005affac;
extern "C" unsigned long g_005affb0;
extern "C" unsigned long g_005affb4;
extern "C" unsigned long g_005affb8;
extern "C" unsigned long g_005affbc;
extern "C" unsigned long g_005affec;
extern "C" unsigned long g_005b00aa;
extern "C" unsigned long g_005b00de;
extern "C" unsigned long g_005b01fa;
extern "C" unsigned long g_005b0224;
extern "C" unsigned long g_005b0378;
extern "C" unsigned long g_005b037c;
extern "C" unsigned long g_005b0380;
extern "C" unsigned long g_005b0384;
extern "C" unsigned long g_005b0388;
extern "C" unsigned long g_005b038c;
extern "C" unsigned long g_005b0390;
extern "C" unsigned long g_005b0394;
extern "C" unsigned long g_005b0398;
extern "C" unsigned long g_005b039c;
extern "C" unsigned long g_005b03a0;
extern "C" unsigned long g_005b03a4;
extern "C" unsigned long g_005b03a8;
extern "C" unsigned long g_005b03ac;
BLMineSnatchBuyHeroView::~BLMineSnatchBuyHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005af940 + g_005af9b4);
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
  func_0079e45c(&uStack_14,&g_005af984 + g_005af9b8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineSnatchBuyHeroView::BLMineSnatchBuyHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005afa90 + 0x5afa38);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineSnatchBuyHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineSnatchBuyHeroView::create()
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

undefined4 BLMineSnatchBuyHeroView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLMineSnatchBuyHeroView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLMineSnatchBuyHeroView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLMineSnatchBuyHeroView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLMineSnatchBuyHeroView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLMineSnatchBuyHeroView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLMineSnatchBuyHeroView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLMineSnatchBuyHeroView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLMineSnatchBuyHeroView::onEnter()
{
  ((BLMineSnatchBuyHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineSnatchBuyHeroView::onExit()
{
  ((BLMineSnatchBuyHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineSnatchBuyHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
