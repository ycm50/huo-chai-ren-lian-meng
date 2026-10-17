#include "BLDragonCanyonResultView.h"
#include "BLDragonCanyonResultPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00662764;
extern "C" unsigned long UNK_006627b6;
extern "C" unsigned long UNK_006627fc;
extern "C" unsigned long UNK_00662824;
extern "C" unsigned long UNK_006629d2;
extern "C" unsigned long UNK_00662ac6;
extern "C" unsigned long UNK_00662af8;
extern "C" unsigned long UNK_00662bca;
extern "C" unsigned long UNK_00662bf4;
extern "C" unsigned long UNK_00662ca2;
extern "C" unsigned long UNK_00662d98;
extern "C" unsigned long UNK_00662ebc;
extern "C" unsigned long UNK_00662fb2;
extern "C" unsigned long UNK_006630b4;
extern "C" unsigned long UNK_006630de;
extern "C" unsigned long UNK_00663202;
extern "C" unsigned long _DAT_006628dc;
extern "C" unsigned long _DAT_006628e0;
extern "C" unsigned long _UNK_006627e8;
extern "C" unsigned long _UNK_006627ec;
extern "C" unsigned long _UNK_00662800;
extern "C" unsigned long _UNK_00662828;
extern "C" unsigned long _UNK_00662db4;
extern "C" unsigned long _UNK_00662db8;
extern "C" unsigned long _UNK_00662dbc;
extern "C" unsigned long _UNK_00662dc0;
extern "C" unsigned long _UNK_00662dc4;
extern "C" unsigned long _UNK_00662dc8;
extern "C" unsigned long _UNK_00662dcc;
extern "C" unsigned long _UNK_00662dd0;
extern "C" unsigned long _UNK_00662dd4;
extern "C" unsigned long _UNK_00662dd8;
extern "C" unsigned long _UNK_00662ddc;
extern "C" unsigned long _UNK_00662de0;
extern "C" unsigned long _UNK_00662de4;
extern "C" unsigned long _UNK_00662de8;
extern "C" unsigned long _UNK_00662dec;
extern "C" unsigned long _UNK_00663218;
extern "C" unsigned long _UNK_0066321c;
extern "C" unsigned long _UNK_00663220;
extern "C" unsigned long _UNK_00663224;
extern "C" unsigned long _UNK_00663228;
extern "C" unsigned long _UNK_0066322c;
extern "C" unsigned long _UNK_00663230;
extern "C" unsigned long _UNK_00663234;
extern "C" unsigned long _UNK_00663238;
extern "C" unsigned long _UNK_0066323c;
extern "C" unsigned long _UNK_00663240;
extern "C" unsigned long _UNK_00663244;
extern "C" unsigned long _UNK_00663248;
extern "C" unsigned long _UNK_0066324c;
extern "C" unsigned long _UNK_0066333c;
extern "C" unsigned long _UNK_00663340;
extern "C" unsigned long g_00662764;
extern "C" unsigned long g_006627b6;
extern "C" unsigned long g_006627e8;
extern "C" unsigned long g_006627ec;
extern "C" unsigned long g_006627fc;
extern "C" unsigned long g_00662800;
extern "C" unsigned long g_00662824;
extern "C" unsigned long g_00662828;
extern "C" unsigned long g_006628dc;
extern "C" unsigned long g_006628e0;
extern "C" unsigned long g_006629d2;
extern "C" unsigned long g_00662ac6;
extern "C" unsigned long g_00662af8;
extern "C" unsigned long g_00662bca;
extern "C" unsigned long g_00662bf4;
extern "C" unsigned long g_00662ca2;
extern "C" unsigned long g_00662d98;
extern "C" unsigned long g_00662db4;
extern "C" unsigned long g_00662db8;
extern "C" unsigned long g_00662dbc;
extern "C" unsigned long g_00662dc0;
extern "C" unsigned long g_00662dc4;
extern "C" unsigned long g_00662dc8;
extern "C" unsigned long g_00662dcc;
extern "C" unsigned long g_00662dd0;
extern "C" unsigned long g_00662dd4;
extern "C" unsigned long g_00662dd8;
extern "C" unsigned long g_00662ddc;
extern "C" unsigned long g_00662de0;
extern "C" unsigned long g_00662de4;
extern "C" unsigned long g_00662de8;
extern "C" unsigned long g_00662dec;
extern "C" unsigned long g_00662ebc;
extern "C" unsigned long g_00662fb2;
extern "C" unsigned long g_006630b4;
extern "C" unsigned long g_006630de;
extern "C" unsigned long g_00663202;
extern "C" unsigned long g_00663218;
extern "C" unsigned long g_0066321c;
extern "C" unsigned long g_00663220;
extern "C" unsigned long g_00663224;
extern "C" unsigned long g_00663228;
extern "C" unsigned long g_0066322c;
extern "C" unsigned long g_00663230;
extern "C" unsigned long g_00663234;
extern "C" unsigned long g_00663238;
extern "C" unsigned long g_0066323c;
extern "C" unsigned long g_00663240;
extern "C" unsigned long g_00663244;
extern "C" unsigned long g_00663248;
extern "C" unsigned long g_0066324c;
extern "C" unsigned long g_0066333c;
extern "C" unsigned long g_00663340;
BLDragonCanyonResultView::~BLDragonCanyonResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00662764 + g_006627e8);
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
  func_0079e45c(&uStack_14,&g_006627b6 + g_006627ec,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDragonCanyonResultView::BLDragonCanyonResultView()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(g_006628dc + 0x66286c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar3 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar3 + 0x244;
  piVar1 = (int *)cocos2d::CCArray::create();
  *(int *)((int)this + 4*(0x42)) = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDragonCanyonResultView"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLDragonCanyonResultView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

undefined4 BLDragonCanyonResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLDragonCanyonResultView::getBackGround()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLDragonCanyonResultView::getBtnQuit()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLDragonCanyonResultView::ScrollviewItems()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

void BLDragonCanyonResultView::onEnter()
{
  ((BLDragonCanyonResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDragonCanyonResultView::onExit()
{
  ((BLDragonCanyonResultPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLDragonCanyonResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
