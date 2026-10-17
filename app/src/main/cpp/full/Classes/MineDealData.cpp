#include "MineDealData.h"
#include "MineData.h"
#include "MineitemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00490388;
extern "C" unsigned long _DAT_0049038c;
extern "C" unsigned long _DAT_00490390;
extern "C" unsigned long _DAT_00490488;
extern "C" unsigned long _DAT_0049048c;
extern "C" unsigned long _DAT_00490490;
extern "C" unsigned long _DAT_00490494;
extern "C" unsigned long _DAT_00490794;
extern "C" unsigned long _DAT_00490798;
extern "C" unsigned long _DAT_0049079c;
extern "C" unsigned long _DAT_004907a0;
extern "C" unsigned long _DAT_004907a4;
extern "C" unsigned long g_00490388;
extern "C" unsigned long g_0049038c;
extern "C" unsigned long g_00490390;
extern "C" unsigned long g_00490488;
extern "C" unsigned long g_0049048c;
extern "C" unsigned long g_00490490;
extern "C" unsigned long g_00490494;
extern "C" unsigned long g_00490794;
extern "C" unsigned long g_00490798;
extern "C" unsigned long g_0049079c;
extern "C" unsigned long g_004907a0;
extern "C" unsigned long g_004907a4;
MineDealData::~MineDealData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x27)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x24)->~vector();
  ((MineitemData *)((int)this) + 4)->~MineitemData();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 1)->~vector();
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_00490390 + 0x490382) = 0;
  return;
}

MineDealData::MineDealData()
{
  int iVar1;
  int iVar2;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = g_00490490;
  iVar2 = *(int *)(g_0049048c + 0x4903c4);
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  iVar2 = iVar2 + 0xc;
  *(int *)((int)this + 4*(4)) = iVar2;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(8)) = iVar2;
  *(int *)((int)this + 4*(10)) = iVar2;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(0x1a)) = 0;
  *(int *)((int)this + 4*(0x1b)) = 0;
  *(int *)((int)this + 4*(0x1c)) = 0;
  *(int *)((int)this + 4*(0x1d)) = 0;
  *(int *)((int)this + 4*(0x1e)) = 0;
  *(int *)((int)this + 4*(0x1f)) = 0;
  *(int *)((int)this + 4*(0x20)) = 0;
  *(int *)((int)this + 4*(0x21)) = 0;
  *(int *)((int)this + 4*(0x22)) = 0;
  func_0079e2dc(((int)this) + 4,iVar1 + 0x4903f4);
  iVar1 = g_00490494;
  *(int *)((int)this + 4*(9)) = 0;
  func_0079e2dc(((int)this) + 10,iVar1 + 0x490406);
  *(int *)((int)this + 4*(0x1b)) = *(int *)((int)this + 4*(0x1a));
  *(int *)((int)this + 4*(0x21)) = *(int *)((int)this + 4*(0x20));
  *(int *)((int)this + 4*(0x1e)) = *(int *)((int)this + 4*(0x1d));
  *(int *)((int)this + 4*(0x24)) = 0;
  *(int *)((int)this + 4*(0x25)) = 0;
  *(int *)((int)this + 4*(0x26)) = 0;
  *(int *)((int)this + 4*(0x27)) = 0;
  *(int *)((int)this + 4*(0x28)) = 0;
  *(int *)((int)this + 4*(0x29)) = 0;
  *(int *)((int)this + 4*(2)) = *(int *)((int)this + 4*(1));
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void MineDealData::Deletemineheroitem(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int * MineDealData::getminecolllecthero()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}
