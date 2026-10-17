#include "BLRoleStarItemPresenter.h"
#include "CCObject.h"
#include "BLRoleStarItemView.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064e81c;
extern "C" unsigned long UNK_0064e830;
extern "C" unsigned long UNK_0064e986;
extern "C" unsigned long UNK_0064e998;
extern "C" unsigned long _UNK_0064e860;
extern "C" unsigned long _UNK_0064e864;
extern "C" unsigned long _UNK_0064e9c4;
extern "C" unsigned long _UNK_0064e9c8;
extern "C" unsigned long g_0064e81c;
extern "C" unsigned long g_0064e830;
extern "C" unsigned long g_0064e860;
extern "C" unsigned long g_0064e864;
extern "C" unsigned long g_0064e986;
extern "C" unsigned long g_0064e998;
extern "C" unsigned long g_0064e9c4;
extern "C" unsigned long g_0064e9c8;
BLRoleStarItemPresenter::~BLRoleStarItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064e830 + g_0064e864,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRoleStarItemPresenter::BLRoleStarItemPresenter()
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
  func_0079e45c(&uStack_14,&g_0064e998 + g_0064e9c8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLRoleStarItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRoleStarItemPresenter::onEnter()
{
  return;
}

void BLRoleStarItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLRoleStarItemPresenter::initWithView(BLRoleStarItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLRoleStarItemPresenter::updateWithData(kRoleStarType p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
