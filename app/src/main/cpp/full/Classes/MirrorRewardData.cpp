#include "MirrorRewardData.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004947a4;
extern "C" unsigned long _DAT_004947a8;
extern "C" unsigned long _DAT_00494858;
extern "C" unsigned long _DAT_0049485c;
extern "C" unsigned long _DAT_00494860;
extern "C" unsigned long _DAT_00494970;
extern "C" unsigned long _DAT_00494974;
extern "C" unsigned long _DAT_00494978;
extern "C" unsigned long _DAT_0049497c;
extern "C" unsigned long _DAT_00494980;
extern "C" unsigned long _DAT_00494984;
extern "C" unsigned long _DAT_00494988;
extern "C" unsigned long _DAT_00494a88;
extern "C" unsigned long _DAT_00494a8c;
extern "C" unsigned long g_004947a4;
extern "C" unsigned long g_004947a8;
extern "C" unsigned long g_00494858;
extern "C" unsigned long g_0049485c;
extern "C" unsigned long g_00494860;
extern "C" unsigned long g_00494970;
extern "C" unsigned long g_00494974;
extern "C" unsigned long g_00494978;
extern "C" unsigned long g_0049497c;
extern "C" unsigned long g_00494980;
extern "C" unsigned long g_00494984;
extern "C" unsigned long g_00494988;
extern "C" unsigned long g_00494a88;
extern "C" unsigned long g_00494a8c;
void MirrorRewardData::setReward2(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void MirrorRewardData::setReward1(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void MirrorRewardData::setMissionID(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

MirrorRewardData::~MirrorRewardData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"MirrorRewardData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string MirrorRewardData::getReward2() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string MirrorRewardData::getReward1() const
{ return *(std::string *)(((int)this) + 0x18); }

std::string MirrorRewardData::getMissionID() const
{ return *(std::string *)(((int)this) + 0x14); }

MirrorRewardData::MirrorRewardData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = *(int *)(g_0049485c + 0x494800) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar2;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(7)) = iVar2;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"MirrorRewardData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool MirrorRewardData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void MirrorRewardData::initWith(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MirrorRewardData::getRewardIDandNum(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
