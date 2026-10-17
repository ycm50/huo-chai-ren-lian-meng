#include "GMSYSUpgrade.h"
#include "BackPackItemData.h"
#include "RoleData.h"
#include "BLForwards.h"
#include "BackPackData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "PlayerData.h"
#include "Toast.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long _DAT_0047e568;
extern "C" unsigned long _DAT_0047e56c;
extern "C" unsigned long _DAT_0047e570;
extern "C" unsigned long _DAT_0047e574;
extern "C" unsigned long _DAT_0047e578;
extern "C" unsigned long _DAT_0047e57c;
extern "C" unsigned long _DAT_0047e580;
extern "C" unsigned long _DAT_0047e584;
extern "C" unsigned long _DAT_0047e588;
extern "C" unsigned long _DAT_0047e58c;
extern "C" unsigned long g_0047e568;
extern "C" unsigned long g_0047e56c;
extern "C" unsigned long g_0047e570;
extern "C" unsigned long g_0047e574;
extern "C" unsigned long g_0047e578;
extern "C" unsigned long g_0047e57c;
extern "C" unsigned long g_0047e580;
extern "C" unsigned long g_0047e584;
extern "C" unsigned long g_0047e588;
extern "C" unsigned long g_0047e58c;
GMSYSUpgrade::~GMSYSUpgrade()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 GMSYSUpgrade::isComplete()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  code *pcVar13;
  int iVar14;
  int iStack_3c;
  int iStack_38;
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar14 = (undefined4)(intptr_t)(g_0047e568);
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  iVar14 = (undefined4)(intptr_t)(iVar14 + 0x47e39a);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
  uVar11 = (undefined4)(0);
  do {
    uVar3 = (undefined4)(((cocos2d::CCArray *)uVar2)->count());
    if (uVar3 <= uVar11) {
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)uVar2)->showToast((char const*)"强化成功");
      return 1;
    }
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar11));
    if (iVar4 != 0) {
      uVar12 = (undefined4)(*(undefined4 *)(iVar14 + g_0047e56c));
      piVar1 = (int *)func_0079e55c(iVar4,uVar12,*(undefined4 *)(iVar14 + g_0047e570),0);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_1c,piVar1);
        iVar4 = (undefined4)(intptr_t)(func_0079e6c0(auStack_1c[0]));
        iVar5 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
        iVar5 = (undefined4)(intptr_t)(*(int *)(iVar5 + 4));
        func_0079e2bc(auStack_1c);
        if (iVar4 == iVar5) {
          iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x38)))(piVar1));
          if (iVar4 == 0) {
            uVar2 = (undefined4)(((Toast *)this)->sharedToast());
            ((Toast *)uVar2)->showToast((char const*)"此英雄还未购买");
            return 0;
          }
          piVar6 = (int *)((PlayerData *)this)->create();
          ((PlayerData *)piVar6)->initWithRoleData((RoleData*)piVar1);
          iStack_38 = 0;
          do {
            uVar7 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x28)))(piVar6));
            iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar7)->objectAtIndex((unsigned int)iStack_38));
            if ((iVar4 != 0) &&
               (piVar1 = (int *)func_0079e55c(iVar4,uVar12,*(undefined4 *)(iVar14 + g_0047e578)
                                                ,0), piVar1 != (int *)0x0)) {
              iStack_3c = 0;
              do {
                uVar7 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))(piVar1));
                iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar7)->objectForKey(iStack_3c));
                if ((iVar4 == 0) ||
                   (piVar8 = (int *)func_0079e55c(iVar4,uVar12,
                                                    *(undefined4 *)(iVar14 + g_0047e57c),0),
                   piVar8 == (int *)0x0)) {
                  cocos2d::CCLog((char const*)"第%d星第%d号位装备没有", iStack_38 + 1, iStack_3c + 1);
                }
                else {
                  piVar9 = (int *)((DataCacheManager *)this)->shareManager();
                  uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))());
                  uVar10 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x20)))(piVar8));
                  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar7)->objectForKey(uVar10));
                  if ((iVar4 == 0) ||
                     (piVar9 = (int *)func_0079e55c(iVar4,uVar12,
                                                      *(undefined4 *)(iVar14 + g_0047e580),0),
                     piVar9 == (int *)0x0)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)software_udf(0xff,0x47e55e);
                    (*pcVar13)();
                  }
                  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x38)))());
                  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x30)))(piVar8));
                  if (iVar5 < iVar4) {
                    pcVar13 = *(code **)(*piVar8 + 0x34);
                    uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x38)))(piVar9));
                    (*pcVar13)(piVar8,uVar7);
                    piVar9 = (int *)((DataManager *)this)->shareDataManager();
                    piVar9 = (int *)(**(code **)(*(int *)(piVar9) + (0x28)))();
                    uVar7 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x50)))());
                    ((BackPackData *)uVar7)->upgraceEquip((BackPackItemData*)piVar8);
                  }
                  else {
                    uVar7 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x20)))(piVar8));
                    cocos2d::CCLog((char const*)"id = %d  装备已满级", uVar7);
                  }
                }
                iStack_3c = (undefined4)(intptr_t)(iStack_3c + 1);
              } while (iStack_3c != 6);
            }
            iStack_38 = (undefined4)(intptr_t)(iStack_38 + 1);
          } while (iStack_38 != 5);
        }
      }
    }
    uVar11 = (undefined4)(uVar11 + 1);
  } while( true );
}
