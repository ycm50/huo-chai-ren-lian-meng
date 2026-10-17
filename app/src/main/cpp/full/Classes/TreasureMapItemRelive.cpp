#include "TreasureMapItemRelive.h"
#include "TreasureDataManager.h"
#include "TreasureMapItemBase.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long _DAT_004b7fb0;
extern "C" unsigned long _DAT_004b7fb4;
extern "C" unsigned long _DAT_004b7fb8;
extern "C" unsigned long _DAT_004b8758;
extern "C" unsigned long _DAT_004b8aac;
extern "C" unsigned long _DAT_004b8e84;
extern "C" unsigned long g_004b7fb0;
extern "C" unsigned long g_004b7fb4;
extern "C" unsigned long g_004b7fb8;
extern "C" unsigned long g_004b8758;
extern "C" unsigned long g_004b8aac;
extern "C" unsigned long g_004b8e84;
void TreasureMapItemRelive::onTrigger()
{
  *(int *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x1c) + 1;
  return;
}

void TreasureMapItemRelive::reset()
{
  *(undefined1 *)(((int)this) + 0x18) = 0;
  return;
}


void TreasureMapItemRelive::beforeTrigger()
{
  ((TreasureDataManager *)this)->getInstance();
  ((TreasureDataManager *)this)->heroRelive();
  return;
}

void TreasureMapItemRelive::triggerEnd()
{
  *(undefined1 *)(((int)this) + 0x18) = 1;
  TreasureMapItemBase::triggerEnd();
  return;
}

TreasureMapItemRelive::~TreasureMapItemRelive()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  TreasureMapItemBase::~TreasureMapItemBase();
  return;
}

TreasureMapItemRelive::TreasureMapItemRelive()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(1)) = 3;
  *(undefined1 *)(((int)this) + 8) = 0;
  return;
}

undefined4 TreasureMapItemRelive::getHeroName()
{
  int iVar1;
  
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  func_0079e53c(((int)this),*(int *)(iVar1 + 0x70) + 0x44);
  return ((int)this);
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void TreasureMapItemRelive::toString()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p4);
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d%s%d%s%d"), *(undefined4 *)(p2 + 4), g_004b7fb8 + 0x4b7f9a, *(undefined1 *)(p2 + 0x18), g_004b7fb0 + 0x4b7f8c, *(undefined4 *)(p2 + 0x1c), p3);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(((int)this),uVar1,&uStack_c);
  return;
}

void TreasureMapItemRelive::initWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
