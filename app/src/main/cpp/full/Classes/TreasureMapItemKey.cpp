#include "TreasureMapItemKey.h"
#include "TreasureDataManager.h"
#include "TreasureInfoDynamicData.h"
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
extern "C" unsigned long _DAT_004b8210;
extern "C" unsigned long _DAT_004b8214;
extern "C" unsigned long _DAT_004b8218;
extern "C" unsigned long _DAT_004b85d8;
extern "C" unsigned long _DAT_004b8c70;
extern "C" unsigned long _DAT_004b934c;
extern "C" unsigned long g_004b8210;
extern "C" unsigned long g_004b8214;
extern "C" unsigned long g_004b8218;
extern "C" unsigned long g_004b85d8;
extern "C" unsigned long g_004b8c70;
extern "C" unsigned long g_004b934c;
void TreasureMapItemKey::beforeTrigger()
{
  return;
}

void TreasureMapItemKey::reset()
{
  return;
}

undefined4 TreasureMapItemKey::toString()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  undefined1 auStack_14 [8];
  
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d%s%d%s%d%s%d"), *(undefined4 *)(p2 + 4), g_004b8218 + 0x4b81fa, *(undefined1 *)(p2 + 0x18), g_004b8210 + 0x4b81e4, *(undefined4 *)(p2 + 0x1c), g_004b8210 + 0x4b81e4, *(undefined4 *)(p2 + 0x24));
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(((int)this),uVar1,auStack_14);
  return ((int)this);
}

void TreasureMapItemKey::onTrigger()
{
  int iVar1;
  
  *(int *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x1c) + 1;
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  ((TreasureInfoDynamicData *)*(undefined4 *)(iVar1 + 0x6c))->collectKey(*(undefined4 *)(((int)this) + 0x24));
  return;
}

void TreasureMapItemKey::triggerEnd()
{
  *(undefined1 *)(((int)this) + 0x18) = 1;
  TreasureMapItemBase::triggerEnd();
  return;
}

TreasureMapItemKey::~TreasureMapItemKey()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  TreasureMapItemBase::~TreasureMapItemBase();
  return;
}

TreasureMapItemKey::TreasureMapItemKey()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(1)) = 0xd;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void TreasureMapItemKey::initWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
