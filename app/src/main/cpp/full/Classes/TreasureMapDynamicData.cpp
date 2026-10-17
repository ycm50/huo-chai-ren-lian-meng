#include "TreasureMapDynamicData.h"
#include "TreasureMapItemBase.h"
#include "DBUtil.h"
#include "DataManager.h"
#include "TreasureDataManager.h"
#include "TreasureMapItemManager.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e944(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004b732c;
extern "C" unsigned long _DAT_004b7330;
extern "C" unsigned long _DAT_004b7334;
extern "C" unsigned long _DAT_004b7338;
extern "C" unsigned long _DAT_004b733c;
extern "C" unsigned long _DAT_004b7560;
extern "C" unsigned long _DAT_004b7564;
extern "C" unsigned long _DAT_004b7568;
extern "C" unsigned long _DAT_004b756c;
extern "C" unsigned long _DAT_004b7570;
extern "C" unsigned long _DAT_004b7574;
extern "C" unsigned long _DAT_004b7578;
extern "C" unsigned long _DAT_004b77f0;
extern "C" unsigned long _DAT_004b7a14;
extern "C" unsigned long _DAT_004b7a18;
extern "C" unsigned long _DAT_004b7b68;
extern "C" unsigned long _DAT_004b7b6c;
extern "C" unsigned long _DAT_004b7b70;
extern "C" unsigned long _DAT_004b7d2c;
extern "C" unsigned long _DAT_004b7d30;
extern "C" unsigned long _DAT_004b7d34;
extern "C" unsigned long _DAT_004b7d38;
extern "C" unsigned long _DAT_004b7d3c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_004b732c;
extern "C" unsigned long g_004b7330;
extern "C" unsigned long g_004b7334;
extern "C" unsigned long g_004b7338;
extern "C" unsigned long g_004b733c;
extern "C" unsigned long g_004b7560;
extern "C" unsigned long g_004b7564;
extern "C" unsigned long g_004b7568;
extern "C" unsigned long g_004b756c;
extern "C" unsigned long g_004b7570;
extern "C" unsigned long g_004b7574;
extern "C" unsigned long g_004b7578;
extern "C" unsigned long g_004b77f0;
extern "C" unsigned long g_004b7a14;
extern "C" unsigned long g_004b7a18;
extern "C" unsigned long g_004b7b68;
extern "C" unsigned long g_004b7b6c;
extern "C" unsigned long g_004b7b70;
extern "C" unsigned long g_004b7d2c;
extern "C" unsigned long g_004b7d30;
extern "C" unsigned long g_004b7d34;
extern "C" unsigned long g_004b7d38;
extern "C" unsigned long g_004b7d3c;
void TreasureMapDynamicData::clearCacheData()
{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    ((TreasureMapItemManager *)iVar1)->~TreasureMapItemManager();
    (void)(::operator delete((void *)(iVar1)));
  }
  *(int *)this = 0;
  *(int *)((int)this + 4*(2)) = *(int *)((int)this + 4*(1));
  *(int *)((int)this + 4*(5)) = *(int *)((int)this + 4*(4));
  *(int *)((int)this + 4*(8)) = *(int *)((int)this + 4*(7));
  *(int *)((int)this + 4*(0xc)) = *(int *)((int)this + 4*(0xb));
  *(int *)((int)this + 4*(0xf)) = *(int *)((int)this + 4*(0xe));
  *(int *)((int)this + 4*(0x12)) = *(int *)((int)this + 4*(0x11));
  return;
}




TreasureMapDynamicData::~TreasureMapDynamicData()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(*(int *)this);
  if (iVar1 != 0) {
    ((TreasureMapItemManager *)iVar1)->~TreasureMapItemManager();
    (void)(::operator delete((void *)(iVar1)));
  }
  *(int *)this = 0;
  *(int *)((int)this + 4*(2)) = *(int *)((int)this + 4*(1));
  *(int *)((int)this + 4*(5)) = *(int *)((int)this + 4*(4));
  *(int *)((int)this + 4*(8)) = *(int *)((int)this + 4*(7));
  *(int *)((int)this + 4*(0xc)) = *(int *)((int)this + 4*(0xb));
  *(int *)((int)this + 4*(0xf)) = *(int *)((int)this + 4*(0xe));
  *(int *)((int)this + 4*(0x12)) = *(int *)((int)this + 4*(0x11));
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x14)->~vector();
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)((int)this) + 0x11)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0xe)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0xb)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 7)->~vector();
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)((int)this) + 4)->~vector();
  if (*(int *)((int)this + 4*(1)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(1)))));
  }
  return;
}






TreasureMapDynamicData::TreasureMapDynamicData()
{
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0x10)) = 0;
  *(int *)((int)this + 4*(0x11)) = 0;
  *(int *)((int)this + 4*(0x12)) = 0;
  *(int *)((int)this + 4*(0x13)) = 0;
  *(int *)((int)this + 4*(0x14)) = 0;
  *(int *)((int)this + 4*(0x15)) = 0;
  *(int *)((int)this + 4*(0x16)) = 0;
  *(int *)this = 0;
  *(undefined1 *)(((int)this) + 0x17) = 0;
  *(undefined1 *)((int)((int)this) + 0x5e) = 0;
  *(undefined1 *)((int)((int)this) + 0x5d) = 0;
  TreasureMapDynamicData::initData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
