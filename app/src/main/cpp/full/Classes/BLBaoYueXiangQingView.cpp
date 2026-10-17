#include "BLBaoYueXiangQingView.h"
#include "BLBaoYueXiangQingPresenter.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0054d490;
extern "C" unsigned long UNK_0054d4c2;
extern "C" unsigned long UNK_0054d508;
extern "C" unsigned long UNK_0054d530;
extern "C" unsigned long UNK_0054d6c4;
extern "C" unsigned long UNK_0054d7a0;
extern "C" unsigned long UNK_0054d890;
extern "C" unsigned long UNK_0054d8c0;
extern "C" unsigned long UNK_0054d994;
extern "C" unsigned long UNK_0054d998;
extern "C" unsigned long UNK_0054da34;
extern "C" unsigned long UNK_0054da44;
extern "C" unsigned long UNK_0054da7c;
extern "C" unsigned long _DAT_0054d5d0;
extern "C" unsigned long _DAT_0054d5d4;
extern "C" unsigned long _UNK_0054d4f4;
extern "C" unsigned long _UNK_0054d4f8;
extern "C" unsigned long _UNK_0054d50c;
extern "C" unsigned long _UNK_0054d534;
extern "C" unsigned long _UNK_0054daa4;
extern "C" unsigned long _UNK_0054daa8;
extern "C" unsigned long _UNK_0054daac;
extern "C" unsigned long _UNK_0054dab0;
extern "C" unsigned long _UNK_0054dab4;
extern "C" unsigned long _UNK_0054dab8;
extern "C" unsigned long _UNK_0054dabc;
extern "C" unsigned long _UNK_0054dac0;
extern "C" unsigned long _UNK_0054dac4;
extern "C" unsigned long _UNK_0054dac8;
extern "C" unsigned long _UNK_0054dacc;
extern "C" unsigned long _UNK_0054dad0;
extern "C" unsigned long _UNK_0054dad4;
extern "C" unsigned long _UNK_0054dad8;
extern "C" unsigned long _UNK_0054dadc;
extern "C" unsigned long _UNK_0054dae0;
extern "C" unsigned long _UNK_0054dae4;
extern "C" unsigned long _UNK_0054dae8;
extern "C" unsigned long _UNK_0054daec;
extern "C" unsigned long _UNK_0054daf0;
extern "C" unsigned long _UNK_0054dbdc;
extern "C" unsigned long _UNK_0054dbe0;
extern "C" unsigned long _UNK_0054dbe4;
extern "C" unsigned long _UNK_0054dbe8;
extern "C" unsigned long g_0054d490;
extern "C" unsigned long g_0054d4c2;
extern "C" unsigned long g_0054d4f4;
extern "C" unsigned long g_0054d4f8;
extern "C" unsigned long g_0054d508;
extern "C" unsigned long g_0054d50c;
extern "C" unsigned long g_0054d530;
extern "C" unsigned long g_0054d534;
extern "C" unsigned long g_0054d5d0;
extern "C" unsigned long g_0054d5d4;
extern "C" unsigned long g_0054d6c4;
extern "C" unsigned long g_0054d7a0;
extern "C" unsigned long g_0054d890;
extern "C" unsigned long g_0054d8c0;
extern "C" unsigned long g_0054d994;
extern "C" unsigned long g_0054d998;
extern "C" unsigned long g_0054da34;
extern "C" unsigned long g_0054da44;
extern "C" unsigned long g_0054da7c;
extern "C" unsigned long g_0054daa4;
extern "C" unsigned long g_0054daa8;
extern "C" unsigned long g_0054daac;
extern "C" unsigned long g_0054dab0;
extern "C" unsigned long g_0054dab4;
extern "C" unsigned long g_0054dab8;
extern "C" unsigned long g_0054dabc;
extern "C" unsigned long g_0054dac0;
extern "C" unsigned long g_0054dac4;
extern "C" unsigned long g_0054dac8;
extern "C" unsigned long g_0054dacc;
extern "C" unsigned long g_0054dad0;
extern "C" unsigned long g_0054dad4;
extern "C" unsigned long g_0054dad8;
extern "C" unsigned long g_0054dadc;
extern "C" unsigned long g_0054dae0;
extern "C" unsigned long g_0054dae4;
extern "C" unsigned long g_0054dae8;
extern "C" unsigned long g_0054daec;
extern "C" unsigned long g_0054daf0;
extern "C" unsigned long g_0054dbdc;
extern "C" unsigned long g_0054dbe0;
extern "C" unsigned long g_0054dbe4;
extern "C" unsigned long g_0054dbe8;
BLBaoYueXiangQingView::~BLBaoYueXiangQingView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0054d490 + g_0054d4f4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0054d4c2 + g_0054d4f8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLBaoYueXiangQingView::BLBaoYueXiangQingView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0054d5d0 + 0x54d578);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLBaoYueXiangQingView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLBaoYueXiangQingView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
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

undefined4 BLBaoYueXiangQingView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLBaoYueXiangQingView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLBaoYueXiangQingView::getLabelContent()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLBaoYueXiangQingView::getLabelContentTitle()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

void BLBaoYueXiangQingView::onEnter()
{
  ((BLBaoYueXiangQingPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLBaoYueXiangQingView::onExit()
{
  ((BLBaoYueXiangQingPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLBaoYueXiangQingView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
