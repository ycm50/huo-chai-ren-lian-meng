#include "MonthlyContractData.h"
#include "CampaignData.h"
#include "DataManager.h"
#include "ItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e56c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e774(...);
extern "C" long long func_0079ea54(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0045ea20;
extern "C" unsigned long _DAT_0045ea24;
extern "C" unsigned long _DAT_0045ea28;
extern "C" unsigned long _DAT_0045eba0;
extern "C" unsigned long _DAT_0045eba4;
extern "C" unsigned long _DAT_0045ec78;
extern "C" unsigned long _DAT_0045ec7c;
extern "C" unsigned long _DAT_0045ec80;
extern "C" unsigned long _DAT_0045ec84;
extern "C" unsigned long _DAT_0045ec88;
extern "C" unsigned long _DAT_0045ec8c;
extern "C" unsigned long _DAT_0045ec90;
extern "C" unsigned long _DAT_0045ec94;
extern "C" unsigned long _DAT_0045ed68;
extern "C" unsigned long _DAT_0045ed6c;
extern "C" unsigned long _DAT_0045ed70;
extern "C" unsigned long _DAT_0045ed74;
extern "C" unsigned long _DAT_0045ed78;
extern "C" unsigned long _DAT_0045ee38;
extern "C" unsigned long _DAT_0045ee3c;
extern "C" unsigned long _DAT_0045f960;
extern "C" unsigned long _DAT_0045f964;
extern "C" unsigned long _DAT_0045f968;
extern "C" unsigned long _DAT_0045fb14;
extern "C" unsigned long _DAT_0045fb18;
extern "C" unsigned long _DAT_0045fb1c;
extern "C" unsigned long g_0045ea20;
extern "C" unsigned long g_0045ea24;
extern "C" unsigned long g_0045ea28;
extern "C" unsigned long g_0045eba0;
extern "C" unsigned long g_0045eba4;
extern "C" unsigned long g_0045ec78;
extern "C" unsigned long g_0045ec7c;
extern "C" unsigned long g_0045ec80;
extern "C" unsigned long g_0045ec84;
extern "C" unsigned long g_0045ec88;
extern "C" unsigned long g_0045ec8c;
extern "C" unsigned long g_0045ec90;
extern "C" unsigned long g_0045ec94;
extern "C" unsigned long g_0045ed68;
extern "C" unsigned long g_0045ed6c;
extern "C" unsigned long g_0045ed70;
extern "C" unsigned long g_0045ed74;
extern "C" unsigned long g_0045ed78;
extern "C" unsigned long g_0045ee38;
extern "C" unsigned long g_0045ee3c;
extern "C" unsigned long g_0045f960;
extern "C" unsigned long g_0045f964;
extern "C" unsigned long g_0045f968;
extern "C" unsigned long g_0045fb14;
extern "C" unsigned long g_0045fb18;
extern "C" unsigned long g_0045fb1c;
MonthlyContractData::~MonthlyContractData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 0x12);
  func_0079e2bc(((int)this) + 0x11);
  func_0079e2bc(((int)this) + 0x10);
  func_0079e2bc(((int)this) + 0xf);
  func_0079e2bc(((int)this) + 0xe);
  func_0079e2bc(((int)this) + 0xd);
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0045ea28 + 0x45ea1c) = 0;
  return;
}

void MonthlyContractData::sendGetRewardTimeServer()
{
  return;
}

bool MonthlyContractData::isTodayGet()
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  uStack_24 = func_0079e774(*(undefined4 *)(((int)this) + 0x20),*(undefined4 *)(((int)this) + 0x24),
                              g_0045eba0,g_0045eba4);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x118))(&uStack_20,piVar1);
  uVar7 = ((long long)::atoll((const char *)(uStack_20)));
  auStack_1c[0] =
       func_0079e774((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),g_0045eba0,g_0045eba4);
  iVar2 = ((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_24)));
  iVar3 = *(int *)(iVar2 + 0x14);
  iVar4 = *(int *)(iVar2 + 0x10);
  iVar5 = *(int *)(iVar2 + 0x1c);
  iVar2 = ((long long)(intptr_t)::localtime((time_t *)(void *)(auStack_1c)));
  bVar6 = false;
  if ((iVar5 == *(int *)(iVar2 + 0x1c)) && (iVar4 == *(int *)(iVar2 + 0x10))) {
    bVar6 = iVar3 == *(int *)(iVar2 + 0x14);
  }
  func_0079e2bc(&uStack_20);
  return bVar6;
}

MonthlyContractData::MonthlyContractData()
{
  int iVar1;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = *(int *)(g_0045ec7c + 0x45ebbe) + 0xc;
  *(int *)((int)this + 4*(0xd)) = iVar1;
  *(int *)((int)this + 4*(0xe)) = iVar1;
  *(int *)((int)this + 4*(0xf)) = iVar1;
  *(int *)((int)this + 4*(0x10)) = iVar1;
  *(int *)((int)this + 4*(0x11)) = iVar1;
  *(int *)((int)this + 4*(0x12)) = iVar1;
  func_0079e2dc(((int)this) + 0xd,((intptr_t)"160003_1,90002_10,1_50000"));
  func_0079e2dc(((int)this) + 0xe,((intptr_t)"160003_5,2_300,1_300000"));
  func_0079e2dc(((int)this) + 0xf,((intptr_t)"160003_2,90002_20,1_100000"));
  func_0079e2dc(((int)this) + 0x10,((intptr_t)"160003_10,2_500,1_500000"));
  func_0079e2dc(((int)this) + 0x11,((intptr_t)"160003_3,90002_30,1_200000"));
  func_0079e2dc(((int)this) + 0x12,((intptr_t)"90016_1,160003_10,1_500000"));
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = (int)((int)this);
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(undefined1 *)(((int)this) + 4) = 0;
  return;
}

