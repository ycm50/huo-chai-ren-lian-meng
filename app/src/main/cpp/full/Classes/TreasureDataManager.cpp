#include "TreasureDataManager.h"
#include "CCString.h"
#include "CCObject.h"
#include "CCNotificationCenter.h"
#include "CCInteger.h"
#include "BLForwards.h"
#include "BLLanguage.h"
#include "ItemData.h"
#include "Toast.h"
#include "TreasureHeroData.h"
#include "TreasureInfoDynamicData.h"
#include "TreasureMapDynamicData.h"
#include "TreasureMissionData.h"
#include "TreasureRecordData.h"
#include "TreasureRewardData.h"
#include "TreasureWeightData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" unsigned long g_004b12b8;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0043c2f4;
extern "C" unsigned long _DAT_004b1018;
extern "C" unsigned long _DAT_004b1040;
extern "C" unsigned long _DAT_004b1068;
extern "C" unsigned long _DAT_004b1094;
extern "C" unsigned long _DAT_004b1190;
extern "C" unsigned long _DAT_004b1194;
extern "C" unsigned long _DAT_004b1198;
extern "C" unsigned long _DAT_004b119c;
extern "C" unsigned long _DAT_004b11a0;
extern "C" unsigned long _DAT_004b11c8;
extern "C" unsigned long _DAT_004b1208;
extern "C" unsigned long _DAT_004b120c;
extern "C" unsigned long _DAT_004b122c;
extern "C" unsigned long _DAT_004b167c;
extern "C" unsigned long _DAT_004b1820;
extern "C" unsigned long _DAT_004b1924;
extern "C" unsigned long _DAT_004b1928;
extern "C" unsigned long _DAT_004b1984;
extern "C" unsigned long _DAT_004b1b14;
extern "C" unsigned long _DAT_004b1c30;
extern "C" unsigned long _DAT_004b1cf8;
extern "C" unsigned long _DAT_004b1cfc;
extern "C" unsigned long _DAT_004b1d00;
extern "C" unsigned long _DAT_004b1e38;
extern "C" unsigned long _DAT_004b1e3c;
extern "C" unsigned long _DAT_004b1e40;
extern "C" unsigned long _DAT_004b1e80;
extern "C" unsigned long _DAT_004b1ec0;
extern "C" unsigned long _DAT_004b1f50;
extern "C" unsigned long _DAT_004b1f54;
extern "C" unsigned long _DAT_004b22bc;
extern "C" unsigned long _DAT_004b22c0;
extern "C" unsigned long _DAT_004b22c4;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0043c2f4;
extern "C" unsigned long g_004b1018;
extern "C" unsigned long g_004b1040;
extern "C" unsigned long g_004b1068;
extern "C" unsigned long g_004b1094;
extern "C" unsigned long g_004b1190;
extern "C" unsigned long g_004b1194;
extern "C" unsigned long g_004b1198;
extern "C" unsigned long g_004b119c;
extern "C" unsigned long g_004b11a0;
extern "C" unsigned long g_004b11c8;
extern "C" unsigned long g_004b1208;
extern "C" unsigned long g_004b120c;
extern "C" unsigned long g_004b122c;
extern "C" unsigned long g_004b167c;
extern "C" unsigned long g_004b1820;
extern "C" unsigned long g_004b1924;
extern "C" unsigned long g_004b1928;
extern "C" unsigned long g_004b1984;
extern "C" unsigned long g_004b1b14;
extern "C" unsigned long g_004b1c30;
extern "C" unsigned long g_004b1cf8;
extern "C" unsigned long g_004b1cfc;
extern "C" unsigned long g_004b1d00;
extern "C" unsigned long g_004b1e38;
extern "C" unsigned long g_004b1e3c;
extern "C" unsigned long g_004b1e40;
extern "C" unsigned long g_004b1e80;
extern "C" unsigned long g_004b1ec0;
extern "C" unsigned long g_004b1f50;
extern "C" unsigned long g_004b1f54;
extern "C" unsigned long g_004b22bc;
extern "C" unsigned long g_004b22c0;
extern "C" unsigned long g_004b22c4;
int TreasureDataManager::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_0043c2f4 + 0x43c2cc);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x84)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

undefined1 TreasureDataManager::getbClickCLose() const
{
  return *(undefined1 *)(((int)this) + 0x80);
}

void TreasureDataManager::setbClickCLose(bool p1)
{
  *(undefined1 *)(((int)this) + 0x80) = p1;
  return;
}

