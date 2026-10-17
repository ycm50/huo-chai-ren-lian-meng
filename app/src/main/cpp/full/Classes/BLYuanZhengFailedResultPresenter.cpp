#include "BLYuanZhengFailedResultPresenter.h"
#include "BLLeakUtils.h"
#include "UIManager.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006609b4;
extern "C" unsigned long UNK_006609c8;
extern "C" unsigned long UNK_00660a36;
extern "C" unsigned long UNK_00660a48;
extern "C" unsigned long _UNK_006609f8;
extern "C" unsigned long _UNK_006609fc;
extern "C" unsigned long _UNK_00660a24;
extern "C" unsigned long _UNK_00660a7c;
extern "C" unsigned long _UNK_00660a80;
extern "C" unsigned long g_006609b4;
extern "C" unsigned long g_006609c8;
extern "C" unsigned long g_006609f8;
extern "C" unsigned long g_006609fc;
extern "C" unsigned long g_00660a24;
extern "C" unsigned long g_00660a36;
extern "C" unsigned long g_00660a48;
extern "C" unsigned long g_00660a7c;
extern "C" unsigned long g_00660a80;
BLYuanZhengFailedResultPresenter::~BLYuanZhengFailedResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006609c8 + g_006609fc,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLYuanZhengFailedResultPresenter::onBtnClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_00660a24);
  return;
}

BLYuanZhengFailedResultPresenter::BLYuanZhengFailedResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00660a48 + g_00660a80,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

undefined4 BLYuanZhengFailedResultPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLYuanZhengFailedResultPresenter::onEnter()
{
  return;
}

void BLYuanZhengFailedResultPresenter::onExit()
{
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