undefined4 MonthlyContractData::getUnusedDays()
{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  uStack_24 = func_0079e774(*(undefined4 *)(((int)this) + 0x20),*(undefined4 *)(((int)this) + 0x24),
                              g_0045ed68,g_0045ed6c);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
  (**(code **)(*piVar2 + 0x118))(&uStack_20,piVar2);
  uVar10 = ((long long)::atoll((const char *)(uStack_20)));
  auStack_1c[0] =
       func_0079e774((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),g_0045ed68,g_0045ed6c);
  iVar3 = ((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_24)));
  uVar4 = (undefined4)(*(undefined4 *)(iVar3 + 0xc));
  iVar9 = *(int *)(iVar3 + 0x1c);
  iVar5 = *(int *)(iVar3 + 0x14);
  iVar3 = ((long long)(intptr_t)::localtime((time_t *)(void *)(auStack_1c)));
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar3 = *(int *)(iVar3 + 0x1c);
  lVar11 = ((long long)::atoll((const char *)(uStack_20)));
  if (lVar11 != 0) {
    if ((iVar9 == iVar3) && (iVar5 == iVar6)) {
      uVar4 = (undefined4)(0);
    }
    else {
      uVar7 = (undefined4)(*(uint *)(((int)this) + 0x20));
      iVar3 = *(int *)(((int)this) + 0x24);
      uVar10 = ((long long)::atoll((const char *)(uStack_20)));
      uVar8 = (undefined4)(iVar3 - (int)((ulonglong)uVar10 >> 0x20));
      uVar1 = (undefined4)((uint)(uVar7 < (uint)uVar10));
      if (((int)(uVar8 - uVar1) < 1) &&
         ((uVar8 != uVar1 || (uVar7 - (uint)uVar10 <= g_0045ed78)))) {
        uVar4 = (undefined4)(1);
      }
      else {
        uVar8 = (undefined4)(*(uint *)(((int)this) + 0x20));
        iVar3 = *(int *)(((int)this) + 0x24);
        uVar10 = ((long long)::atoll((const char *)(uStack_20)));
        uVar4 = func_0079e774(uVar8 - (uint)uVar10,
                                (iVar3 - (int)((ulonglong)uVar10 >> 0x20)) -
                                (uint)(uVar8 < (uint)uVar10),g_0045ed70,g_0045ed74);
      }
    }
  }
  func_0079e2bc(&uStack_20);
  return uVar4;
}

int MonthlyContractData::getUnusedMons()
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  uStack_28 = func_0079e774(*(undefined4 *)(((int)this) + 0x20),*(undefined4 *)(((int)this) + 0x24),
                              g_0045ee38,g_0045ee3c);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x118))(&uStack_24,piVar1);
  uVar8 = ((long long)::atoll((const char *)(uStack_24)));
  uStack_20 = func_0079e774((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),g_0045ee38,g_0045ee3c
                             );
  auStack_1c[0] =
       func_0079e774(*(undefined4 *)(((int)this) + 0x28),*(undefined4 *)(((int)this) + 0x2c),g_0045ee38
                       ,g_0045ee3c);
  iVar2 = ((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_28)));
  iVar4 = *(int *)(iVar2 + 0x10);
  iVar5 = *(int *)(iVar2 + 0x14);
  iVar3 = ((long long)(intptr_t)::localtime((time_t *)(void *)(&uStack_20)));
  iVar2 = *(int *)(iVar3 + 0x10);
  iVar7 = *(int *)(iVar3 + 0x14);
  iVar3 = ((long long)(intptr_t)::localtime((time_t *)(void *)(auStack_1c)));
  iVar6 = *(int *)(iVar3 + 0x10);
  if (((iVar6 != 0) && (*(int *)(iVar3 + 0x14) == iVar7)) && (1 < iVar6 - iVar2)) {
    iVar2 = iVar6;
  }
  lVar9 = ((long long)::atoll((const char *)(uStack_24)));
  iVar3 = 1;
  if (lVar9 != 0) {
    iVar3 = (iVar4 - iVar2) + (iVar5 - iVar7) * 0xc;
  }
  func_0079e2bc(&uStack_24);
  return iVar3;
}


void MonthlyContractData::getDataFromServer()
{
  return;
}

void MonthlyContractData::saveDataToServer(char const* p1)
{
  return;
}




void MonthlyContractData::parseInfo(char const* p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
bool MonthlyContractData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 MonthlyContractData::buySuccessed()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 * MonthlyContractData::getDayRewards(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void MonthlyContractData::getMonthRewards(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
