#include "BLEquipUpgraceItemView.h"
#include "BLEquipUpgraceItemPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLUpgraceButtonView.h"
#include "BLUpgraceMAXButtonView.h"
#include "BLUpgraceTitleView.h"
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
extern "C" unsigned long UNK_0067c4c0;
extern "C" unsigned long UNK_0067c512;
extern "C" unsigned long UNK_0067c558;
extern "C" unsigned long UNK_0067c580;
extern "C" unsigned long UNK_0067c5c8;
extern "C" unsigned long UNK_0067c604;
extern "C" unsigned long UNK_0067c782;
extern "C" unsigned long UNK_0067c81e;
extern "C" unsigned long UNK_0067c8c0;
extern "C" unsigned long UNK_0067c9a8;
extern "C" unsigned long UNK_0067c9d6;
extern "C" unsigned long UNK_0067cc1a;
extern "C" unsigned long UNK_0067cc50;
extern "C" unsigned long UNK_0067cd10;
extern "C" unsigned long UNK_0067cd3c;
extern "C" unsigned long UNK_0067cdfc;
extern "C" unsigned long UNK_0067ce28;
extern "C" unsigned long UNK_0067cee4;
extern "C" unsigned long UNK_0067cf10;
extern "C" unsigned long UNK_0067cffe;
extern "C" unsigned long UNK_0067d0e6;
extern "C" unsigned long UNK_0067d266;
extern "C" unsigned long UNK_0067d2ba;
extern "C" unsigned long UNK_0067d2fa;
extern "C" unsigned long UNK_0067d3e8;
extern "C" unsigned long UNK_0067d412;
extern "C" unsigned long UNK_0067d4d2;
extern "C" unsigned long UNK_0067d4fc;
extern "C" unsigned long UNK_0067d5bc;
extern "C" unsigned long UNK_0067d5e8;
extern "C" unsigned long _UNK_0067c544;
extern "C" unsigned long _UNK_0067c548;
extern "C" unsigned long _UNK_0067c55c;
extern "C" unsigned long _UNK_0067c584;
extern "C" unsigned long _UNK_0067c638;
extern "C" unsigned long _UNK_0067c63c;
extern "C" unsigned long _UNK_0067cb68;
extern "C" unsigned long _UNK_0067cb6c;
extern "C" unsigned long _UNK_0067cb70;
extern "C" unsigned long _UNK_0067cb74;
extern "C" unsigned long _UNK_0067cb78;
extern "C" unsigned long _UNK_0067cb7c;
extern "C" unsigned long _UNK_0067cb80;
extern "C" unsigned long _UNK_0067cb84;
extern "C" unsigned long _UNK_0067cb88;
extern "C" unsigned long _UNK_0067cb8c;
extern "C" unsigned long _UNK_0067cb90;
extern "C" unsigned long _UNK_0067cb94;
extern "C" unsigned long _UNK_0067cb98;
extern "C" unsigned long _UNK_0067cb9c;
extern "C" unsigned long _UNK_0067cba0;
extern "C" unsigned long _UNK_0067cba4;
extern "C" unsigned long _UNK_0067cf94;
extern "C" unsigned long _UNK_0067cf98;
extern "C" unsigned long _UNK_0067cf9c;
extern "C" unsigned long _UNK_0067cfa0;
extern "C" unsigned long _UNK_0067cfa4;
extern "C" unsigned long _UNK_0067cfa8;
extern "C" unsigned long _UNK_0067cfac;
extern "C" unsigned long _UNK_0067cfb0;
extern "C" unsigned long _UNK_0067cfb4;
extern "C" unsigned long _UNK_0067cfb8;
extern "C" unsigned long _UNK_0067cfbc;
extern "C" unsigned long _UNK_0067cfc0;
extern "C" unsigned long _UNK_0067cfc4;
extern "C" unsigned long _UNK_0067cfc8;
extern "C" unsigned long _UNK_0067d280;
extern "C" unsigned long _UNK_0067d284;
extern "C" unsigned long _UNK_0067d288;
extern "C" unsigned long _UNK_0067d28c;
extern "C" unsigned long _UNK_0067d290;
extern "C" unsigned long _UNK_0067d294;
extern "C" unsigned long _UNK_0067d298;
extern "C" unsigned long _UNK_0067d29c;
extern "C" unsigned long _UNK_0067d2a0;
extern "C" unsigned long _UNK_0067d698;
extern "C" unsigned long _UNK_0067d69c;
extern "C" unsigned long _UNK_0067d6a0;
extern "C" unsigned long _UNK_0067d6a4;
extern "C" unsigned long _UNK_0067d6a8;
extern "C" unsigned long _UNK_0067d6ac;
extern "C" unsigned long _UNK_0067d6b0;
extern "C" unsigned long _UNK_0067d6b4;
extern "C" unsigned long _UNK_0067d6b8;
extern "C" unsigned long _UNK_0067d6bc;
extern "C" unsigned long _UNK_0067d6c0;
extern "C" unsigned long _UNK_0067d6c4;
extern "C" unsigned long _UNK_0067d6c8;
extern "C" unsigned long _UNK_0067d6cc;
extern "C" unsigned long _UNK_0067d6d0;
extern "C" unsigned long _UNK_0067d6d4;
extern "C" unsigned long _UNK_0067d6d8;
extern "C" unsigned long _UNK_0067d6dc;
extern "C" unsigned long _UNK_0067d7b8;
extern "C" unsigned long _UNK_0067d7bc;
extern "C" unsigned long g_0067c4c0;
extern "C" unsigned long g_0067c512;
extern "C" unsigned long g_0067c544;
extern "C" unsigned long g_0067c548;
extern "C" unsigned long g_0067c558;
extern "C" unsigned long g_0067c55c;
extern "C" unsigned long g_0067c580;
extern "C" unsigned long g_0067c584;
extern "C" unsigned long g_0067c5c8;
extern "C" unsigned long g_0067c604;
extern "C" unsigned long g_0067c638;
extern "C" unsigned long g_0067c63c;
extern "C" unsigned long g_0067c782;
extern "C" unsigned long g_0067c81e;
extern "C" unsigned long g_0067c8c0;
extern "C" unsigned long g_0067c9a8;
extern "C" unsigned long g_0067c9d6;
extern "C" unsigned long g_0067cb68;
extern "C" unsigned long g_0067cb6c;
extern "C" unsigned long g_0067cb70;
extern "C" unsigned long g_0067cb74;
extern "C" unsigned long g_0067cb78;
extern "C" unsigned long g_0067cb7c;
extern "C" unsigned long g_0067cb80;
extern "C" unsigned long g_0067cb84;
extern "C" unsigned long g_0067cb88;
extern "C" unsigned long g_0067cb8c;
extern "C" unsigned long g_0067cb90;
extern "C" unsigned long g_0067cb94;
extern "C" unsigned long g_0067cb98;
extern "C" unsigned long g_0067cb9c;
extern "C" unsigned long g_0067cba0;
extern "C" unsigned long g_0067cba4;
extern "C" unsigned long g_0067cc1a;
extern "C" unsigned long g_0067cc50;
extern "C" unsigned long g_0067cd10;
extern "C" unsigned long g_0067cd3c;
extern "C" unsigned long g_0067cdfc;
extern "C" unsigned long g_0067ce28;
extern "C" unsigned long g_0067cee4;
extern "C" unsigned long g_0067cf10;
extern "C" unsigned long g_0067cf94;
extern "C" unsigned long g_0067cf98;
extern "C" unsigned long g_0067cf9c;
extern "C" unsigned long g_0067cfa0;
extern "C" unsigned long g_0067cfa4;
extern "C" unsigned long g_0067cfa8;
extern "C" unsigned long g_0067cfac;
extern "C" unsigned long g_0067cfb0;
extern "C" unsigned long g_0067cfb4;
extern "C" unsigned long g_0067cfb8;
extern "C" unsigned long g_0067cfbc;
extern "C" unsigned long g_0067cfc0;
extern "C" unsigned long g_0067cfc4;
extern "C" unsigned long g_0067cfc8;
extern "C" unsigned long g_0067cffe;
extern "C" unsigned long g_0067d0e6;
extern "C" unsigned long g_0067d266;
extern "C" unsigned long g_0067d280;
extern "C" unsigned long g_0067d284;
extern "C" unsigned long g_0067d288;
extern "C" unsigned long g_0067d28c;
extern "C" unsigned long g_0067d290;
extern "C" unsigned long g_0067d294;
extern "C" unsigned long g_0067d298;
extern "C" unsigned long g_0067d29c;
extern "C" unsigned long g_0067d2a0;
extern "C" unsigned long g_0067d2ba;
extern "C" unsigned long g_0067d2fa;
extern "C" unsigned long g_0067d3e8;
extern "C" unsigned long g_0067d412;
extern "C" unsigned long g_0067d4d2;
extern "C" unsigned long g_0067d4fc;
extern "C" unsigned long g_0067d5bc;
extern "C" unsigned long g_0067d5e8;
extern "C" unsigned long g_0067d698;
extern "C" unsigned long g_0067d69c;
extern "C" unsigned long g_0067d6a0;
extern "C" unsigned long g_0067d6a4;
extern "C" unsigned long g_0067d6a8;
extern "C" unsigned long g_0067d6ac;
extern "C" unsigned long g_0067d6b0;
extern "C" unsigned long g_0067d6b4;
extern "C" unsigned long g_0067d6b8;
extern "C" unsigned long g_0067d6bc;
extern "C" unsigned long g_0067d6c0;
extern "C" unsigned long g_0067d6c4;
extern "C" unsigned long g_0067d6c8;
extern "C" unsigned long g_0067d6cc;
extern "C" unsigned long g_0067d6d0;
extern "C" unsigned long g_0067d6d4;
extern "C" unsigned long g_0067d6d8;
extern "C" unsigned long g_0067d6dc;
extern "C" unsigned long g_0067d7b8;
extern "C" unsigned long g_0067d7bc;
BLEquipUpgraceItemView::~BLEquipUpgraceItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0067c4c0 + g_0067c544);
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
  func_0079e45c(&uStack_14,&g_0067c512 + g_0067c548,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLEquipUpgraceItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x154)));
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