void TreasureMapDynamicData::updateMapData(int p1, std::string p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int TreasureMapDynamicData::getNextStep(int p1)
{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int aiStack_28 [5];
  
  if (p1 < 100) {
    iVar4 = 0;
    piVar3 = (int *)(*(int *)(((int)this) + 4) + p1 * 4);
    piVar1 = aiStack_28 + 1;
    piVar2 = piVar3 + 6;
    aiStack_28[1] = 0;
    aiStack_28[2] = 0;
    aiStack_28[3] = 0;
    for (; (piVar3 != *(int **)(((int)this) + 8) && (piVar3 != piVar2)); piVar3 = piVar3 + 1) {
      aiStack_28[0] = *(int *)(*piVar3 + 8);
      ((std::vector<int, std::allocator<int>> *)&piVar1)->push_back(*(int *)(void *)&aiStack_28);
      iVar4 = (undefined4)(intptr_t)(iVar4 + aiStack_28[0]);
    }
    iVar4 = (undefined4)(intptr_t)(0 /* ctorZero */);
    iVar4 = (undefined4)(intptr_t)(iVar4 + 1);
    ((std::vector<int, std::allocator<int>> *)piVar1)->~vector();
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

void TreasureMapDynamicData::deleteMapData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureMapDynamicData::buildMapData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureMapDynamicData::initMapTypes()
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = (undefined4)(intptr_t)(((int)this) + 0x10);
  uStack_14 = (undefined4)(0);
  uStack_10 = (undefined4)(p3);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(1);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(2);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(3);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(4);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(5);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(6);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(7);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(8);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(9);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(10);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(0xb);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(0xc);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  uStack_14 = (undefined4)(0xd);
  ((std::vector<TreasureType, std::allocator<TreasureType>> *)(iVar1))->push_back(*(TreasureType const*)&uStack_14);
  return;
}

void TreasureMapDynamicData::initBuildLimitData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureMapDynamicData::insertMapData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureMapDynamicData::initData()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *extraout_r1;
  undefined4 *puVar4;
  undefined4 *extraout_r3;
  undefined4 uVar5;
  uint uVar6;
  int iStack_5c;
  int iStack_58;
  undefined1 auStack_44 [4];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  undefined4 *puStack_24;
  int iStack_20;
  
  uVar1 = (undefined4)(func_0079e2fc(1));
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(g_004b7d2c);
  *(int *)this = uVar1;
  iStack_40 = 0;
  func_0079e45c(&uStack_34,iVar3 + 0x4b7b96,&puStack_24);
  func_0079e69c(&uStack_34,"treasure_map");
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x28)))();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar1,uStack_34,&iStack_40,&iStack_3c,&iStack_38,0));
  if ((iVar3 == 0) && (0 < iStack_3c)) {
    iStack_58 = (undefined4)(intptr_t)((iStack_38 + 1) * 4);
    for (iStack_5c = 0; iStack_5c < iStack_3c; iStack_5c = iStack_5c + 1) {
      iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_40 + iStack_58)));
      if (iVar3 - 1U < 100) {
        func_0079e45c(auStack_30,*(undefined4 *)(iStack_40 + iStack_58 + 4),auStack_44);
        func_0079e45c(&iStack_2c,g_004b7d34 + 0x4b7c1a,auStack_28);
        0 /* ctorZero */;
        func_0079e2bc(&iStack_2c);
        func_0079e2bc(auStack_30);
        puVar4 = puStack_24;
        if (iStack_20 - (int)puStack_24 >> 2 == 0) {
          func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",0);
          puVar4 = extraout_r3;
        }
        func_0079e6c0(*puVar4);
        uVar1 = (undefined4)(0 /* ctorZero */);
        puVar4 = puStack_24;
        if ((uint)(iStack_20 - (int)puStack_24 >> 2) < 2) {
          func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",1);
          puVar4 = extraout_r1;
        }
        func_0079e53c(auStack_30,puVar4 + 1);
        uVar5 = (undefined4)(*(int *)this);
        func_0079e53c(auStack_28,auStack_30);
        iStack_2c = (undefined4)((void)(((TreasureMapItemManager *)(uVar5))->createItemWithData((TreasureType)uVar1, (std::string)(char*)auStack_28)),(intptr_t)0);
        func_0079e2bc(auStack_28);
        *(int *)(iStack_2c + 0x14) = iStack_5c + 1;
        ((std::vector<TreasureMapItemBase*, std::allocator<TreasureMapItemBase*>> *)(((int)this) + 1))->push_back(*(TreasureMapItemBase* const*)&iStack_2c);
        func_0079e2bc(auStack_30);
        ((std::vector<std::string, std::allocator<std::string>> *)(&puStack_24))->~vector();
      }
      iStack_58 = (undefined4)(intptr_t)(iStack_58 + 0xc);
    }
  }
  sqlite3_free_table(iStack_40);
  uVar6 = (undefined4)((int)(*(int *)((int)this + 4*(2)) - *(int *)((int)this + 4*(1))) >> 2);
  if (uVar6 < 100) {
    if (uVar6 != 0) {
      *(int *)((int)this + 4*(2)) = *(int *)((int)this + 4*(1));
    }
    ((TreasureMapDynamicData *)(((int)this)))->initMapTypes();
    ((TreasureMapDynamicData *)(((int)this)))->initBuildLimitData();
    ((TreasureMapDynamicData *)(((int)this)))->buildMapData();
    ((TreasureMapDynamicData *)(((int)this)))->insertMapData();
  }
  func_0079e2bc(&uStack_34);
  return;
}
