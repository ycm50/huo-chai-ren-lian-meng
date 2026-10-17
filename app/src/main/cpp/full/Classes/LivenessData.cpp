#include "LivenessData.h"
#include "DataManager.h"
#include "LivenessItemData.h"
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
extern "C" long long func_0079e69c(...);
extern "C" unsigned long _DAT_00489b30;
extern "C" unsigned long _DAT_00489b34;
extern "C" unsigned long g_00489b30;
extern "C" unsigned long g_00489b34;
undefined4 LivenessData::getItemData(int p1)
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


LivenessData::LivenessData()
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
  ((std::map<int, LivenessItemData*, std::less<int>, std::allocator<std::pair<int const, LivenessItemData*>>> *)((int)this))->erase(0);
  *(int *)(((int)this) + 0xc) = iVar1;
  *(undefined4 *)(((int)this) + 8) = 0;
  *(int *)(((int)this) + 0x10) = iVar1;
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(undefined4 *)(((int)this) + 0x1c) = *(undefined4 *)(((int)this) + 0x18);
  *(undefined4 *)(((int)this) + 0x24) = 0;
  LivenessData::initData();
  return;
}

LivenessData::~LivenessData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void LivenessData::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
