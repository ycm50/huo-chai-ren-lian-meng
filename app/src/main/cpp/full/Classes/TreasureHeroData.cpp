#include "TreasureHeroData.h"
#include "CCArray.h"
#include "BLRoleAttribute.h"
#include "DBUtil.h"
#include "DataManager.h"
#include "Toast.h"
#include "TreasureHeroItemData.h"
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
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
extern "C" long long mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_(...);

struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
extern "C" long long func_00442068(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079eb74(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004b2e04;
extern "C" unsigned long _DAT_004b2e08;
extern "C" unsigned long _DAT_004b3008;
extern "C" unsigned long _DAT_004b300c;
extern "C" unsigned long _DAT_004b3120;
extern "C" unsigned long _DAT_004b3124;
extern "C" unsigned long _DAT_004b3128;
extern "C" unsigned long _DAT_004b312c;
extern "C" unsigned long _DAT_004b31f4;
extern "C" unsigned long _DAT_004b31f8;
extern "C" unsigned long _DAT_004b31fc;
extern "C" unsigned long _DAT_004b3200;
extern "C" unsigned long _DAT_004b3204;
extern "C" unsigned long _DAT_004b3280;
extern "C" unsigned long _DAT_004b33bc;
extern "C" unsigned long _DAT_004b34fc;
extern "C" unsigned long _DAT_004b3500;
extern "C" unsigned long _DAT_004b3504;
extern "C" unsigned long _DAT_004b3508;
extern "C" unsigned long _DAT_004b350c;
extern "C" unsigned long _DAT_004b3510;
extern "C" unsigned long _DAT_004b38dc;
extern "C" unsigned long _DAT_004b38e0;
extern "C" unsigned long _DAT_004b38e4;
extern "C" unsigned long _DAT_004b38e8;
extern "C" unsigned long _DAT_004b38ec;
extern "C" unsigned long _DAT_004b38f0;
extern "C" unsigned long _DAT_004b38f4;
extern "C" unsigned long _DAT_004b38f8;
extern "C" unsigned long _DAT_004b38fc;
extern "C" unsigned long _DAT_004b3900;
extern "C" unsigned long _DAT_004b3904;
extern "C" unsigned long _DAT_004b3908;
extern "C" unsigned long _DAT_004b390c;
extern "C" unsigned long _DAT_004b3910;
extern "C" unsigned long _DAT_004b3914;
extern "C" unsigned long _DAT_004b3918;
extern "C" unsigned long _DAT_004b391c;
extern "C" unsigned long _DAT_004b3920;
extern "C" unsigned long _DAT_004b3ad4;
extern "C" unsigned long _DAT_004b3c00;
extern "C" unsigned long _DAT_004b3d44;
extern "C" unsigned long _DAT_004b3d48;
extern "C" unsigned long _DAT_004b3e20;
extern "C" unsigned long _DAT_004b3f48;
extern "C" unsigned long _DAT_004b45f4;
extern "C" unsigned long _DAT_004b45f8;
extern "C" unsigned long _DAT_004b46e8;
extern "C" unsigned long _DAT_004b46ec;
extern "C" unsigned long _DAT_004b46f0;
extern "C" unsigned long _DAT_004b47f8;
extern "C" unsigned long _DAT_004b47fc;
extern "C" unsigned long _DAT_004b4800;
extern "C" unsigned long _DAT_004b4804;
extern "C" unsigned long _DAT_004b4808;
extern "C" unsigned long _DAT_004b480c;
extern "C" unsigned long _DAT_004b48a8;
extern "C" unsigned long _DAT_004b48ac;
extern "C" unsigned long _DAT_004b49e8;
extern "C" unsigned long _DAT_004b49ec;
extern "C" unsigned long _DAT_004b4e48;
extern "C" unsigned long _DAT_004b4e4c;
extern "C" unsigned long _DAT_004b4e50;
extern "C" unsigned long _DAT_004b4e54;
extern "C" unsigned long _DAT_004b4e58;
extern "C" unsigned long _DAT_004b4e5c;
extern "C" unsigned long _DAT_004b4e60;
extern "C" unsigned long _DAT_004b4e64;
extern "C" unsigned long _DAT_004b4e68;
extern "C" unsigned long _DAT_004b4e6c;
extern "C" unsigned long _DAT_004b4e70;
extern "C" unsigned long _DAT_004b4e74;
extern "C" unsigned long _DAT_004b4e78;
extern "C" unsigned long _DAT_004b4e7c;
extern "C" unsigned long _DAT_004b4e80;
extern "C" unsigned long _DAT_004b4e84;
extern "C" unsigned long _DAT_004b4e88;
extern "C" unsigned long _DAT_004b4e8c;
extern "C" unsigned long _DAT_004b4e90;
extern "C" unsigned long _DAT_004b4e94;
extern "C" unsigned long _DAT_004b4e98;
extern "C" unsigned long _DAT_004b4e9c;
extern "C" unsigned long _DAT_004b4ea0;
extern "C" unsigned long _DAT_004b4ea4;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_004b2e04;
extern "C" unsigned long g_004b2e08;
extern "C" unsigned long g_004b3008;
extern "C" unsigned long g_004b300c;
extern "C" unsigned long g_004b3120;
extern "C" unsigned long g_004b3124;
extern "C" unsigned long g_004b3128;
extern "C" unsigned long g_004b312c;
extern "C" unsigned long g_004b31f4;
extern "C" unsigned long g_004b31f8;
extern "C" unsigned long g_004b31fc;
extern "C" unsigned long g_004b3200;
extern "C" unsigned long g_004b3204;
extern "C" unsigned long g_004b3280;
extern "C" unsigned long g_004b33bc;
extern "C" unsigned long g_004b34fc;
extern "C" unsigned long g_004b3500;
extern "C" unsigned long g_004b3504;
extern "C" unsigned long g_004b3508;
extern "C" unsigned long g_004b350c;
extern "C" unsigned long g_004b3510;
extern "C" unsigned long g_004b38dc;
extern "C" unsigned long g_004b38e0;
extern "C" unsigned long g_004b38e4;
extern "C" unsigned long g_004b38e8;
extern "C" unsigned long g_004b38ec;
extern "C" unsigned long g_004b38f0;
extern "C" unsigned long g_004b38f4;
extern "C" unsigned long g_004b38f8;
extern "C" unsigned long g_004b38fc;
extern "C" unsigned long g_004b3900;
extern "C" unsigned long g_004b3904;
extern "C" unsigned long g_004b3908;
extern "C" unsigned long g_004b390c;
extern "C" unsigned long g_004b3910;
extern "C" unsigned long g_004b3914;
extern "C" unsigned long g_004b3918;
extern "C" unsigned long g_004b391c;
extern "C" unsigned long g_004b3920;
extern "C" unsigned long g_004b3ad4;
extern "C" unsigned long g_004b3c00;
extern "C" unsigned long g_004b3d44;
extern "C" unsigned long g_004b3d48;
extern "C" unsigned long g_004b3e20;
extern "C" unsigned long g_004b3f48;
extern "C" unsigned long g_004b45f4;
extern "C" unsigned long g_004b45f8;
extern "C" unsigned long g_004b46e8;
extern "C" unsigned long g_004b46ec;
extern "C" unsigned long g_004b46f0;
extern "C" unsigned long g_004b47f8;
extern "C" unsigned long g_004b47fc;
extern "C" unsigned long g_004b4800;
extern "C" unsigned long g_004b4804;
extern "C" unsigned long g_004b4808;
extern "C" unsigned long g_004b480c;
extern "C" unsigned long g_004b48a8;
extern "C" unsigned long g_004b48ac;
extern "C" unsigned long g_004b49e8;
extern "C" unsigned long g_004b49ec;
extern "C" unsigned long g_004b4e48;
extern "C" unsigned long g_004b4e4c;
extern "C" unsigned long g_004b4e50;
extern "C" unsigned long g_004b4e54;
extern "C" unsigned long g_004b4e58;
extern "C" unsigned long g_004b4e5c;
extern "C" unsigned long g_004b4e60;
extern "C" unsigned long g_004b4e64;
extern "C" unsigned long g_004b4e68;
extern "C" unsigned long g_004b4e6c;
extern "C" unsigned long g_004b4e70;
extern "C" unsigned long g_004b4e74;
extern "C" unsigned long g_004b4e78;
extern "C" unsigned long g_004b4e7c;
extern "C" unsigned long g_004b4e80;
extern "C" unsigned long g_004b4e84;
extern "C" unsigned long g_004b4e88;
extern "C" unsigned long g_004b4e8c;
extern "C" unsigned long g_004b4e90;
extern "C" unsigned long g_004b4e94;
extern "C" unsigned long g_004b4e98;
extern "C" unsigned long g_004b4e9c;
extern "C" unsigned long g_004b4ea0;
extern "C" unsigned long g_004b4ea4;
void TreasureHeroData::AddLiveHero()
{
  return;
}







void TreasureHeroData::clearCacheData()
{
  int iVar1;
  
  iVar1 = g_004b33bc;
  *(undefined4 *)(((int)this) + 0x10) = *(undefined4 *)(((int)this) + 0xc);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 0x24))->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 0x18))->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 0x30))->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this))->clear();
  iVar1 = iVar1 + 0x4b338c;
  func_0079e2dc(((int)this) + 0x3c,iVar1);
  func_0079e2dc(((int)this) + 0x40,iVar1);
  func_0079e2dc(((int)this) + 0x44,iVar1);
  func_0079e2dc(((int)this) + 0x48,iVar1);
  func_0079e2dc(((int)this) + 0x4c,iVar1);
  return;
}

