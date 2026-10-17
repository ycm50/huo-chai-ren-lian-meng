#include "BLMonthlyContractUI.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "BLMonthlyContractView.h"
#include "UIObject.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long UNK_00552e1e;
extern "C" unsigned long UNK_00552f38;
extern "C" unsigned long UNK_00552f3a;
extern "C" unsigned long _DAT_004e7b74;
extern "C" unsigned long _DAT_004e7b78;
extern "C" unsigned long _DAT_004e7b7c;
extern "C" unsigned long _UNK_00552e2c;
extern "C" unsigned long _UNK_00552f54;
extern "C" unsigned long _UNK_00552f58;
extern "C" unsigned long g_004e7b74;
extern "C" unsigned long g_004e7b78;
extern "C" unsigned long g_004e7b7c;
extern "C" unsigned long g_00552e1e;
extern "C" unsigned long g_00552e2c;
extern "C" unsigned long g_00552f38;
extern "C" unsigned long g_00552f3a;
extern "C" unsigned long g_00552f54;
extern "C" unsigned long g_00552f58;

int * BLMonthlyContractUI::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x28)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

BLMonthlyContractUI::~BLMonthlyContractUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  UIObject::~UIObject();
  return;
}

void BLMonthlyContractUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00552f38 + g_00552f58),
                              *(undefined4 *)(&g_00552f3a + g_00552f54),0), iVar1 != 0)) {
    piVar2 = (int *)((BLMonthlyContractView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x28))(piVar2,p1);
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
BLMonthlyContractUI::BLMonthlyContractUI()
{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)(auStack_50) = ((cocos2d::CCDirector *)(uVar1))->getWinSize();
  piVar2 = (int *)((BLMonthlyContractView *)this)->create();
  *(int *)((int)this + 4*(9)) = (int)piVar2;
  pcVar3 = *(code **)(*piVar2 + 0x4c);
  ((cocos2d::CCSize *)(auStack_50))->operator/(0x40000000);
  piVar2 = (int *)*(int *)((int)this + 4*(9));
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  ((cocos2d::CCSize *)(uVar1))->operator/(0x40000000);
  ((cocos2d::CCSize *)(auStack_30))->operator-(*(const CCSize *)(void *)auStack_28);
  0 /* ctorZero */;
  ((cocos2d::CCSize *)(auStack_38))->operator+(*(const CCSize *)(void *)auStack_20);
  0 /* ctorZero */;
  (*pcVar3)(piVar2,auStack_48);
  (**(code **)(*(int *)*(int *)((int)this + 4*(6)) + 200))((int *)*(int *)((int)this + 4*(6)),*(int *)((int)this + 4*(9)));
  return;
}
