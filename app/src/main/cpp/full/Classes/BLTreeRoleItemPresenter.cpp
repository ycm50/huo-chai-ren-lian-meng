#include "BLTreeRoleItemPresenter.h"
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
extern "C" unsigned long UNK_005d135c;
extern "C" unsigned long UNK_005d1370;
extern "C" unsigned long UNK_005d16fa;
extern "C" unsigned long UNK_005d170c;
extern "C" unsigned long UNK_005d1af4;
extern "C" unsigned long UNK_005d1b54;
extern "C" unsigned long UNK_005d1b70;
extern "C" unsigned long UNK_005d1bc6;
extern "C" unsigned long UNK_005d1bec;
extern "C" unsigned long UNK_005d1c98;
extern "C" unsigned long UNK_005d1cd6;
extern "C" unsigned long UNK_005d1d4e;
extern "C" unsigned long UNK_005d1d58;
extern "C" unsigned long _UNK_005d13a0;
extern "C" unsigned long _UNK_005d13a4;
extern "C" unsigned long _UNK_005d1738;
extern "C" unsigned long _UNK_005d173c;
extern "C" unsigned long _UNK_005d1dcc;
extern "C" unsigned long _UNK_005d1dd0;
extern "C" unsigned long _UNK_005d1dd4;
extern "C" unsigned long _UNK_005d1dd8;
extern "C" unsigned long _UNK_005d1ddc;
extern "C" unsigned long _UNK_005d1de0;
extern "C" unsigned long _UNK_005d1de4;
extern "C" unsigned long _UNK_005d1de8;
extern "C" unsigned long _UNK_005d1dec;
extern "C" unsigned long _UNK_005d1df0;
extern "C" unsigned long _UNK_005d1df4;
extern "C" unsigned long g_005d135c;
extern "C" unsigned long g_005d1370;
extern "C" unsigned long g_005d13a0;
extern "C" unsigned long g_005d13a4;
extern "C" unsigned long g_005d16fa;
extern "C" unsigned long g_005d170c;
extern "C" unsigned long g_005d1738;
extern "C" unsigned long g_005d173c;
extern "C" unsigned long g_005d1af4;
extern "C" unsigned long g_005d1b54;
extern "C" unsigned long g_005d1b70;
extern "C" unsigned long g_005d1bc6;
extern "C" unsigned long g_005d1bec;
extern "C" unsigned long g_005d1c98;
extern "C" unsigned long g_005d1cd6;
extern "C" unsigned long g_005d1d4e;
extern "C" unsigned long g_005d1d58;
extern "C" unsigned long g_005d1dcc;
extern "C" unsigned long g_005d1dd0;
extern "C" unsigned long g_005d1dd4;
extern "C" unsigned long g_005d1dd8;
extern "C" unsigned long g_005d1ddc;
extern "C" unsigned long g_005d1de0;
extern "C" unsigned long g_005d1de4;
extern "C" unsigned long g_005d1de8;
extern "C" unsigned long g_005d1dec;
extern "C" unsigned long g_005d1df0;
extern "C" unsigned long g_005d1df4;
BLTreeRoleItemPresenter::~BLTreeRoleItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d1370 + g_005d13a4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLTreeRoleItemPresenter::BLTreeRoleItemPresenter()
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
  func_0079e45c(&uStack_14,&g_005d170c + g_005d173c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLTreeRoleItemPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTreeRoleItemPresenter::onEnter()
{
  return;
}

void BLTreeRoleItemPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====

void BLTreeRoleItemPresenter::updateWithRoleData(PlayerData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
