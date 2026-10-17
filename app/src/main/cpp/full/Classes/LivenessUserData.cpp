#include "LivenessUserData.h"
#include "DBUtil.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "LivenessData.h"
#include "LivenessUserItemData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0048a4b0;
extern "C" unsigned long _DAT_0048a574;
extern "C" unsigned long _DAT_0048a8fc;
extern "C" unsigned long _DAT_0048a900;
extern "C" unsigned long _DAT_0048a904;
extern "C" unsigned long _DAT_0048a908;
extern "C" unsigned long _DAT_0048a90c;
extern "C" unsigned long _DAT_0048a910;
extern "C" unsigned long _DAT_0048a914;
extern "C" unsigned long _DAT_0048a918;
extern "C" unsigned long _DAT_0048aaf4;
extern "C" unsigned long _DAT_0048aaf8;
extern "C" unsigned long _DAT_0048aafc;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r2_00;
extern "C" unsigned long g_0048a4b0;
extern "C" unsigned long g_0048a574;
extern "C" unsigned long g_0048a8fc;
extern "C" unsigned long g_0048a900;
extern "C" unsigned long g_0048a904;
extern "C" unsigned long g_0048a908;
extern "C" unsigned long g_0048a90c;
extern "C" unsigned long g_0048a910;
extern "C" unsigned long g_0048a914;
extern "C" unsigned long g_0048a918;
extern "C" unsigned long g_0048aaf4;
extern "C" unsigned long g_0048aaf8;
extern "C" unsigned long g_0048aafc;
void LivenessUserData::sortByLivness()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar7 = (undefined4)(*(int *)(((int)this) + 0x1c) - *(int *)(((int)this) + 0x18) >> 2);
  while (uVar7 = uVar7 - 1, uVar7 != 0) {
    uVar9 = (undefined4)(0);
    while (uVar8 = uVar9, uVar8 < uVar7) {
      piVar1 = (int *)((DataCacheManager *)this)->shareManager();
      uVar2 = (undefined4)((**(code **)(*piVar1 + 200))());
      iVar10 = ((int)this) + 0x18;
      puVar3 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar10)->at((unsigned int)uVar8);
      iVar4 = ((LivenessData *)uVar2)->getItemData(*puVar3);
      piVar1 = (int *)((DataCacheManager *)this)->shareManager();
      uVar9 = (undefined4)(uVar8 + 1);
      uVar2 = (undefined4)((**(code **)(*piVar1 + 200))());
      puVar3 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar10)->at((unsigned int)uVar9);
      iVar5 = ((LivenessData *)uVar2)->getItemData(*puVar3);
      if (*(int *)(iVar5 + 0x14) < *(int *)(iVar4 + 0x14)) {
        puVar3 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar10)->at((unsigned int)uVar8);
        uVar2 = (undefined4)(*puVar3);
        puVar3 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar10)->at((unsigned int)uVar8);
        puVar6 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar10)->at((unsigned int)uVar9);
        *puVar3 = (int)*(int *)&(*puVar6);
        puVar3 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar10)->at((unsigned int)uVar9);
        *puVar3 = uVar2;
      }
    }
  }
  return;
}

LivenessUserData::~LivenessUserData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}


longlong LivenessUserData::sortByStatus()
{
  undefined4 p2 = 0;

  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uStack_1c;
  
  uVar5 = (undefined4)(*(int *)(((int)this) + 0x10) - *(int *)(((int)this) + 0xc) >> 2);
  uStack_1c = (undefined4)(p2);
  while (uVar5 = uVar5 - 1, uVar5 != 0) {
    uVar8 = (undefined4)(0);
    while (uVar7 = uVar8, uVar7 < uVar5) {
      iVar9 = ((int)this) + 0xc;
      puVar1 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar9)->at((unsigned int)uVar7);
      uStack_1c = (undefined4)(LivenessUserData::getItemData(*puVar1));
      uVar8 = (undefined4)(uVar7 + 1);
      puVar1 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar9)->at((unsigned int)uVar8);
      iVar2 = LivenessUserData::getItemData(*puVar1);
      iVar6 = *(int *)(uStack_1c + 8);
      if (((iVar6 != *(int *)(iVar2 + 8)) && (iVar6 == 2)) ||
         ((iVar6 == 0 && (*(int *)(iVar2 + 8) == 1)))) {
        puVar3 = (uint *)((std::vector<int, std::allocator<int>> *)iVar9)->at((unsigned int)uVar7);
        uStack_1c = (undefined4)(*puVar3);
        puVar1 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar9)->at((unsigned int)uVar7);
        puVar4 = (undefined4 *)((std::vector<int, std::allocator<int>> *)iVar9)->at((unsigned int)uVar8);
        *puVar1 = (int)*(int *)&(*puVar4);
        puVar3 = (uint *)((std::vector<int, std::allocator<int>> *)iVar9)->at((unsigned int)uVar8);
        *puVar3 = uStack_1c;
      }
    }
  }
  return (ulonglong)uStack_1c << 0x20;
}

int LivenessUserData::getReceivableCount()
{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  for (puVar2 = (undefined4 *)*(int *)this; puVar2 != (undefined4 *)*(int *)((int)this + 4*(1)); puVar2 = puVar2 + 1) {
    iVar1 = LivenessUserData::getItemData(*puVar2);
    if (iVar1 != 0) {
      iVar3 = iVar3 + (uint)(*(int *)(iVar1 + 8) == 1);
    }
  }
  return iVar3;
}

void LivenessUserData::clearAllData()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(((int)this) + 0x34);
  *(undefined4 *)(((int)this) + 0x24) = 0;
  for (; iVar3 != ((int)this) + 0x2c; iVar3 = func_0079e31c(iVar3)) {
    ((LivenessUserItemData *)*(undefined4 *)(iVar3 + 0x14))->clearData();
  }
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (**(code **)(*piVar1 + 0x100))();
  if (iVar3 != 0) {
    uVar2 = (undefined4)(LivenessUserData::getItemData(g_0048a4b0));
    ((LivenessUserItemData *)uVar2)->addNum(1);
  }
  return;
}





LivenessUserData::LivenessUserData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (5) =====
undefined8 LivenessUserData::getItemData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void LivenessUserData::statisticsData(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void LivenessUserData::updateRewardData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void LivenessUserData::receiveReward(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void LivenessUserData::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
