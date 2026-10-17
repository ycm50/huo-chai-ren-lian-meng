#include "BLSweepHeroView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLSweepHeroPresenter.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_005db8a4(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005da4f0;
extern "C" unsigned long UNK_005da534;
extern "C" unsigned long UNK_005da578;
extern "C" unsigned long UNK_005da5a0;
extern "C" unsigned long UNK_005da798;
extern "C" unsigned long UNK_005da882;
extern "C" unsigned long UNK_005da936;
extern "C" unsigned long UNK_005da964;
extern "C" unsigned long UNK_005daa48;
extern "C" unsigned long UNK_005daa72;
extern "C" unsigned long UNK_005dacaa;
extern "C" unsigned long UNK_005dad92;
extern "C" unsigned long UNK_005dadbe;
extern "C" unsigned long UNK_005dae76;
extern "C" unsigned long UNK_005daea2;
extern "C" unsigned long UNK_005daf58;
extern "C" unsigned long UNK_005daf84;
extern "C" unsigned long UNK_005db096;
extern "C" unsigned long UNK_005db0c4;
extern "C" unsigned long UNK_005db194;
extern "C" unsigned long UNK_005db1c0;
extern "C" unsigned long UNK_005db288;
extern "C" unsigned long UNK_005db2b6;
extern "C" unsigned long UNK_005db386;
extern "C" unsigned long UNK_005db3b2;
extern "C" unsigned long UNK_005db4ce;
extern "C" unsigned long UNK_005db4fc;
extern "C" unsigned long UNK_005db5d0;
extern "C" unsigned long UNK_005db5fc;
extern "C" unsigned long UNK_005db6c2;
extern "C" unsigned long UNK_005db6ee;
extern "C" unsigned long _DAT_005da640;
extern "C" unsigned long _DAT_005da644;
extern "C" unsigned long _UNK_005da564;
extern "C" unsigned long _UNK_005da568;
extern "C" unsigned long _UNK_005da57c;
extern "C" unsigned long _UNK_005da5a4;
extern "C" unsigned long _UNK_005dab68;
extern "C" unsigned long _UNK_005dab6c;
extern "C" unsigned long _UNK_005dab70;
extern "C" unsigned long _UNK_005dab74;
extern "C" unsigned long _UNK_005dab78;
extern "C" unsigned long _UNK_005dab7c;
extern "C" unsigned long _UNK_005dab80;
extern "C" unsigned long _UNK_005dab84;
extern "C" unsigned long _UNK_005dab88;
extern "C" unsigned long _UNK_005dab8c;
extern "C" unsigned long _UNK_005dab90;
extern "C" unsigned long _UNK_005dab94;
extern "C" unsigned long _UNK_005dab98;
extern "C" unsigned long _UNK_005dab9c;
extern "C" unsigned long _UNK_005dafd0;
extern "C" unsigned long _UNK_005dafd4;
extern "C" unsigned long _UNK_005dafd8;
extern "C" unsigned long _UNK_005dafdc;
extern "C" unsigned long _UNK_005dafe0;
extern "C" unsigned long _UNK_005dafe4;
extern "C" unsigned long _UNK_005dafe8;
extern "C" unsigned long _UNK_005dafec;
extern "C" unsigned long _UNK_005daff0;
extern "C" unsigned long _UNK_005daff4;
extern "C" unsigned long _UNK_005daff8;
extern "C" unsigned long _UNK_005daffc;
extern "C" unsigned long _UNK_005db000;
extern "C" unsigned long _UNK_005db004;
extern "C" unsigned long _UNK_005db008;
extern "C" unsigned long _UNK_005db00c;
extern "C" unsigned long _UNK_005db010;
extern "C" unsigned long _UNK_005db014;
extern "C" unsigned long _UNK_005db400;
extern "C" unsigned long _UNK_005db404;
extern "C" unsigned long _UNK_005db408;
extern "C" unsigned long _UNK_005db40c;
extern "C" unsigned long _UNK_005db410;
extern "C" unsigned long _UNK_005db414;
extern "C" unsigned long _UNK_005db418;
extern "C" unsigned long _UNK_005db41c;
extern "C" unsigned long _UNK_005db420;
extern "C" unsigned long _UNK_005db424;
extern "C" unsigned long _UNK_005db428;
extern "C" unsigned long _UNK_005db42c;
extern "C" unsigned long _UNK_005db430;
extern "C" unsigned long _UNK_005db434;
extern "C" unsigned long _UNK_005db438;
extern "C" unsigned long _UNK_005db43c;
extern "C" unsigned long _UNK_005db440;
extern "C" unsigned long _UNK_005db444;
extern "C" unsigned long _UNK_005db448;
extern "C" unsigned long _UNK_005db44c;
extern "C" unsigned long _UNK_005db838;
extern "C" unsigned long _UNK_005db83c;
extern "C" unsigned long _UNK_005db840;
extern "C" unsigned long _UNK_005db844;
extern "C" unsigned long _UNK_005db848;
extern "C" unsigned long _UNK_005db84c;
extern "C" unsigned long _UNK_005db850;
extern "C" unsigned long _UNK_005db854;
extern "C" unsigned long _UNK_005db858;
extern "C" unsigned long _UNK_005db85c;
extern "C" unsigned long _UNK_005db860;
extern "C" unsigned long _UNK_005db864;
extern "C" unsigned long _UNK_005db868;
extern "C" unsigned long _UNK_005db86c;
extern "C" unsigned long _UNK_005db870;
extern "C" unsigned long g_005da4f0;
extern "C" unsigned long g_005da534;
extern "C" unsigned long g_005da564;
extern "C" unsigned long g_005da568;
extern "C" unsigned long g_005da578;
extern "C" unsigned long g_005da57c;
extern "C" unsigned long g_005da5a0;
extern "C" unsigned long g_005da5a4;
extern "C" unsigned long g_005da640;
extern "C" unsigned long g_005da644;
extern "C" unsigned long g_005da798;
extern "C" unsigned long g_005da882;
extern "C" unsigned long g_005da936;
extern "C" unsigned long g_005da964;
extern "C" unsigned long g_005daa48;
extern "C" unsigned long g_005daa72;
extern "C" unsigned long g_005dab68;
extern "C" unsigned long g_005dab6c;
extern "C" unsigned long g_005dab70;
extern "C" unsigned long g_005dab74;
extern "C" unsigned long g_005dab78;
extern "C" unsigned long g_005dab7c;
extern "C" unsigned long g_005dab80;
extern "C" unsigned long g_005dab84;
extern "C" unsigned long g_005dab88;
extern "C" unsigned long g_005dab8c;
extern "C" unsigned long g_005dab90;
extern "C" unsigned long g_005dab94;
extern "C" unsigned long g_005dab98;
extern "C" unsigned long g_005dab9c;
extern "C" unsigned long g_005dacaa;
extern "C" unsigned long g_005dad92;
extern "C" unsigned long g_005dadbe;
extern "C" unsigned long g_005dae76;
extern "C" unsigned long g_005daea2;
extern "C" unsigned long g_005daf58;
extern "C" unsigned long g_005daf84;
extern "C" unsigned long g_005dafd0;
extern "C" unsigned long g_005dafd4;
extern "C" unsigned long g_005dafd8;
extern "C" unsigned long g_005dafdc;
extern "C" unsigned long g_005dafe0;
extern "C" unsigned long g_005dafe4;
extern "C" unsigned long g_005dafe8;
extern "C" unsigned long g_005dafec;
extern "C" unsigned long g_005daff0;
extern "C" unsigned long g_005daff4;
extern "C" unsigned long g_005daff8;
extern "C" unsigned long g_005daffc;
extern "C" unsigned long g_005db000;
extern "C" unsigned long g_005db004;
extern "C" unsigned long g_005db008;
extern "C" unsigned long g_005db00c;
extern "C" unsigned long g_005db010;
extern "C" unsigned long g_005db014;
extern "C" unsigned long g_005db096;
extern "C" unsigned long g_005db0c4;
extern "C" unsigned long g_005db194;
extern "C" unsigned long g_005db1c0;
extern "C" unsigned long g_005db288;
extern "C" unsigned long g_005db2b6;
extern "C" unsigned long g_005db386;
extern "C" unsigned long g_005db3b2;
extern "C" unsigned long g_005db400;
extern "C" unsigned long g_005db404;
extern "C" unsigned long g_005db408;
extern "C" unsigned long g_005db40c;
extern "C" unsigned long g_005db410;
extern "C" unsigned long g_005db414;
extern "C" unsigned long g_005db418;
extern "C" unsigned long g_005db41c;
extern "C" unsigned long g_005db420;
extern "C" unsigned long g_005db424;
extern "C" unsigned long g_005db428;
extern "C" unsigned long g_005db42c;
extern "C" unsigned long g_005db430;
extern "C" unsigned long g_005db434;
extern "C" unsigned long g_005db438;
extern "C" unsigned long g_005db43c;
extern "C" unsigned long g_005db440;
extern "C" unsigned long g_005db444;
extern "C" unsigned long g_005db448;
extern "C" unsigned long g_005db44c;
extern "C" unsigned long g_005db4ce;
extern "C" unsigned long g_005db4fc;
extern "C" unsigned long g_005db5d0;
extern "C" unsigned long g_005db5fc;
extern "C" unsigned long g_005db6c2;
extern "C" unsigned long g_005db6ee;
extern "C" unsigned long g_005db838;
extern "C" unsigned long g_005db83c;
extern "C" unsigned long g_005db840;
extern "C" unsigned long g_005db844;
extern "C" unsigned long g_005db848;
extern "C" unsigned long g_005db84c;
extern "C" unsigned long g_005db850;
extern "C" unsigned long g_005db854;
extern "C" unsigned long g_005db858;
extern "C" unsigned long g_005db85c;
extern "C" unsigned long g_005db860;
extern "C" unsigned long g_005db864;
extern "C" unsigned long g_005db868;
extern "C" unsigned long g_005db86c;
extern "C" unsigned long g_005db870;
BLSweepHeroView::~BLSweepHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005da4f0 + g_005da564);
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
  func_0079e45c(&uStack_14,&g_005da534 + g_005da568,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSweepHeroView::BLSweepHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)("0Ԯ");
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSweepHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSweepHeroView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x14c)));
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

undefined4 BLSweepHeroView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLSweepHeroView::getbtnRight()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLSweepHeroView::getBtnLeft()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLSweepHeroView::getTableViewRoles()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLSweepHeroView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLSweepHeroView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLSweepHeroView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLSweepHeroView::getLabRoleLimit()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLSweepHeroView::getBtnCancle()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLSweepHeroView::getLabCancle()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLSweepHeroView::getBtnSure()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLSweepHeroView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLSweepHeroView::getLabPlayTitle()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

void BLSweepHeroView::onEnter()
{
  ((BLSweepHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSweepHeroView::onExit()
{
  ((BLSweepHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSweepHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
