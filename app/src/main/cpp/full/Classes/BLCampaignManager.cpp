#include "BLCampaignManager.h"
#include "CCObject.h"
#include "CCFileUtils.h"
#include "BLLeakUtils.h"
#include "DBUtil.h"
#include "DataManager.h"
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
template <class T, class... A> std::string ConvertToString(A...);
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
extern "C" long long func_0079e33c(...);
extern "C" long long func_0079e38c(...);
extern "C" long long func_0079e39c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long DAT_004feccc;
extern "C" unsigned long DAT_004fecd0;
extern "C" unsigned long UNK_004fe6d0;
extern "C" unsigned long UNK_004fe6e4;
extern "C" unsigned long UNK_004fecc8;
extern "C" unsigned long UNK_004fecde;
extern "C" unsigned long _DAT_004fe780;
extern "C" unsigned long _DAT_004fe784;
extern "C" unsigned long _DAT_004fe7c4;
extern "C" unsigned long _DAT_004fe7c8;
extern "C" unsigned long _DAT_004fe7cc;
extern "C" unsigned long _DAT_004fe930;
extern "C" unsigned long _DAT_004fe934;
extern "C" unsigned long _DAT_004fe938;
extern "C" unsigned long _DAT_004fe93c;
extern "C" unsigned long _DAT_004fe940;
extern "C" unsigned long _DAT_004fe944;
extern "C" unsigned long _DAT_004fe948;
extern "C" unsigned long _DAT_004fe94c;
extern "C" unsigned long _DAT_004fe950;
extern "C" unsigned long _DAT_004fea20;
extern "C" unsigned long _DAT_004fea24;
extern "C" unsigned long _DAT_004fea28;
extern "C" unsigned long _DAT_004fea2c;
extern "C" unsigned long _DAT_004feaf0;
extern "C" unsigned long _DAT_004feaf4;
extern "C" unsigned long _DAT_004feaf8;
extern "C" unsigned long _DAT_004feafc;
extern "C" unsigned long _DAT_004febbc;
extern "C" unsigned long _DAT_004febc0;
extern "C" unsigned long _DAT_004febc4;
extern "C" unsigned long _DAT_004feccc;
extern "C" unsigned long _DAT_004fecd0;
extern "C" unsigned long _DAT_004fecd4;
extern "C" unsigned long _DAT_004fecd8;
extern "C" unsigned long _DAT_004fecdc;
extern "C" unsigned long _DAT_004fece0;
extern "C" unsigned long _DAT_004fece4;
extern "C" unsigned long _DAT_004fece8;
extern "C" unsigned long _DAT_004fee54;
extern "C" unsigned long _DAT_004fee58;
extern "C" unsigned long _DAT_004fee5c;
extern "C" unsigned long _DAT_004fee60;
extern "C" unsigned long _UNK_004fe714;
extern "C" unsigned long _UNK_004fe718;
extern "C" unsigned long g_004fe6d0;
extern "C" unsigned long g_004fe6e4;
extern "C" unsigned long g_004fe714;
extern "C" unsigned long g_004fe718;
extern "C" unsigned long g_004fe780;
extern "C" unsigned long g_004fe784;
extern "C" unsigned long g_004fe7c4;
extern "C" unsigned long g_004fe7c8;
extern "C" unsigned long g_004fe7cc;
extern "C" unsigned long g_004fe930;
extern "C" unsigned long g_004fe934;
extern "C" unsigned long g_004fe938;
extern "C" unsigned long g_004fe93c;
extern "C" unsigned long g_004fe940;
extern "C" unsigned long g_004fe944;
extern "C" unsigned long g_004fe948;
extern "C" unsigned long g_004fe94c;
extern "C" unsigned long g_004fe950;
extern "C" unsigned long g_004fea20;
extern "C" unsigned long g_004fea24;
extern "C" unsigned long g_004fea28;
extern "C" unsigned long g_004fea2c;
extern "C" unsigned long g_004feaf0;
extern "C" unsigned long g_004feaf4;
extern "C" unsigned long g_004feaf8;
extern "C" unsigned long g_004feafc;
extern "C" unsigned long g_004febbc;
extern "C" unsigned long g_004febc0;
extern "C" unsigned long g_004febc4;
extern "C" unsigned long g_004fecc8;
extern "C" unsigned long g_004feccc;
extern "C" unsigned long g_004fecd0;
extern "C" unsigned long g_004fecd4;
extern "C" unsigned long g_004fecd8;
extern "C" unsigned long g_004fecdc;
extern "C" unsigned long g_004fecde;
extern "C" unsigned long g_004fece0;
extern "C" unsigned long g_004fece4;
extern "C" unsigned long g_004fece8;
extern "C" unsigned long g_004fee54;
extern "C" unsigned long g_004fee58;
extern "C" unsigned long g_004fee5c;
extern "C" unsigned long g_004fee60;
BLCampaignManager::~BLCampaignManager()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004fe6e4 + g_004fe718,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLCampaignManager::BLCampaignManager()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLCampaignManager"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLCampaignManager::init()
{
  return 1;
}


