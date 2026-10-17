#include "BLRenascenceSuccessRolePresenter.h"
#include "CCObject.h"
#include "PlayerData.h"
#include "BLRenascenceSuccessRoleView.h"
#include "BLLeakUtils.h"
#include "BLMonsterData.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0064d04c;
extern "C" unsigned long UNK_0064d060;
extern "C" unsigned long UNK_0064d176;
extern "C" unsigned long UNK_0064d188;
extern "C" unsigned long UNK_0064d37e;
extern "C" unsigned long UNK_0064d380;
extern "C" unsigned long UNK_0064d46a;
extern "C" unsigned long UNK_0064d484;
extern "C" unsigned long UNK_0064d4d8;
extern "C" unsigned long UNK_0064d4f0;
extern "C" unsigned long UNK_0064d50c;
extern "C" unsigned long UNK_0064d518;
extern "C" unsigned long UNK_0064d520;
extern "C" unsigned long UNK_0064d53a;
extern "C" unsigned long UNK_0064d710;
extern "C" unsigned long UNK_0064d71c;
extern "C" unsigned long UNK_0064d726;
extern "C" unsigned long UNK_0064d728;
extern "C" unsigned long UNK_0064d72a;
extern "C" unsigned long _UNK_0064d090;
extern "C" unsigned long _UNK_0064d094;
extern "C" unsigned long _UNK_0064d1b4;
extern "C" unsigned long _UNK_0064d1b8;
extern "C" unsigned long _UNK_0064d6c8;
extern "C" unsigned long _UNK_0064d6cc;
extern "C" unsigned long _UNK_0064d6d0;
extern "C" unsigned long _UNK_0064d6d4;
extern "C" unsigned long _UNK_0064d6d8;
extern "C" unsigned long _UNK_0064d6dc;
extern "C" unsigned long _UNK_0064d6e0;
extern "C" unsigned long _UNK_0064d6e4;
extern "C" unsigned long _UNK_0064d6e8;
extern "C" unsigned long _UNK_0064d6ec;
extern "C" unsigned long _UNK_0064d6f0;
extern "C" unsigned long _UNK_0064d6f4;
extern "C" unsigned long _UNK_0064d6f8;
extern "C" unsigned long _UNK_0064d6fc;
extern "C" unsigned long _UNK_0064d730;
extern "C" unsigned long _UNK_0064d734;
extern "C" unsigned long _UNK_0064d738;
extern "C" unsigned long _UNK_0064d73c;
extern "C" unsigned long _UNK_0064d740;
extern "C" unsigned long g_0064d04c;
extern "C" unsigned long g_0064d060;
extern "C" unsigned long g_0064d090;
extern "C" unsigned long g_0064d094;
extern "C" unsigned long g_0064d176;
extern "C" unsigned long g_0064d188;
extern "C" unsigned long g_0064d1b4;
extern "C" unsigned long g_0064d1b8;
extern "C" unsigned long g_0064d37e;
extern "C" unsigned long g_0064d380;
extern "C" unsigned long g_0064d46a;
extern "C" unsigned long g_0064d484;
extern "C" unsigned long g_0064d4d8;
extern "C" unsigned long g_0064d4f0;
extern "C" unsigned long g_0064d50c;
extern "C" unsigned long g_0064d518;
extern "C" unsigned long g_0064d520;
extern "C" unsigned long g_0064d53a;
extern "C" unsigned long g_0064d6c8;
extern "C" unsigned long g_0064d6cc;
extern "C" unsigned long g_0064d6d0;
extern "C" unsigned long g_0064d6d4;
extern "C" unsigned long g_0064d6d8;
extern "C" unsigned long g_0064d6dc;
extern "C" unsigned long g_0064d6e0;
extern "C" unsigned long g_0064d6e4;
extern "C" unsigned long g_0064d6e8;
extern "C" unsigned long g_0064d6ec;
extern "C" unsigned long g_0064d6f0;
extern "C" unsigned long g_0064d6f4;
extern "C" unsigned long g_0064d6f8;
extern "C" unsigned long g_0064d6fc;
extern "C" unsigned long g_0064d710;
extern "C" unsigned long g_0064d71c;
extern "C" unsigned long g_0064d726;
extern "C" unsigned long g_0064d728;
extern "C" unsigned long g_0064d72a;
extern "C" unsigned long g_0064d730;
extern "C" unsigned long g_0064d734;
extern "C" unsigned long g_0064d738;
extern "C" unsigned long g_0064d73c;
extern "C" unsigned long g_0064d740;
BLRenascenceSuccessRolePresenter::~BLRenascenceSuccessRolePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0064d060 + g_0064d094,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRenascenceSuccessRolePresenter::BLRenascenceSuccessRolePresenter()
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
  func_0079e45c(&uStack_14,&g_0064d188 + g_0064d1b8,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLRenascenceSuccessRolePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLRenascenceSuccessRolePresenter::initWithView(BLRenascenceSuccessRoleView* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLRenascenceSuccessRolePresenter::updateWithData(PlayerData* p1, KRenascenceRoleType p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
