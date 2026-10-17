#include "BLMissionPlayerInfoPresenter.h"
#include "CCProgressTimer.h"
#include "CCString.h"
#include "CCArray.h"
#include "CCObject.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLRoleAttribute.h"
#include "ChallengePlayerData.h"
#include "DataManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long software_udf(...);

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b7824;
extern "C" unsigned long UNK_005b7838;
extern "C" unsigned long UNK_005b7922;
extern "C" unsigned long UNK_005b7934;
extern "C" unsigned long _DAT_005b7a44;
extern "C" unsigned long _DAT_005b7a48;
extern "C" unsigned long _DAT_005b7a4c;
extern "C" unsigned long _DAT_005b7af0;
extern "C" unsigned long _DAT_005b7af4;
extern "C" unsigned long _DAT_005b7af8;
extern "C" unsigned long _DAT_005b7ce8;
extern "C" unsigned long _DAT_005b7cec;
extern "C" unsigned long _DAT_005b7cf0;
extern "C" unsigned long _DAT_005b7cf4;
extern "C" unsigned long _DAT_005b7cf8;
extern "C" unsigned long _UNK_005b7868;
extern "C" unsigned long _UNK_005b786c;
extern "C" unsigned long _UNK_005b796c;
extern "C" unsigned long _UNK_005b7970;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_005b7824;
extern "C" unsigned long g_005b7838;
extern "C" unsigned long g_005b7868;
extern "C" unsigned long g_005b786c;
extern "C" unsigned long g_005b7922;
extern "C" unsigned long g_005b7934;
extern "C" unsigned long g_005b796c;
extern "C" unsigned long g_005b7970;
extern "C" unsigned long g_005b7a44;
extern "C" unsigned long g_005b7a48;
extern "C" unsigned long g_005b7a4c;
extern "C" unsigned long g_005b7af0;
extern "C" unsigned long g_005b7af4;
extern "C" unsigned long g_005b7af8;
extern "C" unsigned long g_005b7ce8;
extern "C" unsigned long g_005b7cec;
extern "C" unsigned long g_005b7cf0;
extern "C" unsigned long g_005b7cf4;
extern "C" unsigned long g_005b7cf8;
BLMissionPlayerInfoPresenter::~BLMissionPlayerInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b7838 + g_005b786c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionPlayerInfoPresenter::BLMissionPlayerInfoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005b7934 + g_005b7970,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  return;
}

undefined4 BLMissionPlayerInfoPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMissionPlayerInfoPresenter::onEnter()
{
  return;
}

void BLMissionPlayerInfoPresenter::onExit()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====

void BLMissionPlayerInfoPresenter::updateHeroStatus(int p1)
{
  bool bVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  
  uVar6 = (undefined4)(0);
  *(int *)(((int)this) + 0x18) = p1;
  do {
    iVar5 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x14) + 0x124));
    if ((uint)(*(int *)(*(int *)(((int)this) + 0x14) + 0x128) - iVar5 >> 2) <= uVar6) {
      func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),uVar6);
      iVar5 = (undefined4)(intptr_t)(extraout_r1);
    }
    piVar3 = *(int **)(*(int *)(uVar6 * 4 + iVar5) + 0x110);
    bVar1 = (int)uVar6 < p1;
    uVar6 = (undefined4)(uVar6 + 1);
    (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,bVar1);
  } while (uVar6 != 5);
  if (*(int *)(((int)this) + 0x18) < 5) {
    piVar3 = (int *)((BLMission *)this)->currentMission();
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x208)))();
    uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))());
    iVar5 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar4)->objectAtIndex(0));
    if (iVar5 == 0) {
      *(undefined4 *)(((int)this) + 0x20) = 0;
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x5b7a3e);
      (*pcVar2)();
    }
    iVar5 = func_0079e55c(iVar5,*(undefined4 *)(g_005b7a48 + 0x5b7a1c),
                            *(undefined4 *)(g_005b7a4c + 0x5b7a1e),0);
    *(int *)(((int)this) + 0x20) = iVar5;
    uVar4 = (undefined4)((**(code **)(*(int *)(iVar5 + 0x1c4) + 0x38))(iVar5 + 0x1c4));
    *(undefined4 *)(((int)this) + 0x28) = uVar4;
  }
  else {
    *(undefined4 *)(((int)this) + 0x20) = 0;
  }
  return;
}

