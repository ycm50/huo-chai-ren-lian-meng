#include "SuitEquipBuffData.h"
#include "CCString.h"
#include "DataManager.h"
#include "SuitEquipBuffItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3cc(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079ea84(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004aa4f0;
extern "C" unsigned long _DAT_004aa4f4;
extern "C" unsigned long _DAT_004aa69c;
extern "C" unsigned long _DAT_004aa6a0;
extern "C" unsigned long g_004aa4f0;
extern "C" unsigned long g_004aa4f4;
extern "C" unsigned long g_004aa69c;
extern "C" unsigned long g_004aa6a0;
void SuitEquipBuffData::getKeyByIDAndLV(int p1, int p2)
{
  undefined4 uVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p1);
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d%s%d"), p2, g_004aa4f4 + 0x4aa4da);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(((int)this),uVar1,&uStack_c);
  return;
}

void SuitEquipBuffData::initData()
{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iStack_5c;
  int iStack_54;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 *puStack_24;
  undefined1 auStack_20 [4];
  undefined4 *puStack_1c;
  
  uStack_44 = (undefined4)(0);
  func_0079e45c(&uStack_38," select * from ",auStack_20);
  func_0079e69c(&uStack_38,"suitequip_buff");
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))());
  iVar4 = (undefined4)(intptr_t)(sqlite3_get_table(uVar3,uStack_38,&uStack_44,&iStack_40,&iStack_3c,0));
  if (iVar4 == 0) {
    iStack_34 = (undefined4)(intptr_t)(iStack_3c << 1);
    iStack_54 = 1;
    if (0 < iStack_40) {
      for (; iStack_54 < iStack_40; iStack_54 = iStack_54 + 1) {
        puVar5 = (undefined4 *)func_0079e2fc(0x10);
        0 /* ctorZero */;
        ((SuitEquipBuffItemData *)(puVar5))->initWithData((char**)uStack_44, *(int*)&iStack_34);
        ((SuitEquipBuffData *)(((int)this)))->getKeyByIDAndLV(*puVar5, puVar5[2]);
        func_0079e53c(auStack_2c,auStack_30);
        func_0079e53c(auStack_28,auStack_2c);
        puStack_24 = puVar5;
        func_0079e53c(auStack_20,auStack_28);
        puStack_1c = puStack_24;
        iVar7 = (undefined4)(intptr_t)(((int)this) + 4);
        bVar1 = (undefined4)(intptr_t)(true);
        iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 8));
        iStack_5c = (undefined4)(intptr_t)(iVar7);
        while (iVar8 = iVar4, iVar8 != 0) {
          iVar6 = (undefined4)(intptr_t)(func_0079ea84(auStack_20,iVar8 + 0x10));
          if (-1 < iVar6) {
            iVar4 = (undefined4)(intptr_t)(*(int *)(iVar8 + 0xc));
          }
          else {
            iVar4 = (undefined4)(intptr_t)(*(int *)(iVar8 + 8));
          }
          bVar1 = (undefined4)(intptr_t)(-1 >= iVar6);
          iStack_5c = (undefined4)(intptr_t)(iVar8);
        }
        iVar4 = (undefined4)(intptr_t)(iStack_5c);
        if (bVar1) {
          if (iStack_5c != *(int *)(((int)this) + 0xc)) {
            iVar4 = (undefined4)(intptr_t)(func_0079e3cc(iStack_5c));
            goto LAB_004aa5e4;
          }
LAB_004aa5f0:
          uVar9 = (undefined4)(1);
          if (iStack_5c != iVar7) {
            uVar9 = (undefined4)(func_0079ea84(auStack_20,iStack_5c + 0x10));
            uVar9 = (undefined4)(uVar9 >> 0x1f);
          }
          iVar4 = (undefined4)(intptr_t)(func_0079e2fc(0x18));
          func_0079e53c(iVar4 + 0x10,auStack_20);
          *(undefined4 **)(iVar4 + 0x14) = puStack_1c;
          func_0079e3dc(uVar9,iVar4,iStack_5c,iVar7);
          *(int *)(((int)this) + 0x14) = *(int *)(((int)this) + 0x14) + 1;
        }
        else {
LAB_004aa5e4:
          iVar4 = (undefined4)(intptr_t)(func_0079ea84(iVar4 + 0x10,auStack_20));
          if (iVar4 < 0) goto LAB_004aa5f0;
        }
        func_0079e2bc(auStack_20);
        func_0079e2bc(auStack_28);
        func_0079e2bc(auStack_2c);
        func_0079e2bc(auStack_30);
      }
    }
  }
  func_0079e2bc(&uStack_38);
  return;
}

SuitEquipBuffData::~SuitEquipBuffData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

SuitEquipBuffData::SuitEquipBuffData()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((int)this) + 4);
  (void)(((long long)::memset((void *)(iVar1),(int)(0),(size_t)(0x10))));
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(int *)(((int)this) + 0xc) = iVar1;
  *(int *)(((int)this) + 0x10) = iVar1;
  ((std::map<std::string, SuitEquipBuffItemData*, std::less<std::string>, std::allocator<std::pair<std::string const, SuitEquipBuffItemData*>>> *)((int)this))->erase(0);
  *(int *)(((int)this) + 0xc) = iVar1;
  *(undefined4 *)(((int)this) + 8) = 0;
  *(int *)(((int)this) + 0x10) = iVar1;
  *(undefined4 *)(((int)this) + 0x14) = 0;
  SuitEquipBuffData::initData();
  return;
}

void SuitEquipBuffData::getItemByIdAndLv(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
