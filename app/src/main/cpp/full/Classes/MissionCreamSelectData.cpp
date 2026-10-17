#include "MissionCreamSelectData.h"
#include "CCNotificationCenter.h"
#include "BLLanguage.h"
#include "DBUtil.h"
#include "DataManager.h"
#include "MissionCreamSelectDataGet.h"
#include "PlatformHelp.h"
#include "Toast.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long _DAT_00494eb8;
extern "C" unsigned long _DAT_00494ebc;
extern "C" unsigned long _DAT_00495048;
extern "C" unsigned long _DAT_0049504c;
extern "C" unsigned long _DAT_00495050;
extern "C" unsigned long _DAT_00495054;
extern "C" unsigned long _DAT_00495124;
extern "C" unsigned long _DAT_00495128;
extern "C" unsigned long _DAT_0049512c;
extern "C" unsigned long _DAT_00495130;
extern "C" unsigned long _DAT_00495200;
extern "C" unsigned long _DAT_00495204;
extern "C" unsigned long _DAT_00495208;
extern "C" unsigned long _DAT_0049520c;
extern "C" unsigned long _DAT_004953f8;
extern "C" unsigned long _DAT_004953fc;
extern "C" unsigned long _DAT_00495400;
extern "C" unsigned long _DAT_00495404;
extern "C" unsigned long _DAT_00495408;
extern "C" unsigned long _DAT_00495548;
extern "C" unsigned long _DAT_0049554c;
extern "C" unsigned long _DAT_00495550;
extern "C" unsigned long _DAT_00495554;
extern "C" unsigned long _DAT_00495558;
extern "C" unsigned long _DAT_0049555c;
extern "C" unsigned long _DAT_00495560;
extern "C" unsigned long _DAT_00495788;
extern "C" unsigned long _DAT_0049578c;
extern "C" unsigned long g_00494eb8;
extern "C" unsigned long g_00494ebc;
extern "C" unsigned long g_00495048;
extern "C" unsigned long g_0049504c;
extern "C" unsigned long g_00495050;
extern "C" unsigned long g_00495054;
extern "C" unsigned long g_00495124;
extern "C" unsigned long g_00495128;
extern "C" unsigned long g_0049512c;
extern "C" unsigned long g_00495130;
extern "C" unsigned long g_00495200;
extern "C" unsigned long g_00495204;
extern "C" unsigned long g_00495208;
extern "C" unsigned long g_0049520c;
extern "C" unsigned long g_004953f8;
extern "C" unsigned long g_004953fc;
extern "C" unsigned long g_00495400;
extern "C" unsigned long g_00495404;
extern "C" unsigned long g_00495408;
extern "C" unsigned long g_00495548;
extern "C" unsigned long g_0049554c;
extern "C" unsigned long g_00495550;
extern "C" unsigned long g_00495554;
extern "C" unsigned long g_00495558;
extern "C" unsigned long g_0049555c;
extern "C" unsigned long g_00495560;
extern "C" unsigned long g_00495788;
extern "C" unsigned long g_0049578c;
MissionCreamSelectData::~MissionCreamSelectData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_00494ebc + 0x494eb2) = 0;
  return;
}




void MissionCreamSelectData::minusleftdata()
{
  undefined4 *puVar1;
  
  *(int *)(((int)this) + 8) = *(int *)(((int)this) + 8) + -1;
  MissionCreamSelectData::modifyDBDataByNum(((int)this), 1);
  puVar1 = *(undefined4 **)(((int)this) + 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,((int)this));
  }
  return;
}

void MissionCreamSelectData::buycreamnum()
{
  undefined4 *puVar1;
  
  *(int *)(((int)this) + 8) = *(int *)(((int)this) + 8) + 1;
  MissionCreamSelectData::modifyDBDataByNum(((int)this), 1);
  *(int *)(((int)this) + 0xc) = *(int *)(((int)this) + 0xc) + 1;
  MissionCreamSelectData::modifyDBDataByRest(((int)this), 1);
  puVar1 = *(undefined4 **)(((int)this) + 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,((int)this));
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (6) =====
void MissionCreamSelectData::modifyDBDataByRest(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionCreamSelectData::modifyDBDataByTime(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionCreamSelectData::modifyDBDataByNum(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionCreamSelectData::addDBData(int p1, int p2, int p3, int p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionCreamSelectData::serachDBData(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_3c;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 auStack_1c [2];
  
  func_0079e45c(auStack_2c,g_00495548 + 0x49541c,auStack_1c);
  iStack_28 = 0;
  func_0079e45c(auStack_1c,"select * from creamtable",&iStack_20);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,auStack_1c[0],&iStack_28,&iStack_24,&iStack_20,0));
  if (iVar3 != 0) goto LAB_00495510;
  if (iStack_24 < 1) {
LAB_00495464:
    ((MissionCreamSelectData *)(((int)this)))->addDBData(1, 0, p1, 3);
  }
  else {
    iVar4 = (undefined4)(intptr_t)(iStack_20 << 2);
    iVar3 = 0;
    iStack_3c = 0;
    for (iVar5 = 0; iVar5 < iStack_24; iVar5 = iVar5 + 1) {
      iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar4)));
      0 /* ctorZero */;
      uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar4 + 4)));
      *(undefined4 *)(((int)this) + 0xc) = uVar2;
      0 /* ctorZero */;
      iStack_3c = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar4 + 8)));
      0 /* ctorZero */;
      iVar4 = (undefined4)(intptr_t)(iVar4 + 0xc);
      uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar4)));
      *(undefined4 *)(((int)this) + 8) = uVar2;
      0 /* ctorZero */;
    }
    if (iVar3 != 1) goto LAB_00495464;
    if (iStack_3c == p1) goto LAB_00495510;
    ((MissionCreamSelectData *)(((int)this)))->modifyDBDataByRest(1, 0);
    ((MissionCreamSelectData *)(((int)this)))->modifyDBDataByTime(1, p1);
    ((MissionCreamSelectData *)(((int)this)))->modifyDBDataByNum(1, 3);
  }
  *(undefined4 *)(((int)this) + 0xc) = 0;
  *(undefined4 *)(((int)this) + 8) = 3;
LAB_00495510:
  sqlite3_free_table(iStack_28);
  *(undefined1 *)(((int)this) + 0x10) = 1;
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"MSG_CreamSelect_update");
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_2c);
  return;
}

void MissionCreamSelectData::GetDataFromNet(bool p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