int TreasureDataManager::getMapItemDatas()
{
  return *(int *)(((int)this) + 0x68) + 4;
}

undefined4 TreasureDataManager::getCurrentItemData()
{
  return **(undefined4 **)(*(int *)(((int)this) + 0x6c) + 0x40);
}

void TreasureDataManager::move(int p1)
{
  ((TreasureInfoDynamicData *)this)->move(*(undefined4 *)(((int)this) + 0x6c));
  return;
}

void TreasureDataManager::moveTo(int p1)
{
  ((TreasureInfoDynamicData *)this)->moveTo(*(undefined4 *)(((int)this) + 0x6c));
  return;
}


int TreasureDataManager::getCurChapterId()
{
  uint uVar1;
  uint extraout_r1;
  int iVar2;
  int extraout_r3;
  
  uVar1 = (undefined4)(*(uint *)(((int)this) + 0x10));
  *(uint *)(((int)this) + 0x10) = uVar1 + 1;
  iVar2 = *(int *)(((int)this) + 4);
  if ((uint)(*(int *)(((int)this) + 8) - iVar2 >> 2) <= uVar1) {
    func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"));
    uVar1 = (undefined4)(extraout_r1);
    iVar2 = extraout_r3;
  }
  return iVar2 + uVar1 * 4;
}

int TreasureDataManager::getCurCardType()
{
  uint uVar1;
  uint extraout_r1;
  int iVar2;
  int extraout_r3;
  
  uVar1 = (undefined4)(*(uint *)(((int)this) + 0x30));
  *(uint *)(((int)this) + 0x30) = uVar1 + 1;
  iVar2 = *(int *)(((int)this) + 0x24);
  if ((uint)(*(int *)(((int)this) + 0x28) - iVar2 >> 2) <= uVar1) {
    func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"));
    uVar1 = (undefined4)(extraout_r1);
    iVar2 = extraout_r3;
  }
  return iVar2 + uVar1 * 4;
}

int TreasureDataManager::getBossId()
{
  return ((int)this) + 0x44;
}

undefined4 TreasureDataManager::getCurFateType()
{
  uint uVar1;
  uint extraout_r1;
  int iVar2;
  int extraout_r3;
  
  uVar1 = (undefined4)(*(uint *)(((int)this) + 0x60));
  *(uint *)(((int)this) + 0x60) = uVar1 + 1;
  iVar2 = *(int *)(((int)this) + 0x54);
  if ((uint)(*(int *)(((int)this) + 0x58) - iVar2 >> 2) <= uVar1) {
    func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"));
    uVar1 = (undefined4)(extraout_r1);
    iVar2 = extraout_r3;
  }
  return *(undefined4 *)(uVar1 * 4 + iVar2);
}


void TreasureDataManager::badThief()
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(((TreasureInfoDynamicData *)*(undefined4 *)(((int)this) + 0x6c))->badThief());
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar1 = (undefined4)(cocos2d::CCInteger::create(uVar1));
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)((intptr_t)"MSG_TREASURE_EVENT_BADTHIEF"), (cocos2d::CCObject*)uVar1);
  return;
}


void TreasureDataManager::heroOutPrision()
{
  return;
}

void TreasureDataManager::collectFreeDice(int p1)
{
  undefined4 uVar1;
  
  ((TreasureInfoDynamicData *)this)->collectFreeDice(*(undefined4 *)(((int)this) + 0x6c));
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"MSG_TREASURE_EVENT_FREEDICE"));
  return;
}

void TreasureDataManager::initWeightData()
{
  undefined4 uVar1;
  
  if (*(int *)(((int)this) + 100) == 0) {
    uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
    0 /* ctorZero */;
    *(undefined4 *)(((int)this) + 100) = uVar1;
  }
  return;
}

int TreasureDataManager::getDeliverPosByCurPos(int p1)
{
  undefined4 uVar1;
  uint extraout_r1;
  int iVar2;
  
  iVar2 = 0x1e;
  if (p1 < 0x1e) {
    iVar2 = p1;
  }
  uVar1 = (undefined4)(((long long)::lrand48()));
  func_0079e964(uVar1,iVar2);
  return p1 + ~extraout_r1;
}

void TreasureDataManager::initHeroData()
{
  undefined4 uVar1;
  
  if (*(int *)(((int)this) + 0x70) == 0) {
    uVar1 = (undefined4)(((long long)::operator new((size_t)(0x54))));
    0 /* ctorZero */;
    *(undefined4 *)(((int)this) + 0x70) = uVar1;
  }
  if (**(int **)(((int)this) + 0x6c) == 0) {
    ((TreasureHeroData *)*(undefined4 *)(((int)this) + 0x70))->resetHeroData();
  }
  return;
}

