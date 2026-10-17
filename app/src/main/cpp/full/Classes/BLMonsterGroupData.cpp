#include "BLMonsterGroupData.h"
#include "BLLeakUtils.h"
#include "BLMonsterData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00459ddc;
extern "C" unsigned long _DAT_00459de0;
extern "C" unsigned long _DAT_00459ea0;
extern "C" unsigned long _DAT_00459ea4;
extern "C" unsigned long _DAT_00459ea8;
extern "C" unsigned long _DAT_00459eac;
extern "C" unsigned long _DAT_00459ff4;
extern "C" unsigned long _DAT_00459ff8;
extern "C" unsigned long _DAT_00459ffc;
extern "C" unsigned long _DAT_0045a1b4;
extern "C" unsigned long _DAT_0045a1b8;
extern "C" unsigned long _DAT_0045a1bc;
extern "C" unsigned long _DAT_0045a1c0;
extern "C" unsigned long _DAT_0045a1c4;
extern "C" unsigned long _DAT_0045a1c8;
extern "C" unsigned long _DAT_0045a210;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_00459ddc;
extern "C" unsigned long g_00459de0;
extern "C" unsigned long g_00459ea0;
extern "C" unsigned long g_00459ea4;
extern "C" unsigned long g_00459ea8;
extern "C" unsigned long g_00459eac;
extern "C" unsigned long g_00459ff4;
extern "C" unsigned long g_00459ff8;
extern "C" unsigned long g_00459ffc;
extern "C" unsigned long g_0045a1b4;
extern "C" unsigned long g_0045a1b8;
extern "C" unsigned long g_0045a1bc;
extern "C" unsigned long g_0045a1c0;
extern "C" unsigned long g_0045a1c4;
extern "C" unsigned long g_0045a1c8;
extern "C" unsigned long g_0045a210;
float BLMonsterGroupData::getPosX() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLMonsterGroupData::setPosX(float p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

bool BLMonsterGroupData::getISAppear() const
{
  return *(undefined1 *)(((int)this) + 0x34);
}

void BLMonsterGroupData::setISAppear(bool p1)
{
  *(undefined1 *)(((int)this) + 0x34) = p1;
  return;
}

int BLMonsterGroupData::getOverMonster() const
{
  return *(undefined4 *)(((int)this) + 0x38);
}

void BLMonsterGroupData::setOverMonster(int p1)
{
  *(undefined4 *)(((int)this) + 0x38) = p1;
  return;
}

int BLMonsterGroupData::getType() const
{
  return *(undefined4 *)(((int)this) + 0x3c);
}

void BLMonsterGroupData::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = p1;
  return;
}

int BLMonsterGroupData::getMonsterTotalNum() const
{
  return *(undefined4 *)(((int)this) + 0x40);
}

void BLMonsterGroupData::setMonsterTotalNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x40) = p1;
  return;
}

void BLMonsterGroupData::setID(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

std::string BLMonsterGroupData::getID() const
{ return *(std::string *)(((int)this) + 0x14); }

bool BLMonsterGroupData::init()
{
  return 1;
}

BLMonsterGroupData::~BLMonsterGroupData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLMonsterGroupData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x11)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 10)->~vector();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 7)->~vector();
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMonsterGroupData::BLMonsterGroupData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar1 = g_00459ea4;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = *(int *)(g_00459ea8 + 0x459e18) + 0xc;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0x11)) = 0;
  *(int *)((int)this + 4*(0x12)) = 0;
  *(int *)((int)this + 4*(0x13)) = 0;
  func_0079e2dc(((int)this) + 5,iVar1 + 0x459e1c);
  *(int *)((int)this + 4*(6)) = 0;
  *(undefined1 *)(((int)this) + 0xd) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  *(int *)((int)this + 4*(0xf)) = 1;
  *(int *)((int)this + 4*(0x10)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLMonsterGroupData"),&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

// ===== 修复: 补回被误删的函数占位 (8) =====
undefined4 BLMonsterGroupData::getszMonsterData() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int BLMonsterGroupData::getMonsterID() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMonsterGroupData::setszMonsterData(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonsterGroupData::setMonsterID(std::vector<std::string, std::allocator<std::string>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonsterGroupData::countMonsterNum()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonsterGroupData::setMonsterNum(std::vector<int, std::allocator<int>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMonsterGroupData::initWith(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int BLMonsterGroupData::getMonsterNum() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
