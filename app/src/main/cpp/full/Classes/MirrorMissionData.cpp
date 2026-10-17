#include "MirrorMissionData.h"
#include "DataManager.h"
#include "MirrorMissionItemData.h"
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
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3cc(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079ea84(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049453c;
extern "C" unsigned long _DAT_00494540;
extern "C" unsigned long _DAT_004945ac;
extern "C" unsigned long _DAT_004945b0;
extern "C" unsigned long _DAT_004945b4;
extern "C" unsigned long _DAT_004945b8;
extern "C" unsigned long _DAT_004945bc;
extern "C" unsigned long g_0049453c;
extern "C" unsigned long g_00494540;
extern "C" unsigned long g_004945ac;
extern "C" unsigned long g_004945b0;
extern "C" unsigned long g_004945b4;
extern "C" unsigned long g_004945b8;
extern "C" unsigned long g_004945bc;
void MirrorMissionData::initData()
{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_50;
  uint uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uStack_40 = (undefined4)(0);
  func_0079e45c(&uStack_34," select * from ",auStack_20);
  func_0079e69c(&uStack_34,"mirrormission");
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))());
  iVar4 = (undefined4)(intptr_t)(sqlite3_get_table(uVar3,uStack_34,&uStack_40,&iStack_3c,&iStack_38,0));
  if ((iVar4 == 0) && (iStack_30 = iStack_38 << 1, 2 < iStack_3c)) {
    for (iStack_50 = 0; iStack_50 < iStack_3c + -1; iStack_50 = iStack_50 + 1) {
      uVar3 = (undefined4)(func_0079e2fc(0xc));
      0 /* ctorZero */;
      ((MirrorMissionItemData *)(uVar3))->initWithData((char**)uStack_40, *(int*)&iStack_30);
      ((MirrorMissionItemData *)this)->getKey();
      func_0079e53c(auStack_28,auStack_2c);
      uStack_24 = (undefined4)(uVar3);
      func_0079e53c(auStack_20,auStack_28);
      uStack_1c = (undefined4)(uStack_24);
      iVar6 = (undefined4)(intptr_t)(((int)this) + 4);
      bVar1 = (undefined4)(intptr_t)(true);
      iVar4 = (undefined4)(intptr_t)(*(int *)(((int)this) + 8));
      iVar5 = (undefined4)(intptr_t)(iVar6);
      while (iVar7 = iVar4, iVar7 != 0) {
        iVar5 = (undefined4)(intptr_t)(func_0079ea84(auStack_20,iVar7 + 0x10));
        if (-1 < iVar5) {
          iVar4 = (undefined4)(intptr_t)(*(int *)(iVar7 + 0xc));
        }
        else {
          iVar4 = (undefined4)(intptr_t)(*(int *)(iVar7 + 8));
        }
        bVar1 = (undefined4)(intptr_t)(-1 >= iVar5);
        iVar5 = (undefined4)(intptr_t)(iVar7);
      }
      iVar4 = (undefined4)(intptr_t)(iVar5);
      if (bVar1) {
        if (iVar5 != *(int *)(((int)this) + 0xc)) {
          iVar4 = (undefined4)(intptr_t)(func_0079e3cc(iVar5));
          goto LAB_00494488;
        }
LAB_00494494:
        uStack_44 = (undefined4)(1);
        if (iVar5 != iVar6) {
          uStack_44 = (undefined4)(func_0079ea84(auStack_20,iVar5 + 0x10));
          uStack_44 = (undefined4)(uStack_44 >> 0x1f);
        }
        iVar4 = (undefined4)(intptr_t)(func_0079e2fc(0x18));
        func_0079e53c(iVar4 + 0x10,auStack_20);
        *(undefined4 *)(iVar4 + 0x14) = uStack_1c;
        func_0079e3dc(uStack_44,iVar4,iVar5,iVar6);
        *(int *)(((int)this) + 0x14) = *(int *)(((int)this) + 0x14) + 1;
      }
      else {
LAB_00494488:
        iVar4 = (undefined4)(intptr_t)(func_0079ea84(iVar4 + 0x10,auStack_20));
        if (iVar4 < 0) goto LAB_00494494;
      }
      func_0079e2bc(auStack_20);
      func_0079e2bc(auStack_28);
      func_0079e2bc(auStack_2c);
    }
  }
  sqlite3_free_table(uStack_40);
  func_0079e2bc(&uStack_34);
  return;
}

undefined8 MirrorMissionData::getItemData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

MirrorMissionData::MirrorMissionData()
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((int)this) + 4);
  (void)(((long long)::memset((void *)(iVar1),(int)(0),(size_t)(0x10))));
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(int *)(((int)this) + 0xc) = iVar1;
  *(int *)(((int)this) + 0x10) = iVar1;
  ((std::map<std::string, MirrorMissionItemData*, std::less<std::string>, std::allocator<std::pair<std::string const, MirrorMissionItemData*>>> *)((int)this))->erase(0);
  *(int *)(((int)this) + 0xc) = iVar1;
  *(undefined4 *)(((int)this) + 8) = 0;
  *(int *)(((int)this) + 0x10) = iVar1;
  *(undefined4 *)(((int)this) + 0x14) = 0;
  MirrorMissionData::initData();
  return;
}

MirrorMissionData::~MirrorMissionData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
