#include "SuitEquipData.h"
#include "DataManager.h"
#include "SuitEquipItemData.h"
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
extern "C" long long func_0079e3cc(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004aad30;
extern "C" unsigned long _DAT_004aad34;
extern "C" unsigned long _DAT_004aae54;
extern "C" unsigned long g_004aad30;
extern "C" unsigned long g_004aad34;
extern "C" unsigned long g_004aae54;
int SuitEquipData::getAllIds()
{
  return ((int)this) + 0x18;
}

undefined4 SuitEquipData::getSuitIdByBuffId(int p1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(((int)this) + 0xc);
  while( true ) {
    if (iVar2 == ((int)this) + 4) {
      return 0xffffffff;
    }
    iVar1 = ((SuitEquipItemData *)*(undefined4 *)(iVar2 + 0x14))->isBuffOneContains(p1);
    if ((iVar1 != 0) || (*(int *)(*(int *)(iVar2 + 0x14) + 0x14) == p1)) break;
    iVar2 = func_0079e31c(iVar2);
  }
  return *(undefined4 *)(iVar2 + 0x10);
}

undefined4 SuitEquipData::getBuffTypeByBuffId(int p1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(((int)this) + 0xc);
  while( true ) {
    if (iVar2 == ((int)this) + 4) {
      return 0;
    }
    iVar1 = ((SuitEquipItemData *)*(undefined4 *)(iVar2 + 0x14))->isBuffOneContains(p1);
    if (iVar1 != 0) break;
    if (*(int *)(*(int *)(iVar2 + 0x14) + 0x14) == p1) {
      return 2;
    }
    iVar2 = func_0079e31c(iVar2);
  }
  return 1;
}

SuitEquipData::~SuitEquipData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 SuitEquipData::getItemBySuitId(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void SuitEquipData::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

SuitEquipData::SuitEquipData()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((int)this) + 4);
  (void)(((long long)::memset((void *)(iVar1),(int)(0),(size_t)(0x10))));
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(int *)(((int)this) + 0xc) = iVar1;
  *(int *)(((int)this) + 0x10) = iVar1;
  *(undefined4 *)(((int)this) + 0x18) = 0;
  *(undefined4 *)(((int)this) + 0x1c) = 0;
  *(undefined4 *)(((int)this) + 0x20) = 0;
  ((std::map<int, SuitEquipItemData*, std::less<int>, std::allocator<std::pair<int const, SuitEquipItemData*>>> *)((int)this))->erase(0);
  *(int *)(((int)this) + 0xc) = iVar1;
  *(undefined4 *)(((int)this) + 8) = 0;
  *(int *)(((int)this) + 0x10) = iVar1;
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(undefined4 *)(((int)this) + 0x1c) = *(undefined4 *)(((int)this) + 0x18);
  SuitEquipData::initData();
  return;
}

void SuitEquipData::getBuffId(int p1, SuitEquipActivatedType p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
