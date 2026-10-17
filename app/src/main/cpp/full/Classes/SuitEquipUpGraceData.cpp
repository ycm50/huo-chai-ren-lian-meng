#include "SuitEquipUpGraceData.h"
#include "DataManager.h"
#include "SuitEquipUpGraceItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_004ac108(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004ac808;
extern "C" unsigned long _DAT_004ac80c;
extern "C" unsigned long g_004ac808;
extern "C" unsigned long g_004ac80c;
SuitEquipUpGraceData::~SuitEquipUpGraceData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 SuitEquipUpGraceData::getItemData(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void SuitEquipUpGraceData::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

SuitEquipUpGraceData::SuitEquipUpGraceData()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((int)this) + 4);
  (void)(((long long)::memset((void *)(iVar1),(int)(0),(size_t)(0x10))));
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(int *)(((int)this) + 0xc) = iVar1;
  *(int *)(((int)this) + 0x10) = iVar1;
  ((std::map<int, std::vector<SuitEquipUpGraceItemData*, std::allocator<SuitEquipUpGraceItemData*>>, std::less<int>, std::allocator<std::pair<int const, std::vector<SuitEquipUpGraceItemData*, std::allocator<SuitEquipUpGraceItemData*>>>>> *)((int)this))->erase(0);
  *(int *)(((int)this) + 0xc) = iVar1;
  *(undefined4 *)(((int)this) + 8) = 0;
  *(int *)(((int)this) + 0x10) = iVar1;
  *(undefined4 *)(((int)this) + 0x14) = 0;
  SuitEquipUpGraceData::initData();
  return;
}
