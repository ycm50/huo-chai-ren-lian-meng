#include "BLRoleItemPresenter.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "PlayerData.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e1c80;
extern "C" unsigned long UNK_005e1c94;
extern "C" unsigned long UNK_005e200e;
extern "C" unsigned long UNK_005e2020;
extern "C" unsigned long UNK_005e2688;
extern "C" unsigned long UNK_005e26e8;
extern "C" unsigned long UNK_005e2704;
extern "C" unsigned long UNK_005e275a;
extern "C" unsigned long UNK_005e2780;
extern "C" unsigned long UNK_005e282c;
extern "C" unsigned long UNK_005e286a;
extern "C" unsigned long UNK_005e2950;
extern "C" unsigned long UNK_005e295a;
extern "C" unsigned long _UNK_005e1cc4;
extern "C" unsigned long _UNK_005e1cc8;
extern "C" unsigned long _UNK_005e204c;
extern "C" unsigned long _UNK_005e2050;
extern "C" unsigned long _UNK_005e2990;
extern "C" unsigned long _UNK_005e2994;
extern "C" unsigned long _UNK_005e2998;
extern "C" unsigned long _UNK_005e299c;
extern "C" unsigned long _UNK_005e29a0;
extern "C" unsigned long _UNK_005e29a4;
extern "C" unsigned long _UNK_005e29a8;
extern "C" unsigned long _UNK_005e29ac;
extern "C" unsigned long _UNK_005e29b0;
extern "C" unsigned long _UNK_005e29b4;
extern "C" unsigned long _UNK_005e29b8;
extern "C" unsigned long g_005e1c80;
extern "C" unsigned long g_005e1c94;
extern "C" unsigned long g_005e1cc4;
extern "C" unsigned long g_005e1cc8;
extern "C" unsigned long g_005e200e;
extern "C" unsigned long g_005e2020;
extern "C" unsigned long g_005e204c;
extern "C" unsigned long g_005e2050;
extern "C" unsigned long g_005e2688;
extern "C" unsigned long g_005e26e8;
extern "C" unsigned long g_005e2704;
extern "C" unsigned long g_005e275a;
extern "C" unsigned long g_005e2780;
extern "C" unsigned long g_005e282c;
extern "C" unsigned long g_005e286a;
extern "C" unsigned long g_005e2950;
extern "C" unsigned long g_005e295a;
extern "C" unsigned long g_005e2990;
extern "C" unsigned long g_005e2994;
extern "C" unsigned long g_005e2998;
extern "C" unsigned long g_005e299c;
extern "C" unsigned long g_005e29a0;
extern "C" unsigned long g_005e29a4;
extern "C" unsigned long g_005e29a8;
extern "C" unsigned long g_005e29ac;
extern "C" unsigned long g_005e29b0;
extern "C" unsigned long g_005e29b4;
extern "C" unsigned long g_005e29b8;
BLRoleItemPresenter::~BLRoleItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e1c94 + g_005e1cc8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRoleItemPresenter::BLRoleItemPresenter()
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
  func_0079e45c(&uStack_14,&g_005e2020 + g_005e2050,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLRoleItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLRoleItemPresenter::initWithView(BLRoleItemView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

void BLRoleItemPresenter::onEnter()
{
  return;
}

void BLRoleItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLRoleItemPresenter::updateWithRoleData(PlayerData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
