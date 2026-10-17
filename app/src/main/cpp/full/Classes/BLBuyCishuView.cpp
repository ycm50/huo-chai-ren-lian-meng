#include "BLBuyCishuView.h"
#include "BLBuyCishuPresenter.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00629558;
extern "C" unsigned long UNK_0062959c;
extern "C" unsigned long UNK_006295e0;
extern "C" unsigned long UNK_00629608;
extern "C" unsigned long UNK_006297ac;
extern "C" unsigned long UNK_006298a0;
extern "C" unsigned long UNK_006298a2;
extern "C" unsigned long UNK_00629972;
extern "C" unsigned long UNK_00629a0e;
extern "C" unsigned long UNK_00629b0e;
extern "C" unsigned long UNK_00629b12;
extern "C" unsigned long UNK_00629c24;
extern "C" unsigned long UNK_00629d16;
extern "C" unsigned long UNK_00629e4a;
extern "C" unsigned long UNK_00629e4c;
extern "C" unsigned long UNK_00629fb2;
extern "C" unsigned long UNK_0062a000;
extern "C" unsigned long UNK_0062a13a;
extern "C" unsigned long UNK_0062a13c;
extern "C" unsigned long _DAT_006296a8;
extern "C" unsigned long _DAT_006296ac;
extern "C" unsigned long _UNK_006295cc;
extern "C" unsigned long _UNK_006295d0;
extern "C" unsigned long _UNK_006295e4;
extern "C" unsigned long _UNK_0062960c;
extern "C" unsigned long _UNK_00629b8c;
extern "C" unsigned long _UNK_00629b90;
extern "C" unsigned long _UNK_00629b94;
extern "C" unsigned long _UNK_00629b98;
extern "C" unsigned long _UNK_00629b9c;
extern "C" unsigned long _UNK_00629ba0;
extern "C" unsigned long _UNK_00629ba4;
extern "C" unsigned long _UNK_00629ba8;
extern "C" unsigned long _UNK_00629bac;
extern "C" unsigned long _UNK_00629bb0;
extern "C" unsigned long _UNK_00629bb4;
extern "C" unsigned long _UNK_00629bb8;
extern "C" unsigned long _UNK_00629bbc;
extern "C" unsigned long _UNK_00629bc0;
extern "C" unsigned long _UNK_00629bc4;
extern "C" unsigned long _UNK_00629fbc;
extern "C" unsigned long _UNK_00629fc0;
extern "C" unsigned long _UNK_00629fc4;
extern "C" unsigned long _UNK_00629fc8;
extern "C" unsigned long _UNK_00629fcc;
extern "C" unsigned long _UNK_00629fd0;
extern "C" unsigned long _UNK_00629fd4;
extern "C" unsigned long _UNK_00629fd8;
extern "C" unsigned long _UNK_0062a24c;
extern "C" unsigned long _UNK_0062a250;
extern "C" unsigned long _UNK_0062a254;
extern "C" unsigned long _UNK_0062a258;
extern "C" unsigned long _UNK_0062a25c;
extern "C" unsigned long _UNK_0062a260;
extern "C" unsigned long g_00629558;
extern "C" unsigned long g_0062959c;
extern "C" unsigned long g_006295cc;
extern "C" unsigned long g_006295d0;
extern "C" unsigned long g_006295e0;
extern "C" unsigned long g_006295e4;
extern "C" unsigned long g_00629608;
extern "C" unsigned long g_0062960c;
extern "C" unsigned long g_006296a8;
extern "C" unsigned long g_006296ac;
extern "C" unsigned long g_006297ac;
extern "C" unsigned long g_006298a0;
extern "C" unsigned long g_006298a2;
extern "C" unsigned long g_00629972;
extern "C" unsigned long g_00629a0e;
extern "C" unsigned long g_00629b0e;
extern "C" unsigned long g_00629b12;
extern "C" unsigned long g_00629b8c;
extern "C" unsigned long g_00629b90;
extern "C" unsigned long g_00629b94;
extern "C" unsigned long g_00629b98;
extern "C" unsigned long g_00629b9c;
extern "C" unsigned long g_00629ba0;
extern "C" unsigned long g_00629ba4;
extern "C" unsigned long g_00629ba8;
extern "C" unsigned long g_00629bac;
extern "C" unsigned long g_00629bb0;
extern "C" unsigned long g_00629bb4;
extern "C" unsigned long g_00629bb8;
extern "C" unsigned long g_00629bbc;
extern "C" unsigned long g_00629bc0;
extern "C" unsigned long g_00629bc4;
extern "C" unsigned long g_00629c24;
extern "C" unsigned long g_00629d16;
extern "C" unsigned long g_00629e4a;
extern "C" unsigned long g_00629e4c;
extern "C" unsigned long g_00629fb2;
extern "C" unsigned long g_00629fbc;
extern "C" unsigned long g_00629fc0;
extern "C" unsigned long g_00629fc4;
extern "C" unsigned long g_00629fc8;
extern "C" unsigned long g_00629fcc;
extern "C" unsigned long g_00629fd0;
extern "C" unsigned long g_00629fd4;
extern "C" unsigned long g_00629fd8;
extern "C" unsigned long g_0062a000;
extern "C" unsigned long g_0062a13a;
extern "C" unsigned long g_0062a13c;
extern "C" unsigned long g_0062a24c;
extern "C" unsigned long g_0062a250;
extern "C" unsigned long g_0062a254;
extern "C" unsigned long g_0062a258;
extern "C" unsigned long g_0062a25c;
extern "C" unsigned long g_0062a260;
BLBuyCishuView::~BLBuyCishuView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00629558 + g_006295cc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x4a)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x4a)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0062959c + g_006295d0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLBuyCishuView::BLBuyCishuView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006296a8 + 0x629650);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainPauseView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLBuyCishuView::create()
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

undefined4 BLBuyCishuView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x128);
}

undefined4 BLBuyCishuView::getBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x130);
}

undefined4 BLBuyCishuView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 300);
}

undefined4 BLBuyCishuView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLBuyCishuView::getLab_1()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLBuyCishuView::getLab_2()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLBuyCishuView::getLab_3()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLBuyCishuView::getLabBtnOK()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLBuyCishuView::getSPBackGround()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

undefined4 BLBuyCishuView::getSPTabBg()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLBuyCishuView::getSPZuanshi()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}


void BLBuyCishuView::onEnter()
{
  ((BLBuyCishuPresenter *)*(undefined4 *)(((int)this) + 0x128))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLBuyCishuView::onExit()
{
  ((BLBuyCishuPresenter *)*(undefined4 *)(((int)this) + 0x128))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLBuyCishuView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
