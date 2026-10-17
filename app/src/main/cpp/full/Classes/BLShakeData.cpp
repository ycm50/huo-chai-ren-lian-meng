#include "BLShakeData.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e834(...);
extern "C" long long func_0079e844(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00456378;
extern "C" unsigned long _DAT_0045637c;
extern "C" unsigned long _DAT_0045644c;
extern "C" unsigned long _DAT_00456450;
extern "C" unsigned long _DAT_00456454;
extern "C" unsigned long g_00456378;
extern "C" unsigned long g_0045637c;
extern "C" unsigned long g_0045644c;
extern "C" unsigned long g_00456450;
extern "C" unsigned long g_00456454;
BLShakeData::~BLShakeData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLShakeData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLShakeData::setMove(std::string p1)
{
  func_0079e834(((int)this) + 0x1c);
  return;
}

void BLShakeData::setType(std::string p1)
{
  func_0079e834(((int)this) + 0x18);
  return;
}

void BLShakeData::setMainKey(std::string p1)
{
  func_0079e834(((int)this) + 0x14);
  return;
}

std::string BLShakeData::getMove() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string BLShakeData::getType() const
{ return *(std::string *)(((int)this) + 0x18); }

std::string BLShakeData::getMainKey() const
{ return *(std::string *)(((int)this) + 0x14); }

BLShakeData::BLShakeData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = *(int *)(g_00456450 + 0x4563f4) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar2;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(7)) = iVar2;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLShakeData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLShakeData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLShakeData::initWith(char** p1, int& p2)
{
  int iVar1;
  
  func_0079e844(((int)this) + 0x14,*(undefined4 *)(*(int *)p2 * 4 + p1));
  iVar1 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar1 + 1;
  func_0079e844(((int)this) + 0x18,*(undefined4 *)((iVar1 + 1) * 4 + p1));
  iVar1 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar1 + 1;
  func_0079e844(((int)this) + 0x1c,*(undefined4 *)((iVar1 + 1) * 4 + p1));
  *(int *)p2 = *(int *)p2 + 1;
  return;
}
