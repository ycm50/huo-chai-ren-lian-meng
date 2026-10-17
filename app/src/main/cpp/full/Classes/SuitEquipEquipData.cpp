#include "SuitEquipEquipData.h"
#include "DataManager.h"
#include "SuitEquipEquipItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3cc(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079eb74(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004ac044;
extern "C" unsigned long _DAT_004ac048;
extern "C" unsigned long _DAT_004ac04c;
extern "C" unsigned long g_004ac044;
extern "C" unsigned long g_004ac048;
extern "C" unsigned long g_004ac04c;
undefined4 SuitEquipEquipData::getItemById(int p1)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = ((int)this) + 4;
  iVar1 = *(int *)(((int)this) + 8);
  while (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) < p1) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar3 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  uVar2 = (undefined4)(0);
  if ((iVar3 != ((int)this) + 4) && (*(int *)(iVar3 + 0x10) <= p1)) {
    uVar2 = (undefined4)(*(undefined4 *)(iVar3 + 0x14));
  }
  return uVar2;
}

SuitEquipEquipData::~SuitEquipEquipData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 SuitEquipEquipData::getEquipsBySuitId(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

bool SuitEquipEquipData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

SuitEquipEquipData::SuitEquipEquipData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