void TreasureDataManager::initRewardData()
{
  return;
}

void TreasureDataManager::initCurData()
{
  return;
}

void TreasureDataManager::readMapData()
{
  undefined4 uVar1;
  
  if (*(int *)(((int)this) + 0x68) == 0) {
    uVar1 = (undefined4)(((long long)::operator new((size_t)(0x60))));
    0 /* ctorZero */;
    *(undefined4 *)(((int)this) + 0x68) = uVar1;
  }
  return;
}


void TreasureDataManager::deleteMapData()
{
  ((TreasureMapDynamicData *)*(undefined4 *)(((int)this) + 0x68))->deleteMapData();
  *(undefined4 *)(((int)this) + 0x68) = 0;
  return;
}

void TreasureDataManager::readInfoData()
{
  undefined4 uVar1;
  
  if (*(int *)(((int)this) + 0x6c) == 0) {
    uVar1 = (undefined4)(((long long)::operator new((size_t)(0x44))));
    0 /* ctorZero */;
    *(undefined4 *)(((int)this) + 0x6c) = uVar1;
  }
  return;
}

void TreasureDataManager::updateInfoData()
{
  ((TreasureInfoDynamicData *)*(undefined4 *)(((int)this) + 0x6c))->updateData();
  return;
}

void TreasureDataManager::saveData()
{
  TreasureDataManager::updateMapData();
  TreasureDataManager::updateInfoData();
  return;
}

void TreasureDataManager::resetInfoData()
{
  ((TreasureInfoDynamicData *)*(undefined4 *)(((int)this) + 0x6c))->resetInfoData();
  return;
}

void TreasureDataManager::lockHeroData()
{
  return;
}

void TreasureDataManager::deleteHeroData()
{
  ((TreasureHeroData *)*(undefined4 *)(((int)this) + 0x70))->deleteData();
  *(undefined4 *)(((int)this) + 0x70) = 0;
  return;
}

void TreasureDataManager::initRecordData()
{
  undefined4 uVar1;
  
  if (*(int *)(((int)this) + 0x74) == 0) {
    uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
    0 /* ctorZero */;
    *(undefined4 *)(((int)this) + 0x74) = uVar1;
  }
  return;
}

void TreasureDataManager::deleteRecordData()
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x74);
  if (iVar1 != 0) {
    ((TreasureRecordData *)iVar1)->~TreasureRecordData();
    (void)(::operator delete((void *)(iVar1)));
  }
  *(undefined4 *)(((int)this) + 0x74) = 0;
  return;
}

void TreasureDataManager::deleteData()
{
  ((TreasureWeightData *)*(undefined4 *)(((int)this) + 100))->deleteData();
  *(undefined4 *)(((int)this) + 100) = 0;
  TreasureDataManager::deleteMapData();
  TreasureDataManager::resetInfoData();
  TreasureDataManager::deleteHeroData();
  TreasureDataManager::deleteRecordData();
  return;
}

void TreasureDataManager::addRewardToBag()
{
  ((TreasureInfoDynamicData *)*(undefined4 *)(((int)this) + 0x6c))->addRewardToBag();
  return;
}

void TreasureDataManager::addRewardToBagOnGetReward()
{
  TreasureDataManager::addRewardToBag();
  ((TreasureInfoDynamicData *)*(undefined4 *)(((int)this) + 0x6c))->clearRewardData();
  ((TreasureInfoDynamicData *)*(undefined4 *)(((int)this) + 0x6c))->updateCollectCardData();
  ((TreasureInfoDynamicData *)*(undefined4 *)(((int)this) + 0x6c))->updateCollectKeyData();
  ((TreasureInfoDynamicData *)*(undefined4 *)(((int)this) + 0x6c))->updateGotRewardData();
  return;
}




