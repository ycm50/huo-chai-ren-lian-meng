#include "TreasureMapItemReward.h"
#include "TreasureDataManager.h"
#include "TreasureMapItemBase.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e874(...);
extern "C" unsigned long _DAT_004b82a4;
extern "C" unsigned long _DAT_004b82a8;
extern "C" unsigned long _DAT_004b82ac;
extern "C" unsigned long _DAT_004b82b0;
extern "C" unsigned long _DAT_004b82b4;
extern "C" unsigned long _DAT_004b82b8;
extern "C" unsigned long _DAT_004b8874;
extern "C" unsigned long _DAT_004b8af0;
extern "C" unsigned long _DAT_004b9994;
extern "C" unsigned long _DAT_004b9998;
extern "C" unsigned long _DAT_004b999c;
extern "C" unsigned long _DAT_004b99a0;
extern "C" unsigned long _DAT_004b99a4;
extern "C" unsigned long g_004b82a4;
extern "C" unsigned long g_004b82a8;
extern "C" unsigned long g_004b82ac;
extern "C" unsigned long g_004b82b0;
extern "C" unsigned long g_004b82b4;
extern "C" unsigned long g_004b82b8;
extern "C" unsigned long g_004b8874;
extern "C" unsigned long g_004b8af0;
extern "C" unsigned long g_004b9994;
extern "C" unsigned long g_004b9998;
extern "C" unsigned long g_004b999c;
extern "C" unsigned long g_004b99a0;
extern "C" unsigned long g_004b99a4;
void TreasureMapItemReward::onTrigger()
{
  *(int *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x1c) + 1;
  return;
}

void TreasureMapItemReward::reset()
{
  *(undefined1 *)(((int)this) + 0x18) = 0;
  return;
}

undefined4 TreasureMapItemReward::toString()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar2 = (undefined4)(*(undefined4 *)(p2 + 0x1c));
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d%s%d%s%d"), *(undefined4 *)(p2 + 4), g_004b82ac + 0x4b8238, *(undefined1 *)(p2 + 0x18), g_004b82a4 + 0x4b8228, uVar2);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(((int)this),uVar1,auStack_1c);
  for (puVar3 = *(undefined4 **)(p2 + 0x24); puVar3 != *(undefined4 **)(p2 + 0x28);
      puVar3 = puVar3 + 2) {
    cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%s%s%s%d"), g_004b82b4 + 0x4b8268, *puVar3, g_004b82b8 + 0x4b826a, puVar3[1], uVar2);
    uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    func_0079e45c(auStack_1c,uVar1,auStack_20);
    func_0079e874(((int)this),auStack_1c);
    func_0079e2bc(auStack_1c);
  }
  return ((int)this);
}


void TreasureMapItemReward::triggerEnd()
{
  *(undefined1 *)(((int)this) + 0x18) = 1;
  TreasureMapItemBase::triggerEnd();
  return;
}

TreasureMapItemReward::~TreasureMapItemReward()
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4*(9));
  iVar2 = *(int *)((int)this + 4*(10));
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 8) {
    func_0079e2bc(iVar1);
  }
  if (*(int *)((int)this + 4*(9)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(9)))));
  }
  TreasureMapItemBase::~TreasureMapItemBase();
  return;
}

TreasureMapItemReward::TreasureMapItemReward()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(g_004b8af0 + 0x4b8ad8);
  *(int *)((int)this + 4*(1)) = 4;
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(undefined1 *)(((int)this) + 8) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void TreasureMapItemReward::beforeTrigger()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureMapItemReward::initWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
