#include "TreasureInfoDynamicData.h"
#include "CCNotificationCenter.h"
#include "BLLanguage.h"
#include "BackPackData.h"
#include "DBUtil.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "PetUserData.h"
#include "RichTextData.h"
#include "Toast.h"
#include "TreasureDataManager.h"
#include "TreasureHeroData.h"
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
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e30c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004b50ec;
extern "C" unsigned long _DAT_004b50f0;
extern "C" unsigned long _DAT_004b50f4;
extern "C" unsigned long _DAT_004b50f8;
extern "C" unsigned long _DAT_004b50fc;
extern "C" unsigned long _DAT_004b5214;
extern "C" unsigned long _DAT_004b5218;
extern "C" unsigned long _DAT_004b521c;
extern "C" unsigned long _DAT_004b5220;
extern "C" unsigned long _DAT_004b5224;
extern "C" unsigned long _DAT_004b5280;
extern "C" unsigned long _DAT_004b5284;
extern "C" unsigned long _DAT_004b5388;
extern "C" unsigned long _DAT_004b538c;
extern "C" unsigned long _DAT_004b5390;
extern "C" unsigned long _DAT_004b5394;
extern "C" unsigned long _DAT_004b5398;
extern "C" unsigned long _DAT_004b544c;
extern "C" unsigned long _DAT_004b556c;
extern "C" unsigned long _DAT_004b5570;
extern "C" unsigned long _DAT_004b5574;
extern "C" unsigned long _DAT_004b5578;
extern "C" unsigned long _DAT_004b557c;
extern "C" unsigned long _DAT_004b5694;
extern "C" unsigned long _DAT_004b5698;
extern "C" unsigned long _DAT_004b569c;
extern "C" unsigned long _DAT_004b56a0;
extern "C" unsigned long _DAT_004b56a4;
extern "C" unsigned long _DAT_004b57d4;
extern "C" unsigned long _DAT_004b57d8;
extern "C" unsigned long _DAT_004b57dc;
extern "C" unsigned long _DAT_004b57e0;
extern "C" unsigned long _DAT_004b57e4;
extern "C" unsigned long _DAT_004b5808;
extern "C" unsigned long _DAT_004b5930;
extern "C" unsigned long _DAT_004b5934;
extern "C" unsigned long _DAT_004b5938;
extern "C" unsigned long _DAT_004b593c;
extern "C" unsigned long _DAT_004b5940;
extern "C" unsigned long _DAT_004b5a58;
extern "C" unsigned long _DAT_004b5a5c;
extern "C" unsigned long _DAT_004b5a60;
extern "C" unsigned long _DAT_004b5a64;
extern "C" unsigned long _DAT_004b5a68;
extern "C" unsigned long _DAT_004b5b80;
extern "C" unsigned long _DAT_004b5b84;
extern "C" unsigned long _DAT_004b5b88;
extern "C" unsigned long _DAT_004b5b8c;
extern "C" unsigned long _DAT_004b5b90;
extern "C" unsigned long _DAT_004b5ca8;
extern "C" unsigned long _DAT_004b5cac;
extern "C" unsigned long _DAT_004b5cb0;
extern "C" unsigned long _DAT_004b5cb4;
extern "C" unsigned long _DAT_004b5cb8;
extern "C" unsigned long _DAT_004b5dd0;
extern "C" unsigned long _DAT_004b5dd4;
extern "C" unsigned long _DAT_004b5dd8;
extern "C" unsigned long _DAT_004b5ddc;
extern "C" unsigned long _DAT_004b5de0;
extern "C" unsigned long _DAT_004b5ef8;
extern "C" unsigned long _DAT_004b5efc;
extern "C" unsigned long _DAT_004b5f00;
extern "C" unsigned long _DAT_004b5f04;
extern "C" unsigned long _DAT_004b5f08;
extern "C" unsigned long _DAT_004b627c;
extern "C" unsigned long _DAT_004b6280;
extern "C" unsigned long _DAT_004b6284;
extern "C" unsigned long _DAT_004b6288;
extern "C" unsigned long _DAT_004b628c;
extern "C" unsigned long _DAT_004b6318;
extern "C" unsigned long _DAT_004b631c;
extern "C" unsigned long _DAT_004b66a4;
extern "C" unsigned long _DAT_004b66a8;
extern "C" unsigned long _DAT_004b66ac;
extern "C" unsigned long _DAT_004b66b0;
extern "C" unsigned long _DAT_004b66b4;
extern "C" unsigned long _DAT_004b66b8;
extern "C" unsigned long _DAT_004b66bc;
extern "C" unsigned long _DAT_004b66c0;
extern "C" unsigned long _DAT_004b66c4;
extern "C" unsigned long _DAT_004b66c8;
extern "C" unsigned long _DAT_004b66cc;
extern "C" unsigned long _DAT_004b66d0;
extern "C" unsigned long _DAT_004b66d4;
extern "C" unsigned long _DAT_004b66d8;
extern "C" unsigned long _DAT_004b6c78;
extern "C" unsigned long _DAT_004b6d24;
extern "C" unsigned long _DAT_004b6d28;
extern "C" unsigned long _DAT_004b6d2c;
extern "C" unsigned long _DAT_004b709c;
extern "C" unsigned long _DAT_004b70a0;
extern "C" unsigned long _DAT_004b70a4;
extern "C" unsigned long _DAT_004b70a8;
extern "C" unsigned long _DAT_004b70ac;
extern "C" unsigned long _DAT_004b70b0;
extern "C" unsigned long _DAT_004b70b4;
extern "C" unsigned long _DAT_004b70b8;
extern "C" unsigned long _DAT_004b70bc;
extern "C" unsigned long _DAT_004b70c0;
extern "C" unsigned long _DAT_004b70c4;
extern "C" unsigned long _DAT_004b70c8;
extern "C" unsigned long _DAT_004b70cc;
extern "C" unsigned long _DAT_004b70d0;
extern "C" unsigned long _DAT_004b7194;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_004b50ec;
extern "C" unsigned long g_004b50f0;
extern "C" unsigned long g_004b50f4;
extern "C" unsigned long g_004b50f8;
extern "C" unsigned long g_004b50fc;
extern "C" unsigned long g_004b5214;
extern "C" unsigned long g_004b5218;
extern "C" unsigned long g_004b521c;
extern "C" unsigned long g_004b5220;
extern "C" unsigned long g_004b5224;
extern "C" unsigned long g_004b5280;
extern "C" unsigned long g_004b5284;
extern "C" unsigned long g_004b5388;
extern "C" unsigned long g_004b538c;
extern "C" unsigned long g_004b5390;
extern "C" unsigned long g_004b5394;
extern "C" unsigned long g_004b5398;
extern "C" unsigned long g_004b544c;
extern "C" unsigned long g_004b556c;
extern "C" unsigned long g_004b5570;
extern "C" unsigned long g_004b5574;
extern "C" unsigned long g_004b5578;
extern "C" unsigned long g_004b557c;
extern "C" unsigned long g_004b5694;
extern "C" unsigned long g_004b5698;
extern "C" unsigned long g_004b569c;
extern "C" unsigned long g_004b56a0;
extern "C" unsigned long g_004b56a4;
extern "C" unsigned long g_004b57d4;
extern "C" unsigned long g_004b57d8;
extern "C" unsigned long g_004b57dc;
extern "C" unsigned long g_004b57e0;
extern "C" unsigned long g_004b57e4;
extern "C" unsigned long g_004b5808;
extern "C" unsigned long g_004b5930;
extern "C" unsigned long g_004b5934;
extern "C" unsigned long g_004b5938;
extern "C" unsigned long g_004b593c;
extern "C" unsigned long g_004b5940;
extern "C" unsigned long g_004b5a58;
extern "C" unsigned long g_004b5a5c;
extern "C" unsigned long g_004b5a60;
extern "C" unsigned long g_004b5a64;
extern "C" unsigned long g_004b5a68;
extern "C" unsigned long g_004b5b80;
extern "C" unsigned long g_004b5b84;
extern "C" unsigned long g_004b5b88;
extern "C" unsigned long g_004b5b8c;
extern "C" unsigned long g_004b5b90;
extern "C" unsigned long g_004b5ca8;
extern "C" unsigned long g_004b5cac;
extern "C" unsigned long g_004b5cb0;
extern "C" unsigned long g_004b5cb4;
extern "C" unsigned long g_004b5cb8;
extern "C" unsigned long g_004b5dd0;
extern "C" unsigned long g_004b5dd4;
extern "C" unsigned long g_004b5dd8;
extern "C" unsigned long g_004b5ddc;
extern "C" unsigned long g_004b5de0;
extern "C" unsigned long g_004b5ef8;
extern "C" unsigned long g_004b5efc;
extern "C" unsigned long g_004b5f00;
extern "C" unsigned long g_004b5f04;
extern "C" unsigned long g_004b5f08;
extern "C" unsigned long g_004b627c;
extern "C" unsigned long g_004b6280;
extern "C" unsigned long g_004b6284;
extern "C" unsigned long g_004b6288;
extern "C" unsigned long g_004b628c;
extern "C" unsigned long g_004b6318;
extern "C" unsigned long g_004b631c;
extern "C" unsigned long g_004b66a4;
extern "C" unsigned long g_004b66a8;
extern "C" unsigned long g_004b66ac;
extern "C" unsigned long g_004b66b0;
extern "C" unsigned long g_004b66b4;
extern "C" unsigned long g_004b66b8;
extern "C" unsigned long g_004b66bc;
extern "C" unsigned long g_004b66c0;
extern "C" unsigned long g_004b66c4;
extern "C" unsigned long g_004b66c8;
extern "C" unsigned long g_004b66cc;
extern "C" unsigned long g_004b66d0;
extern "C" unsigned long g_004b66d4;
extern "C" unsigned long g_004b66d8;
extern "C" unsigned long g_004b6c78;
extern "C" unsigned long g_004b6d24;
extern "C" unsigned long g_004b6d28;
extern "C" unsigned long g_004b6d2c;
extern "C" unsigned long g_004b709c;
extern "C" unsigned long g_004b70a0;
extern "C" unsigned long g_004b70a4;
extern "C" unsigned long g_004b70a8;
extern "C" unsigned long g_004b70ac;
extern "C" unsigned long g_004b70b0;
extern "C" unsigned long g_004b70b4;
extern "C" unsigned long g_004b70b8;
extern "C" unsigned long g_004b70bc;
extern "C" unsigned long g_004b70c0;
extern "C" unsigned long g_004b70c4;
extern "C" unsigned long g_004b70c8;
extern "C" unsigned long g_004b70cc;
extern "C" unsigned long g_004b70d0;
extern "C" unsigned long g_004b7194;



