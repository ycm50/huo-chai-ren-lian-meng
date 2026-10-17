#include "GMSYSUnlock.h"
#include "GMData.h"
#include "CCArray.h"
#include "BLForwards.h"
#include "DataManager.h"
#include "RoleInfoData.h"
#include "Toast.h"
#include "UserData.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long _DAT_0047e9e8;
extern "C" unsigned long _DAT_0047e9ec;
extern "C" unsigned long _DAT_0047e9f0;
extern "C" unsigned long g_0047e9e8;
extern "C" unsigned long g_0047e9ec;
extern "C" unsigned long g_0047e9f0;
GMSYSUnlock::~GMSYSUnlock()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 GMSYSUnlock::isComplete()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
  for (uVar8 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->count(), uVar8 < uVar3); uVar8 = uVar8 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar8));
    if ((iVar4 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_0047e9e8 + 0x47e928),
                                        *(undefined4 *)(g_0047e9ec + 0x47e92a),0),
       piVar1 != (int *)0x0)) {
      (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_1c,piVar1);
      iVar4 = (undefined4)(intptr_t)(func_0079e6c0(auStack_1c[0]));
      iVar5 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
      iVar5 = (undefined4)(intptr_t)(*(int *)(iVar5 + 4));
      func_0079e2bc(auStack_1c);
      if (iVar4 == iVar5) {
        uVar6 = (undefined4)(((RoleInfoData *)this)->create());
        (**(code **)(*(int *)(piVar1) + (0x18)))(&uStack_20,piVar1);
        func_0079e45c(auStack_1c,uStack_20,auStack_24);
        piVar1 = (int *)((RoleInfoData *)uVar6)->getRoleInfoItemData((std::string *)(char *)auStack_1c);
        func_0079e2bc(auStack_1c);
        func_0079e2bc(&uStack_20);
        if (piVar1 != (int *)0x0) {
          piVar7 = (int *)((DataManager *)this)->shareDataManager();
          uVar6 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x28)))());
          (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_1c,piVar1);
          ((UserData *)uVar6)->addPlayers((std::string *)(char *)auStack_1c);
          func_0079e2bc(auStack_1c);
        }
      }
    }
  }
  uVar2 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar2)->showToast((char const*)"解锁英雄成功");
  return 1;
}