TreasureDataManager::~TreasureDataManager()
/* DESTROYAUX_V1: 1 处降级 */
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(1)));
  (void)0; /* DESTROYAUX 降级 */
  iVar3 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(5)));
  *(int *)((int)this + 4*(2)) = iVar2;
  iVar1 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(6)));
  for (iVar2 = (undefined4)(intptr_t)(iVar3); iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    ((std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>> *)(iVar2))->~vector();
  }
  *(int *)((int)this + 4*(10)) = *(int *)((int)this + 4*(9));
  *(int *)((int)this + 4*(6)) = iVar3;
  iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x19)));
  *(int *)((int)this + 4*(0xe)) = *(int *)((int)this + 4*(0xd));
  *(int *)((int)this + 4*(0x16)) = *(int *)((int)this + 4*(0x15));
  if (iVar2 != 0) {
    ((TreasureWeightData *)(iVar2))->~TreasureWeightData();
    func_0079e2cc(iVar2);
  }
  iVar2 = (undefined4)(intptr_t)(g_004b1928);
  *(int *)((int)this + 4*(0x19)) = 0;
  *(int *)((int)this + 4*(0x1a)) = 0;
  *(int *)((int)this + 4*(0x1b)) = 0;
  *(int *)((int)this + 4*(0x1c)) = 0;
  *(int *)((int)this + 4*(0x1d)) = 0;
  func_0079e2dc(((int)this) + 0x1e,iVar2 + 0x4b18a2);
  func_0079e2bc(((int)this) + 0x1e);
  if (*(int *)((int)this + 4*(0x15)) != 0) {
    func_0079e2cc();
  }
  if (*(int *)((int)this + 4*(0x12)) != 0) {
    func_0079e2cc();
  }
  func_0079e2bc(((int)this) + 0x11);
  ((std::vector<int, std::allocator<int>> *)(((int)this) + 0xd))->~vector();
  if (*(int *)((int)this + 4*(9)) != 0) {
    func_0079e2cc();
  }
  ((std::vector<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>, std::allocator<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>>> *)(((int)this) + 5))->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)(((int)this) + 1))->~vector();
  return;
}





void TreasureDataManager::checkMapData()
{
  TreasureDataManager::initWeightData();
  TreasureDataManager::initDeliverData();
  TreasureDataManager::readMapData();
  TreasureDataManager::readInfoData();
  TreasureDataManager::initHeroData();
  TreasureDataManager::initRecordData();
  return;
}


TreasureDataManager::TreasureDataManager()
/* DESTROYAUX_V1: 1 处降级 */
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (undefined4)(intptr_t)(g_004b1e38);
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x4b1d68));
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)this = iVar1 + 8;
  iVar1 = (undefined4)(intptr_t)(g_004b1e3c);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  iVar1 = (undefined4)(intptr_t)(*(int *)(iVar1 + 0x4b1d7a));
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  iVar1 = (undefined4)(intptr_t)(iVar1 + 0xc);
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0x12)) = 0;
  *(int *)((int)this + 4*(0x13)) = 0;
  *(int *)((int)this + 4*(0x14)) = 0;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  *(int *)((int)this + 4*(0x17)) = 0;
  *(int *)((int)this + 4*(0x11)) = iVar1;
  *(int *)((int)this + 4*(0x1e)) = iVar1;
  (void)0; /* DESTROYAUX 降级 */
  iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(5)));
  *(int *)((int)this + 4*(2)) = 0;
  iVar3 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(6)));
  for (iVar1 = (undefined4)(intptr_t)(iVar2); iVar1 != iVar3; iVar1 = iVar1 + 0xc) {
    ((std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>> *)(iVar1))->~vector();
  }
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(10)) = *(int *)((int)this + 4*(9));
  iVar1 = (undefined4)(intptr_t)(g_004b1e40);
  *(int *)((int)this + 4*(0xe)) = *(int *)((int)this + 4*(0xd));
  *(int *)((int)this + 4*(0x13)) = *(int *)((int)this + 4*(0x12));
  *(int *)((int)this + 4*(0x16)) = *(int *)((int)this + 4*(0x15));
  *(int *)((int)this + 4*(0x19)) = 0;
  *(int *)((int)this + 4*(0x1a)) = 0;
  *(int *)((int)this + 4*(0x1b)) = 0;
  *(int *)((int)this + 4*(0x1c)) = 0;
  *(int *)((int)this + 4*(0x1d)) = 0;
  func_0079e2dc(((int)this) + 0x1e,iVar1 + 0x4b1dd2);
  *(undefined1 *)(((int)this) + 0x20) = 1;
  *(int *)((int)this + 4*(0x1f)) = 0;
  ((TreasureDataManager *)(((int)this)))->initData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (18) =====