void TreasureInfoDynamicData::useRestart()
{
  return;
}


undefined4 TreasureInfoDynamicData::move(int p1)
{
  int iVar1;
  
  if (p1 < 1) {
    while ((p1 != 0 && (1 < *(int *)this))) {
      p1 = p1 + 1;
      *(int *)this = *(int *)this + -1;
    }
LAB_004b53f8:
    TreasureInfoDynamicData::updateCurPosData();
    return *(undefined4 *)*(int *)((int)this + 4*(0x10));
  }
  do {
    if (*(int *)this != 0) {
      if (p1 == 0) goto LAB_004b53f8;
      iVar1 = ((TreasureDataManager *)this)->getInstance();
      if (((int *)*(int *)((int)this + 4*(0x10)) == *(int **)(*(int *)(iVar1 + 0x68) + 8)) ||
         ((iVar1 = *(int *)*(int *)((int)this + 4*(0x10)), *(char *)(iVar1 + 0xd) == '\0' &&
          ((*(char *)(iVar1 + 0xc) == '\0' || (*(int *)(iVar1 + 0x1c) < 1)))))) goto LAB_004b53f8;
    }
    p1 = p1 + -1;
    if (*(int *)this != 0) {
      *(int *)((int)this + 4*(0x10)) = *(int *)((int)this + 4*(0x10)) + 4;
    }
    *(int *)this = *(int *)this + 1;
  } while( true );
}

