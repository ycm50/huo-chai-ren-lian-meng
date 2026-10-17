#include "ActivityItemData.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long _DAT_00468284;
extern "C" unsigned long _DAT_004683e8;
extern "C" unsigned long _DAT_004683ec;
extern "C" unsigned long _DAT_004683f0;
extern "C" unsigned long _DAT_004683f4;
extern "C" unsigned long _DAT_004683f8;
extern "C" unsigned long _DAT_00468568;
extern "C" unsigned long _DAT_0046856c;
extern "C" unsigned long _DAT_00468570;
extern "C" unsigned long _DAT_00468574;
extern "C" unsigned long _DAT_00468578;
extern "C" unsigned long _DAT_00468658;
extern "C" unsigned long _DAT_0046865c;
extern "C" unsigned long _DAT_00468660;
extern "C" unsigned long _DAT_00468664;
extern "C" unsigned long _DAT_00468668;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_00468284;
extern "C" unsigned long g_004683e8;
extern "C" unsigned long g_004683ec;
extern "C" unsigned long g_004683f0;
extern "C" unsigned long g_004683f4;
extern "C" unsigned long g_004683f8;
extern "C" unsigned long g_00468568;
extern "C" unsigned long g_0046856c;
extern "C" unsigned long g_00468570;
extern "C" unsigned long g_00468574;
extern "C" unsigned long g_00468578;
extern "C" unsigned long g_00468658;
extern "C" unsigned long g_0046865c;
extern "C" unsigned long g_00468660;
extern "C" unsigned long g_00468664;
extern "C" unsigned long g_00468668;
int ActivityItemData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void ActivityItemData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int ActivityItemData::getTitleID() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void ActivityItemData::setTitleID(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int ActivityItemData::getTargetNum() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void ActivityItemData::setTargetNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int ActivityItemData::getTargetType() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void ActivityItemData::setTargetType(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int ActivityItemData::getISGet() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void ActivityItemData::setISGet(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

int ActivityItemData::getRealNum() const
{
  return *(undefined4 *)(((int)this) + 0x34);
}

void ActivityItemData::setRealNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x34) = p1;
  return;
}

void ActivityItemData::setReward(std::string p1)
{
  func_0079e52c(((int)this) + 0x2c);
  return;
}

void ActivityItemData::setRewDes(std::string p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

void ActivityItemData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

ActivityItemData::~ActivityItemData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 0xb);
  func_0079e2bc(((int)this) + 10);
  func_0079e2bc(((int)this) + 9);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string ActivityItemData::getReward() const
{ return *(std::string *)(((int)this) + 0x2c); }

std::string ActivityItemData::getRewDes() const
{ return *(std::string *)(((int)this) + 0x28); }

std::string ActivityItemData::getName() const
{ return *(std::string *)(((int)this) + 0x24); }

ActivityItemData::ActivityItemData()
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = g_004683f0;
  iVar2 = *(int *)(g_004683ec + 0x46838a) + 0xc;
  *(int *)((int)this + 4*(9)) = iVar2;
  *(int *)((int)this + 4*(10)) = iVar2;
  *(int *)((int)this + 4*(0xb)) = iVar2;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  func_0079e2dc(((int)this) + 9,iVar1 + 0x4683a2,extraout_r2,0,p4);
  func_0079e2dc(((int)this) + 10,g_004683f4 + 0x4683b0);
  func_0079e2dc(((int)this) + 0xb,g_004683f8 + 0x4683ba);
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

bool ActivityItemData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void ActivityItemData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x14) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x24,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x28,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x2c,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x1c) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x20) = uVar1;
  *(int *)p2 = *(int *)p2 + 1;
  return;
}

void ActivityItemData::updateRealNum(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ActivityItemData::updateIsGet()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
