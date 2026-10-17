#include "MissionStarRewardUserData.h"
#include "DataManager.h"
#include "MissionStarRewardUserItemData.h"
#include "UserData.h"
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
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049740c;
extern "C" unsigned long _DAT_00497410;
extern "C" unsigned long _DAT_004976a8;
extern "C" unsigned long _DAT_004976ac;
extern "C" unsigned long _DAT_004977a8;
extern "C" unsigned long _DAT_004977ac;
extern "C" unsigned long _DAT_004977b0;
extern "C" unsigned long _DAT_004977b4;
extern "C" unsigned long _DAT_00497850;
extern "C" unsigned long _DAT_00497854;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long g_0049740c;
extern "C" unsigned long g_00497410;
extern "C" unsigned long g_004976a8;
extern "C" unsigned long g_004976ac;
extern "C" unsigned long g_004977a8;
extern "C" unsigned long g_004977ac;
extern "C" unsigned long g_004977b0;
extern "C" unsigned long g_004977b4;
extern "C" unsigned long g_00497850;
extern "C" unsigned long g_00497854;
MissionStarRewardUserData::MissionStarRewardUserData()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  return;
}

MissionStarRewardUserData::~MissionStarRewardUserData()
{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = (int *)*(int *)this; piVar1 != (int *)*(int *)((int)this + 4*(1)); piVar1 = piVar1 + 1) {
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      ((MissionStarRewardUserItemData *)iVar2)->~MissionStarRewardUserItemData();
      (void)(::operator delete((void *)(iVar2)));
    }
    *piVar1 = 0;
  }
  *(int *)((int)this + 4*(1)) = *(int *)this;
  if (*(int *)this != 0) {
    (void)(::operator delete((void *)(*(int *)this)));
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void MissionStarRewardUserData::toString()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionStarRewardUserData::initWithData(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 MissionStarRewardUserData::getItemData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void MissionStarRewardUserData::acceptReward(int p1, int p2)
{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar1 = (undefined4)(MissionStarRewardUserData::getItemData((int)0));
  ((MissionStarRewardUserItemData *)(uVar1))->acceptReward(p2);
  ((MissionStarRewardUserData *)(((int)this)))->toString();
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
  func_0079e45c(auStack_24,"userstarrewards",auStack_30);
  func_0079e53c(auStack_20,auStack_28);
  func_0079e45c(auStack_1c,"TEXT",auStack_2c);
  ((UserData *)(uVar1))->updateDataNew((std::string *)(char *)auStack_24, (std::string *)(char *)auStack_20, (std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_24);
  func_0079e2bc(auStack_28);
  return;
}
