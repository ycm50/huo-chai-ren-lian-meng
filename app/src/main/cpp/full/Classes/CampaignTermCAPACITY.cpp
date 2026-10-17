#include "CampaignTermCAPACITY.h"
#include "CCArray.h"
#include "DataManager.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long _DAT_00468e5c;
extern "C" unsigned long _DAT_00468e60;
extern "C" unsigned long g_00468e5c;
extern "C" unsigned long g_00468e60;
CampaignTermCAPACITY::~CampaignTermCAPACITY()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
uint CampaignTermCAPACITY::isComplete()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uStack_44;
  uint uStack_40;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  *(undefined4 *)(((int)this) + 0x14) = 0;
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uStack_44 = (undefined4)(0);
  for (uStack_40 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->count(), uStack_40 < uVar3);
      uStack_40 = uStack_40 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uStack_40));
    if (((iVar4 != 0) &&
        (piVar5 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_00468e5c + 0x468d5c),
                                         *(undefined4 *)(g_00468e60 + 0x468d5e),0),
        piVar5 != 0)) && (iVar4 = (**(code **)(*(int *)(piVar5) + (0x38)))(), iVar4 != 0)) {
      uVar6 = (undefined4)(((DataManager *)this)->shareDataManager());
      (**(code **)(*(int *)(piVar5) + (0x18)))(&uStack_20,piVar5);
      func_0079e45c(auStack_1c,uStack_20,auStack_24);
      iVar4 = (undefined4)(intptr_t)(((DataManager *)(uVar6))->getPlayerDataByID((std::string *)(char *)auStack_1c));
      func_0079e2bc(auStack_1c);
      func_0079e2bc(&uStack_20);
      uVar3 = (undefined4)(0);
      if (iVar4 != 0) {
        while( true ) {
          piVar8 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))(piVar1);
          (**(code **)(*(int *)(piVar8) + (0x68)))();
          uVar9 = (undefined4)(((cocos2d::CCArray *)this)->count());
          if (uVar9 <= uVar3) break;
          piVar8 = ((void)((DataManager *)(piVar1))->getPlayerDataByIndex(uVar3),(int *)0);
          piVar7 = (int *)(**(code **)(*(int *)(piVar8) + (0x18)))();
          (**(code **)(*(int *)(piVar7) + (0x18)))(&uStack_20,piVar7);
          uVar6 = (undefined4)(uStack_20);
          (**(code **)(*(int *)(piVar5) + (0x18)))(auStack_1c,piVar5);
          iVar4 = (undefined4)(intptr_t)(func_0079e49c(uVar6,auStack_1c[0]));
          func_0079e2bc(auStack_1c);
          func_0079e2bc(&uStack_20);
          if (iVar4 == 0) {
            iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x58)))(piVar8));
            uStack_44 = (undefined4)(uStack_44 + iVar4);
          }
          uVar3 = (undefined4)(uVar3 + 1);
        }
      }
    }
  }
  *(uint *)(((int)this) + 0x14) = uStack_44;
  return (((int)uStack_44 >> 0x1f) - ((int)*(uint *)(((int)this) + 4) >> 0x1f)) +
         (uint)(*(uint *)(((int)this) + 4) <= uStack_44) & 0xff;
}
