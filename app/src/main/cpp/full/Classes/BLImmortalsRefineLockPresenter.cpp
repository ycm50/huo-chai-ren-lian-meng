#include "BLImmortalsRefineLockPresenter.h"
#include "BLLeakUtils.h"
#include "ImmortalsRefineLockData.h"
#include "Toast.h"
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
extern "C" unsigned long UNK_0056cc04;
extern "C" unsigned long UNK_0056cc18;
extern "C" unsigned long UNK_0056cde0;
extern "C" unsigned long UNK_0056cdee;
extern "C" unsigned long UNK_0056cf02;
extern "C" unsigned long UNK_0056cf14;
extern "C" unsigned long _UNK_0056cc48;
extern "C" unsigned long _UNK_0056cc4c;
extern "C" unsigned long _UNK_0056cdf4;
extern "C" unsigned long _UNK_0056cdf8;
extern "C" unsigned long _UNK_0056cf44;
extern "C" unsigned long _UNK_0056cf48;
extern "C" unsigned long g_0056cc04;
extern "C" unsigned long g_0056cc18;
extern "C" unsigned long g_0056cc48;
extern "C" unsigned long g_0056cc4c;
extern "C" unsigned long g_0056cde0;
extern "C" unsigned long g_0056cdee;
extern "C" unsigned long g_0056cdf4;
extern "C" unsigned long g_0056cdf8;
extern "C" unsigned long g_0056cf02;
extern "C" unsigned long g_0056cf14;
extern "C" unsigned long g_0056cf44;
extern "C" unsigned long g_0056cf48;
BLImmortalsRefineLockPresenter::~BLImmortalsRefineLockPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0056cc18 + g_0056cc4c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLImmortalsRefineLockPresenter::onClick(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  
  if (*(char *)(((int)this) + 0x18) == '\0') {
    ((ImmortalsRefineLockData *)this)->getInstance();
    iVar1 = ((ImmortalsRefineLockData *)this)->checkLockable();
    if (iVar1 == 0) {
      uVar3 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)uVar3)->showToast((char const*)&g_0056cdee + g_0056cdf8);
      return;
    }
  }
  bVar4 = *(byte *)(((int)this) + 0x18) ^ 1;
  *(byte *)(((int)this) + 0x18) = bVar4;
  if (bVar4 == 0) {
    ((ImmortalsRefineLockData *)this)->getInstance();
    ((ImmortalsRefineLockData *)this)->unLock();
  }
  else {
    ((ImmortalsRefineLockData *)this)->getInstance();
    ((ImmortalsRefineLockData *)this)->lock();
  }
  piVar2 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
  (**(code **)(*piVar2 + 0x90))(piVar2,*(undefined1 *)(((int)this) + 0x18));
  uVar3 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar3)->postNotification((char const*)&g_0056cde0 + g_0056cdf4);
  return;
}

BLImmortalsRefineLockPresenter::BLImmortalsRefineLockPresenter()
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
  func_0079e45c(&uStack_14,&g_0056cf14 + g_0056cf48,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(undefined1 *)(((int)this) + 6) = 0;
  return;
}

undefined4 BLImmortalsRefineLockPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLImmortalsRefineLockPresenter::onEnter()
{
  return;
}

void BLImmortalsRefineLockPresenter::onExit()
{
  return;
}

void BLImmortalsRefineLockPresenter::reset()
{
  *(undefined1 *)(((int)this) + 0x18) = 0;
  (**(code **)(**(int **)(*(int *)(((int)this) + 0x14) + 0x10c) + 0x90))();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