undefined4 TreasureDataManager::getNextStep()
{
  undefined4 uVar1;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  
  if (**(int **)(((int)this) + 0x6c) < 100) {
    uVar1 = (undefined4)(((TreasureMapDynamicData *)this)->getNextStep(*(undefined4 *)(((int)this) + 0x68)));
  }
  else {
    uVar1 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_1c,"本次寻宝已经结束，请重新开始",auStack_24);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_18);
    func_0079e45c(auStack_14,uStack_18,auStack_20);
    0 /* ctorZero */;
    func_0079e2bc(auStack_14);
    func_0079e2bc(&uStack_18);
    func_0079e2bc(auStack_1c);
    uVar1 = (undefined4)(0);
  }
  return uVar1;
}

void TreasureDataManager::getReward(std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureDataManager::collectCard(TreasureCardType * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureDataManager::initBossData()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  func_0079e2dc(((int)this) + 0x44,"8001",p3,p4,p4);
  return;
}

undefined8 TreasureDataManager::updateMapData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x68));
  uVar1 = (undefined4)(**(undefined4 **)(((int)this) + 0x6c));
  uStack_14 = (undefined4)(p2);
  (**(code **)(**(int **)(*(undefined4 **)(((int)this) + 0x6c))[0x10] + 8))(&uStack_14);
  ((TreasureMapDynamicData *)uVar2)->updateMapData(uVar1, (std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return ghidra_CONCAT44(uStack_14,((int)this));
}

void TreasureDataManager::getCurDeliverPos()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 TreasureDataManager::insertCardType()
{
  undefined4 uVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar2;
  int extraout_r3;
  int iVar3;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar3 = 0;
  iStack_1c = 0;
  iStack_18 = 0;
  uStack_14 = (undefined4)(0);
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  do {
    iStack_20 = (undefined4)(intptr_t)(0 /* ctorZero */);
    ((std::vector<TreasureCardType, std::allocator<TreasureCardType>> *)(&iStack_1c))->push_back(*(TreasureCardType const*)&iStack_20);
    iVar3 = (undefined4)(intptr_t)(iVar3 + 1);
  } while (iVar3 != 5);
  uVar1 = (undefined4)(func_0079e58c());
  func_0079e964(uVar1,5);
  uVar2 = (undefined4)(extraout_r1);
  iVar3 = (undefined4)(intptr_t)(iStack_1c);
  if ((uint)(iStack_18 - iStack_1c >> 2) <= extraout_r1) {
    func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
    uVar2 = (undefined4)(extraout_r1_00);
    iVar3 = (undefined4)(intptr_t)(extraout_r3);
  }
  ((std::vector<TreasureCardType, std::allocator<TreasureCardType>> *)(((int)this) + 0x24))->push_back(iVar3 + uVar2 * 4);
  ((std::vector<TreasureCardType, std::allocator<TreasureCardType>> *)(&iStack_1c))->~vector();
  return ghidra_CONCAT44(iStack_1c,iStack_20);
}

void TreasureDataManager::initFateData()
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  uint extraout_r1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined4 *)(((int)this) + 0x58) = *(undefined4 *)(((int)this) + 0x54);
  iVar4 = (undefined4)(intptr_t)(((int)this) + 0x48);
  *(undefined4 *)(((int)this) + 0x60) = 0;
  uStack_1c = (undefined4)(0);
  uStack_18 = (undefined4)(p3);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar4))->push_back(*(TreasureType const*)&uStack_1c);
  uStack_1c = (undefined4)(2);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar4))->push_back(*(TreasureType const*)&uStack_1c);
  uStack_1c = (undefined4)(3);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar4))->push_back(*(TreasureType const*)&uStack_1c);
  uStack_1c = (undefined4)(4);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar4))->push_back(*(TreasureType const*)&uStack_1c);
  uStack_1c = (undefined4)(5);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar4))->push_back(*(TreasureType const*)&uStack_1c);
  uStack_1c = (undefined4)(6);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar4))->push_back(*(TreasureType const*)&uStack_1c);
  uStack_1c = (undefined4)(7);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar4))->push_back(*(TreasureType const*)&uStack_1c);
  uStack_1c = (undefined4)(8);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar4))->push_back(*(TreasureType const*)&uStack_1c);
  iVar5 = 10;
  uStack_1c = (undefined4)(9);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar4))->push_back(*(TreasureType const*)&uStack_1c);
  uStack_1c = (undefined4)(10);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar4))->push_back(*(TreasureType const*)&uStack_1c);
  iVar2 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x4c));
  iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x48));
  do {
    uVar1 = (undefined4)(func_0079e58c());
    func_0079e8b4(uVar1,iVar2 - iVar4 >> 2);
    iVar3 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x48));
    uVar6 = (undefined4)(intptr_t)(ghidra_CONCAT44(extraout_r1,((int)this) + 0x54));
    if ((uint)(*(int *)(((int)this) + 0x4c) - iVar3 >> 2) <= extraout_r1) {
      uVar6 = (undefined4)(intptr_t)(func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"));
      iVar3 = (undefined4)(intptr_t)(extraout_r3);
    }
    iVar5 = (undefined4)(intptr_t)(iVar5 + -1);
    ((std::vector<TreasureType, std::allocator<TreasureType>> *)((int)uVar6))->push_back(iVar3 + (int)((ulonglong)uVar6 >> 0x20) * 4);
  } while (iVar5 != 0);
  return;
}

