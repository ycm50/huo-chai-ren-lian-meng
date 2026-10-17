#include "MissionSweepData.h"
#include "CCObject.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "CCNotificationCenter.h"
#include "BLMissionData.h"
#include "BLDropData.h"
#include "BLLanguage.h"
#include "BLMissionRewardData.h"
#include "BLMonsterGroupData.h"
#include "BackPackData.h"
#include "DBUtil.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "MissionSweepDataGet.h"
#include "PlatformHelp.h"
#include "Toast.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e56c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e934(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079e964(...);
extern "C" long long func_0079eaa4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0046c944;
extern "C" unsigned long _DAT_0046c948;
extern "C" unsigned long _DAT_0046c94c;
extern "C" unsigned long _DAT_00497990;
extern "C" unsigned long _DAT_00497994;
extern "C" unsigned long _DAT_00497998;
extern "C" unsigned long _DAT_00497a6c;
extern "C" unsigned long _DAT_00497a70;
extern "C" unsigned long _DAT_00497bc0;
extern "C" unsigned long _DAT_00497bc4;
extern "C" unsigned long _DAT_00497c94;
extern "C" unsigned long _DAT_00497c98;
extern "C" unsigned long _DAT_00497c9c;
extern "C" unsigned long _DAT_00497ca0;
extern "C" unsigned long _DAT_00497d70;
extern "C" unsigned long _DAT_00497d74;
extern "C" unsigned long _DAT_00497d78;
extern "C" unsigned long _DAT_00497d7c;
extern "C" unsigned long _DAT_00497e4c;
extern "C" unsigned long _DAT_00497e50;
extern "C" unsigned long _DAT_00497e54;
extern "C" unsigned long _DAT_00497e58;
extern "C" unsigned long _DAT_00497ea0;
extern "C" unsigned long _DAT_00497ee8;
extern "C" unsigned long _DAT_00497f70;
extern "C" unsigned long _DAT_00498338;
extern "C" unsigned long _DAT_0049833c;
extern "C" unsigned long _DAT_00498340;
extern "C" unsigned long _DAT_00498344;
extern "C" unsigned long _DAT_00498348;
extern "C" unsigned long _DAT_0049834c;
extern "C" unsigned long _DAT_004984ec;
extern "C" unsigned long _DAT_004984f0;
extern "C" unsigned long _DAT_004984f4;
extern "C" unsigned long _DAT_004984f8;
extern "C" unsigned long _DAT_004984fc;
extern "C" unsigned long _DAT_00498648;
extern "C" unsigned long _DAT_0049864c;
extern "C" unsigned long _DAT_00498650;
extern "C" unsigned long _DAT_00498654;
extern "C" unsigned long _DAT_00498658;
extern "C" unsigned long _DAT_0049865c;
extern "C" unsigned long _DAT_00498660;
extern "C" unsigned long _DAT_004988dc;
extern "C" unsigned long _DAT_004988e0;
extern "C" unsigned long _DAT_00498968;
extern "C" unsigned long _DAT_00498b2c;
extern "C" unsigned long _DAT_00498b30;
extern "C" unsigned long _DAT_00498b34;
extern "C" unsigned long _DAT_00498b38;
extern "C" unsigned long _DAT_00498b3c;
extern "C" unsigned long _DAT_00498fec;
extern "C" unsigned long _DAT_00498ff0;
extern "C" unsigned long _DAT_00498ff4;
extern "C" unsigned long _DAT_00498ff8;
extern "C" unsigned long _DAT_00498ffc;
extern "C" unsigned long _DAT_00499000;
extern "C" unsigned long _DAT_00499004;
extern "C" unsigned long _DAT_00499008;
extern "C" unsigned long _DAT_0049900c;
extern "C" unsigned long _DAT_00499010;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r1_01;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0046c944;
extern "C" unsigned long g_0046c948;
extern "C" unsigned long g_0046c94c;
extern "C" unsigned long g_00497990;
extern "C" unsigned long g_00497994;
extern "C" unsigned long g_00497998;
extern "C" unsigned long g_00497a6c;
extern "C" unsigned long g_00497a70;
extern "C" unsigned long g_00497bc0;
extern "C" unsigned long g_00497bc4;
extern "C" unsigned long g_00497c94;
extern "C" unsigned long g_00497c98;
extern "C" unsigned long g_00497c9c;
extern "C" unsigned long g_00497ca0;
extern "C" unsigned long g_00497d70;
extern "C" unsigned long g_00497d74;
extern "C" unsigned long g_00497d78;
extern "C" unsigned long g_00497d7c;
extern "C" unsigned long g_00497e4c;
extern "C" unsigned long g_00497e50;
extern "C" unsigned long g_00497e54;
extern "C" unsigned long g_00497e58;
extern "C" unsigned long g_00497ea0;
extern "C" unsigned long g_00497ee8;
extern "C" unsigned long g_00497f70;
extern "C" unsigned long g_00498338;
extern "C" unsigned long g_0049833c;
extern "C" unsigned long g_00498340;
extern "C" unsigned long g_00498344;
extern "C" unsigned long g_00498348;
extern "C" unsigned long g_0049834c;
extern "C" unsigned long g_004984ec;
extern "C" unsigned long g_004984f0;
extern "C" unsigned long g_004984f4;
extern "C" unsigned long g_004984f8;
extern "C" unsigned long g_004984fc;
extern "C" unsigned long g_00498648;
extern "C" unsigned long g_0049864c;
extern "C" unsigned long g_00498650;
extern "C" unsigned long g_00498654;
extern "C" unsigned long g_00498658;
extern "C" unsigned long g_0049865c;
extern "C" unsigned long g_00498660;
extern "C" unsigned long g_004988dc;
extern "C" unsigned long g_004988e0;
extern "C" unsigned long g_00498968;
extern "C" unsigned long g_00498b2c;
extern "C" unsigned long g_00498b30;
extern "C" unsigned long g_00498b34;
extern "C" unsigned long g_00498b38;
extern "C" unsigned long g_00498b3c;
extern "C" unsigned long g_00498fec;
extern "C" unsigned long g_00498ff0;
extern "C" unsigned long g_00498ff4;
extern "C" unsigned long g_00498ff8;
extern "C" unsigned long g_00498ffc;
extern "C" unsigned long g_00499000;
extern "C" unsigned long g_00499004;
extern "C" unsigned long g_00499008;
extern "C" unsigned long g_0049900c;
extern "C" unsigned long g_00499010;
MissionSweepData::~MissionSweepData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  ((std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>> *)((int)this + 0x25))->~map();
  ((std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>> *)((int)this + 0x1f))->~map();
  ((std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>> *)((int)this + 0x12))->~map();
  if (*(int *)((int)this + 4*(8)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(8)))));
  }
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this + 5))->~vector();
  func_0079e2bc(((int)this) + 1);
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_0046c94c + 0x46c940) = 0;
  return;
}







