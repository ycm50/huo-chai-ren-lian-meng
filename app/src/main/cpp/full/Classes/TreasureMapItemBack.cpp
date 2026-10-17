#include "TreasureMapItemBack.h"
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
extern "C" unsigned long _DAT_004b8030;
extern "C" unsigned long _DAT_004b8034;
extern "C" unsigned long _DAT_004b8038;
extern "C" unsigned long _DAT_004b839c;
extern "C" unsigned long _DAT_004b86f8;
extern "C" unsigned long _DAT_004b8b38;
extern "C" unsigned long _DAT_004b8f84;
extern "C" unsigned long g_004b8030;
extern "C" unsigned long g_004b8034;
extern "C" unsigned long g_004b8038;
extern "C" unsigned long g_004b839c;
extern "C" unsigned long g_004b86f8;
extern "C" unsigned long g_004b8b38;
extern "C" unsigned long g_004b8f84;
void TreasureMapItemBack::beforeTrigger()
{
  return;
}

void TreasureMapItemBack::reset()
{
  *(undefined1 *)(((int)this) + 0x18) = 0;
  return;
}


void TreasureMapItemBack::onTrigger()
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(int *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x1c) + 1;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(0xfffffffd));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"MSG_TREASURE_EVENT_BACK"), (cocos2d::CCObject*)uVar2);
  return;
}

void TreasureMapItemBack::triggerEnd()
{
  *(undefined1 *)(((int)this) + 0x18) = 1;
  TreasureMapItemBase::triggerEnd();
  return;
}

TreasureMapItemBack::~TreasureMapItemBack()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  TreasureMapItemBase::~TreasureMapItemBase();
  return;
}

TreasureMapItemBack::TreasureMapItemBack()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(1)) = 6;
  *(undefined1 *)(((int)this) + 8) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void TreasureMapItemBack::toString()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p4);
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d%s%d%s%d"), *(undefined4 *)(p2 + 4), g_004b8038 + 0x4b801a, *(undefined1 *)(p2 + 0x18), g_004b8030 + 0x4b800c, *(undefined4 *)(p2 + 0x1c), p3);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(((int)this),uVar1,&uStack_c);
  return;
}

void TreasureMapItemBack::initWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
