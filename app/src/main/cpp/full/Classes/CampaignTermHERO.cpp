#include "CampaignTermHERO.h"
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
extern "C" unsigned long _DAT_00468ab0;
extern "C" unsigned long _DAT_00468ab4;
extern "C" unsigned long g_00468ab0;
extern "C" unsigned long g_00468ab4;
CampaignTermHERO::~CampaignTermHERO()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
uint CampaignTermHERO::isComplete()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  *(undefined4 *)(((int)this) + 0xc) = 0;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar6 = (undefined4)(0);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  for (uVar5 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar5 < uVar3); uVar5 = uVar5 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar5));
    if ((iVar4 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_00468ab0 + 0x468a80),
                                        *(undefined4 *)(g_00468ab4 + 0x468a82),0),
       piVar1 != (int *)0x0)) {
      iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x38))());
      uVar6 = (undefined4)(uVar6 + (iVar4 != 0));
    }
  }
  *(uint *)(((int)this) + 0xc) = uVar6;
  return (((int)uVar6 >> 0x1f) - ((int)*(uint *)(((int)this) + 4) >> 0x1f)) +
         (uint)(*(uint *)(((int)this) + 4) <= uVar6) & 0xff;
}