void MissionSweepData::minusleftdata(int p1)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(((int)this) + 0x60) - p1;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  *(int *)(((int)this) + 0x60) = iVar2;
  p1 = *(int *)(((int)this) + 0x6c) - p1;
  if (p1 < 1) {
    *(undefined4 *)(((int)this) + 0x6c) = 0;
  }
  else {
    *(int *)(((int)this) + 0x6c) = p1;
  }
  MissionSweepData::modifyDBDataByNum(1, *(undefined4 *)(((int)this) + 0x60));
  MissionSweepData::modifyDBDataByAllNum(1, *(undefined4 *)(((int)this) + 0x6c));
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"MSG_SWEEP_UPDATEVIEW"));
  return;
}

void MissionSweepData::addleftdatabyvip()
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(((int)this) + 0x60) + 5;
  *(int *)(((int)this) + 0x6c) = *(int *)(((int)this) + 0x6c) + 5;
  *(int *)(((int)this) + 0x60) = iVar2;
  iVar3 = *(int *)(((int)this) + 100) + 5;
  *(int *)(((int)this) + 100) = iVar3;
  *(int *)(((int)this) + 0x68) = *(int *)(((int)this) + 0x68) + 5;
  if (iVar3 <= iVar2) {
    *(int *)(((int)this) + 0x60) = iVar3;
  }
  MissionSweepData::modifyDBDataByNum(1, *(undefined4 *)(((int)this) + 0x60));
  MissionSweepData::modifyDBDataByAllNum(1, *(undefined4 *)(((int)this) + 0x6c));
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)((intptr_t)"MSG_SWEEP_UPDATEVIEW"));
  return;
}

