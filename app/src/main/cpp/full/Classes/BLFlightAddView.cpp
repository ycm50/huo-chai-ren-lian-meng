#include "BLFlightAddView.h"
#include "BLFlightAddPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005fa5f0;
extern "C" unsigned long UNK_005fa634;
extern "C" unsigned long UNK_005fa678;
extern "C" unsigned long UNK_005fa6a0;
extern "C" unsigned long UNK_005fa83a;
extern "C" unsigned long UNK_005fa916;
extern "C" unsigned long UNK_005fa9f6;
extern "C" unsigned long UNK_005faa20;
extern "C" unsigned long UNK_005faad2;
extern "C" unsigned long UNK_005faaf2;
extern "C" unsigned long UNK_005faba2;
extern "C" unsigned long UNK_005fabd0;
extern "C" unsigned long UNK_005facee;
extern "C" unsigned long UNK_005fad22;
extern "C" unsigned long UNK_005fadc0;
extern "C" unsigned long UNK_005fadf6;
extern "C" unsigned long UNK_005fae1e;
extern "C" unsigned long UNK_005faef0;
extern "C" unsigned long UNK_005faf1a;
extern "C" unsigned long UNK_005fafc0;
extern "C" unsigned long UNK_005fafde;
extern "C" unsigned long _DAT_005fa740;
extern "C" unsigned long _DAT_005fa744;
extern "C" unsigned long _UNK_005fa664;
extern "C" unsigned long _UNK_005fa668;
extern "C" unsigned long _UNK_005fa67c;
extern "C" unsigned long _UNK_005fa6a4;
extern "C" unsigned long _UNK_005fac1c;
extern "C" unsigned long _UNK_005fac20;
extern "C" unsigned long _UNK_005fac24;
extern "C" unsigned long _UNK_005fac28;
extern "C" unsigned long _UNK_005fac2c;
extern "C" unsigned long _UNK_005fac30;
extern "C" unsigned long _UNK_005fac34;
extern "C" unsigned long _UNK_005fac38;
extern "C" unsigned long _UNK_005fac3c;
extern "C" unsigned long _UNK_005fac40;
extern "C" unsigned long _UNK_005fac44;
extern "C" unsigned long _UNK_005fac48;
extern "C" unsigned long _UNK_005fac4c;
extern "C" unsigned long _UNK_005fac50;
extern "C" unsigned long _UNK_005fac54;
extern "C" unsigned long _UNK_005fac58;
extern "C" unsigned long _UNK_005fac5c;
extern "C" unsigned long _UNK_005fac60;
extern "C" unsigned long _UNK_005fb05c;
extern "C" unsigned long _UNK_005fb060;
extern "C" unsigned long _UNK_005fb064;
extern "C" unsigned long _UNK_005fb068;
extern "C" unsigned long _UNK_005fb06c;
extern "C" unsigned long _UNK_005fb070;
extern "C" unsigned long _UNK_005fb074;
extern "C" unsigned long _UNK_005fb078;
extern "C" unsigned long _UNK_005fb07c;
extern "C" unsigned long _UNK_005fb080;
extern "C" unsigned long _UNK_005fb084;
extern "C" unsigned long _UNK_005fb088;
extern "C" unsigned long _UNK_005fb08c;
extern "C" unsigned long _UNK_005fb090;
extern "C" unsigned long _UNK_005fb094;
extern "C" unsigned long _UNK_005fb154;
extern "C" unsigned long _UNK_005fb158;
extern "C" unsigned long g_005fa5f0;
extern "C" unsigned long g_005fa634;
extern "C" unsigned long g_005fa664;
extern "C" unsigned long g_005fa668;
extern "C" unsigned long g_005fa678;
extern "C" unsigned long g_005fa67c;
extern "C" unsigned long g_005fa6a0;
extern "C" unsigned long g_005fa6a4;
extern "C" unsigned long g_005fa740;
extern "C" unsigned long g_005fa744;
extern "C" unsigned long g_005fa83a;
extern "C" unsigned long g_005fa916;
extern "C" unsigned long g_005fa9f6;
extern "C" unsigned long g_005faa20;
extern "C" unsigned long g_005faad2;
extern "C" unsigned long g_005faaf2;
extern "C" unsigned long g_005faba2;
extern "C" unsigned long g_005fabd0;
extern "C" unsigned long g_005fac1c;
extern "C" unsigned long g_005fac20;
extern "C" unsigned long g_005fac24;
extern "C" unsigned long g_005fac28;
extern "C" unsigned long g_005fac2c;
extern "C" unsigned long g_005fac30;
extern "C" unsigned long g_005fac34;
extern "C" unsigned long g_005fac38;
extern "C" unsigned long g_005fac3c;
extern "C" unsigned long g_005fac40;
extern "C" unsigned long g_005fac44;
extern "C" unsigned long g_005fac48;
extern "C" unsigned long g_005fac4c;
extern "C" unsigned long g_005fac50;
extern "C" unsigned long g_005fac54;
extern "C" unsigned long g_005fac58;
extern "C" unsigned long g_005fac5c;
extern "C" unsigned long g_005fac60;
extern "C" unsigned long g_005facee;
extern "C" unsigned long g_005fad22;
extern "C" unsigned long g_005fadc0;
extern "C" unsigned long g_005fadf6;
extern "C" unsigned long g_005fae1e;
extern "C" unsigned long g_005faef0;
extern "C" unsigned long g_005faf1a;
extern "C" unsigned long g_005fafc0;
extern "C" unsigned long g_005fafde;
extern "C" unsigned long g_005fb05c;
extern "C" unsigned long g_005fb060;
extern "C" unsigned long g_005fb064;
extern "C" unsigned long g_005fb068;
extern "C" unsigned long g_005fb06c;
extern "C" unsigned long g_005fb070;
extern "C" unsigned long g_005fb074;
extern "C" unsigned long g_005fb078;
extern "C" unsigned long g_005fb07c;
extern "C" unsigned long g_005fb080;
extern "C" unsigned long g_005fb084;
extern "C" unsigned long g_005fb088;
extern "C" unsigned long g_005fb08c;
extern "C" unsigned long g_005fb090;
extern "C" unsigned long g_005fb094;
extern "C" unsigned long g_005fb154;
extern "C" unsigned long g_005fb158;
BLFlightAddView::~BLFlightAddView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005fa5f0 + g_005fa664);
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
  func_0079e45c(&uStack_14,&g_005fa634 + g_005fa668,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFlightAddView::BLFlightAddView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005fa740 + 0x5fa6e8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLFlightAddView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLFlightAddView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x11c)));
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

undefined4 BLFlightAddView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLFlightAddView::getBtbQuit()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLFlightAddView::getBtnRelife()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLFlightAddView::getLabeTip()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLFlightAddView::getLabRelife()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void BLFlightAddView::onEnter()
{
  ((BLFlightAddPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLFlightAddView::onExit()
{
  ((BLFlightAddPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLFlightAddView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
