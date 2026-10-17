#include "BLHitLevelData.h"
#include "CCObject.h"
#include "CCString.h"
#include "DataManager.h"
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
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e874(...);
extern "C" unsigned long _DAT_00439498;
extern "C" unsigned long _DAT_004396a8;
extern "C" unsigned long _DAT_004397f4;
extern "C" unsigned long _DAT_004397f8;
extern "C" unsigned long _DAT_004397fc;
extern "C" unsigned long _DAT_00439800;
extern "C" unsigned long _DAT_00439804;
extern "C" unsigned long _DAT_00439808;
extern "C" unsigned long _DAT_0043980c;
extern "C" unsigned long g_00439498;
extern "C" unsigned long g_004396a8;
extern "C" unsigned long g_004397f4;
extern "C" unsigned long g_004397f8;
extern "C" unsigned long g_004397fc;
extern "C" unsigned long g_00439800;
extern "C" unsigned long g_00439804;
extern "C" unsigned long g_00439808;
extern "C" unsigned long g_0043980c;
int BLHitLevelData::getLV() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BLHitLevelData::setLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int BLHitLevelData::getSharkLV() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLHitLevelData::setSharkLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int BLHitLevelData::getStopFrame() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLHitLevelData::setStopFrame(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int BLHitLevelData::getFPS() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLHitLevelData::setFPS(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

float BLHitLevelData::getFpsTime() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLHitLevelData::setFpsTime(float p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

int BLHitLevelData::getRoleObject() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BLHitLevelData::setRoleObject(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

bool BLHitLevelData::getISHited() const
{
  return *(undefined1 *)(((int)this) + 0x2c);
}

void BLHitLevelData::setISHited(bool p1)
{
  *(undefined1 *)(((int)this) + 0x2c) = p1;
  return;
}

BLHitLevelData::~BLHitLevelData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLHitLevelData::BLHitLevelData()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(undefined1 *)(((int)this) + 0xb) = 1;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  return;
}

bool BLHitLevelData::init()
{
  return 1;
}

int * BLHitLevelData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x30)));
  0 /* ctorZero */;
  iVar2 = ((BLHitLevelData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLHitLevelData::initWith(int p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [4];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 auStack_1c [2];
  
  func_0079e45c(auStack_2c,g_004397f4 + 0x4396f8,auStack_1c);
  iStack_28 = 0;
  func_0079e45c(auStack_1c," select * from ",&iStack_20);
  func_0079e69c(auStack_1c,"hitLevel");
  func_0079e69c(auStack_1c," where ");
  func_0079e69c(auStack_1c,"id");
  func_0079e69c(auStack_1c," = ");
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCString::createWithFormat((char const*)"%d", p1));
  func_0079e874(auStack_1c,iVar1 + 0x14);
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))());
  iVar1 = (undefined4)(intptr_t)(sqlite3_get_table(uVar3,auStack_1c[0],&iStack_28,&iStack_24,&iStack_20,0));
  if ((iVar1 == 0) && (0 < iStack_24)) {
    iVar1 = (undefined4)(intptr_t)((iStack_20 + 2) * 4);
    uVar3 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar1)));
    *(undefined4 *)(((int)this) + 0x18) = uVar3;
    uVar3 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar1 + 4)));
    *(undefined4 *)(((int)this) + 0x1c) = uVar3;
    uVar3 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar1 + 8)));
    *(undefined4 *)(((int)this) + 0x20) = uVar3;
    func_0079e824(*(undefined4 *)(iStack_28 + iVar1 + 0xc),0);
    uVar3 = (undefined4)(func_0079e7e4());
    *(undefined4 *)(((int)this) + 0x24) = uVar3;
    uVar3 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar1 + 0x10)));
    *(undefined4 *)(((int)this) + 0x28) = uVar3;
    iVar1 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)(iStack_28 + iVar1 + 0x14)));
    *(char *)(((int)this) + 0x2c) = '\x01' - (iVar1 == 0);
  }
  sqlite3_free_table(iStack_28);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_2c);
  return;
}