void BLMissionPlayerInfoPresenter::updateEnemyStatus(int p1)
{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  
  uVar5 = (undefined4)(0);
  *(int *)(((int)this) + 0x1c) = p1;
  do {
    iVar4 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x14) + 0x130));
    if ((uint)(*(int *)(*(int *)(((int)this) + 0x14) + 0x134) - iVar4 >> 2) <= uVar5) {
      func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",uVar5);
      iVar4 = (undefined4)(intptr_t)(extraout_r1);
    }
    piVar2 = *(int **)(*(int *)(uVar5 * 4 + iVar4) + 0x110);
    bVar1 = (int)uVar5 < p1;
    uVar5 = (undefined4)(uVar5 + 1);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,bVar1);
  } while (uVar5 != 5);
  if (*(int *)(((int)this) + 0x1c) < 5) {
    piVar2 = (int *)((BLMission *)this)->currentMission();
    piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x208)))();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x38)))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar3))->objectAtIndex(0));
    uVar3 = (undefined4)(0);
    if (iVar4 != 0) {
      uVar3 = func_0079e55c(iVar4,*(undefined4 *)(g_005b7af4 + 0x5b7ac8),
                              *(undefined4 *)(g_005b7af8 + 0x5b7aca),0);
    }
  }
  else {
    uVar3 = (undefined4)(0);
  }
  *(undefined4 *)(((int)this) + 0x24) = uVar3;
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar2) + (0x1a0)))();
  iVar4 = (undefined4)((void)(((ChallengePlayerData *)this)->getCurEnemy()),(intptr_t)0);
  *(undefined4 *)(((int)this) + 0x2c) = *(undefined4 *)(iVar4 + 0x18);
  return;
}

void BLMissionPlayerInfoPresenter::updatePlayerName(std::string * p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x10c);
  iVar2 = (int)*(int *)&(*piVar1);
  pcVar3 = *(code **)(iVar2 + 0x234);
  (*pcVar3)(piVar1,*(int *)p1,iVar2,pcVar3,p4);
  return;
}

void BLMissionPlayerInfoPresenter::updateEnemyName(std::string * p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x110);
  iVar2 = (int)*(int *)&(*piVar1);
  pcVar3 = *(code **)(iVar2 + 0x234);
  (*pcVar3)(piVar1,*(int *)p1,iVar2,pcVar3,p4);
  return;
}

