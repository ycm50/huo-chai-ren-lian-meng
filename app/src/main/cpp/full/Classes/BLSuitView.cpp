#include "BLSuitView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLListButton.h"
#include "BLSuitListView.h"
#include "BLSuitPresenter.h"
#include "BLSuitRoleInfoView.h"
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
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062ff00;
extern "C" unsigned long UNK_0069d370;
extern "C" unsigned long UNK_0069d3b4;
extern "C" unsigned long UNK_0069d3f8;
extern "C" unsigned long UNK_0069d420;
extern "C" unsigned long UNK_0069d59e;
extern "C" unsigned long UNK_0069d678;
extern "C" unsigned long UNK_0069d766;
extern "C" unsigned long UNK_0069d768;
extern "C" unsigned long UNK_0069d822;
extern "C" unsigned long UNK_0069d856;
extern "C" unsigned long UNK_0069db6c;
extern "C" unsigned long UNK_0069dbc0;
extern "C" unsigned long UNK_0069dc08;
extern "C" unsigned long UNK_0069dc54;
extern "C" unsigned long UNK_0069dca4;
extern "C" unsigned long UNK_0069dca5;
extern "C" unsigned long UNK_0069dca6;
extern "C" unsigned long UNK_0069ded4;
extern "C" unsigned long UNK_0069df02;
extern "C" unsigned long _DAT_0069d4f8;
extern "C" unsigned long _DAT_0069d4fc;
extern "C" unsigned long _UNK_0069d3e4;
extern "C" unsigned long _UNK_0069d3e8;
extern "C" unsigned long _UNK_0069d3fc;
extern "C" unsigned long _UNK_0069d424;
extern "C" unsigned long _UNK_0069d980;
extern "C" unsigned long _UNK_0069d984;
extern "C" unsigned long _UNK_0069d988;
extern "C" unsigned long _UNK_0069d98c;
extern "C" unsigned long _UNK_0069d990;
extern "C" unsigned long _UNK_0069d994;
extern "C" unsigned long _UNK_0069d998;
extern "C" unsigned long _UNK_0069d99c;
extern "C" unsigned long _UNK_0069d9a0;
extern "C" unsigned long _UNK_0069d9a4;
extern "C" unsigned long _UNK_0069d9a8;
extern "C" unsigned long _UNK_0069d9ac;
extern "C" unsigned long _UNK_0069d9b0;
extern "C" unsigned long _UNK_0069d9b4;
extern "C" unsigned long _UNK_0069d9b8;
extern "C" unsigned long _UNK_0069d9bc;
extern "C" unsigned long _UNK_0069d9c0;
extern "C" unsigned long _UNK_0069d9c4;
extern "C" unsigned long _UNK_0069d9c8;
extern "C" unsigned long _UNK_0069d9cc;
extern "C" unsigned long _UNK_0069dda4;
extern "C" unsigned long _UNK_0069dda8;
extern "C" unsigned long _UNK_0069ddac;
extern "C" unsigned long _UNK_0069ddb0;
extern "C" unsigned long _UNK_0069ddb4;
extern "C" unsigned long _UNK_0069ddb8;
extern "C" unsigned long _UNK_0069ddbc;
extern "C" unsigned long _UNK_0069ddc0;
extern "C" unsigned long _UNK_0069ddc4;
extern "C" unsigned long _UNK_0069ddc8;
extern "C" unsigned long _UNK_0069ddcc;
extern "C" unsigned long _UNK_0069ddd0;
extern "C" unsigned long _UNK_0069ddd4;
extern "C" unsigned long _UNK_0069ddd8;
extern "C" unsigned long _UNK_0069dddc;
extern "C" unsigned long _UNK_0069e0e0;
extern "C" unsigned long _UNK_0069e0e4;
extern "C" unsigned long _UNK_0069e0e8;
extern "C" unsigned long _UNK_0069e0ec;
extern "C" unsigned long _UNK_0069e0f0;
extern "C" unsigned long _UNK_0069e0f4;
extern "C" unsigned long _UNK_0069e0f8;
extern "C" unsigned long _UNK_0069e0fc;
extern "C" unsigned long _UNK_0069e100;
extern "C" unsigned long g_0062ff00;
extern "C" unsigned long g_0069d370;
extern "C" unsigned long g_0069d3b4;
extern "C" unsigned long g_0069d3e4;
extern "C" unsigned long g_0069d3e8;
extern "C" unsigned long g_0069d3f8;
extern "C" unsigned long g_0069d3fc;
extern "C" unsigned long g_0069d420;
extern "C" unsigned long g_0069d424;
extern "C" unsigned long g_0069d4f8;
extern "C" unsigned long g_0069d4fc;
extern "C" unsigned long g_0069d59e;
extern "C" unsigned long g_0069d678;
extern "C" unsigned long g_0069d766;
extern "C" unsigned long g_0069d768;
extern "C" unsigned long g_0069d822;
extern "C" unsigned long g_0069d856;
extern "C" unsigned long g_0069d980;
extern "C" unsigned long g_0069d984;
extern "C" unsigned long g_0069d988;
extern "C" unsigned long g_0069d98c;
extern "C" unsigned long g_0069d990;
extern "C" unsigned long g_0069d994;
extern "C" unsigned long g_0069d998;
extern "C" unsigned long g_0069d99c;
extern "C" unsigned long g_0069d9a0;
extern "C" unsigned long g_0069d9a4;
extern "C" unsigned long g_0069d9a8;
extern "C" unsigned long g_0069d9ac;
extern "C" unsigned long g_0069d9b0;
extern "C" unsigned long g_0069d9b4;
extern "C" unsigned long g_0069d9b8;
extern "C" unsigned long g_0069d9bc;
extern "C" unsigned long g_0069d9c0;
extern "C" unsigned long g_0069d9c4;
extern "C" unsigned long g_0069d9c8;
extern "C" unsigned long g_0069d9cc;
extern "C" unsigned long g_0069db6c;
extern "C" unsigned long g_0069dbc0;
extern "C" unsigned long g_0069dc08;
extern "C" unsigned long g_0069dc54;
extern "C" unsigned long g_0069dca4;
extern "C" unsigned long g_0069dca5;
extern "C" unsigned long g_0069dca6;
extern "C" unsigned long g_0069dda4;
extern "C" unsigned long g_0069dda8;
extern "C" unsigned long g_0069ddac;
extern "C" unsigned long g_0069ddb0;
extern "C" unsigned long g_0069ddb4;
extern "C" unsigned long g_0069ddb8;
extern "C" unsigned long g_0069ddbc;
extern "C" unsigned long g_0069ddc0;
extern "C" unsigned long g_0069ddc4;
extern "C" unsigned long g_0069ddc8;
extern "C" unsigned long g_0069ddcc;
extern "C" unsigned long g_0069ddd0;
extern "C" unsigned long g_0069ddd4;
extern "C" unsigned long g_0069ddd8;
extern "C" unsigned long g_0069dddc;
extern "C" unsigned long g_0069ded4;
extern "C" unsigned long g_0069df02;
extern "C" unsigned long g_0069e0e0;
extern "C" unsigned long g_0069e0e4;
extern "C" unsigned long g_0069e0e8;
extern "C" unsigned long g_0069e0ec;
extern "C" unsigned long g_0069e0f0;
extern "C" unsigned long g_0069e0f4;
extern "C" unsigned long g_0069e0f8;
extern "C" unsigned long g_0069e0fc;
extern "C" unsigned long g_0069e100;
BLSuitView::~BLSuitView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069d370 + g_0069d3e4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069d3b4 + g_0069d3e8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitView::BLSuitView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0069d4f8 + 0x69d4a0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSuitView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSuitView::create()
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

void BLSuitView::onEnter()
{
  ((BLSuitPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitView::onExit()
{
  ((BLSuitPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLSuitView::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
