#include "GMSYSLevel.h"
#include "GMData.h"
#include "CCString.h"
#include "BLForwards.h"
#include "DataManager.h"
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
extern "C" long long func_0079e4ac(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0047e754;
extern "C" unsigned long _DAT_0047e758;
extern "C" unsigned long _DAT_0047e75c;
extern "C" unsigned long _DAT_0047e760;
extern "C" unsigned long _DAT_0047e764;
extern "C" unsigned long _DAT_0047e768;
extern "C" unsigned long _DAT_0047e76c;
extern "C" unsigned long g_0047e754;
extern "C" unsigned long g_0047e758;
extern "C" unsigned long g_0047e75c;
extern "C" unsigned long g_0047e760;
extern "C" unsigned long g_0047e764;
extern "C" unsigned long g_0047e768;
extern "C" unsigned long g_0047e76c;
GMSYSLevel::~GMSYSLevel()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined8 GMSYSLevel::isComplete()
{
  undefined4 p2 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p2);
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
  cocos2d::CCLog((char const*)((intptr_t)"input1 = %d"), *(undefined4 *)(iVar1 + 4));
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
  if (4000 < *(int *)(iVar1 + 4)) {
    iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
    if (*(int *)(iVar1 + 4) <= g_0047e758) {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
      cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d"), *(undefined4 *)(iVar1 + 4));
      uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      func_0079e45c(&uStack_14,uVar4,&uStack_18);
      ((UserData *)uVar3)->setMission((std::string *)(char *)uStack_14);
      func_0079e2bc(&uStack_14);
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
      iVar1 = (undefined4)(intptr_t)(((sir::singleton<GMData, 0> *)this)->instance());
      iVar1 = (undefined4)(intptr_t)(func_0079e4ac(*(int *)(iVar1 + 4) + g_0047e760,5));
      cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d"), iVar1 + 1);
      uVar4 = (undefined4)(((cocos2d::CCString *)this)->getCString());
      func_0079e45c(&uStack_14,uVar4,&uStack_18);
      ((UserData *)uVar3)->setChapter((std::string *)(char *)uStack_14);
      func_0079e2bc(&uStack_14);
      uVar3 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)uVar3)->showToast((char const*)"上升关卡成功");
      uVar3 = (undefined4)(1);
      goto LAB_0047e750;
    }
  }
  uVar3 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar3)->showToast((char const*)"关卡不支持");
  uVar3 = (undefined4)(0);
LAB_0047e750:
  return ghidra_CONCAT44(uStack_18,uVar3);
}
