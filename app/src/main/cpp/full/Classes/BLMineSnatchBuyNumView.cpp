#include "BLMineSnatchBuyNumView.h"
#include "BLLeakUtils.h"
#include "BLMineSnatchBuyNumPresenter.h"
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
extern "C" unsigned long UNK_005b0400;
extern "C" unsigned long UNK_005b0444;
extern "C" unsigned long UNK_005b0488;
extern "C" unsigned long UNK_005b04b0;
extern "C" unsigned long UNK_005b0632;
extern "C" unsigned long UNK_005b0726;
extern "C" unsigned long UNK_005b0728;
extern "C" unsigned long UNK_005b07f8;
extern "C" unsigned long UNK_005b0894;
extern "C" unsigned long UNK_005b0994;
extern "C" unsigned long UNK_005b0998;
extern "C" unsigned long UNK_005b0ab0;
extern "C" unsigned long UNK_005b0ba2;
extern "C" unsigned long UNK_005b0cd6;
extern "C" unsigned long UNK_005b0cd8;
extern "C" unsigned long UNK_005b0e3e;
extern "C" unsigned long UNK_005b0e90;
extern "C" unsigned long UNK_005b0fca;
extern "C" unsigned long UNK_005b0fcc;
extern "C" unsigned long _DAT_005b0550;
extern "C" unsigned long _DAT_005b0554;
extern "C" unsigned long _UNK_005b0474;
extern "C" unsigned long _UNK_005b0478;
extern "C" unsigned long _UNK_005b048c;
extern "C" unsigned long _UNK_005b04b4;
extern "C" unsigned long _UNK_005b0a14;
extern "C" unsigned long _UNK_005b0a18;
extern "C" unsigned long _UNK_005b0a1c;
extern "C" unsigned long _UNK_005b0a20;
extern "C" unsigned long _UNK_005b0a24;
extern "C" unsigned long _UNK_005b0a28;
extern "C" unsigned long _UNK_005b0a2c;
extern "C" unsigned long _UNK_005b0a30;
extern "C" unsigned long _UNK_005b0a34;
extern "C" unsigned long _UNK_005b0a38;
extern "C" unsigned long _UNK_005b0a3c;
extern "C" unsigned long _UNK_005b0a40;
extern "C" unsigned long _UNK_005b0a44;
extern "C" unsigned long _UNK_005b0a48;
extern "C" unsigned long _UNK_005b0a4c;
extern "C" unsigned long _UNK_005b0a50;
extern "C" unsigned long _UNK_005b0e48;
extern "C" unsigned long _UNK_005b0e4c;
extern "C" unsigned long _UNK_005b0e50;
extern "C" unsigned long _UNK_005b0e54;
extern "C" unsigned long _UNK_005b0e58;
extern "C" unsigned long _UNK_005b0e5c;
extern "C" unsigned long _UNK_005b0e60;
extern "C" unsigned long _UNK_005b0e64;
extern "C" unsigned long _UNK_005b0e68;
extern "C" unsigned long _UNK_005b10dc;
extern "C" unsigned long _UNK_005b10e0;
extern "C" unsigned long _UNK_005b10e4;
extern "C" unsigned long _UNK_005b10e8;
extern "C" unsigned long _UNK_005b10ec;
extern "C" unsigned long _UNK_005b10f0;
extern "C" unsigned long g_005b0400;
extern "C" unsigned long g_005b0444;
extern "C" unsigned long g_005b0474;
extern "C" unsigned long g_005b0478;
extern "C" unsigned long g_005b0488;
extern "C" unsigned long g_005b048c;
extern "C" unsigned long g_005b04b0;
extern "C" unsigned long g_005b04b4;
extern "C" unsigned long g_005b0550;
extern "C" unsigned long g_005b0554;
extern "C" unsigned long g_005b0632;
extern "C" unsigned long g_005b0726;
extern "C" unsigned long g_005b0728;
extern "C" unsigned long g_005b07f8;
extern "C" unsigned long g_005b0894;
extern "C" unsigned long g_005b0994;
extern "C" unsigned long g_005b0998;
extern "C" unsigned long g_005b0a14;
extern "C" unsigned long g_005b0a18;
extern "C" unsigned long g_005b0a1c;
extern "C" unsigned long g_005b0a20;
extern "C" unsigned long g_005b0a24;
extern "C" unsigned long g_005b0a28;
extern "C" unsigned long g_005b0a2c;
extern "C" unsigned long g_005b0a30;
extern "C" unsigned long g_005b0a34;
extern "C" unsigned long g_005b0a38;
extern "C" unsigned long g_005b0a3c;
extern "C" unsigned long g_005b0a40;
extern "C" unsigned long g_005b0a44;
extern "C" unsigned long g_005b0a48;
extern "C" unsigned long g_005b0a4c;
extern "C" unsigned long g_005b0a50;
extern "C" unsigned long g_005b0ab0;
extern "C" unsigned long g_005b0ba2;
extern "C" unsigned long g_005b0cd6;
extern "C" unsigned long g_005b0cd8;
extern "C" unsigned long g_005b0e3e;
extern "C" unsigned long g_005b0e48;
extern "C" unsigned long g_005b0e4c;
extern "C" unsigned long g_005b0e50;
extern "C" unsigned long g_005b0e54;
extern "C" unsigned long g_005b0e58;
extern "C" unsigned long g_005b0e5c;
extern "C" unsigned long g_005b0e60;
extern "C" unsigned long g_005b0e64;
extern "C" unsigned long g_005b0e68;
extern "C" unsigned long g_005b0e90;
extern "C" unsigned long g_005b0fca;
extern "C" unsigned long g_005b0fcc;
extern "C" unsigned long g_005b10dc;
extern "C" unsigned long g_005b10e0;
extern "C" unsigned long g_005b10e4;
extern "C" unsigned long g_005b10e8;
extern "C" unsigned long g_005b10ec;
extern "C" unsigned long g_005b10f0;
BLMineSnatchBuyNumView::~BLMineSnatchBuyNumView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005b0400 + g_005b0474);
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
  func_0079e45c(&uStack_14,&g_005b0444 + g_005b0478,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMineSnatchBuyNumView::BLMineSnatchBuyNumView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005b0550 + 0x5b04f8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMineSnatchBuyNumView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMineSnatchBuyNumView::create()
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

undefined4 BLMineSnatchBuyNumView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLMineSnatchBuyNumView::onEnter()
{
  ((BLMineSnatchBuyNumPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMineSnatchBuyNumView::onExit()
{
  ((BLMineSnatchBuyNumPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLMineSnatchBuyNumView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
