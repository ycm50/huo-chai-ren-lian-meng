#include "BLRoleStarPresenter.h"
#include "BLLeakUtils.h"
#include "BLRoleStarItemPresenter.h"
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
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064e870;
extern "C" unsigned long UNK_0064e884;
extern "C" unsigned long UNK_0064ea1e;
extern "C" unsigned long UNK_0064ea30;
extern "C" unsigned long _UNK_0064e8b4;
extern "C" unsigned long _UNK_0064e8b8;
extern "C" unsigned long _UNK_0064ea60;
extern "C" unsigned long _UNK_0064ea64;
extern "C" unsigned long _UNK_0064eb18;
extern "C" unsigned long g_0064e870;
extern "C" unsigned long g_0064e884;
extern "C" unsigned long g_0064e8b4;
extern "C" unsigned long g_0064e8b8;
extern "C" unsigned long g_0064ea1e;
extern "C" unsigned long g_0064ea30;
extern "C" unsigned long g_0064ea60;
extern "C" unsigned long g_0064ea64;
extern "C" unsigned long g_0064eb18;
BLRoleStarPresenter::~BLRoleStarPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064e884 + g_0064e8b8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRoleStarPresenter::BLRoleStarPresenter()
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
  func_0079e45c(&uStack_14,&g_0064ea30 + g_0064ea64,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = 1;
  return;
}

undefined4 BLRoleStarPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRoleStarPresenter::initWithView(BLRoleStarView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

bool BLRoleStarPresenter::getStarTypeByIndex(int p1)
{
  return *(int *)(((int)this) + 0x18) < p1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined8 BLRoleStarPresenter::updateWithData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
