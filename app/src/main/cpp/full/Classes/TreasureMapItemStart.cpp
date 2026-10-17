#include "TreasureMapItemStart.h"
#include "TreasureMapItemBase.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004b7eb0;
extern "C" unsigned long _DAT_004b85a8;
extern "C" unsigned long _DAT_004b8934;
extern "C" unsigned long g_004b7eb0;
extern "C" unsigned long g_004b85a8;
extern "C" unsigned long g_004b8934;
void TreasureMapItemStart::onTrigger()
{
  return;
}

void TreasureMapItemStart::reset()
{
  return;
}

void TreasureMapItemStart::initWithData(std::string p1)
{
  return;
}

undefined8 TreasureMapItemStart::toString()
{
  undefined4 p2 = 0;

  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p2);
  func_0079e45c(((int)this),g_004b7eb0 + 0x4b7ea8,&uStack_c);
  return ghidra_CONCAT44(((int)this),((int)this));
}

TreasureMapItemStart::~TreasureMapItemStart()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  TreasureMapItemBase::~TreasureMapItemBase();
  return;
}

TreasureMapItemStart::TreasureMapItemStart()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = *(int *)(g_004b8934 + 0x4b8910);
  *(int *)((int)this + 4*(4)) = -1;
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(1)) = 0x14;
  *(undefined1 *)(((int)this) + 3) = 1;
  *(undefined1 *)((int)((int)this) + 0xd) = 1;
  *(undefined1 *)(((int)this) + 6) = 1;
  *(int *)((int)this + 4*(7)) = 1;
  *(int *)((int)this + 4*(2)) = 0;
  *(undefined1 *)(((int)this) + 8) = 0;
  return;
}
