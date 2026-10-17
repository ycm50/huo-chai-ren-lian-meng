#include "Pack4399Data.h"
#include "Pack4399SvrDataHandler.h"
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
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e48c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" unsigned long _DAT_0047c704;
extern "C" unsigned long _DAT_0047c708;
extern "C" unsigned long _DAT_0047c70c;
extern "C" unsigned long _DAT_0047c950;
extern "C" unsigned long _DAT_0047cd7c;
extern "C" unsigned long _DAT_0047cd80;
extern "C" unsigned long _DAT_0047cd84;
extern "C" unsigned long _DAT_0047cd88;
extern "C" unsigned long _DAT_0047cd8c;
extern "C" unsigned long _DAT_0047cd90;
extern "C" unsigned long _DAT_0047cd94;
extern "C" unsigned long _DAT_0047cd98;
extern "C" unsigned long _DAT_0047cd9c;
extern "C" unsigned long _DAT_0047cda0;
extern "C" unsigned long _DAT_0047cda4;
extern "C" unsigned long _DAT_0047cda8;
extern "C" unsigned long _DAT_0047cdac;
extern "C" unsigned long g_0047c704;
extern "C" unsigned long g_0047c708;
extern "C" unsigned long g_0047c70c;
extern "C" unsigned long g_0047c950;
extern "C" unsigned long g_0047cd7c;
extern "C" unsigned long g_0047cd80;
extern "C" unsigned long g_0047cd84;
extern "C" unsigned long g_0047cd88;
extern "C" unsigned long g_0047cd8c;
extern "C" unsigned long g_0047cd90;
extern "C" unsigned long g_0047cd94;
extern "C" unsigned long g_0047cd98;
extern "C" unsigned long g_0047cd9c;
extern "C" unsigned long g_0047cda0;
extern "C" unsigned long g_0047cda4;
extern "C" unsigned long g_0047cda8;
extern "C" unsigned long g_0047cdac;
Pack4399Data::~Pack4399Data()
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4*(1));
  iVar2 = *(int *)((int)this + 4*(2));
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 0xc) {
    func_0079e2bc(iVar1 + 8);
  }
  if (*(int *)((int)this + 4*(1)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(1)))));
  }
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0047c70c + 0x47c700) = 0;
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void Pack4399Data::getDataFromServer()
{
  undefined4 in_r3;
  
  ((Pack4399SvrDataHandler *)(1))->create(g_0047c950 + 0x47c94c, in_r3, (char const*)in_r3);
  return;
}

void Pack4399Data::saveDataToServer(char const* p1)
{
  undefined4 p4 = 0;

  ((Pack4399SvrDataHandler *)this)->create(1, 0, p1);
  return;
}

void Pack4399Data::parseInfo(char const* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
