#include "BLRedPackItemView.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00648714;
extern "C" unsigned long UNK_00648746;
extern "C" unsigned long UNK_0064878c;
extern "C" unsigned long UNK_006487b4;
extern "C" unsigned long UNK_006487cc;
extern "C" unsigned long UNK_006487fa;
extern "C" unsigned long UNK_006488a0;
extern "C" unsigned long UNK_006488a4;
extern "C" unsigned long UNK_00648922;
extern "C" unsigned long UNK_0064899a;
extern "C" unsigned long UNK_00648a16;
extern "C" unsigned long _UNK_00648778;
extern "C" unsigned long _UNK_0064877c;
extern "C" unsigned long _UNK_00648790;
extern "C" unsigned long _UNK_006487b8;
extern "C" unsigned long _UNK_00648824;
extern "C" unsigned long _UNK_00648828;
extern "C" unsigned long _UNK_00648a90;
extern "C" unsigned long _UNK_00648a94;
extern "C" unsigned long _UNK_00648a98;
extern "C" unsigned long _UNK_00648a9c;
extern "C" unsigned long _UNK_00648aa0;
extern "C" unsigned long _UNK_00648aa4;
extern "C" unsigned long _UNK_00648aa8;
extern "C" unsigned long _UNK_00648aac;
extern "C" unsigned long _UNK_00648ab0;
extern "C" unsigned long _UNK_00648ab4;
extern "C" unsigned long _UNK_00648ab8;
extern "C" unsigned long _UNK_00648abc;
extern "C" unsigned long _UNK_00648ac0;
extern "C" unsigned long g_00648714;
extern "C" unsigned long g_00648746;
extern "C" unsigned long g_00648778;
extern "C" unsigned long g_0064877c;
extern "C" unsigned long g_0064878c;
extern "C" unsigned long g_00648790;
extern "C" unsigned long g_006487b4;
extern "C" unsigned long g_006487b8;
extern "C" unsigned long g_006487cc;
extern "C" unsigned long g_006487fa;
extern "C" unsigned long g_00648824;
extern "C" unsigned long g_00648828;
extern "C" unsigned long g_006488a0;
extern "C" unsigned long g_006488a4;
extern "C" unsigned long g_00648922;
extern "C" unsigned long g_0064899a;
extern "C" unsigned long g_00648a16;
extern "C" unsigned long g_00648a90;
extern "C" unsigned long g_00648a94;
extern "C" unsigned long g_00648a98;
extern "C" unsigned long g_00648a9c;
extern "C" unsigned long g_00648aa0;
extern "C" unsigned long g_00648aa4;
extern "C" unsigned long g_00648aa8;
extern "C" unsigned long g_00648aac;
extern "C" unsigned long g_00648ab0;
extern "C" unsigned long g_00648ab4;
extern "C" unsigned long g_00648ab8;
extern "C" unsigned long g_00648abc;
extern "C" unsigned long g_00648ac0;
BLRedPackItemView::~BLRedPackItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00648714 + g_00648778);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00648746 + g_0064877c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRedPackItemView::BLRedPackItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_006487cc + g_00648824);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006487fa + g_00648828,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLRedPackItemView::onEnter()
{
  ((cocos2d::CCLayer *)this)->onEnter();
  return;
}

void BLRedPackItemView::onExit()
{
  ((cocos2d::CCLayer *)this)->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLRedPackItemView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
