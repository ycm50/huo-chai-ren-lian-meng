#include "BLEventListener.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e53c(...);
extern "C" unsigned long _DAT_004be390;
extern "C" unsigned long _DAT_004be458;
extern "C" unsigned long g_004be390;
extern "C" unsigned long g_004be458;
void BLEventListener::onDispatch(BLEvent* p1)
{
  return;
}

BLEventListener::BLEventListener()
{
  int iVar1;
  int iVar2;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = ((long long)::operator new((size_t)(0x18)));
  iVar2 = iVar1 + 4;
  (void)(((long long)::memset((void *)(iVar2),(int)(0),(size_t)(0x10))));
  *(int *)(iVar1 + 0xc) = iVar2;
  *(int *)(iVar1 + 0x10) = iVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(int *)((int)this + 4*(1)) = iVar1;
  return;
}

BLEventListener::~BLEventListener()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (1) =====
