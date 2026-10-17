#include "BLRemoteAttackData.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00455d3c;
extern "C" unsigned long _DAT_00455d40;
extern "C" unsigned long _DAT_00455de8;
extern "C" unsigned long _DAT_00455dec;
extern "C" unsigned long _DAT_00455df0;
extern "C" unsigned long _DAT_00455df4;
extern "C" unsigned long _DAT_00455f48;
extern "C" unsigned long _DAT_00455f4c;
extern "C" unsigned long _DAT_00455f50;
extern "C" unsigned long _DAT_00455f54;
extern "C" unsigned long _DAT_00455f58;
extern "C" unsigned long _DAT_00455f5c;
extern "C" unsigned long g_00455d3c;
extern "C" unsigned long g_00455d40;
extern "C" unsigned long g_00455de8;
extern "C" unsigned long g_00455dec;
extern "C" unsigned long g_00455df0;
extern "C" unsigned long g_00455df4;
extern "C" unsigned long g_00455f48;
extern "C" unsigned long g_00455f4c;
extern "C" unsigned long g_00455f50;
extern "C" unsigned long g_00455f54;
extern "C" unsigned long g_00455f58;
extern "C" unsigned long g_00455f5c;
int BLRemoteAttackData::getPosType() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLRemoteAttackData::setPosType(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int BLRemoteAttackData::getObjectType() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLRemoteAttackData::setObjectType(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int BLRemoteAttackData::getAttackTimes() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BLRemoteAttackData::setAttackTimes(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int BLRemoteAttackData::getDistance() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void BLRemoteAttackData::setDistance(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

bool BLRemoteAttackData::getISTrackRole() const
{
  return *(undefined1 *)(((int)this) + 0x28);
}

void BLRemoteAttackData::setISTrackRole(bool p1)
{
  *(undefined1 *)(((int)this) + 0x28) = p1;
  return;
}

bool BLRemoteAttackData::getISOnlyAttackObject() const
{
  return *(undefined1 *)(((int)this) + 0x29);
}

void BLRemoteAttackData::setISOnlyAttackObject(bool p1)
{
  *(undefined1 *)(((int)this) + 0x29) = p1;
  return;
}

bool BLRemoteAttackData::getISPenetration() const
{
  return *(undefined1 *)(((int)this) + 0x2a);
}

void BLRemoteAttackData::setISPenetration(bool p1)
{
  *(undefined1 *)(((int)this) + 0x2a) = p1;
  return;
}

void BLRemoteAttackData::setID(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

BLRemoteAttackData::~BLRemoteAttackData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLRemoteAttackData"),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLRemoteAttackData::getID() const
{ return *(std::string *)(((int)this) + 0x14); }

BLRemoteAttackData::BLRemoteAttackData()
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
  iVar1 = g_00455dec;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = *(int *)(g_00455df0 + 0x455d86) + 0xc;
  func_0079e2dc(((int)this) + 5,iVar1 + 0x455d84);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 1;
  *(int *)((int)this + 4*(9)) = 1;
  *(undefined1 *)(((int)this) + 10) = 0;
  *(undefined1 *)((int)((int)this) + 0x29) = 0;
  *(undefined1 *)((int)((int)this) + 0x2a) = 1;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLRemoteAttackData"),&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

bool BLRemoteAttackData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLRemoteAttackData::initWith(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
