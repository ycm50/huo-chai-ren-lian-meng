#include "LivenessItemData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004896a0;
extern "C" unsigned long _DAT_004896a4;
extern "C" unsigned long _DAT_004896a8;
extern "C" unsigned long _DAT_004896ac;
extern "C" unsigned long _DAT_004896b0;
extern "C" unsigned long _DAT_004899d0;
extern "C" unsigned long _DAT_004899d4;
extern "C" unsigned long _DAT_004899d8;
extern "C" unsigned long _DAT_004899dc;
extern "C" unsigned long _DAT_004899e0;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long g_004896a0;
extern "C" unsigned long g_004896a4;
extern "C" unsigned long g_004896a8;
extern "C" unsigned long g_004896ac;
extern "C" unsigned long g_004896b0;
extern "C" unsigned long g_004899d0;
extern "C" unsigned long g_004899d4;
extern "C" unsigned long g_004899d8;
extern "C" unsigned long g_004899dc;
extern "C" unsigned long g_004899e0;
LivenessItemData::LivenessItemData()
{
  int iVar1;
  
  iVar1 = *(int *)(g_004896a0 + 0x48962c) + 0xc;
  *(int *)((int)this + 4*(1)) = iVar1;
  *(int *)((int)this + 4*(3)) = iVar1;
  *(int *)((int)this + 4*(4)) = iVar1;
  iVar1 = g_004896a4;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)this = 0;
  func_0079e2dc(((int)this) + 1,iVar1 + 0x48964c);
  iVar1 = g_004896a8;
  *(int *)((int)this + 4*(2)) = 0;
  func_0079e2dc(((int)this) + 3,iVar1 + 0x489662);
  func_0079e2dc(((int)this) + 4,g_004896ac + 0x48966c);
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(8)) = *(int *)((int)this + 4*(7));
  *(int *)((int)this + 4*(10)) = g_004896b0;
  return;
}

LivenessItemData::~LivenessItemData()
{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(((int)this) + 0x1c); puVar1 != *(undefined4 **)(((int)this) + 0x20);
      puVar1 = puVar1 + 1) {
    (void)(::operator delete((void *)(*puVar1)));
  }
  *(int *)(((int)this) + 0x20) = *(int *)(((int)this) + 0x1c);
  if (*(int *)(((int)this) + 0x1c) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x1c))));
  }
  func_0079e2bc(((int)this) + 0x10);
  func_0079e2bc(((int)this) + 0xc);
  func_0079e2bc(((int)this) + 4);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void LivenessItemData::initWith(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
