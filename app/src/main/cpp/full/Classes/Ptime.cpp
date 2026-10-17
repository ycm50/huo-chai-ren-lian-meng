#include "Ptime.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e56c(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long func_0079e974(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006d0d44;
extern "C" unsigned long UNK_006d0da2;
extern "C" unsigned long _DAT_0042573c;
extern "C" unsigned long _DAT_00425740;
extern "C" unsigned long _DAT_006d0c54;
extern "C" unsigned long _DAT_006d0d30;
extern "C" unsigned long _DAT_006d0d34;
extern "C" unsigned long _UNK_006d0dcc;
extern "C" unsigned long _UNK_006d0dd0;
extern "C" unsigned long g_0042573c;
extern "C" unsigned long g_00425740;
extern "C" unsigned long g_006d0c54;
extern "C" unsigned long g_006d0d30;
extern "C" unsigned long g_006d0d34;
extern "C" unsigned long g_006d0d44;
extern "C" unsigned long g_006d0da2;
extern "C" unsigned long g_006d0dcc;
extern "C" unsigned long g_006d0dd0;
undefined4 Ptime::getMe()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_0042573c + 0x42571c);
  if ((-1 < *piVar2 << 0x1f) && (iVar1 = func_0079e33c(piVar2), iVar1 != 0)) {
    func_0079e38c(piVar2);
  }
  return *(undefined4 *)(g_00425740 + 0x425738);
}

undefined8 Ptime::year(long p1) const
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = (undefined4)(p1);
  uStack_8 = (undefined4)(p3);
  iVar1 = ((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_c)));
  return ghidra_CONCAT44(((int)this),*(int *)(iVar1 + 0x14) + g_006d0c54);
}

undefined8 Ptime::mouth(long p1) const
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = (undefined4)(p1);
  uStack_8 = (undefined4)(p3);
  iVar1 = ((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_c)));
  return ghidra_CONCAT44(((int)this),*(int *)(iVar1 + 0x10) + 1);
}

undefined8 Ptime::day(long p1) const
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = (undefined4)(p1);
  uStack_8 = (undefined4)(p3);
  iVar1 = ((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_c)));
  return ghidra_CONCAT44(((int)this),*(undefined4 *)(iVar1 + 0xc));
}

undefined8 Ptime::hour(long p1) const
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = (undefined4)(p1);
  uStack_8 = (undefined4)(p3);
  iVar1 = ((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_c)));
  return ghidra_CONCAT44(((int)this),*(undefined4 *)(iVar1 + 8));
}

undefined8 Ptime::minute(long p1) const
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = (undefined4)(p1);
  uStack_8 = (undefined4)(p3);
  iVar1 = ((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_c)));
  return ghidra_CONCAT44(((int)this),*(undefined4 *)(iVar1 + 4));
}

undefined8 Ptime::second(long p1) const
{
  undefined4 p3 = 0;

  undefined4 *puVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = (undefined4)(p1);
  uStack_8 = (undefined4)(p3);
  puVar1 = (undefined4 *)((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_c)));
  return ghidra_CONCAT44(((int)this),*puVar1);
}

void Ptime::ConvertExactSecond(long p1) const
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [32];
  int iStack_1c;
  
  piVar7 = *(int **)(g_006d0d30 + 0x6d0cac);
  iStack_1c = (int)*(int *)&(*piVar7);
  (void)(((long long)::memset((void *)(auStack_3c),(int)(0),(size_t)(0x1e))));
  uVar1 = (undefined4)(((Ptime *)p1)->year(p3));
  uVar2 = (undefined4)(((Ptime *)p1)->mouth(p3));
  uVar3 = (undefined4)(((Ptime *)p1)->day(p3));
  uVar4 = (undefined4)(((Ptime *)p1)->hour(p3));
  uVar5 = (undefined4)(((Ptime *)p1)->minute(p3));
  uVar6 = (undefined4)(((Ptime *)p1)->second(p3));
  (void)(((long long)::sprintf((char *)(auStack_3c),(char const *)("%d年%d月%d日 %d:%d:%d"),uVar1,uVar2,uVar3,uVar4,uVar5,uVar6)));
  func_0079e45c(((int)this),auStack_3c,auStack_40);
  if (iStack_1c != *piVar7) {
    func_0079e914(((int)this));
  }
  return;
}

void Ptime::GetLocalTime() const
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined1 auStack_3c [32];
  int iStack_1c;
  
  piVar7 = *(int **)(&g_006d0d44 + g_006d0dcc);
  iStack_1c = (int)*(int *)&(*piVar7);
  (void)(((long long)::time((time_t *)(void *)(&uStack_40))));
  (void)(((long long)::memset((void *)(auStack_3c),(int)(0),(size_t)(0x1e))));
  uVar1 = (undefined4)(((Ptime *)p2)->year(uStack_40));
  uVar2 = (undefined4)(((Ptime *)p2)->mouth(uStack_40));
  uVar3 = (undefined4)(((Ptime *)p2)->day(uStack_40));
  uVar4 = (undefined4)(((Ptime *)p2)->hour(uStack_40));
  uVar5 = (undefined4)(((Ptime *)p2)->minute(uStack_40));
  uVar6 = (undefined4)(((Ptime *)p2)->second(uStack_40));
  (void)(((long long)::sprintf((char *)(auStack_3c),(char const *)(&g_006d0da2 + g_006d0dd0),uVar1,uVar2,uVar3,uVar4,uVar5,uVar6)));
  func_0079e45c(((int)this),auStack_3c,auStack_44);
  if (iStack_1c != *piVar7) {
    func_0079e914(((int)this));
  }
  return;
}
