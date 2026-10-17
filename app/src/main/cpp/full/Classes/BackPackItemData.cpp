#include "BackPackItemData.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00483b08;
extern "C" unsigned long _DAT_00483b0c;
extern "C" unsigned long _DAT_00483c24;
extern "C" unsigned long _DAT_00483c28;
extern "C" unsigned long _DAT_00483c2c;
extern "C" unsigned long _DAT_00483c30;
extern "C" unsigned long g_00483b08;
extern "C" unsigned long g_00483b0c;
extern "C" unsigned long g_00483c24;
extern "C" unsigned long g_00483c28;
extern "C" unsigned long g_00483c2c;
extern "C" unsigned long g_00483c30;
int * BackPackItemData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x30)));
  0 /* ctorZero */;
  iVar2 = ((BackPackItemData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

int BackPackItemData::getMainKey() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BackPackItemData::setMainKey(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int BackPackItemData::getItemID() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BackPackItemData::setItemID(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int BackPackItemData::getItemNum() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BackPackItemData::setItemNum(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int BackPackItemData::getLV() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void BackPackItemData::setLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int BackPackItemData::getEquipIndex() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void BackPackItemData::setEquipIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

int BackPackItemData::getUpGraceTime() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void BackPackItemData::setUpGraceTime(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

void BackPackItemData::setRoleID(std::string p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

BackPackItemData::~BackPackItemData()
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
  func_0079e45c(&uStack_1c,((intptr_t)"BackPackItemData"),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 9);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BackPackItemData::getRoleID() const
{ return *(std::string *)(((int)this) + 0x24); }

BackPackItemData::BackPackItemData()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = g_00483c2c;
  iVar3 = *(int *)(g_00483c28 + 0x483bc8);
  *(int *)((int)this + 4*(5)) = 1;
  *(int *)((int)this + 4*(9)) = iVar3 + 0xc;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  func_0079e2dc(((int)this) + 9,iVar1 + 0x483bd6);
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BackPackItemData"),&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

bool BackPackItemData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BackPackItemData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)(*(int *)p2 * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x14) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
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
  func_0079e2dc(((int)this) + 0x24,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x28) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x2c) = uVar1;
  *(int *)p2 = *(int *)p2 + 1;
  return;
}
