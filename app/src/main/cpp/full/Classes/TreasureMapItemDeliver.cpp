#include "TreasureMapItemDeliver.h"
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
extern "C" unsigned long _DAT_004b8140;
extern "C" unsigned long _DAT_004b8144;
extern "C" unsigned long _DAT_004b8148;
extern "C" unsigned long _DAT_004b83c4;
extern "C" unsigned long _DAT_004b8638;
extern "C" unsigned long _DAT_004b8bf8;
extern "C" unsigned long _DAT_004b91a8;
extern "C" unsigned long g_004b8140;
extern "C" unsigned long g_004b8144;
extern "C" unsigned long g_004b8148;
extern "C" unsigned long g_004b83c4;
extern "C" unsigned long g_004b8638;
extern "C" unsigned long g_004b8bf8;
extern "C" unsigned long g_004b91a8;
void TreasureMapItemDeliver::beforeTrigger()
{
  return;
}

void TreasureMapItemDeliver::reset()
{
  *(undefined1 *)(((int)this) + 0x18) = 0;
  return;
}

undefined4 TreasureMapItemDeliver::toString()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  undefined1 auStack_14 [8];
  
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d%s%d%s%d%s%d"), *(undefined4 *)(p2 + 4), g_004b8148 + 0x4b812a, *(undefined1 *)(p2 + 0x18), g_004b8140 + 0x4b8114, *(undefined4 *)(p2 + 0x1c), g_004b8140 + 0x4b8114, *(undefined4 *)(p2 + 0x24));
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(((int)this),uVar1,auStack_14);
  return ((int)this);
}

void TreasureMapItemDeliver::onTrigger()
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(int *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x1c) + 1;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(*(undefined4 *)(((int)this) + 0x24)));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"MSG_TREASURE_EVENT_DELIVER"), (cocos2d::CCObject*)uVar2);
  return;
}

void TreasureMapItemDeliver::triggerEnd()
{
  *(undefined1 *)(((int)this) + 0x18) = 1;
  TreasureMapItemBase::triggerEnd();
  return;
}

TreasureMapItemDeliver::~TreasureMapItemDeliver()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  TreasureMapItemBase::~TreasureMapItemBase();
  return;
}

TreasureMapItemDeliver::TreasureMapItemDeliver()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(1)) = 10;
  *(undefined1 *)(((int)this) + 8) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void TreasureMapItemDeliver::initWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
