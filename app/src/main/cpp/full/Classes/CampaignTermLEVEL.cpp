#include "CampaignTermLEVEL.h"
#include "DataManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00468b30;
extern "C" unsigned long _DAT_00468b34;
extern "C" unsigned long g_00468b30;
extern "C" unsigned long g_00468b34;
CampaignTermLEVEL::~CampaignTermLEVEL()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
ulonglong CampaignTermLEVEL::isComplete()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (undefined4)(0);
  *(undefined4 *)(((int)this) + 0x10) = 0;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  for (uVar6 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar6 < uVar3); uVar6 = uVar6 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar6));
    if ((((iVar4 != 0) &&
         (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_00468b30 + 0x468af4),
                                          *(undefined4 *)(g_00468b34 + 0x468af6),0),
         piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 0x38))(), iVar4 != 0)) &&
       (uVar3 = (**(code **)(*piVar1 + 0x20))(piVar1), (int)uVar5 < (int)uVar3)) {
      uVar5 = (undefined4)(uVar3);
    }
  }
  *(uint *)(((int)this) + 0x10) = uVar5;
  return ghidra_CONCAT44(((int)this),(((int)uVar5 >> 0x1f) - ((int)*(uint *)(((int)this) + 4) >> 0x1f)) +
                          (uint)(*(uint *)(((int)this) + 4) <= uVar5)) & 0xffffffff000000ff;
}
