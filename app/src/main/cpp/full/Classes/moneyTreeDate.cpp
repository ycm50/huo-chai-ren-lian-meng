#include "moneyTreeDate.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" unsigned long UNK_005d1236;
extern "C" unsigned long _DAT_005d1288;
extern "C" unsigned long _DAT_005d12b8;
extern "C" unsigned long _UNK_005d1250;
extern "C" unsigned long g_005d1236;
extern "C" unsigned long g_005d1250;
extern "C" unsigned long g_005d1288;
extern "C" unsigned long g_005d12b8;
moneyTreeDate::~moneyTreeDate()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  if (*(int *)((int)this + 4*(5)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(5)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

moneyTreeDate::moneyTreeDate()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  return;
}

int moneyTreeDate::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_005d12b8 + 0x5d1294);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x20)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}
