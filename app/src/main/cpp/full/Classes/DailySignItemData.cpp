#include "DailySignItemData.h"
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
extern "C" unsigned long _DAT_004a9298;
extern "C" unsigned long _DAT_004a93c4;
extern "C" unsigned long _DAT_004a93c8;
extern "C" unsigned long _DAT_004a93cc;
extern "C" unsigned long _DAT_004a93d0;
extern "C" unsigned long _DAT_004a93d4;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_004a9298;
extern "C" unsigned long g_004a93c4;
extern "C" unsigned long g_004a93c8;
extern "C" unsigned long g_004a93cc;
extern "C" unsigned long g_004a93d0;
extern "C" unsigned long g_004a93d4;
int DailySignItemData::getItemNum() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void DailySignItemData::setItemNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int DailySignItemData::getItemId() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void DailySignItemData::setItemId(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int DailySignItemData::getDayId() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void DailySignItemData::setDayId(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

void DailySignItemData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

void DailySignItemData::setIcon(std::string p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

void DailySignItemData::setPrice(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

DailySignItemData::~DailySignItemData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 10);
  func_0079e2bc(((int)this) + 9);
  func_0079e2bc(((int)this) + 8);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string DailySignItemData::getName() const
{ return *(std::string *)(((int)this) + 0x28); }

std::string DailySignItemData::getIcon() const
{ return *(std::string *)(((int)this) + 0x24); }

std::string DailySignItemData::getPrice() const
{ return *(std::string *)(((int)this) + 0x20); }

DailySignItemData::DailySignItemData()
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = g_004a93cc;
  iVar2 = *(int *)(g_004a93c8 + 0x4a936e) + 0xc;
  *(int *)((int)this + 4*(8)) = iVar2;
  *(int *)((int)this + 4*(9)) = iVar2;
  *(int *)((int)this + 4*(10)) = iVar2;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  func_0079e2dc(((int)this) + 10,iVar1 + 0x4a9388,extraout_r2,0,p4);
  func_0079e2dc(((int)this) + 9,g_004a93d0 + 0x4a9396);
  func_0079e2dc(((int)this) + 8,g_004a93d4 + 0x4a93a0);
  return;
}

bool DailySignItemData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void DailySignItemData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x1c) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x14) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x20,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x28,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  *(int *)p2 = *(int *)p2 + 1;
  return;
}