undefined4 TreasureInfoDynamicData::moveTo(int p1)
{
  int iVar1;
  int iVar2;
  int extraout_r3;
  int iVar3;
  
  do {
    if (((int)p1 < 0) || (*(int *)this <= (int)p1)) break;
    *(int *)this = *(int *)this + -1;
    iVar3 = *(int *)*(int *)((int)this + 4*(0x10));
    iVar1 = ((TreasureDataManager *)this)->getInstance();
    iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 4);
    if ((uint)(*(int *)(*(int *)(iVar1 + 0x68) + 8) - iVar2 >> 2) <= p1) {
      func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),p1);
      iVar2 = extraout_r3;
    }
  } while (iVar3 != *(int *)(iVar2 + p1 * 4));
  TreasureInfoDynamicData::updateCurPosData();
  return *(undefined4 *)*(int *)((int)this + 4*(0x10));
}

void TreasureInfoDynamicData::movePos(int p1)
{
  int iVar1;
  
  *(int *)this = p1;
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  *(int *)((int)this + 4*(0x10)) = *(int *)(*(int *)(iVar1 + 0x68) + 4) + *(int *)this * 4 + -4;
  TreasureInfoDynamicData::updateCurPosData();
  return;
}



int TreasureInfoDynamicData::useMaxKey(int p1)
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x14);
  if (iVar1 < p1) {
    p1 = iVar1;
  }
  *(int *)(((int)this) + 0x14) = iVar1 - p1;
  TreasureInfoDynamicData::updateCollectKeyData();
  return p1;
}


