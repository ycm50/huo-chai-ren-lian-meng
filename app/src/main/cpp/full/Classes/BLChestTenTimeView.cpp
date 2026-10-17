#include "BLChestTenTimeView.h"
#include "BLChestTenTimePresenter.h"
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
extern "C" unsigned long UNK_0051c480;
extern "C" unsigned long UNK_0051c4d2;
extern "C" unsigned long UNK_0051c518;
extern "C" unsigned long UNK_0051c540;
extern "C" unsigned long UNK_0051c714;
extern "C" unsigned long UNK_0051c7f8;
extern "C" unsigned long UNK_0051c8e6;
extern "C" unsigned long UNK_0051c910;
extern "C" unsigned long UNK_0051c9d4;
extern "C" unsigned long UNK_0051ca0c;
extern "C" unsigned long UNK_0051cade;
extern "C" unsigned long UNK_0051cb5e;
extern "C" unsigned long UNK_0051cc12;
extern "C" unsigned long UNK_0051ccc0;
extern "C" unsigned long UNK_0051ccea;
extern "C" unsigned long UNK_0051cdae;
extern "C" unsigned long UNK_0051cddc;
extern "C" unsigned long UNK_0051ceae;
extern "C" unsigned long UNK_0051ced8;
extern "C" unsigned long UNK_0051d084;
extern "C" unsigned long _DAT_0051c5f8;
extern "C" unsigned long _DAT_0051c5fc;
extern "C" unsigned long _UNK_0051c504;
extern "C" unsigned long _UNK_0051c508;
extern "C" unsigned long _UNK_0051c51c;
extern "C" unsigned long _UNK_0051c544;
extern "C" unsigned long _UNK_0051caf8;
extern "C" unsigned long _UNK_0051cafc;
extern "C" unsigned long _UNK_0051cb00;
extern "C" unsigned long _UNK_0051cb04;
extern "C" unsigned long _UNK_0051cb08;
extern "C" unsigned long _UNK_0051cb0c;
extern "C" unsigned long _UNK_0051cb10;
extern "C" unsigned long _UNK_0051cb14;
extern "C" unsigned long _UNK_0051cb18;
extern "C" unsigned long _UNK_0051cb1c;
extern "C" unsigned long _UNK_0051cb20;
extern "C" unsigned long _UNK_0051cb24;
extern "C" unsigned long _UNK_0051cb28;
extern "C" unsigned long _UNK_0051cb2c;
extern "C" unsigned long _UNK_0051cb30;
extern "C" unsigned long _UNK_0051cb34;
extern "C" unsigned long _UNK_0051cb38;
extern "C" unsigned long _UNK_0051cb3c;
extern "C" unsigned long _UNK_0051cf38;
extern "C" unsigned long _UNK_0051cf3c;
extern "C" unsigned long _UNK_0051cf40;
extern "C" unsigned long _UNK_0051cf44;
extern "C" unsigned long _UNK_0051cf48;
extern "C" unsigned long _UNK_0051cf4c;
extern "C" unsigned long _UNK_0051cf50;
extern "C" unsigned long _UNK_0051cf54;
extern "C" unsigned long _UNK_0051cf58;
extern "C" unsigned long _UNK_0051cf5c;
extern "C" unsigned long _UNK_0051cf60;
extern "C" unsigned long _UNK_0051cf64;
extern "C" unsigned long _UNK_0051cf68;
extern "C" unsigned long _UNK_0051cf6c;
extern "C" unsigned long _UNK_0051cf70;
extern "C" unsigned long _UNK_0051cf74;
extern "C" unsigned long _UNK_0051cf78;
extern "C" unsigned long _UNK_0051cf7c;
extern "C" unsigned long _UNK_0051cf80;
extern "C" unsigned long _UNK_0051d134;
extern "C" unsigned long _UNK_0051d138;
extern "C" unsigned long _UNK_0051d13c;
extern "C" unsigned long _UNK_0051d140;
extern "C" unsigned long _UNK_0051d144;
extern "C" unsigned long _UNK_0051d148;
extern "C" unsigned long _UNK_0051d14c;
extern "C" unsigned long g_0051c480;
extern "C" unsigned long g_0051c4d2;
extern "C" unsigned long g_0051c504;
extern "C" unsigned long g_0051c508;
extern "C" unsigned long g_0051c518;
extern "C" unsigned long g_0051c51c;
extern "C" unsigned long g_0051c540;
extern "C" unsigned long g_0051c544;
extern "C" unsigned long g_0051c5f8;
extern "C" unsigned long g_0051c5fc;
extern "C" unsigned long g_0051c714;
extern "C" unsigned long g_0051c7f8;
extern "C" unsigned long g_0051c8e6;
extern "C" unsigned long g_0051c910;
extern "C" unsigned long g_0051c9d4;
extern "C" unsigned long g_0051ca0c;
extern "C" unsigned long g_0051cade;
extern "C" unsigned long g_0051caf8;
extern "C" unsigned long g_0051cafc;
extern "C" unsigned long g_0051cb00;
extern "C" unsigned long g_0051cb04;
extern "C" unsigned long g_0051cb08;
extern "C" unsigned long g_0051cb0c;
extern "C" unsigned long g_0051cb10;
extern "C" unsigned long g_0051cb14;
extern "C" unsigned long g_0051cb18;
extern "C" unsigned long g_0051cb1c;
extern "C" unsigned long g_0051cb20;
extern "C" unsigned long g_0051cb24;
extern "C" unsigned long g_0051cb28;
extern "C" unsigned long g_0051cb2c;
extern "C" unsigned long g_0051cb30;
extern "C" unsigned long g_0051cb34;
extern "C" unsigned long g_0051cb38;
extern "C" unsigned long g_0051cb3c;
extern "C" unsigned long g_0051cb5e;
extern "C" unsigned long g_0051cc12;
extern "C" unsigned long g_0051ccc0;
extern "C" unsigned long g_0051ccea;
extern "C" unsigned long g_0051cdae;
extern "C" unsigned long g_0051cddc;
extern "C" unsigned long g_0051ceae;
extern "C" unsigned long g_0051ced8;
extern "C" unsigned long g_0051cf38;
extern "C" unsigned long g_0051cf3c;
extern "C" unsigned long g_0051cf40;
extern "C" unsigned long g_0051cf44;
extern "C" unsigned long g_0051cf48;
extern "C" unsigned long g_0051cf4c;
extern "C" unsigned long g_0051cf50;
extern "C" unsigned long g_0051cf54;
extern "C" unsigned long g_0051cf58;
extern "C" unsigned long g_0051cf5c;
extern "C" unsigned long g_0051cf60;
extern "C" unsigned long g_0051cf64;
extern "C" unsigned long g_0051cf68;
extern "C" unsigned long g_0051cf6c;
extern "C" unsigned long g_0051cf70;
extern "C" unsigned long g_0051cf74;
extern "C" unsigned long g_0051cf78;
extern "C" unsigned long g_0051cf7c;
extern "C" unsigned long g_0051cf80;
extern "C" unsigned long g_0051d084;
extern "C" unsigned long g_0051d134;
extern "C" unsigned long g_0051d138;
extern "C" unsigned long g_0051d13c;
extern "C" unsigned long g_0051d140;
extern "C" unsigned long g_0051d144;
extern "C" unsigned long g_0051d148;
extern "C" unsigned long g_0051d14c;
BLChestTenTimeView::~BLChestTenTimeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0051c480 + g_0051c504);
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
  func_0079e45c(&uStack_14,&g_0051c4d2 + g_0051c508,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLChestTenTimeView::create()
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

undefined4 BLChestTenTimeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLChestTenTimeView::getBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLChestTenTimeView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLChestTenTimeView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLChestTenTimeView::getBtnBuyAgain()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLChestTenTimeView::getLabCopper()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLChestTenTimeView::getSprCopperIcon()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLChestTenTimeView::getLabAgainTitle()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLChestTenTimeView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLChestTenTimeView::getLabSure()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLChestTenTimeView::getGridViewItemList()
{
  return *(undefined4 *)(((int)this) + 0x134);
}

void BLChestTenTimeView::onEnter()
{
  ((BLChestTenTimePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLChestTenTimeView::onExit()
{
  ((BLChestTenTimePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLChestTenTimeView::BLChestTenTimeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0051c5f8 + 0x51c588));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLChestTenTimeView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLChestTenTimeView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