void TreasureHeroData::deleteData()
{
  TreasureHeroData::clearCacheData();
  TreasureHeroData::deleteDBData();
  return;
}

TreasureHeroData::~TreasureHeroData()
{
  *(undefined4 *)(((int)this) + 0x10) = *(undefined4 *)(((int)this) + 0xc);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 0x24))->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 0x18))->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 0x30))->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this))->clear();
  func_0079e2dc(((int)this) + 0x3c,g_004b34fc + 0x4b340e);
  func_0079e2dc(((int)this) + 0x40,g_004b3500 + 0x4b341a);
  func_0079e2dc(((int)this) + 0x44,g_004b3504 + 0x4b3428);
  func_0079e2dc(((int)this) + 0x48,g_004b3508 + 0x4b3438);
  func_0079e2dc(((int)this) + 0x4c,g_004b350c + 0x4b3448);
  func_0079e2dc(((int)this) + 0x50,g_004b3510 + 0x4b3458);
  func_0079e2bc(((int)this) + 0x50);
  func_0079e2bc(((int)this) + 0x4c);
  func_0079e2bc(((int)this) + 0x48);
  func_0079e2bc(((int)this) + 0x44);
  func_0079e2bc(((int)this) + 0x40);
  func_0079e2bc(((int)this) + 0x3c);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 0x30))->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 0x24))->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 0x18))->~vector();
  if (*(int *)(((int)this) + 0xc) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0xc))));
  }
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this))->~vector();
  return;
}



