void TreasureInfoDynamicData::collectFreeDice(int p1)
{
  undefined4 uVar1;
  
  *(int *)(((int)this) + 0x24) = *(int *)(((int)this) + 0x24) + p1;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"MSG_TREASURE_COLLECTFREEDICE"));
  TreasureInfoDynamicData::updateFreeDiceData();
  return;
}

void TreasureInfoDynamicData::useFreeDice()
{
  *(int *)(((int)this) + 0x24) = *(int *)(((int)this) + 0x24) + -1;
  TreasureInfoDynamicData::updateFreeDiceData();
  return;
}







void TreasureInfoDynamicData::updateData()
{
  TreasureInfoDynamicData::updateCurPosData();
  TreasureInfoDynamicData::updateRefreshTimeData();
  TreasureInfoDynamicData::updateGotRewardData();
  TreasureInfoDynamicData::updateCollectKeyData();
  TreasureInfoDynamicData::updateCollectCardData();
  TreasureInfoDynamicData::updateFreeDiceData();
  TreasureInfoDynamicData::updateRefreshMaxData();
  TreasureInfoDynamicData::updateSpecialDicePriceData();
  TreasureInfoDynamicData::updateNormalDicePriceData();
  TreasureInfoDynamicData::updateNormalPriceAddData();
  TreasureInfoDynamicData::updateNormalPriceMaxData();
  TreasureInfoDynamicData::updateGameOverData();
  return;
}






void TreasureInfoDynamicData::resetInfoData()
{
  TreasureInfoDynamicData::clearCacheData();
  TreasureInfoDynamicData::updateCurPosData();
  TreasureInfoDynamicData::updateGotRewardData();
  TreasureInfoDynamicData::updateCollectKeyData();
  TreasureInfoDynamicData::updateCollectCardData();
  TreasureInfoDynamicData::updateGameOverData();
  return;
}



TreasureInfoDynamicData::~TreasureInfoDynamicData()
{
  ((std::vector<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>, std::allocator<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>>> *)((int)this) + 8)->clear();
  *(int *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x18);
  if (*(int *)(((int)this) + 0x18) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x18))));
  }
  ((std::vector<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>, std::allocator<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>>> *)((int)this) + 8)->~vector();
  return;
}





