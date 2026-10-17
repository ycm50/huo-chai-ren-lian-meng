#include "BLChestFestivalView.h"
#include "BLChestFestivalPresenter.h"
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
extern "C" unsigned long UNK_0051888c;
extern "C" unsigned long UNK_005188de;
extern "C" unsigned long UNK_00518924;
extern "C" unsigned long UNK_0051894c;
extern "C" unsigned long UNK_00518b1e;
extern "C" unsigned long UNK_00518c04;
extern "C" unsigned long UNK_00518cf2;
extern "C" unsigned long UNK_00518d1e;
extern "C" unsigned long UNK_00518de6;
extern "C" unsigned long UNK_00518e18;
extern "C" unsigned long UNK_00518eee;
extern "C" unsigned long UNK_00518f62;
extern "C" unsigned long UNK_0051906c;
extern "C" unsigned long _DAT_00518a04;
extern "C" unsigned long _DAT_00518a08;
extern "C" unsigned long _UNK_00518910;
extern "C" unsigned long _UNK_00518914;
extern "C" unsigned long _UNK_00518928;
extern "C" unsigned long _UNK_00518950;
extern "C" unsigned long _UNK_00518f00;
extern "C" unsigned long _UNK_00518f04;
extern "C" unsigned long _UNK_00518f08;
extern "C" unsigned long _UNK_00518f0c;
extern "C" unsigned long _UNK_00518f10;
extern "C" unsigned long _UNK_00518f14;
extern "C" unsigned long _UNK_00518f18;
extern "C" unsigned long _UNK_00518f1c;
extern "C" unsigned long _UNK_00518f20;
extern "C" unsigned long _UNK_00518f24;
extern "C" unsigned long _UNK_00518f28;
extern "C" unsigned long _UNK_00518f2c;
extern "C" unsigned long _UNK_00518f30;
extern "C" unsigned long _UNK_00518f34;
extern "C" unsigned long _UNK_00518f38;
extern "C" unsigned long _UNK_00518f3c;
extern "C" unsigned long _UNK_00518f40;
extern "C" unsigned long _UNK_00519158;
extern "C" unsigned long _UNK_0051915c;
extern "C" unsigned long _UNK_00519160;
extern "C" unsigned long _UNK_00519164;
extern "C" unsigned long _UNK_00519168;
extern "C" unsigned long _UNK_0051916c;
extern "C" unsigned long _UNK_00519170;
extern "C" unsigned long _UNK_00519174;
extern "C" unsigned long g_0051888c;
extern "C" unsigned long g_005188de;
extern "C" unsigned long g_00518910;
extern "C" unsigned long g_00518914;
extern "C" unsigned long g_00518924;
extern "C" unsigned long g_00518928;
extern "C" unsigned long g_0051894c;
extern "C" unsigned long g_00518950;
extern "C" unsigned long g_00518a04;
extern "C" unsigned long g_00518a08;
extern "C" unsigned long g_00518b1e;
extern "C" unsigned long g_00518c04;
extern "C" unsigned long g_00518cf2;
extern "C" unsigned long g_00518d1e;
extern "C" unsigned long g_00518de6;
extern "C" unsigned long g_00518e18;
extern "C" unsigned long g_00518eee;
extern "C" unsigned long g_00518f00;
extern "C" unsigned long g_00518f04;
extern "C" unsigned long g_00518f08;
extern "C" unsigned long g_00518f0c;
extern "C" unsigned long g_00518f10;
extern "C" unsigned long g_00518f14;
extern "C" unsigned long g_00518f18;
extern "C" unsigned long g_00518f1c;
extern "C" unsigned long g_00518f20;
extern "C" unsigned long g_00518f24;
extern "C" unsigned long g_00518f28;
extern "C" unsigned long g_00518f2c;
extern "C" unsigned long g_00518f30;
extern "C" unsigned long g_00518f34;
extern "C" unsigned long g_00518f38;
extern "C" unsigned long g_00518f3c;
extern "C" unsigned long g_00518f40;
extern "C" unsigned long g_00518f62;
extern "C" unsigned long g_0051906c;
extern "C" unsigned long g_00519158;
extern "C" unsigned long g_0051915c;
extern "C" unsigned long g_00519160;
extern "C" unsigned long g_00519164;
extern "C" unsigned long g_00519168;
extern "C" unsigned long g_0051916c;
extern "C" unsigned long g_00519170;
extern "C" unsigned long g_00519174;
BLChestFestivalView::~BLChestFestivalView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0051888c + g_00518910);
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
  func_0079e45c(&uStack_14,&g_005188de + g_00518914,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLChestFestivalView::create()
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

undefined4 BLChestFestivalView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLChestFestivalView::getBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLChestFestivalView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLChestFestivalView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLChestFestivalView::getBtnBuyAgain()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLChestFestivalView::getLabCopper()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLChestFestivalView::getSprCopperIcon()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLChestFestivalView::getLabAgainTitle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLChestFestivalView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLChestFestivalView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLChestFestivalView::getGridViewItemList()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

void BLChestFestivalView::onEnter()
{
  ((BLChestFestivalPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLChestFestivalView::onExit()
{
  ((BLChestFestivalPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLChestFestivalView::BLChestFestivalView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_00518a04 + 0x518994));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLChestFestivalView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLChestFestivalView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
