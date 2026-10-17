#include "BLFightRecordView.h"
#include "BLFightRecordPresenter.h"
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
extern "C" unsigned long UNK_004c7570;
extern "C" unsigned long UNK_004c75b4;
extern "C" unsigned long UNK_004c75f8;
extern "C" unsigned long UNK_004c7620;
extern "C" unsigned long UNK_004c77ac;
extern "C" unsigned long UNK_004c7840;
extern "C" unsigned long UNK_004c7928;
extern "C" unsigned long UNK_004c7a10;
extern "C" unsigned long UNK_004c7a3a;
extern "C" unsigned long UNK_004c7b08;
extern "C" unsigned long UNK_004c7b34;
extern "C" unsigned long _DAT_004c76c0;
extern "C" unsigned long _DAT_004c76c4;
extern "C" unsigned long _UNK_004c75e4;
extern "C" unsigned long _UNK_004c75e8;
extern "C" unsigned long _UNK_004c75fc;
extern "C" unsigned long _UNK_004c7624;
extern "C" unsigned long _UNK_004c7b90;
extern "C" unsigned long _UNK_004c7b94;
extern "C" unsigned long _UNK_004c7b98;
extern "C" unsigned long _UNK_004c7b9c;
extern "C" unsigned long _UNK_004c7ba0;
extern "C" unsigned long _UNK_004c7ba4;
extern "C" unsigned long _UNK_004c7ba8;
extern "C" unsigned long _UNK_004c7bac;
extern "C" unsigned long _UNK_004c7bb0;
extern "C" unsigned long _UNK_004c7bb4;
extern "C" unsigned long _UNK_004c7bb8;
extern "C" unsigned long _UNK_004c7bbc;
extern "C" unsigned long _UNK_004c7bc0;
extern "C" unsigned long _UNK_004c7bc4;
extern "C" unsigned long _UNK_004c7bc8;
extern "C" unsigned long _UNK_004c7dc0;
extern "C" unsigned long _UNK_004c7dc4;
extern "C" unsigned long _UNK_004c7dc8;
extern "C" unsigned long _UNK_004c7dcc;
extern "C" unsigned long _UNK_004c7dd0;
extern "C" unsigned long _UNK_004c7dd4;
extern "C" unsigned long _UNK_004c7dd8;
extern "C" unsigned long _UNK_004c7ddc;
extern "C" unsigned long g_004c7570;
extern "C" unsigned long g_004c75b4;
extern "C" unsigned long g_004c75e4;
extern "C" unsigned long g_004c75e8;
extern "C" unsigned long g_004c75f8;
extern "C" unsigned long g_004c75fc;
extern "C" unsigned long g_004c7620;
extern "C" unsigned long g_004c7624;
extern "C" unsigned long g_004c76c0;
extern "C" unsigned long g_004c76c4;
extern "C" unsigned long g_004c77ac;
extern "C" unsigned long g_004c7840;
extern "C" unsigned long g_004c7928;
extern "C" unsigned long g_004c7a10;
extern "C" unsigned long g_004c7a3a;
extern "C" unsigned long g_004c7b08;
extern "C" unsigned long g_004c7b34;
extern "C" unsigned long g_004c7b90;
extern "C" unsigned long g_004c7b94;
extern "C" unsigned long g_004c7b98;
extern "C" unsigned long g_004c7b9c;
extern "C" unsigned long g_004c7ba0;
extern "C" unsigned long g_004c7ba4;
extern "C" unsigned long g_004c7ba8;
extern "C" unsigned long g_004c7bac;
extern "C" unsigned long g_004c7bb0;
extern "C" unsigned long g_004c7bb4;
extern "C" unsigned long g_004c7bb8;
extern "C" unsigned long g_004c7bbc;
extern "C" unsigned long g_004c7bc0;
extern "C" unsigned long g_004c7bc4;
extern "C" unsigned long g_004c7bc8;
extern "C" unsigned long g_004c7dc0;
extern "C" unsigned long g_004c7dc4;
extern "C" unsigned long g_004c7dc8;
extern "C" unsigned long g_004c7dcc;
extern "C" unsigned long g_004c7dd0;
extern "C" unsigned long g_004c7dd4;
extern "C" unsigned long g_004c7dd8;
extern "C" unsigned long g_004c7ddc;
BLFightRecordView::~BLFightRecordView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c7570 + g_004c75e4);
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
  func_0079e45c(&uStack_14,&g_004c75b4 + g_004c75e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFightRecordView::BLFightRecordView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_004c76c0 + 0x4c7668);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLFightRecordView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLFightRecordView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x120)));
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

undefined4 BLFightRecordView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLFightRecordView::getTableView()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLFightRecordView::getBtnClose()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLFightRecordView::onEnter()
{
  ((BLFightRecordPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLFightRecordView::onExit()
{
  ((BLFightRecordPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLFightRecordView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