TreasureInfoDynamicData::TreasureInfoDynamicData()
{
  undefined4 uVar1;
  
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(0x10)) = 0;
  ((std::vector<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>, std::allocator<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>>> *)((int)this) + 2)->clear();
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(7)) = *(int *)((int)this + 4*(6));
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(undefined1 *)((int)((int)this) + 0x3d) = 0;
  *(int *)((int)this + 4*(0xb)) = 10;
  *(int *)((int)this + 4*(0xc)) = 1000;
  *(int *)((int)this + 4*(0xd)) = 1000;
  uVar1 = (undefined4)(g_004b7194);
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xe)) = uVar1;
  *(undefined1 *)(((int)this) + 0xf) = 0;
  TreasureInfoDynamicData::initData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (24) =====
void TreasureInfoDynamicData::updateGotRewardData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::updateCollectCardData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 TreasureInfoDynamicData::collectKey(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TreasureInfoDynamicData::updateCurPosData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::updateRefreshTimeData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::updateCollectKeyData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::updateFreeDiceData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::updateRefreshMaxData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::updateSpecialDicePriceData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::updateNormalDicePriceData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::updateNormalPriceAddData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::updateNormalPriceMaxData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::updateGameOverData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::addRewardToBag()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::buildInfoData()
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = 5;
  uStack_10 = (undefined4)(p3);
  do {
    iVar1 = (undefined4)(intptr_t)(iVar1 + -1);
    uStack_14 = (undefined4)(0);
    ((std::vector<int, std::allocator<int>> *)(((int)this) + 0x18))->push_back(*(int const*)&uStack_14);
  } while (iVar1 != 0);
  return;
}

