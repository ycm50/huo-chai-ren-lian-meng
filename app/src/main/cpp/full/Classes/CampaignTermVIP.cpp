#include "CampaignTermVIP.h"
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
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long _DAT_00468c60;
extern "C" unsigned long _DAT_00468c64;
extern "C" unsigned long _DAT_00468c68;
extern "C" unsigned long g_00468c60;
extern "C" unsigned long g_00468c64;
extern "C" unsigned long g_00468c68;
CampaignTermVIP::~CampaignTermVIP()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
int CampaignTermVIP::isComplete()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar6 = (undefined4)(0);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  do {
    uVar3 = (undefined4)(((cocos2d::CCArray *)uVar2)->count());
    if (uVar3 <= uVar6) {
      return 0;
    }
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar6));
    if (((iVar4 != 0) &&
        (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_00468c60 + 0x468c18),
                                         *(undefined4 *)(g_00468c64 + 0x468c1a),0),
        piVar1 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar1 + 0x38))(), iVar4 != 0)) {
      (**(code **)(*piVar1 + 0x18))(auStack_1c,piVar1);
      iVar5 = (undefined4)(intptr_t)(func_0079e49c(auStack_1c[0],((intptr_t)"1009")));
      func_0079e2bc(auStack_1c);
      if (iVar5 == 0) {
        return iVar4;
      }
    }
    uVar6 = (undefined4)(uVar6 + 1);
  } while( true );
}
