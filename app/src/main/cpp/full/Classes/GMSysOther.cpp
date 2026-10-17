#include "GMSysOther.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00442124;
extern "C" unsigned long _DAT_00442128;
extern "C" unsigned long _DAT_0044212c;
extern "C" unsigned long g_00442124;
extern "C" unsigned long g_00442128;
extern "C" unsigned long g_0044212c;
GMSysOther::~GMSysOther()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  ((std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>> *)((int)this) + 7)->~map();
  ((std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>> *)((int)this) + 1)->~map();
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0044212c + 0x44211e) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
undefined8 GMSysOther::setendlessattlv(int p1, int p2)
{
  undefined4 *puVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p1);
  puVar1 = (undefined4 *)((std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>> *)(((int)this) + 4))->operator[](*(int const*)&uStack_c);
  *puVar1 = p2;
  return ghidra_CONCAT44(uStack_c,((int)this));
}

undefined8 GMSysOther::setendlesstime(int p1, int p2)
{
  undefined4 *puVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p1);
  puVar1 = (undefined4 *)((std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>> *)(((int)this) + 0x1c))->operator[](*(int const*)&uStack_c);
  *puVar1 = p2;
  return ghidra_CONCAT44(uStack_c,((int)this));
}