undefined8 BLMissionPlayerInfoPresenter::tick(float p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  code *pcVar10;
  int iVar11;
  
  iVar11 = (undefined4)(intptr_t)(g_005b7ce8 + 0x5b7b34);
  if ((*(int *)(((int)this) + 0x20) == 0) && (*(int *)(((int)this) + 0x18) < 5)) {
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex(0));
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = func_0079e55c(iVar3,*(undefined4 *)(iVar11 + g_005b7cec),
                              *(undefined4 *)(iVar11 + g_005b7cf0),0,
                              *(undefined4 *)(iVar11 + g_005b7cec),
                              *(undefined4 *)(iVar11 + g_005b7cf0));
    }
    *(int *)(((int)this) + 0x20) = iVar4;
    if (*(int *)(((int)this) + 0x28) == 0) {
      uVar2 = (undefined4)((**(code **)(*(int *)(iVar4 + 0x1c4) + 0x38))(iVar4 + 0x1c4));
      *(undefined4 *)(((int)this) + 0x28) = uVar2;
    }
  }
  if ((*(int *)(((int)this) + 0x24) == 0) && (*(int *)(((int)this) + 0x1c) < 5)) {
    piVar1 = (int *)((BLMission *)this)->currentMission();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x208)))();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x38)))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex(0));
    uVar2 = (undefined4)(0);
    if (iVar4 != 0) {
      uVar2 = func_0079e55c(iVar4,*(undefined4 *)(iVar11 + g_005b7cec),
                              *(undefined4 *)(iVar11 + g_005b7cf0),0,
                              *(undefined4 *)(iVar11 + g_005b7cec),
                              *(undefined4 *)(iVar11 + g_005b7cf0));
    }
    *(undefined4 *)(((int)this) + 0x24) = uVar2;
  }
  if (*(int *)(((int)this) + 0x2c) == 0) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    (**(code **)(*(int *)(piVar1) + (0x1a0)))();
    iVar11 = (undefined4)((void)(((ChallengePlayerData *)this)->getCurEnemy()),(intptr_t)0);
    *(undefined4 *)(((int)this) + 0x2c) = *(undefined4 *)(iVar11 + 0x18);
  }
  uVar2 = (undefined4)(0);
  if (*(int *)(((int)this) + 0x20) != 0) {
    uVar2 = (undefined4)(((BLRoleAttribute *)(*(int *)(((int)this) + 0x20) + 0x1c4))->getLife());
  }
  uVar5 = (undefined4)(0);
  if (*(int *)(((int)this) + 0x24) != 0) {
    uVar5 = (undefined4)(((BLRoleAttribute *)(*(int *)(((int)this) + 0x24) + 0x1c4))->getLife());
  }
  uVar6 = (undefined4)(func_0079e2ec(uVar2));
  uVar6 = (undefined4)(func_0079e4fc(uVar6,g_005b7cf4));
  uVar7 = (undefined4)(func_0079e2ec(*(undefined4 *)(((int)this) + 0x28)));
  uVar7 = (undefined4)(func_0079e4dc(uVar6,uVar7));
  uVar6 = (undefined4)(func_0079e2ec(uVar5));
  uVar6 = (undefined4)(func_0079e4fc(uVar6,g_005b7cf4));
  uVar8 = (undefined4)(func_0079e2ec(*(undefined4 *)(((int)this) + 0x2c)));
  uVar8 = (undefined4)(func_0079e4dc(uVar6,uVar8));
  iVar11 = (undefined4)(intptr_t)(func_0079e4ec(uVar7,g_005b7cf4));
  uVar6 = (undefined4)(g_005b7cf4);
  if ((iVar11 == 0) && (iVar11 = func_0079e7b4(uVar7,0), uVar6 = uVar7, iVar11 != 0)) {
    uVar6 = (undefined4)(0);
  }
  iVar11 = (undefined4)(intptr_t)(func_0079e4ec(uVar8,g_005b7cf4));
  uVar7 = (undefined4)(g_005b7cf4);
  if ((iVar11 == 0) && (iVar11 = func_0079e7b4(uVar8,0), uVar7 = uVar8, iVar11 != 0)) {
    uVar7 = (undefined4)(0);
  }
  ((cocos2d::CCProgressTimer *)(*(undefined4 *)(*(int *)(((int)this) + 0x14) + 0x114)))->setPercentage(uVar6);
  iVar11 = (undefined4)(intptr_t)(g_005b7cf8);
  ((cocos2d::CCProgressTimer *)(*(undefined4 *)(*(int *)(((int)this) + 0x14) + 0x118)))->setPercentage(uVar7);
  cocos2d::CCString::createWithFormat((char const*)iVar11 + 0x5b7ca8, uVar2, *(undefined4 *)(((int)this) + 0x28));
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x11c);
  pcVar9 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar9)(piVar1,uVar2);
  cocos2d::CCString::createWithFormat((char const*)iVar11 + 0x5b7ca8, uVar5, *(undefined4 *)(((int)this) + 0x2c));
  piVar1 = *(int **)(*(int *)(((int)this) + 0x14) + 0x120);
  pcVar10 = *(code **)(*piVar1 + 0x234);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  (*pcVar10)(piVar1,uVar2);
  return ghidra_CONCAT44(pcVar9,uVar5);
}
