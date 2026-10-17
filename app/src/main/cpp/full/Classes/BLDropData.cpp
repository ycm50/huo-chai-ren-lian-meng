#include "BLDropData.h"
#include "CCObject.h"
#include "CCArray.h"
#include "BLDropItemData.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e804(...);
extern "C" long long func_0079e814(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079ea04(...);
extern "C" unsigned long _DAT_00456628;
extern "C" unsigned long _DAT_0045662c;
extern "C" unsigned long _DAT_00456764;
extern "C" unsigned long _DAT_00456768;
extern "C" unsigned long _DAT_0045676c;
extern "C" unsigned long _DAT_00456770;
extern "C" unsigned long _DAT_00456774;
extern "C" unsigned long _DAT_0045688c;
extern "C" unsigned long _DAT_00456890;
extern "C" unsigned long _DAT_00456894;
extern "C" unsigned long _DAT_00456898;
extern "C" unsigned long _DAT_00456a4c;
extern "C" unsigned long _DAT_00456a50;
extern "C" unsigned long _DAT_00456a54;
extern "C" unsigned long _DAT_00456a58;
extern "C" unsigned long _DAT_00456a5c;
extern "C" unsigned long _DAT_00456a60;
extern "C" unsigned long _DAT_00456a64;
extern "C" unsigned long _DAT_00456a68;
extern "C" unsigned long _DAT_00456b7c;
extern "C" unsigned long _DAT_00456b80;
extern "C" unsigned long _DAT_00456b84;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00456628;
extern "C" unsigned long g_0045662c;
extern "C" unsigned long g_00456764;
extern "C" unsigned long g_00456768;
extern "C" unsigned long g_0045676c;
extern "C" unsigned long g_00456770;
extern "C" unsigned long g_00456774;
extern "C" unsigned long g_0045688c;
extern "C" unsigned long g_00456890;
extern "C" unsigned long g_00456894;
extern "C" unsigned long g_00456898;
extern "C" unsigned long g_00456a4c;
extern "C" unsigned long g_00456a50;
extern "C" unsigned long g_00456a54;
extern "C" unsigned long g_00456a58;
extern "C" unsigned long g_00456a5c;
extern "C" unsigned long g_00456a60;
extern "C" unsigned long g_00456a64;
extern "C" unsigned long g_00456a68;
extern "C" unsigned long g_00456b7c;
extern "C" unsigned long g_00456b80;
extern "C" unsigned long g_00456b84;
long BLDropData::getExp() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLDropData::setExp(long p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

long BLDropData::getCopperMax() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLDropData::setCopperMax(long p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

long BLDropData::getCopperMin() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLDropData::setCopperMin(long p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int BLDropData::getDropType() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLDropData::setDropType(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

int BLDropData::getProbBase() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void BLDropData::setProbBase(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

int BLDropData::getTotalProb() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void BLDropData::setTotalProb(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

cocos2d::CCArray* BLDropData::getArrayDropItems() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x34));
}

void BLDropData::setArrayDropItems(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x34) = (undefined4)(intptr_t)p1;
  return;
}

void BLDropData::setItems(std::string * p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

void BLDropData::setID(std::string * p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

BLDropData::~BLDropData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLDropData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 10);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLDropData::getItems() const
{ return *(std::string *)(((int)this) + 0x28); }

std::string BLDropData::getID() const
{ return *(std::string *)(((int)this) + 0x14); }


bool BLDropData::init()
{
  return 1;
}




int * BLDropData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x38)));
  0 /* ctorZero */;
  iVar2 = ((BLDropData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (4) =====
BLDropData::BLDropData()
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = (undefined4)(intptr_t)(g_0045676c);
  iVar3 = (undefined4)(intptr_t)(*(int *)(g_00456768 + 0x4566de) + 0xc);
  *(int *)((int)this + 4*(5)) = iVar3;
  *(int *)((int)this + 4*(10)) = iVar3;
  *(int *)((int)this + 4*(8)) = 0;
  func_0079e2dc(((int)this) + 5,iVar1 + 0x4566ec);
  iVar1 = (undefined4)(intptr_t)(g_00456770);
  *(int *)((int)this + 4*(6)) = 1;
  *(int *)((int)this + 4*(7)) = 10;
  *(int *)((int)this + 4*(8)) = 1;
  *(int *)((int)this + 4*(9)) = 1;
  func_0079e2dc(((int)this) + 10,iVar1 + 0x456706);
  *(int *)((int)this + 4*(0xb)) = 10;
  *(int *)((int)this + 4*(0xc)) = 10;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0xd)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLDropData"),auStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

int * BLDropData::initItems(std::string& p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

void BLDropData::initWithID(std::string * p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_r3;
  undefined4 *puVar4;
  undefined1 auStack_44 [4];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 *puStack_24;
  int iStack_20;
  
  func_0079e52c(((int)this) + 0x14);
  func_0079e45c(auStack_44,g_00456a4c + 0x4568b8,&puStack_24);
  iStack_40 = 0;
  func_0079e45c(&uStack_34," select * from ",&puStack_24);
  func_0079e69c(&uStack_34,"drop_group");
  func_0079e69c(&uStack_34," where ");
  func_0079e69c(&uStack_34,"id");
  func_0079e69c(&uStack_34," = ");
  func_0079e53c(auStack_30,((int)this) + 0x14);
  0 /* ctorZero */;
  func_0079e874(&uStack_34,auStack_2c);
  func_0079e2bc(auStack_2c);
  func_0079e2bc(auStack_30);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x18)))());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,uStack_34,&iStack_40,&iStack_3c,&iStack_38,0));
  if ((iVar3 == 0) && (0 < iStack_3c)) {
    iVar3 = (undefined4)(intptr_t)((iStack_38 + 2) * 4);
    uVar2 = (undefined4)(func_0079ea04(*(undefined4 *)(iStack_40 + iVar3)));
    *(undefined4 *)(((int)this) + 0x18) = uVar2;
    func_0079e45c(auStack_28,*(undefined4 *)(iStack_40 + iVar3 + 4),auStack_2c);
    0 /* ctorZero */;
    func_0079e2bc(auStack_28);
    puVar4 = puStack_24;
    if (iStack_20 - (int)puStack_24 >> 2 == 0) {
      func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",0);
      puVar4 = extraout_r3;
    }
    *(undefined4 *)(((int)this) + 0x20) = *puVar4;
    *(undefined4 *)(((int)this) + 0x1c) = *puVar4;
    uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_40 + iVar3 + 8)));
    *(undefined4 *)(((int)this) + 0x24) = uVar2;
    func_0079e2dc(((int)this) + 0x28,*(undefined4 *)(iStack_40 + iVar3 + 0xc));
    uVar2 = (undefined4)(func_0079e6c0(*(undefined4 *)(iStack_40 + iVar3 + 0x10)));
    *(undefined4 *)(((int)this) + 0x2c) = uVar2;
    if (puStack_24 != (undefined4 *)0x0) {
      func_0079e2cc();
    }
  }
  sqlite3_free_table(iStack_40);
  func_0079e53c(&puStack_24,((int)this) + 0x28);
  while (iVar3 = func_0079e4bc(&puStack_24,g_00456a68 + 0x4569dc), iVar3 != 0) {
    piVar1 = (int *)((BLDropData *)(((int)this)))->initItems(*(std::string*)&puStack_24);
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x20)))());
    *(int *)(((int)this) + 0x30) = *(int *)(((int)this) + 0x30) + iVar3;
    ((cocos2d::CCArray *)(*(undefined4 *)(((int)this) + 0x34)))->addObject((cocos2d::CCObject*)piVar1);
  }
  func_0079e2bc(&puStack_24);
  func_0079e2bc(&uStack_34);
  func_0079e2bc(auStack_44);
  return;
}

undefined4 * BLDropData::randomItems()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}