// ===== 修复: 补回被误删的函数占位 (15) =====
int MissionSweepData::isVip()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar6 = (undefined4)(0);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  do {
    uVar3 = (undefined4)(((cocos2d::CCArray *)uVar2)->count());
    if (uVar3 <= uVar6) {
      return 0;
    }
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar6));
    if (((iVar4 != 0) &&
        (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_00497990 + 0x497948),
                                         *(undefined4 *)(g_00497994 + 0x49794a),0),
        piVar1 != 0)) && (iVar4 = (**(code **)(*piVar1 + 0x38))(), iVar4 != 0)) {
      (**(code **)(*piVar1 + 0x18))(auStack_1c,piVar1);
      iVar5 = (undefined4)(intptr_t)(func_0079e49c(auStack_1c[0],((intptr_t)"1009")));
      func_0079e2bc(auStack_1c);
      if (iVar5 == 0) {
        return iVar4;
      }
    }
    uVar6 = (undefined4)(uVar6 + 1);
  } while( true );
}

undefined8 MissionSweepData::getExp(int p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar6 = 0;
  piVar7 = *(int **)(((int)this) + 0x20);
  *(undefined4 *)(((int)this) + 0x40) = 0;
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p3);
  do {
    if (piVar7 == *(int **)(((int)this) + 0x24)) {
      piVar7 = (int *)((BLMissionRewardData *)this)->create();
      func_0079e45c(&uStack_1c,*(undefined4 *)(((int)this) + 4),&iStack_20);
      ((BLMissionRewardData *)piVar7)->initWitID((std::string *)(char *)uStack_1c);
      func_0079e2bc(&uStack_1c);
      iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x28)))(piVar7));
      piVar7 = (int *)((DataManager *)this)->shareDataManager();
      iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x28)))());
      if (iVar3 != 0) {
        ((UserData *)iVar3)->addExp(iVar6 + iVar4);
        piVar7 = (int *)((DataManager *)this)->shareDataManager();
        (**(code **)(*(int *)(piVar7) + (0x28)))();
        ((UserData *)this)->updateExpToDataBase();
        *(int *)(((int)this) + 0x40) = iVar6 + iVar4;
      }
      return ghidra_CONCAT44(uStack_1c,iStack_20);
    }
    iVar4 = (int)*(int *)&(*piVar7);
    if (iVar4 == 2) {
      uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x34));
LAB_004979c4:
      *(undefined4 *)(((int)this) + 0x3c) = uVar5;
    }
    else {
      if (iVar4 == 3) {
        uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x38));
        goto LAB_004979c4;
      }
      if (iVar4 == 1) {
        uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x30));
        goto LAB_004979c4;
      }
    }
    if (*(int *)(((int)this) + 0x3c) != 0) {
      uVar1 = (undefined4)(((ItemData *)this)->create());
      piVar2 = (int *)((DataCacheManager *)this)->shareManager();
      uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
      iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar5)->objectForKey(3));
      uVar5 = (undefined4)(0);
      if (iVar4 != 0) {
        uVar5 = func_0079e55c(iVar4,*(undefined4 *)(g_00497a6c + 0x4979f0),
                                *(undefined4 *)(g_00497a70 + 0x4979f2),0);
      }
      ((ItemData *)uVar1)->initWith((ItemData*)uVar5);
      iVar4 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x3c) + 0x20))());
      iVar6 = (undefined4)(intptr_t)(iVar6 + iVar4);
    }
    piVar7 = piVar7 + 1;
  } while( true );
}