TreasureHeroData::TreasureHeroData()
{
  int iVar1;
  
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  iVar1 = *(int *)(g_004b47f8 + 0x4b471e) + 0xc;
  *(int *)((int)this + 4*(0xf)) = iVar1;
  *(int *)((int)this + 4*(0x10)) = iVar1;
  *(int *)((int)this + 4*(0x11)) = iVar1;
  *(int *)((int)this + 4*(0x12)) = iVar1;
  *(int *)((int)this + 4*(0x13)) = iVar1;
  *(int *)((int)this + 4*(0x14)) = iVar1;
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 9))->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 6))->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 0xc))->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this))->clear();
  func_0079e2dc(((int)this) + 0xf,g_004b47fc + 0x4b4768);
  func_0079e2dc(((int)this) + 0x10,g_004b4800 + 0x4b4776);
  func_0079e2dc(((int)this) + 0x11,g_004b4804 + 0x4b4780);
  func_0079e2dc(((int)this) + 0x12,g_004b4808 + 0x4b478c);
  func_0079e2dc(((int)this) + 0x13,g_004b480c + 0x4b4798);
  TreasureHeroData::init();
  return;
}


void TreasureHeroData::resetHeroData()
{
  TreasureHeroData::lockHeroData();
  return;
}

void TreasureHeroData::refreshHeroData()
{
  TreasureHeroData::lockHeroData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (27) =====
undefined4 TreasureHeroData::getItemById(std::string * p1)
{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)(((int)this) + 0x10);
  puVar1 = *(undefined4 **)(((int)this) + 0xc);
  do {
    puVar3 = puVar1;
    puVar5 = puVar4;
    if (puVar3 == puVar4) break;
    iVar2 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                      (*puVar3,p1);
    puVar1 = puVar3 + 1;
    puVar5 = puVar3;
  } while (iVar2 == 0);
  return *puVar5;
}

