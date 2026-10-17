#include "BLMonthlyContractItemsView.h"
#include "BLEquipGiftItemPresenter.h"
#include "BLEquipGiftItemView.h"
#include "BLLeakUtils.h"
#include "BLMonthlyContractItemsPresenter.h"
#include "ItemData.h"
#include "MonthlyContractData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00552648;
extern "C" unsigned long UNK_0055268c;
extern "C" unsigned long UNK_005526d0;
extern "C" unsigned long UNK_005526f8;
extern "C" unsigned long UNK_0055285c;
extern "C" unsigned long UNK_00552ae0;
extern "C" unsigned long UNK_00552b46;
extern "C" unsigned long UNK_00552b48;
extern "C" unsigned long UNK_00552b6e;
extern "C" unsigned long UNK_00552ba4;
extern "C" unsigned long UNK_00552bd6;
extern "C" unsigned long UNK_00552c28;
extern "C" unsigned long _DAT_005527a4;
extern "C" unsigned long _DAT_005527a8;
extern "C" unsigned long _UNK_005526bc;
extern "C" unsigned long _UNK_005526c0;
extern "C" unsigned long _UNK_005526d4;
extern "C" unsigned long _UNK_005526fc;
extern "C" unsigned long _UNK_00552a74;
extern "C" unsigned long _UNK_00552a78;
extern "C" unsigned long _UNK_00552a7c;
extern "C" unsigned long _UNK_00552a80;
extern "C" unsigned long _UNK_00552a84;
extern "C" unsigned long _UNK_00552cb4;
extern "C" unsigned long _UNK_00552cb8;
extern "C" unsigned long _UNK_00552cbc;
extern "C" unsigned long _UNK_00552cc0;
extern "C" unsigned long _UNK_00552cc4;
extern "C" unsigned long _UNK_00552cc8;
extern "C" unsigned long _UNK_00552ccc;
extern "C" unsigned long _UNK_00552cd0;
extern "C" unsigned long _UNK_00552cd4;
extern "C" unsigned long _UNK_00552cd8;
extern "C" unsigned long _UNK_00552cdc;
extern "C" unsigned long _UNK_00552ce0;
extern "C" unsigned long _UNK_00552ce4;
extern "C" unsigned long _UNK_00552ce8;
extern "C" unsigned long _UNK_00552cec;
extern "C" unsigned long g_00552648;
extern "C" unsigned long g_0055268c;
extern "C" unsigned long g_005526bc;
extern "C" unsigned long g_005526c0;
extern "C" unsigned long g_005526d0;
extern "C" unsigned long g_005526d4;
extern "C" unsigned long g_005526f8;
extern "C" unsigned long g_005526fc;
extern "C" unsigned long g_005527a4;
extern "C" unsigned long g_005527a8;
extern "C" unsigned long g_0055285c;
extern "C" unsigned long g_00552a74;
extern "C" unsigned long g_00552a78;
extern "C" unsigned long g_00552a7c;
extern "C" unsigned long g_00552a80;
extern "C" unsigned long g_00552a84;
extern "C" unsigned long g_00552ae0;
extern "C" unsigned long g_00552b46;
extern "C" unsigned long g_00552b48;
extern "C" unsigned long g_00552b6e;
extern "C" unsigned long g_00552ba4;
extern "C" unsigned long g_00552bd6;
extern "C" unsigned long g_00552c28;
extern "C" unsigned long g_00552cb4;
extern "C" unsigned long g_00552cb8;
extern "C" unsigned long g_00552cbc;
extern "C" unsigned long g_00552cc0;
extern "C" unsigned long g_00552cc4;
extern "C" unsigned long g_00552cc8;
extern "C" unsigned long g_00552ccc;
extern "C" unsigned long g_00552cd0;
extern "C" unsigned long g_00552cd4;
extern "C" unsigned long g_00552cd8;
extern "C" unsigned long g_00552cdc;
extern "C" unsigned long g_00552ce0;
extern "C" unsigned long g_00552ce4;
extern "C" unsigned long g_00552ce8;
extern "C" unsigned long g_00552cec;
BLMonthlyContractItemsView::~BLMonthlyContractItemsView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00552648 + g_005526bc);
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
  func_0079e45c(&uStack_14,&g_0055268c + g_005526c0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMonthlyContractItemsView::BLMonthlyContractItemsView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005527a4 + 0x552740);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x43)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMonthlyContractItemsView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMonthlyContractItemsView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x110)));
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

undefined4 BLMonthlyContractItemsView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}


void BLMonthlyContractItemsView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  ((BLMonthlyContractItemsPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  return;
}

void BLMonthlyContractItemsView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  ((BLMonthlyContractItemsPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLMonthlyContractItemsView::refresh()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLMonthlyContractItemsView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