void BLCampaignManager::initData()
{
  return;
}

void BLCampaignManager::addContentNum(CampaignChildTerm p1, int p2)
{
  return;
}

void BLCampaignManager::updateDataToDB()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
undefined4 BLCampaignManager::instance()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

undefined4 BLCampaignManager::serachDBData(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
  (**(code **)(*(int *)(piVar1) + (0x44)))(auStack_1c,piVar1);
  func_0079e53c(&uStack_34,auStack_1c);
  func_0079e854(&uStack_34,((intptr_t)"lol.png"));
  func_0079e2bc(auStack_1c);
  0 /* ctorZero */;
  func_0079e45c(auStack_30,g_004fe938 + 0x4fe826,auStack_1c);
  iStack_2c = 0;
  func_0079e45c(&uStack_20,((intptr_t)"select * from campaign"),auStack_1c);
  func_0079e69c(&uStack_20,((intptr_t)" where id = "));
  ConvertToString<int>(auStack_1c, p1, 0);
  func_0079e874(&uStack_20,auStack_1c);
  func_0079e2bc(auStack_1c);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,uStack_20,&iStack_2c,&iStack_28,&iStack_24,0));
  if (iVar3 == 0) {
    uVar2 = (undefined4)(0);
    if (0 < iStack_28) {
      iVar3 = (undefined4)(intptr_t)(iStack_24 * 4);
      uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_2c + iVar3)));
      0 /* ctorZero */;
      uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_2c + iVar3 + 4)));
      0 /* ctorZero */;
      uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_2c + iVar3 + 8)));
      0 /* ctorZero */;
      uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_2c + iVar3 + 0xc)));
      0 /* ctorZero */;
      uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_2c + iVar3 + 0xc)));
    }
  }
  else {
    uVar2 = (undefined4)(0);
  }
  sqlite3_free_table(iStack_2c);
  func_0079e2bc(&uStack_20);
  func_0079e2bc(auStack_30);
  func_0079e2bc(&uStack_34);
  return uVar2;
}

void BLCampaignManager::modifyDBData(int p1, int p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLCampaignManager::deleteDBData(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLCampaignManager::reTypeById(int p1)
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
  
  func_0079e45c(auStack_30,g_004febbc + 0x4feb10,auStack_1c);
  iStack_2c = 0;
  func_0079e45c(&uStack_20,((intptr_t)"select * from campaign"),auStack_1c);
  func_0079e69c(&uStack_20,((intptr_t)" where id = "));
  ConvertToString<int>(auStack_1c, p1, 0);
  func_0079e874(&uStack_20,auStack_1c);
  func_0079e2bc(auStack_1c);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,uStack_20,&iStack_2c,&iStack_28,&iStack_24,0));
  uVar2 = (undefined4)(0);
  if ((iVar3 == 0) && (0 < iStack_28)) {
    uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)((iStack_24 + 2) * 4 + iStack_2c)));
  }
  sqlite3_free_table(iStack_2c);
  func_0079e2bc(&uStack_20);
  func_0079e2bc(auStack_30);
  return uVar2;
}

int BLCampaignManager::serachDBDataAll()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLCampaignManager::addDBData(int p1, int p2, int p3)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
