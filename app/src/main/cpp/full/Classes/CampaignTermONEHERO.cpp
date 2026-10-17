#include "CampaignTermONEHERO.h"
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
extern "C" unsigned long _DAT_00468d08;
extern "C" unsigned long _DAT_00468d0c;
extern "C" unsigned long _DAT_00468d10;
extern "C" unsigned long g_00468d08;
extern "C" unsigned long g_00468d0c;
extern "C" unsigned long g_00468d10;
CampaignTermONEHERO::~CampaignTermONEHERO()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
int CampaignTermONEHERO::isComplete()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 auStack_1c [2];
  
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar8 = (undefined4)(0);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x60))());
  do {
    uVar4 = (undefined4)(((cocos2d::CCArray *)uVar3)->count());
    if (uVar4 <= uVar8) {
      return 0;
    }
    iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar3)->objectAtIndex((unsigned int)uVar8));
    if (((iVar5 != 0) &&
        (piVar2 = (int *)func_0079e55c(iVar5,*(undefined4 *)(g_00468d08 + 0x468ca6),
                                         *(undefined4 *)(g_00468d0c + 0x468ca8),0),
        piVar2 != (int *)0x0)) && (iVar5 = (**(code **)(*piVar2 + 0x38))(), iVar5 != 0)) {
      (**(code **)(*piVar2 + 0x18))(auStack_1c,piVar2);
      uVar1 = (undefined4)(auStack_1c[0]);
      cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d"), *(undefined4 *)(((int)this) + 4));
      uVar6 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      iVar7 = (undefined4)(intptr_t)(func_0079e49c(uVar1,uVar6));
      func_0079e2bc(auStack_1c);
      if (iVar7 == 0) {
        return iVar5;
      }
    }
    uVar8 = (undefined4)(uVar8 + 1);
  } while( true );
}