void TreasureInfoDynamicData::collectCard(TreasureCardType p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::insertInfoData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::clearCacheData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::refreshData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::clearRewardData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureInfoDynamicData::getReward(std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 TreasureInfoDynamicData::badThief()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TreasureInfoDynamicData::additemlists()
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = 0;
  piVar2 = (int *)(g_004b6d24 + 0x4b6cba);
  ((std::vector<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>, std::allocator<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>>> *)this)->clear();
  iVar3 = (int)*(int *)&(*piVar2);
  uStack_24 = (undefined4)(0);
  uStack_20 = (undefined4)(0);
  uStack_1c = (undefined4)(0);
  do {
    iStack_2c = (undefined4)(intptr_t)(iVar3 + 0xc);
    func_0079e2dc(&iStack_2c,g_004b6d28 + 0x4b6cd4);
    iStack_28 = 0;
    func_0079e2dc(&iStack_2c,g_004b6d2c + 0x4b6ce2);
    iVar1 = (undefined4)(intptr_t)(iVar1 + 1);
    iStack_28 = (undefined4)(intptr_t)(iVar1);
    ((std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>> *)(&uStack_24))->push_back(*(TreasureRewardInfo const*)&iStack_2c);
    func_0079e2bc(&iStack_2c);
  } while (iVar1 != 0x32);
  ((std::vector<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>, std::allocator<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>>> *)(((int)this) + 8))->push_back(*(std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>> const*)&uStack_24);
  ((std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>> *)(&uStack_24))->~vector();
  return;
}

undefined4 * TreasureInfoDynamicData::initData()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *extraout_r3;
  int iVar6;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  iStack_74 = 0;
  func_0079e45c(&uStack_68," select * from ",&puStack_24);
  func_0079e69c(&uStack_68,"treasure_info");
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,uStack_68,&iStack_74,&iStack_70,&iStack_6c,0));
  if ((iVar3 == 0) && (0 < iStack_70)) {
    iVar5 = (undefined4)(intptr_t)((iStack_6c + 2) * 4);
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_74 + iVar5)));
    *(int *)this = iVar3;
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_74 + iVar5 + 4)));
    *(int *)((int)this + 4*(1)) = iVar3;
    func_0079e45c(auStack_64,*(undefined4 *)(iStack_74 + iVar5 + 8),&puStack_24);
    iVar3 = (undefined4)(intptr_t)(func_0079e4bc(auStack_64,g_004b70a4 + 0x4b6dc2));
    if (iVar3 != 0) {
      func_0079e53c(auStack_60,auStack_64);
      func_0079e45c(auStack_5c,g_004b70a8 + 0x4b6dde,&puStack_24);
      0 /* ctorZero */;
      func_0079e2bc(auStack_5c);
      func_0079e2bc(auStack_60);
      for (iVar3 = (undefined4)(intptr_t)(iStack_48); iVar3 != iStack_44; iVar3 = iVar3 + 4) {
        iVar6 = (undefined4)(intptr_t)(func_0079e4bc(iVar3,g_004b70ac + 0x4b6e0e));
        if (iVar6 != 0) {
          func_0079e53c(auStack_58,iVar3);
          func_0079e45c(&puStack_24,g_004b70b0 + 0x4b6e2a,&uStack_30);
          0 /* ctorZero */;
          func_0079e2bc(&puStack_24);
          func_0079e2bc(auStack_58);
          uStack_30 = (undefined4)(0);
          uStack_2c = (undefined4)(0);
          uStack_28 = (undefined4)(0);
          for (iVar6 = (undefined4)(intptr_t)(iStack_3c); iVar6 != iStack_38; iVar6 = iVar6 + 4) {
            func_0079e53c(auStack_54,iVar6);
            func_0079e45c(&iStack_50,g_004b70b4 + 0x4b6e68,auStack_58);
            0 /* ctorZero */;
            func_0079e2bc(&iStack_50);
            func_0079e2bc(auStack_54);
            iStack_50 = (undefined4)(intptr_t)(*(int *)(g_004b70b8 + 0x4b6e8c) + 0xc);
            func_0079e2dc(&iStack_50,g_004b70bc + 0x4b6e90);
            uStack_4c = (undefined4)(0);
            if ((int)puStack_20 - (int)puStack_24 >> 2 == 0) {
              func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",0);
              func_0079e2bc(&iStack_50);
              ((std::vector<std::string, std::allocator<std::string>> *)(&puStack_24))->~vector();
              ((std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>> *)(&uStack_30))->~vector();
              ((std::vector<std::string, std::allocator<std::string>> *)(&iStack_3c))->~vector();
              ((std::vector<std::string, std::allocator<std::string>> *)(&iStack_48))->~vector();
              func_0079e2bc(auStack_64);
              func_0079e2bc(&uStack_68);
              puVar4 = (undefined4 *)func_0079e30c();
              puVar4[2] = 0;
              puVar4[3] = 0;
              puVar4[4] = 0;
              puVar4[6] = 0;
              puVar4[7] = 0;
              puVar4[8] = 0;
              puVar4[0x10] = 0;
              ((std::vector<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>, std::allocator<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>>> *)(puVar4 + 2))->clear();
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[7] = puVar4[6];
              puVar4[5] = 0;
              puVar4[9] = 0;
              *(undefined1 *)((int)puVar4 + 0x3d) = 0;
              puVar4[0xb] = 10;
              puVar4[0xc] = 1000;
              puVar4[0xd] = 1000;
              uVar2 = (undefined4)(g_004b7194);
              puVar4[10] = 0;
              puVar4[0xe] = uVar2;
              *(undefined1 *)(puVar4 + 0xf) = 0;
              ((TreasureInfoDynamicData *)(puVar4))->initData();
              return (undefined4 *)(puVar4);
            }
            func_0079e52c(&iStack_50);
            puVar4 = puStack_24;
            if ((uint)((int)puStack_20 - (int)puStack_24 >> 2) < 2) {
              func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",1);
              puVar4 = extraout_r3;
            }
            uStack_4c = (undefined4)(func_0079e6c0(puVar4[1]));
            ((std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>> *)(&uStack_30))->push_back(*(TreasureRewardInfo const*)&iStack_50);
            func_0079e2bc(&iStack_50);
            ((std::vector<std::string, std::allocator<std::string>> *)(&puStack_24))->~vector();
          }
          ((std::vector<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>, std::allocator<std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>>> *)(((int)this) + 2))->push_back(*(std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>> const*)&uStack_30);
          ((std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>> *)(&uStack_30))->~vector();
          ((std::vector<std::string, std::allocator<std::string>> *)(&iStack_3c))->~vector();
        }
      }
      ((std::vector<std::string, std::allocator<std::string>> *)(&iStack_48))->~vector();
    }
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_74 + iVar5 + 0xc)));
    *(int *)((int)this + 4*(5)) = iVar3;
    func_0079e45c(&iStack_48,*(undefined4 *)(iStack_74 + iVar5 + 0x10),&puStack_24);
    iVar3 = (undefined4)(intptr_t)(func_0079e4bc(&iStack_48,g_004b70c8 + 0x4b6f42));
    iVar6 = 5;
    if (iVar3 == 0) {
      do {
        puStack_24 = (undefined4 *)0x0;
        ((std::vector<int, std::allocator<int>> *)(((int)this) + 6))->push_back(*(int const*)&puStack_24);
        iVar6 = (undefined4)(intptr_t)(iVar6 + -1);
      } while (iVar6 != 0);
    }
    else {
      func_0079e53c(&iStack_3c,&iStack_48);
      func_0079e45c(&uStack_30,g_004b70cc + 0x4b6f5e,&iStack_50);
      0 /* ctorZero */;
      func_0079e2bc(&uStack_30);
      func_0079e2bc(&iStack_3c);
      for (puVar4 = puStack_24; puVar4 != puStack_20; puVar4 = puVar4 + 1) {
        iVar3 = (undefined4)(intptr_t)(func_0079e4bc(puVar4,g_004b70d0 + 0x4b6f8a));
        if (iVar3 != 0) {
          uStack_30 = (undefined4)(func_0079e6c0(*puVar4));
          ((std::vector<int, std::allocator<int>> *)(((int)this) + 6))->push_back(*(int const*)&uStack_30);
        }
      }
      ((std::vector<std::string, std::allocator<std::string>> *)(&puStack_24))->~vector();
    }
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_74 + iVar5 + 0x14)));
    *(int *)((int)this + 4*(9)) = iVar3;
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_74 + iVar5 + 0x18)));
    *(int *)((int)this + 4*(10)) = iVar3;
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_74 + iVar5 + 0x1c)));
    *(int *)((int)this + 4*(0xb)) = iVar3;
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_74 + iVar5 + 0x20)));
    *(int *)((int)this + 4*(0xc)) = iVar3;
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_74 + iVar5 + 0x24)));
    *(int *)((int)this + 4*(0xd)) = iVar3;
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_74 + iVar5 + 0x28)));
    *(int *)((int)this + 4*(0xe)) = iVar3;
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iVar5 + iStack_74 + 0x2c)));
    *(char *)(((int)this) + 0xf) = '\x01' - (iVar3 == 0);
    func_0079e2bc(&iStack_48);
    func_0079e2bc(auStack_64);
  }
  else {
    *(undefined1 *)((int)((int)this) + 0x3d) = 1;
    ((TreasureInfoDynamicData *)(((int)this)))->buildInfoData();
    ((TreasureInfoDynamicData *)(((int)this)))->insertInfoData();
  }
  sqlite3_free_table(iStack_74);
  iVar3 = (undefined4)(intptr_t)(((TreasureDataManager *)this)->getInstance());
  iVar3 = (undefined4)(intptr_t)(*(int *)(*(int *)(iVar3 + 0x68) + 4) + *(int *)this * 4);
  if (*(int *)this != 0) {
    iVar3 = (undefined4)(intptr_t)(iVar3 + -4);
  }
  *(int *)((int)this + 4*(0x10)) = iVar3;
  puVar4 = (undefined4 *)func_0079e2bc(&uStack_68);
  return (undefined4 *)(puVar4);
}
