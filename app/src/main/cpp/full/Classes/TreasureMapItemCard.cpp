#include "TreasureMapItemCard.h"
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
extern "C" unsigned long _DAT_004b8078;
extern "C" unsigned long _DAT_004b807c;
extern "C" unsigned long _DAT_004b8080;
extern "C" unsigned long _DAT_004b86c8;
extern "C" unsigned long _DAT_004b8b5c;
extern "C" unsigned long _DAT_004b9018;
extern "C" unsigned long g_004b8078;
extern "C" unsigned long g_004b807c;
extern "C" unsigned long g_004b8080;
extern "C" unsigned long g_004b86c8;
extern "C" unsigned long g_004b8b5c;
extern "C" unsigned long g_004b9018;
void TreasureMapItemCard::beforeTrigger()
{
  return;
}

void TreasureMapItemCard::reset()
{
  *(undefined1 *)(((int)this) + 0x18) = 0;
  return;
}

undefined4 TreasureMapItemCard::toString()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  undefined1 auStack_14 [8];
  
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d%s%d%s%d%s%d"), *(undefined4 *)(p2 + 4), g_004b8080 + 0x4b8062, *(undefined1 *)(p2 + 0x18), g_004b8078 + 0x4b804c, *(undefined4 *)(p2 + 0x1c), g_004b8078 + 0x4b804c, *(undefined4 *)(p2 + 0x24));
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(((int)this),uVar1,auStack_14);
  return ((int)this);
}


void TreasureMapItemCard::triggerEnd()
{
  *(undefined1 *)(((int)this) + 0x18) = 1;
  TreasureMapItemBase::triggerEnd();
  return;
}

TreasureMapItemCard::~TreasureMapItemCard()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  TreasureMapItemBase::~TreasureMapItemBase();
  return;
}

TreasureMapItemCard::TreasureMapItemCard()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(1)) = 7;
  *(undefined1 *)(((int)this) + 8) = 0;
  return;
}

undefined4 TreasureMapItemCard::getHeroName()
{
  int iVar1;
  
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  func_0079e53c(((int)this),*(int *)(iVar1 + 0x70) + 0x4c);
  return ((int)this);
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void TreasureMapItemCard::onTrigger()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureMapItemCard::initWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