undefined8 TreasureDataManager::initChapterData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TreasureDataManager::initCardData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureDataManager::insertDeliverPos(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureDataManager::initDeliverData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureDataManager::initData()
{
  TreasureDataManager::initChapterData();
  TreasureDataManager::initRewardData();
  TreasureDataManager::initCardData();
  TreasureDataManager::initBossData();
  TreasureDataManager::initCurData();
  ((sir::singleton<TreasureMissionData, 0> *)this)->instance();
  ((TreasureMissionData *)this)->serachDBData();
  return;
}

void TreasureDataManager::heroDie()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  iVar1 = (undefined4)(intptr_t)(TreasureDataManager::getInstance());
  ((TreasureHeroData *)this)->randomDie();
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_14));
  ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"MSG_TREASURE_EVENT_DIE", (cocos2d::CCObject*)uVar3);
  func_0079e2bc(&uStack_14);
  return;
}

void TreasureDataManager::heroRelive()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  iVar1 = (undefined4)(intptr_t)(TreasureDataManager::getInstance());
  ((TreasureHeroData *)this)->randomRelive();
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar3 = (undefined4)(cocos2d::CCString::create(*(std::string const*)&uStack_14));
  ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"MSG_TREASURE_EVENT_RELIVER", (cocos2d::CCObject*)uVar3);
  func_0079e2bc(&uStack_14);
  return;
}

undefined8 TreasureDataManager::heroDropInPrison()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p2);
  iVar1 = (undefined4)(intptr_t)(TreasureDataManager::getInstance());
  ((TreasureHeroData *)this)->randomDropInPrison();
  func_0079e2bc(&uStack_c);
  return ghidra_CONCAT44(uStack_c,((int)this));
}

void TreasureDataManager::refreshtData()
/* DESTROYAUX_V1: 1 处降级 */
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = (undefined4)(intptr_t)(*(int *)(*(int *)(((int)this) + 0x68) + 8));
  uVar3 = (undefined4)(iVar4 - *(int *)(*(int *)(((int)this) + 0x68) + 4) >> 2);
  iVar2 = (undefined4)(intptr_t)((int *)((int)this));
  if (uVar3 < 100) {
    iVar2 = (undefined4)(intptr_t)(func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",99,uVar3,iVar4,p4));
  }
  uVar5 = (undefined4)(*(undefined4 *)(iVar2 + 4));
  (void)0; /* DESTROYAUX 降级 */
  iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x14));
  *(undefined4 *)(((int)this) + 8) = uVar5;
  iVar6 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x18));
  for (iVar2 = (undefined4)(intptr_t)(iVar4); iVar1 = (undefined4)(intptr_t)(g_004b1f54, iVar2 != iVar6); iVar2 = iVar2 + 0xc) {
    ((std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>> *)(iVar2))->~vector();
  }
  *(int *)(((int)this) + 0x18) = iVar4;
  *(undefined4 *)(((int)this) + 0x28) = *(undefined4 *)(((int)this) + 0x24);
  *(undefined4 *)(((int)this) + 0x38) = *(undefined4 *)(((int)this) + 0x34);
  *(undefined4 *)(((int)this) + 0x58) = *(undefined4 *)(((int)this) + 0x54);
  *(undefined4 *)(((int)this) + 0x4c) = *(undefined4 *)(((int)this) + 0x48);
  func_0079e2dc(((int)this) + 0x78,iVar1 + 0x4b1f28);
  ((TreasureDataManager *)(((int)this)))->deleteData();
  ((TreasureInfoDynamicData *)(*(undefined4 *)(((int)this) + 0x6c)))->updateData();
  ((TreasureDataManager *)(((int)this)))->initData();
  ((TreasureDataManager *)(((int)this)))->checkMapData();
  return;
}

undefined4 * TreasureDataManager::getCurReward()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}
