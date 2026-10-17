#include "BLEndLessResultView.h"
#include "BLEndLessResultPresenter.h"
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
extern "C" unsigned long UNK_0066334c;
extern "C" unsigned long UNK_00663390;
extern "C" unsigned long UNK_006633d4;
extern "C" unsigned long UNK_006633fc;
extern "C" unsigned long UNK_0066357e;
extern "C" unsigned long UNK_00663676;
extern "C" unsigned long UNK_006636a4;
extern "C" unsigned long UNK_00663770;
extern "C" unsigned long UNK_0066379a;
extern "C" unsigned long UNK_00663848;
extern "C" unsigned long UNK_006638e8;
extern "C" unsigned long UNK_00663a06;
extern "C" unsigned long UNK_00663aec;
extern "C" unsigned long UNK_00663b16;
extern "C" unsigned long UNK_00663bca;
extern "C" unsigned long UNK_00663bf4;
extern "C" unsigned long UNK_00663cb4;
extern "C" unsigned long UNK_00663cde;
extern "C" unsigned long UNK_00663e24;
extern "C" unsigned long _DAT_0066349c;
extern "C" unsigned long _DAT_006634a0;
extern "C" unsigned long _UNK_006633c0;
extern "C" unsigned long _UNK_006633c4;
extern "C" unsigned long _UNK_006633d8;
extern "C" unsigned long _UNK_00663400;
extern "C" unsigned long _UNK_00663960;
extern "C" unsigned long _UNK_00663964;
extern "C" unsigned long _UNK_00663968;
extern "C" unsigned long _UNK_0066396c;
extern "C" unsigned long _UNK_00663970;
extern "C" unsigned long _UNK_00663974;
extern "C" unsigned long _UNK_00663978;
extern "C" unsigned long _UNK_0066397c;
extern "C" unsigned long _UNK_00663980;
extern "C" unsigned long _UNK_00663984;
extern "C" unsigned long _UNK_00663988;
extern "C" unsigned long _UNK_0066398c;
extern "C" unsigned long _UNK_00663990;
extern "C" unsigned long _UNK_00663994;
extern "C" unsigned long _UNK_00663998;
extern "C" unsigned long _UNK_00663d88;
extern "C" unsigned long _UNK_00663d8c;
extern "C" unsigned long _UNK_00663d90;
extern "C" unsigned long _UNK_00663d94;
extern "C" unsigned long _UNK_00663d98;
extern "C" unsigned long _UNK_00663d9c;
extern "C" unsigned long _UNK_00663da0;
extern "C" unsigned long _UNK_00663da4;
extern "C" unsigned long _UNK_00663da8;
extern "C" unsigned long _UNK_00663dac;
extern "C" unsigned long _UNK_00663db0;
extern "C" unsigned long _UNK_00663db4;
extern "C" unsigned long _UNK_00663db8;
extern "C" unsigned long _UNK_00663dbc;
extern "C" unsigned long _UNK_00663dc0;
extern "C" unsigned long _UNK_00663dc4;
extern "C" unsigned long _UNK_00663f5c;
extern "C" unsigned long _UNK_00663f60;
extern "C" unsigned long _UNK_00663f64;
extern "C" unsigned long _UNK_00663f68;
extern "C" unsigned long _UNK_00663f6c;
extern "C" unsigned long _UNK_00663f70;
extern "C" unsigned long g_0066334c;
extern "C" unsigned long g_00663390;
extern "C" unsigned long g_006633c0;
extern "C" unsigned long g_006633c4;
extern "C" unsigned long g_006633d4;
extern "C" unsigned long g_006633d8;
extern "C" unsigned long g_006633fc;
extern "C" unsigned long g_00663400;
extern "C" unsigned long g_0066349c;
extern "C" unsigned long g_006634a0;
extern "C" unsigned long g_0066357e;
extern "C" unsigned long g_00663676;
extern "C" unsigned long g_006636a4;
extern "C" unsigned long g_00663770;
extern "C" unsigned long g_0066379a;
extern "C" unsigned long g_00663848;
extern "C" unsigned long g_006638e8;
extern "C" unsigned long g_00663960;
extern "C" unsigned long g_00663964;
extern "C" unsigned long g_00663968;
extern "C" unsigned long g_0066396c;
extern "C" unsigned long g_00663970;
extern "C" unsigned long g_00663974;
extern "C" unsigned long g_00663978;
extern "C" unsigned long g_0066397c;
extern "C" unsigned long g_00663980;
extern "C" unsigned long g_00663984;
extern "C" unsigned long g_00663988;
extern "C" unsigned long g_0066398c;
extern "C" unsigned long g_00663990;
extern "C" unsigned long g_00663994;
extern "C" unsigned long g_00663998;
extern "C" unsigned long g_00663a06;
extern "C" unsigned long g_00663aec;
extern "C" unsigned long g_00663b16;
extern "C" unsigned long g_00663bca;
extern "C" unsigned long g_00663bf4;
extern "C" unsigned long g_00663cb4;
extern "C" unsigned long g_00663cde;
extern "C" unsigned long g_00663d88;
extern "C" unsigned long g_00663d8c;
extern "C" unsigned long g_00663d90;
extern "C" unsigned long g_00663d94;
extern "C" unsigned long g_00663d98;
extern "C" unsigned long g_00663d9c;
extern "C" unsigned long g_00663da0;
extern "C" unsigned long g_00663da4;
extern "C" unsigned long g_00663da8;
extern "C" unsigned long g_00663dac;
extern "C" unsigned long g_00663db0;
extern "C" unsigned long g_00663db4;
extern "C" unsigned long g_00663db8;
extern "C" unsigned long g_00663dbc;
extern "C" unsigned long g_00663dc0;
extern "C" unsigned long g_00663dc4;
extern "C" unsigned long g_00663e24;
extern "C" unsigned long g_00663f5c;
extern "C" unsigned long g_00663f60;
extern "C" unsigned long g_00663f64;
extern "C" unsigned long g_00663f68;
extern "C" unsigned long g_00663f6c;
extern "C" unsigned long g_00663f70;
BLEndLessResultView::~BLEndLessResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0066334c + g_006633c0);
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
  func_0079e45c(&uStack_14,&g_00663390 + g_006633c4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEndLessResultView::BLEndLessResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0066349c + 0x663444);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLEndLessResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLEndLessResultView::create()
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

undefined4 BLEndLessResultView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLEndLessResultView::onEnter()
{
  ((BLEndLessResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEndLessResultView::onExit()
{
  ((BLEndLessResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLEndLessResultView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
