#include "BLTreasureItemListView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLTreasureItemListPresenter.h"
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
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006ad9d0;
extern "C" unsigned long UNK_006ada14;
extern "C" unsigned long UNK_006ada58;
extern "C" unsigned long UNK_006ada80;
extern "C" unsigned long UNK_006adc58;
extern "C" unsigned long UNK_006add32;
extern "C" unsigned long UNK_006adda4;
extern "C" unsigned long UNK_006addd0;
extern "C" unsigned long UNK_006ade7c;
extern "C" unsigned long UNK_006adf42;
extern "C" unsigned long UNK_006adf76;
extern "C" unsigned long UNK_006ae086;
extern "C" unsigned long UNK_006ae110;
extern "C" unsigned long UNK_006ae13c;
extern "C" unsigned long UNK_006ae1f0;
extern "C" unsigned long UNK_006ae21a;
extern "C" unsigned long UNK_006ae346;
extern "C" unsigned long UNK_006ae3b0;
extern "C" unsigned long UNK_006ae448;
extern "C" unsigned long UNK_006ae4c0;
extern "C" unsigned long UNK_006ae570;
extern "C" unsigned long UNK_006ae57c;
extern "C" unsigned long UNK_006ae614;
extern "C" unsigned long UNK_006ae63e;
extern "C" unsigned long UNK_006ae6ee;
extern "C" unsigned long UNK_006ae6fa;
extern "C" unsigned long UNK_006ae792;
extern "C" unsigned long UNK_006ae7bc;
extern "C" unsigned long UNK_006ae86c;
extern "C" unsigned long UNK_006ae878;
extern "C" unsigned long UNK_006ae95e;
extern "C" unsigned long UNK_006ae988;
extern "C" unsigned long UNK_006aea3a;
extern "C" unsigned long UNK_006aea46;
extern "C" unsigned long UNK_006aeae4;
extern "C" unsigned long UNK_006aeb0e;
extern "C" unsigned long UNK_006aebc2;
extern "C" unsigned long _DAT_006adb20;
extern "C" unsigned long _DAT_006adb24;
extern "C" unsigned long _UNK_006ada44;
extern "C" unsigned long _UNK_006ada48;
extern "C" unsigned long _UNK_006ada5c;
extern "C" unsigned long _UNK_006ada84;
extern "C" unsigned long _UNK_006ae008;
extern "C" unsigned long _UNK_006ae00c;
extern "C" unsigned long _UNK_006ae010;
extern "C" unsigned long _UNK_006ae014;
extern "C" unsigned long _UNK_006ae018;
extern "C" unsigned long _UNK_006ae01c;
extern "C" unsigned long _UNK_006ae020;
extern "C" unsigned long _UNK_006ae024;
extern "C" unsigned long _UNK_006ae028;
extern "C" unsigned long _UNK_006ae02c;
extern "C" unsigned long _UNK_006ae030;
extern "C" unsigned long _UNK_006ae034;
extern "C" unsigned long _UNK_006ae038;
extern "C" unsigned long _UNK_006ae03c;
extern "C" unsigned long _UNK_006ae040;
extern "C" unsigned long _UNK_006ae044;
extern "C" unsigned long _UNK_006ae048;
extern "C" unsigned long _UNK_006ae04c;
extern "C" unsigned long _UNK_006ae050;
extern "C" unsigned long _UNK_006ae464;
extern "C" unsigned long _UNK_006ae468;
extern "C" unsigned long _UNK_006ae46c;
extern "C" unsigned long _UNK_006ae470;
extern "C" unsigned long _UNK_006ae474;
extern "C" unsigned long _UNK_006ae478;
extern "C" unsigned long _UNK_006ae47c;
extern "C" unsigned long _UNK_006ae480;
extern "C" unsigned long _UNK_006ae484;
extern "C" unsigned long _UNK_006ae488;
extern "C" unsigned long _UNK_006ae48c;
extern "C" unsigned long _UNK_006ae490;
extern "C" unsigned long _UNK_006ae494;
extern "C" unsigned long _UNK_006ae498;
extern "C" unsigned long _UNK_006ae49c;
extern "C" unsigned long _UNK_006ae4a0;
extern "C" unsigned long _UNK_006ae4a4;
extern "C" unsigned long _UNK_006ae4a8;
extern "C" unsigned long _UNK_006ae4ac;
extern "C" unsigned long _UNK_006ae890;
extern "C" unsigned long _UNK_006ae894;
extern "C" unsigned long _UNK_006ae898;
extern "C" unsigned long _UNK_006ae89c;
extern "C" unsigned long _UNK_006ae8a0;
extern "C" unsigned long _UNK_006ae8a4;
extern "C" unsigned long _UNK_006ae8a8;
extern "C" unsigned long _UNK_006ae8ac;
extern "C" unsigned long _UNK_006ae8b0;
extern "C" unsigned long _UNK_006ae8b4;
extern "C" unsigned long _UNK_006ae8b8;
extern "C" unsigned long _UNK_006ae8bc;
extern "C" unsigned long _UNK_006ae8c0;
extern "C" unsigned long _UNK_006ae8c4;
extern "C" unsigned long _UNK_006ae8c8;
extern "C" unsigned long _UNK_006ae8cc;
extern "C" unsigned long _UNK_006ae8d0;
extern "C" unsigned long _UNK_006ae8d4;
extern "C" unsigned long _UNK_006ae8d8;
extern "C" unsigned long _UNK_006aec84;
extern "C" unsigned long _UNK_006aec88;
extern "C" unsigned long _UNK_006aec8c;
extern "C" unsigned long _UNK_006aec90;
extern "C" unsigned long _UNK_006aec94;
extern "C" unsigned long _UNK_006aec98;
extern "C" unsigned long _UNK_006aec9c;
extern "C" unsigned long _UNK_006aeca0;
extern "C" unsigned long _UNK_006aeca4;
extern "C" unsigned long _UNK_006aeca8;
extern "C" unsigned long _UNK_006aecac;
extern "C" unsigned long _UNK_006aecb0;
extern "C" unsigned long _UNK_006aecb4;
extern "C" unsigned long _UNK_006aecb8;
extern "C" unsigned long _UNK_006aecbc;
extern "C" unsigned long _UNK_006aecc0;
extern "C" unsigned long _UNK_006aecc4;
extern "C" unsigned long g_006ad9d0;
extern "C" unsigned long g_006ada14;
extern "C" unsigned long g_006ada44;
extern "C" unsigned long g_006ada48;
extern "C" unsigned long g_006ada58;
extern "C" unsigned long g_006ada5c;
extern "C" unsigned long g_006ada80;
extern "C" unsigned long g_006ada84;
extern "C" unsigned long g_006adb20;
extern "C" unsigned long g_006adb24;
extern "C" unsigned long g_006adc58;
extern "C" unsigned long g_006add32;
extern "C" unsigned long g_006adda4;
extern "C" unsigned long g_006addd0;
extern "C" unsigned long g_006ade7c;
extern "C" unsigned long g_006adf42;
extern "C" unsigned long g_006adf76;
extern "C" unsigned long g_006ae008;
extern "C" unsigned long g_006ae00c;
extern "C" unsigned long g_006ae010;
extern "C" unsigned long g_006ae014;
extern "C" unsigned long g_006ae018;
extern "C" unsigned long g_006ae01c;
extern "C" unsigned long g_006ae020;
extern "C" unsigned long g_006ae024;
extern "C" unsigned long g_006ae028;
extern "C" unsigned long g_006ae02c;
extern "C" unsigned long g_006ae030;
extern "C" unsigned long g_006ae034;
extern "C" unsigned long g_006ae038;
extern "C" unsigned long g_006ae03c;
extern "C" unsigned long g_006ae040;
extern "C" unsigned long g_006ae044;
extern "C" unsigned long g_006ae048;
extern "C" unsigned long g_006ae04c;
extern "C" unsigned long g_006ae050;
extern "C" unsigned long g_006ae086;
extern "C" unsigned long g_006ae110;
extern "C" unsigned long g_006ae13c;
extern "C" unsigned long g_006ae1f0;
extern "C" unsigned long g_006ae21a;
extern "C" unsigned long g_006ae346;
extern "C" unsigned long g_006ae3b0;
extern "C" unsigned long g_006ae448;
extern "C" unsigned long g_006ae464;
extern "C" unsigned long g_006ae468;
extern "C" unsigned long g_006ae46c;
extern "C" unsigned long g_006ae470;
extern "C" unsigned long g_006ae474;
extern "C" unsigned long g_006ae478;
extern "C" unsigned long g_006ae47c;
extern "C" unsigned long g_006ae480;
extern "C" unsigned long g_006ae484;
extern "C" unsigned long g_006ae488;
extern "C" unsigned long g_006ae48c;
extern "C" unsigned long g_006ae490;
extern "C" unsigned long g_006ae494;
extern "C" unsigned long g_006ae498;
extern "C" unsigned long g_006ae49c;
extern "C" unsigned long g_006ae4a0;
extern "C" unsigned long g_006ae4a4;
extern "C" unsigned long g_006ae4a8;
extern "C" unsigned long g_006ae4ac;
extern "C" unsigned long g_006ae4c0;
extern "C" unsigned long g_006ae570;
extern "C" unsigned long g_006ae57c;
extern "C" unsigned long g_006ae614;
extern "C" unsigned long g_006ae63e;
extern "C" unsigned long g_006ae6ee;
extern "C" unsigned long g_006ae6fa;
extern "C" unsigned long g_006ae792;
extern "C" unsigned long g_006ae7bc;
extern "C" unsigned long g_006ae86c;
extern "C" unsigned long g_006ae878;
extern "C" unsigned long g_006ae890;
extern "C" unsigned long g_006ae894;
extern "C" unsigned long g_006ae898;
extern "C" unsigned long g_006ae89c;
extern "C" unsigned long g_006ae8a0;
extern "C" unsigned long g_006ae8a4;
extern "C" unsigned long g_006ae8a8;
extern "C" unsigned long g_006ae8ac;
extern "C" unsigned long g_006ae8b0;
extern "C" unsigned long g_006ae8b4;
extern "C" unsigned long g_006ae8b8;
extern "C" unsigned long g_006ae8bc;
extern "C" unsigned long g_006ae8c0;
extern "C" unsigned long g_006ae8c4;
extern "C" unsigned long g_006ae8c8;
extern "C" unsigned long g_006ae8cc;
extern "C" unsigned long g_006ae8d0;
extern "C" unsigned long g_006ae8d4;
extern "C" unsigned long g_006ae8d8;
extern "C" unsigned long g_006ae95e;
extern "C" unsigned long g_006ae988;
extern "C" unsigned long g_006aea3a;
extern "C" unsigned long g_006aea46;
extern "C" unsigned long g_006aeae4;
extern "C" unsigned long g_006aeb0e;
extern "C" unsigned long g_006aebc2;
extern "C" unsigned long g_006aec84;
extern "C" unsigned long g_006aec88;
extern "C" unsigned long g_006aec8c;
extern "C" unsigned long g_006aec90;
extern "C" unsigned long g_006aec94;
extern "C" unsigned long g_006aec98;
extern "C" unsigned long g_006aec9c;
extern "C" unsigned long g_006aeca0;
extern "C" unsigned long g_006aeca4;
extern "C" unsigned long g_006aeca8;
extern "C" unsigned long g_006aecac;
extern "C" unsigned long g_006aecb0;
extern "C" unsigned long g_006aecb4;
extern "C" unsigned long g_006aecb8;
extern "C" unsigned long g_006aecbc;
extern "C" unsigned long g_006aecc0;
extern "C" unsigned long g_006aecc4;
BLTreasureItemListView::~BLTreasureItemListView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006ad9d0 + g_006ada44);
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
  func_0079e45c(&uStack_14,&g_006ada14 + g_006ada48,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreasureItemListView::BLTreasureItemListView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006adb20 + 0x6adac8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLTreasureItemListView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLTreasureItemListView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x130)));
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

undefined4 BLTreasureItemListView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLTreasureItemListView::onEnter()
{
  ((BLTreasureItemListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLTreasureItemListView::onExit()
{
  ((BLTreasureItemListPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLTreasureItemListView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
