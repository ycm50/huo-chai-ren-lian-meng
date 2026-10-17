#include "BLBuyHeroView.h"
#include "BLBuyHeroPresenter.h"
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
extern "C" unsigned long UNK_0054dc3c;
extern "C" unsigned long UNK_0054dc8e;
extern "C" unsigned long UNK_0054dcd4;
extern "C" unsigned long UNK_0054dcfc;
extern "C" unsigned long UNK_0054deba;
extern "C" unsigned long UNK_0054df9c;
extern "C" unsigned long UNK_0054e096;
extern "C" unsigned long UNK_0054e0c4;
extern "C" unsigned long UNK_0054e1a4;
extern "C" unsigned long UNK_0054e1cc;
extern "C" unsigned long UNK_0054e29c;
extern "C" unsigned long UNK_0054e308;
extern "C" unsigned long UNK_0054e3be;
extern "C" unsigned long UNK_0054e468;
extern "C" unsigned long UNK_0054e494;
extern "C" unsigned long UNK_0054e548;
extern "C" unsigned long UNK_0054e5e4;
extern "C" unsigned long UNK_0054e67e;
extern "C" unsigned long UNK_0054e75e;
extern "C" unsigned long UNK_0054e7f8;
extern "C" unsigned long UNK_0054e892;
extern "C" unsigned long UNK_0054e92c;
extern "C" unsigned long UNK_0054e9c6;
extern "C" unsigned long UNK_0054ea68;
extern "C" unsigned long UNK_0054ea96;
extern "C" unsigned long UNK_0054eb84;
extern "C" unsigned long UNK_0054ebb0;
extern "C" unsigned long UNK_0054ec68;
extern "C" unsigned long UNK_0054ec94;
extern "C" unsigned long UNK_0054ed4c;
extern "C" unsigned long UNK_0054ed78;
extern "C" unsigned long _DAT_0054ddb4;
extern "C" unsigned long _DAT_0054ddb8;
extern "C" unsigned long _UNK_0054dcc0;
extern "C" unsigned long _UNK_0054dcc4;
extern "C" unsigned long _UNK_0054dcd8;
extern "C" unsigned long _UNK_0054dd00;
extern "C" unsigned long _UNK_0054e29c;
extern "C" unsigned long _UNK_0054e2a0;
extern "C" unsigned long _UNK_0054e2a4;
extern "C" unsigned long _UNK_0054e2a8;
extern "C" unsigned long _UNK_0054e2ac;
extern "C" unsigned long _UNK_0054e2b0;
extern "C" unsigned long _UNK_0054e2b4;
extern "C" unsigned long _UNK_0054e2b8;
extern "C" unsigned long _UNK_0054e2bc;
extern "C" unsigned long _UNK_0054e2c0;
extern "C" unsigned long _UNK_0054e2c4;
extern "C" unsigned long _UNK_0054e2c8;
extern "C" unsigned long _UNK_0054e2cc;
extern "C" unsigned long _UNK_0054e2d0;
extern "C" unsigned long _UNK_0054e2d4;
extern "C" unsigned long _UNK_0054e2d8;
extern "C" unsigned long _UNK_0054e6e4;
extern "C" unsigned long _UNK_0054e6e8;
extern "C" unsigned long _UNK_0054e6ec;
extern "C" unsigned long _UNK_0054e6f0;
extern "C" unsigned long _UNK_0054e6f4;
extern "C" unsigned long _UNK_0054e6f8;
extern "C" unsigned long _UNK_0054e6fc;
extern "C" unsigned long _UNK_0054e700;
extern "C" unsigned long _UNK_0054e704;
extern "C" unsigned long _UNK_0054e708;
extern "C" unsigned long _UNK_0054e70c;
extern "C" unsigned long _UNK_0054e710;
extern "C" unsigned long _UNK_0054e714;
extern "C" unsigned long _UNK_0054e718;
extern "C" unsigned long _UNK_0054e71c;
extern "C" unsigned long _UNK_0054e720;
extern "C" unsigned long _UNK_0054e724;
extern "C" unsigned long _UNK_0054eb40;
extern "C" unsigned long _UNK_0054eb44;
extern "C" unsigned long _UNK_0054eb48;
extern "C" unsigned long _UNK_0054eb4c;
extern "C" unsigned long _UNK_0054eb50;
extern "C" unsigned long _UNK_0054eb54;
extern "C" unsigned long _UNK_0054eb58;
extern "C" unsigned long _UNK_0054eb5c;
extern "C" unsigned long _UNK_0054eb60;
extern "C" unsigned long _UNK_0054eb64;
extern "C" unsigned long _UNK_0054eb68;
extern "C" unsigned long _UNK_0054eb6c;
extern "C" unsigned long _UNK_0054eed8;
extern "C" unsigned long _UNK_0054eedc;
extern "C" unsigned long _UNK_0054eee0;
extern "C" unsigned long _UNK_0054eee4;
extern "C" unsigned long _UNK_0054eee8;
extern "C" unsigned long _UNK_0054eeec;
extern "C" unsigned long _UNK_0054eef0;
extern "C" unsigned long _UNK_0054eef4;
extern "C" unsigned long _UNK_0054eef8;
extern "C" unsigned long _UNK_0054eefc;
extern "C" unsigned long _UNK_0054ef00;
extern "C" unsigned long _UNK_0054ef04;
extern "C" unsigned long g_0054dc3c;
extern "C" unsigned long g_0054dc8e;
extern "C" unsigned long g_0054dcc0;
extern "C" unsigned long g_0054dcc4;
extern "C" unsigned long g_0054dcd4;
extern "C" unsigned long g_0054dcd8;
extern "C" unsigned long g_0054dcfc;
extern "C" unsigned long g_0054dd00;
extern "C" unsigned long g_0054ddb4;
extern "C" unsigned long g_0054ddb8;
extern "C" unsigned long g_0054deba;
extern "C" unsigned long g_0054df9c;
extern "C" unsigned long g_0054e096;
extern "C" unsigned long g_0054e0c4;
extern "C" unsigned long g_0054e1a4;
extern "C" unsigned long g_0054e1cc;
extern "C" unsigned long g_0054e29c;
extern "C" unsigned long g_0054e2a0;
extern "C" unsigned long g_0054e2a4;
extern "C" unsigned long g_0054e2a8;
extern "C" unsigned long g_0054e2ac;
extern "C" unsigned long g_0054e2b0;
extern "C" unsigned long g_0054e2b4;
extern "C" unsigned long g_0054e2b8;
extern "C" unsigned long g_0054e2bc;
extern "C" unsigned long g_0054e2c0;
extern "C" unsigned long g_0054e2c4;
extern "C" unsigned long g_0054e2c8;
extern "C" unsigned long g_0054e2cc;
extern "C" unsigned long g_0054e2d0;
extern "C" unsigned long g_0054e2d4;
extern "C" unsigned long g_0054e2d8;
extern "C" unsigned long g_0054e308;
extern "C" unsigned long g_0054e3be;
extern "C" unsigned long g_0054e468;
extern "C" unsigned long g_0054e494;
extern "C" unsigned long g_0054e548;
extern "C" unsigned long g_0054e5e4;
extern "C" unsigned long g_0054e67e;
extern "C" unsigned long g_0054e6e4;
extern "C" unsigned long g_0054e6e8;
extern "C" unsigned long g_0054e6ec;
extern "C" unsigned long g_0054e6f0;
extern "C" unsigned long g_0054e6f4;
extern "C" unsigned long g_0054e6f8;
extern "C" unsigned long g_0054e6fc;
extern "C" unsigned long g_0054e700;
extern "C" unsigned long g_0054e704;
extern "C" unsigned long g_0054e708;
extern "C" unsigned long g_0054e70c;
extern "C" unsigned long g_0054e710;
extern "C" unsigned long g_0054e714;
extern "C" unsigned long g_0054e718;
extern "C" unsigned long g_0054e71c;
extern "C" unsigned long g_0054e720;
extern "C" unsigned long g_0054e724;
extern "C" unsigned long g_0054e75e;
extern "C" unsigned long g_0054e7f8;
extern "C" unsigned long g_0054e892;
extern "C" unsigned long g_0054e92c;
extern "C" unsigned long g_0054e9c6;
extern "C" unsigned long g_0054ea68;
extern "C" unsigned long g_0054ea96;
extern "C" unsigned long g_0054eb40;
extern "C" unsigned long g_0054eb44;
extern "C" unsigned long g_0054eb48;
extern "C" unsigned long g_0054eb4c;
extern "C" unsigned long g_0054eb50;
extern "C" unsigned long g_0054eb54;
extern "C" unsigned long g_0054eb58;
extern "C" unsigned long g_0054eb5c;
extern "C" unsigned long g_0054eb60;
extern "C" unsigned long g_0054eb64;
extern "C" unsigned long g_0054eb68;
extern "C" unsigned long g_0054eb6c;
extern "C" unsigned long g_0054eb84;
extern "C" unsigned long g_0054ebb0;
extern "C" unsigned long g_0054ec68;
extern "C" unsigned long g_0054ec94;
extern "C" unsigned long g_0054ed4c;
extern "C" unsigned long g_0054ed78;
extern "C" unsigned long g_0054eed8;
extern "C" unsigned long g_0054eedc;
extern "C" unsigned long g_0054eee0;
extern "C" unsigned long g_0054eee4;
extern "C" unsigned long g_0054eee8;
extern "C" unsigned long g_0054eeec;
extern "C" unsigned long g_0054eef0;
extern "C" unsigned long g_0054eef4;
extern "C" unsigned long g_0054eef8;
extern "C" unsigned long g_0054eefc;
extern "C" unsigned long g_0054ef00;
extern "C" unsigned long g_0054ef04;
BLBuyHeroView::~BLBuyHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0054dc3c + g_0054dcc0);
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
  func_0079e45c(&uStack_14,&g_0054dc8e + g_0054dcc4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLBuyHeroView::create()
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

undefined4 BLBuyHeroView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLBuyHeroView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLBuyHeroView::getTabBg()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLBuyHeroView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLBuyHeroView::getBtnGet()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLBuyHeroView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLBuyHeroView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLBuyHeroView::onEnter()
{
  ((BLBuyHeroPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLBuyHeroView::onExit()
{
  ((BLBuyHeroPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
BLBuyHeroView::BLBuyHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0054ddb4 + 0x54dd44));
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
  func_0079e45c(&uStack_14,((intptr_t)"BLBuyHeroView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLBuyHeroView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
