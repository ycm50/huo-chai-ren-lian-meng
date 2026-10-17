#include "ReChargeItemData.h"
#include "CCObject.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079ea54(...);
extern "C" unsigned long _DAT_004a36bc;
extern "C" unsigned long _DAT_004a37c0;
extern "C" unsigned long _DAT_004a37c4;
extern "C" unsigned long _DAT_004a37c8;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_004a36bc;
extern "C" unsigned long g_004a37c0;
extern "C" unsigned long g_004a37c4;
extern "C" unsigned long g_004a37c8;
int ReChargeItemData::getItemID() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void ReChargeItemData::setItemID(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int ReChargeItemData::getPrice() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void ReChargeItemData::setPrice(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

long long ReChargeItemData::getNum() const
{
  return *(undefined8 *)(((int)this) + 0x28);
}

int ReChargeItemData::getType() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void ReChargeItemData::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

void ReChargeItemData::setIcon(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void ReChargeItemData::setID(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

ReChargeItemData::~ReChargeItemData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string ReChargeItemData::getIcon() const
{ return *(std::string *)(((int)this) + 0x18); }

std::string ReChargeItemData::getID() const
{ return *(std::string *)(((int)this) + 0x14); }

ReChargeItemData::ReChargeItemData()
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  0 /* ctorZero */;
  iVar1 = g_004a37c4;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = *(int *)(g_004a37c8 + 0x4a378a) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar2;
  *(int *)((int)this + 4*(6)) = iVar2;
  func_0079e2dc(((int)this) + 5,iVar1 + 0x4a3788,extraout_r2,iVar2,p4);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

bool ReChargeItemData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void ReChargeItemData::setNum(long long p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  *(undefined4 *)(((int)this) + 0x28) = p3;
  *(undefined4 *)(((int)this) + 0x2c) = p4;
  return;
}

void ReChargeItemData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x14,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x18,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x1c) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x20) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar3 = (undefined4)(intptr_t)(func_0079ea54(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined8 *)(((int)this) + 0x28) = uVar3;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x30) = uVar1;
  *(int *)p2 = *(int *)p2 + 1;
  return;
}