undefined4 TreasureHeroData::IsHaveHeroInDB(std::string * p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_30 [4];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iStack_2c = 0;
  func_0079e45c(&uStack_20,((intptr_t)" select * from "),auStack_1c);
  func_0079e69c(&uStack_20,((intptr_t)"treasure_hero"));
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,uStack_20,&iStack_2c,&iStack_28,&iStack_24,0));
  if (iVar3 == 0) {
    if (iStack_28 < 1) {
      uVar2 = (undefined4)(0);
    }
    else {
      func_0079e45c(auStack_1c,*(undefined4 *)((iStack_24 + 1) * 4 + iStack_2c),auStack_30);
      uVar2 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                        (p1,auStack_1c);
      func_0079e2bc(auStack_1c);
    }
  }
  else {
    uVar2 = (undefined4)(0);
  }
  func_0079e2bc(&uStack_20);
  return uVar2;
}

undefined4 TreasureHeroData::checkModifyHeroData()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
  uVar8 = (undefined4)(0);
  do {
    uVar3 = (undefined4)(((cocos2d::CCArray *)(uVar2))->count());
    if (uVar3 <= uVar8) {
      return 0;
    }
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar8));
    if (((iVar4 != 0) &&
        (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_004b3008 + 0x4b2e4e),
                                         *(undefined4 *)(g_004b300c + 0x4b2e50),0),
        piVar1 != 0)) && (iVar4 = (**(code **)(*(int *)(piVar1) + (0x38)))(), iVar4 != 0)) {
      (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_38,piVar1);
      iVar9 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(1)));
      iVar4 = (undefined4)(intptr_t)(*(int *)this);
      do {
        if (iVar4 == iVar9) goto LAB_004b2ee0;
        iVar5 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                          (auStack_38,iVar4);
        iVar4 = (undefined4)(intptr_t)(iVar4 + 4);
      } while (iVar5 == 0);
      uVar6 = (undefined4)(((DataManager *)this)->shareDataManager());
      func_0079e53c(auStack_34,auStack_38);
      piVar1 = (int *)((DataManager *)(uVar6))->getPlayerDataByID((std::string *)(char *)auStack_34);
      func_0079e2bc(auStack_34);
      if (piVar1 != 0) {
        piVar7 = (int *)(**(code **)(*(int *)(piVar1) + (0x18)))(piVar1);
        iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x20)))());
        func_0079e53c(auStack_30,auStack_38);
        iVar9 = (undefined4)(intptr_t)(((TreasureHeroData *)(((int)this)))->getItemById((std::string *)(char *)auStack_30));
        iVar9 = (undefined4)(intptr_t)(*(int *)(iVar9 + 0x18));
        func_0079e2bc(auStack_30);
        if (iVar9 != iVar4) {
LAB_004b2ee0:
          func_0079e2bc(auStack_38);
          return 1;
        }
        iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x58)))(piVar1));
        func_0079e53c(auStack_2c,auStack_38);
        iVar9 = (undefined4)(intptr_t)(((TreasureHeroData *)(((int)this)))->getItemById((std::string *)(char *)auStack_2c));
        iVar9 = (undefined4)(intptr_t)(*(int *)(iVar9 + 0x1c));
        func_0079e2bc(auStack_2c);
        if (iVar9 != iVar4) goto LAB_004b2ee0;
        uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
        iVar4 = (undefined4)(intptr_t)(((BLRoleAttribute *)(uVar6))->getFightAttrValueByType(0));
        func_0079e53c(auStack_28,auStack_38);
        iVar9 = (undefined4)(intptr_t)(((TreasureHeroData *)(((int)this)))->getItemById((std::string *)(char *)auStack_28));
        iVar9 = (undefined4)(intptr_t)(*(int *)(iVar9 + 8));
        func_0079e2bc(auStack_28);
        if (iVar9 != iVar4) goto LAB_004b2ee0;
        uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
        iVar4 = (undefined4)(intptr_t)(((BLRoleAttribute *)(uVar6))->getFightAttrValueByType(1));
        func_0079e53c(auStack_24,auStack_38);
        iVar9 = (undefined4)(intptr_t)(((TreasureHeroData *)(((int)this)))->getItemById((std::string *)(char *)auStack_24));
        iVar9 = (undefined4)(intptr_t)(*(int *)(iVar9 + 0xc));
        func_0079e2bc(auStack_24);
        if (iVar9 != iVar4) goto LAB_004b2ee0;
        uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
        iVar4 = (undefined4)(intptr_t)(((BLRoleAttribute *)(uVar6))->getFightAttrValueByType(2));
        func_0079e53c(auStack_20,auStack_38);
        iVar9 = (undefined4)(intptr_t)(((TreasureHeroData *)(((int)this)))->getItemById((std::string *)(char *)auStack_20));
        iVar9 = (undefined4)(intptr_t)(*(int *)(iVar9 + 0x10));
        func_0079e2bc(auStack_20);
        if (iVar9 != iVar4) goto LAB_004b2ee0;
        uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))(piVar1));
        iVar4 = (undefined4)(intptr_t)(((BLRoleAttribute *)(uVar6))->getFightAttrValueByType(3));
        func_0079e53c(auStack_1c,auStack_38);
        iVar9 = (undefined4)(intptr_t)(((TreasureHeroData *)(((int)this)))->getItemById((std::string *)(char *)auStack_1c));
        iVar9 = (undefined4)(intptr_t)(*(int *)(iVar9 + 0x14));
        func_0079e2bc(auStack_1c);
        if (iVar9 != iVar4) goto LAB_004b2ee0;
      }
      func_0079e2bc(auStack_38);
    }
    uVar8 = (undefined4)(uVar8 + 1);
  } while( true );
}

void TreasureHeroData::removeIdInVec(std::vector<std::string, std::allocator<std::string>>& p1, std::string p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureHeroData::deleteDBData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureHeroData::deleteDBDataById(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 TreasureHeroData::randomFight()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TreasureHeroData::insertDBDataById(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 TreasureHeroData::insertDBData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 TreasureHeroData::distinguishHeroByStatus()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 TreasureHeroData::dieById(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 TreasureHeroData::randomDie()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TreasureHeroData::die(std::vector<std::string, std::allocator<std::string>>& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 TreasureHeroData::reliveById(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 TreasureHeroData::randomRelive()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TreasureHeroData::reliveAll()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 TreasureHeroData::dropInPrisonById(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TreasureHeroData::randomDropInPrison()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 TreasureHeroData::outOfPrisonById(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TreasureHeroData::randomOutOfPrison()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureHeroData::outAllInPrision()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int TreasureHeroData::outOfPrisonMax(int& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TreasureHeroData::sortHeroId()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int TreasureHeroData::initDataFromDB()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

bool TreasureHeroData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void TreasureHeroData::lockHeroData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 TreasureHeroData::checkAddedHeroData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
