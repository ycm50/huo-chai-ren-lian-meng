#include "BLImmortalsUpgraceInfoPresenter.h"
#include "CCObject.h"
#include "ImmortalsRoleItemData.h"
#include "BLImmortalsUpgraceInfoView.h"
#include "BLImmortalsItemPresenter.h"
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
extern "C" unsigned long UNK_0056e3c0;
extern "C" unsigned long UNK_0056e3d4;
extern "C" unsigned long UNK_0056e5d6;
extern "C" unsigned long UNK_0056e5e8;
extern "C" unsigned long _UNK_0056e404;
extern "C" unsigned long _UNK_0056e408;
extern "C" unsigned long _UNK_0056e614;
extern "C" unsigned long _UNK_0056e618;
extern "C" unsigned long g_0056e3c0;
extern "C" unsigned long g_0056e3d4;
extern "C" unsigned long g_0056e404;
extern "C" unsigned long g_0056e408;
extern "C" unsigned long g_0056e5d6;
extern "C" unsigned long g_0056e5e8;
extern "C" unsigned long g_0056e614;
extern "C" unsigned long g_0056e618;
BLImmortalsUpgraceInfoPresenter::~BLImmortalsUpgraceInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056e3d4 + g_0056e408,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLImmortalsUpgraceInfoPresenter::BLImmortalsUpgraceInfoPresenter()
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
  func_0079e45c(&uStack_14,&g_0056e5e8 + g_0056e618,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLImmortalsUpgraceInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLImmortalsUpgraceInfoPresenter::onEnter()
{
  return;
}

void BLImmortalsUpgraceInfoPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLImmortalsUpgraceInfoPresenter::initWithView(BLImmortalsUpgraceInfoView* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  ((BLImmortalsItemPresenter *)this)->updateWithType(*(undefined4 *)(*(int *)(p1 + 0x10c) + 0x108));
  return;
}

void BLImmortalsUpgraceInfoPresenter::updateWithData(ImmortalsRoleItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