undefined4 BLEquipUpgraceItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLEquipUpgraceItemView::getSprItemIcon()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLEquipUpgraceItemView::getssp_UpgraceTitleBG()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLEquipUpgraceItemView::getLabUpgrace()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLEquipUpgraceItemView::BtnUpgrace()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLEquipUpgraceItemView::BtnUpgraceMAX()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLEquipUpgraceItemView::UpgraceTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLEquipUpgraceItemView::getLabPro1()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLEquipUpgraceItemView::getLabPro2()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLEquipUpgraceItemView::getLabPro3()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLEquipUpgraceItemView::getLabPro4()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

undefined4 BLEquipUpgraceItemView::getLineDown()
{
  return *(undefined4 *)(((int)this) + 0x138);
}

undefined4 BLEquipUpgraceItemView::getLineUp()
{
  return *(undefined4 *)(((int)this) + 0x13c);
}

undefined4 BLEquipUpgraceItemView::getPageControlStars()
{
  return *(undefined4 *)(((int)this) + 0x140);
}

undefined4 BLEquipUpgraceItemView::getLineMiddle()
{
  return *(undefined4 *)(((int)this) + 0x144);
}

undefined4 BLEquipUpgraceItemView::getLabEquiped()
{
  return *(undefined4 *)(((int)this) + 0x148);
}

undefined4 BLEquipUpgraceItemView::getLabMax()
{
  return *(undefined4 *)(((int)this) + 0x14c);
}

undefined4 BLEquipUpgraceItemView::getLabStar()
{
  return *(undefined4 *)(((int)this) + 0x150);
}

void BLEquipUpgraceItemView::onEnter()
{
  ((BLEquipUpgraceItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEquipUpgraceItemView::onExit()
{
  ((BLEquipUpgraceItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLEquipUpgraceItemView::BLEquipUpgraceItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0067c5c8 + (intptr_t)(g_0067c638))));
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
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0067c604 + (intptr_t)(g_0067c63c)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLEquipUpgraceItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
