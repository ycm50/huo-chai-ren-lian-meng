#include "ZhanCheItemData.h"
#include "ZhanCheRewardItemData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004bbf78;
extern "C" unsigned long _DAT_004bbf7c;
extern "C" unsigned long _DAT_004bc224;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_004bbf78;
extern "C" unsigned long g_004bbf7c;
extern "C" unsigned long g_004bc224;
ZhanCheItemData::ZhanCheItemData()
{
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)this = 1;
  *(int *)((int)this + 4*(4)) = 1;
  *(int *)((int)this + 4*(8)) = 1;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  return;
}

ZhanCheItemData::~ZhanCheItemData()
{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  for (piVar1 = *(int **)(((int)this) + 0x14); piVar1 != *(int **)(((int)this) + 0x18); piVar1 = piVar1 + 1)
  {
    iVar3 = (int)*(int *)&(*piVar1);
    if (iVar3 != 0) {
      ((ZhanCheRewardItemData *)iVar3)->~ZhanCheRewardItemData();
      (void)(::operator delete((void *)(iVar3)));
    }
    *piVar1 = 0;
  }
  puVar2 = *(undefined4 **)(((int)this) + 0x2c);
  *(undefined4 *)(((int)this) + 0x18) = *(undefined4 *)(((int)this) + 0x14);
  for (; puVar2 != *(undefined4 **)(((int)this) + 0x30); puVar2 = puVar2 + 1) {
    (void)(::operator delete((void *)(*puVar2)));
    *puVar2 = 0;
  }
  *(int *)(((int)this) + 0x30) = *(int *)(((int)this) + 0x2c);
  if (*(int *)(((int)this) + 0x2c) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x2c))));
  }
  if (*(int *)(((int)this) + 0x14) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x14))));
  }
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 4)->~vector();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void ZhanCheItemData::getTotalPercent(std::vector<ZhanCheRewardItemData*, std::allocator<ZhanCheRewardItemData*>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ZhanCheItemData::getIndexByPercent(std::vector<ZhanCheRewardItemData*, std::allocator<ZhanCheRewardItemData*>> * p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ZhanCheItemData::initWithData(ZhanCheItemData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int ZhanCheItemData::getRandomReward()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