void MissionSweepData::getCopper(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionSweepData::modifyDBDataByTime(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionSweepData::modifyDBDataByNum(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionSweepData::modifyDBDataByAllNum(int p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 MissionSweepData::getsweepdiamond(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined8 MissionSweepData::getsweepcoin(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void MissionSweepData::SetMissionData(BLMissionData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionSweepData::addDBData(int p1, int p2, int p3, int p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionSweepData::serachDBData(int p1)
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
  
  func_0079e45c(auStack_2c,g_00498648 + 0x498510,auStack_1c);
  iStack_28 = 0;
  func_0079e45c(auStack_1c,((intptr_t)"select * from sweeptable"),&iStack_20);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,auStack_1c[0],&iStack_28,&iStack_24,&iStack_20,0));
  if (iVar3 == 0) {
    if (0 < iStack_24) {
      iVar4 = (undefined4)(intptr_t)(iStack_20 << 2);
      iVar3 = 0;
      iStack_3c = 0;
      for (iVar5 = 0; iVar5 < iStack_24; iVar5 = iVar5 + 1) {
        iVar3 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar4)));
        0 /* ctorZero */;
        uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar4 + 4)));
        *(undefined4 *)(((int)this) + 0x60) = uVar2;
        0 /* ctorZero */;
        iStack_3c = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar4 + 8)));
        0 /* ctorZero */;
        uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar4 + 0xc)));
        *(undefined4 *)(((int)this) + 0x6c) = uVar2;
        0 /* ctorZero */;
        iVar4 = (undefined4)(intptr_t)(iVar4 + 0x10);
      }
      if (iVar3 == 1) {
        if (iStack_3c != p1) {
          MissionSweepData::modifyDBDataByNum(1, *(undefined4 *)(((int)this) + 100));
          MissionSweepData::modifyDBDataByTime(1, p1);
          MissionSweepData::modifyDBDataByAllNum(1, *(undefined4 *)(((int)this) + 0x68));
          *(undefined4 *)(((int)this) + 0x60) = *(undefined4 *)(((int)this) + 100);
          *(undefined4 *)(((int)this) + 0x6c) = *(undefined4 *)(((int)this) + 0x68);
        }
        goto LAB_0049860e;
      }
    }
    MissionSweepData::addDBData(1, *(undefined4 *)(((int)this) + 100), p1, *(undefined4 *)(((int)this) + 0x68));
    *(undefined4 *)(((int)this) + 0x6c) = *(undefined4 *)(((int)this) + 0x68);
    *(undefined4 *)(((int)this) + 0x60) = *(undefined4 *)(((int)this) + 100);
  }
LAB_0049860e:
  sqlite3_free_table(iStack_28);
  *(undefined1 *)(((int)this) + 0x70) = 1;
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)((intptr_t)"MSG_SWEEP_UPDATEVIEW"));
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_2c);
  return;
}

void MissionSweepData::GetDataFromNet(bool p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  if (*(char *)(((int)this) + 0x70) == '\0') {
    iVar1 = (undefined4)(intptr_t)(((PlatformHelp *)this)->CheckNet());
    if (iVar1 == 0) {
      if (p1 != 0) {
        uVar2 = (undefined4)(((Toast *)this)->sharedToast());
        uVar3 = (undefined4)(((BLLanguage *)this)->share());
        func_0079e45c(auStack_24,"当前网络连接异常，请检查连接",auStack_2c);
        ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_20);
        func_0079e45c(auStack_1c,uStack_20,auStack_28);
        ((Toast *)(uVar2))->showSystemRemind((std::string *)(char *)auStack_1c);
        func_0079e2bc(auStack_1c);
        func_0079e2bc(&uStack_20);
        func_0079e2bc(auStack_24);
      }
    }
    else {
      piVar4 = (int *)func_0079e2fc(0x18);
      0 /* ctorZero */;
      iVar1 = (undefined4)(intptr_t)(g_004988e0);
      *(char *)(piVar4 + 5) = (char)p1;
      *piVar4 = *(int *)(iVar1 + 0x49889a) + 8;
      iVar1 = (undefined4)(intptr_t)(((MissionSweepDataGet *)(piVar4))->init());
      if (iVar1 == 0) {
        (**(code **)(*(int *)(piVar4) + (8)))(piVar4);
      }
      else {
        ((cocos2d::CCObject *)(piVar4))->autorelease();
      }
    }
  }
  return;
}

void MissionSweepData::isMonthCard()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionSweepData::serachSweepDBData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MissionSweepData::getItems(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
