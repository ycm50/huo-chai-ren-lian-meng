#include "ExpData.h"
#include "CCString.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0045e878;
extern "C" unsigned long _DAT_0045e87c;
extern "C" unsigned long _DAT_0045e8e8;
extern "C" unsigned long _DAT_0045e8ec;
extern "C" unsigned long _DAT_0045e9c0;
extern "C" unsigned long _DAT_0045e9c4;
extern "C" unsigned long _DAT_0045e9c8;
extern "C" unsigned long g_0045e878;
extern "C" unsigned long g_0045e87c;
extern "C" unsigned long g_0045e8e8;
extern "C" unsigned long g_0045e8ec;
extern "C" unsigned long g_0045e9c0;
extern "C" unsigned long g_0045e9c4;
extern "C" unsigned long g_0045e9c8;
int ExpData::getLV() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void ExpData::setLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int ExpData::getExp() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void ExpData::setExp(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

ExpData::~ExpData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"ExpData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ExpData::ExpData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(5)) = 1;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"ExpData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool ExpData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void ExpData::initWith(int p1)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 auStack_1c [2];
  
  *(undefined4 *)(((int)this) + 0x14) = p1;
  func_0079e45c(auStack_2c,g_0045e9c0 + 0x45e934,auStack_1c);
  iStack_28 = 0;
  func_0079e45c(auStack_1c,((intptr_t)" select * from exp where lv = "),&iStack_20);
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d"), *(undefined4 *)(((int)this) + 0x14));
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e69c(auStack_1c,uVar1);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar1,auStack_1c[0],&iStack_28,&iStack_24,&iStack_20,0));
  if ((iVar3 == 0) && (0 < iStack_24)) {
    uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iStack_20 + 2) * 4 + iStack_28)));
    *(undefined4 *)(((int)this) + 0x18) = uVar1;
  }
  sqlite3_free_table(iStack_28);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_2c);
  return;
}
