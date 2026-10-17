#include "PetItemData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049fc14;
extern "C" unsigned long _DAT_0049fc18;
extern "C" unsigned long _DAT_0049fc88;
extern "C" unsigned long _DAT_0049feb8;
extern "C" unsigned long _DAT_0049febc;
extern "C" unsigned long _DAT_0049fec0;
extern "C" unsigned long _DAT_0049fec4;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0049fc14;
extern "C" unsigned long g_0049fc18;
extern "C" unsigned long g_0049fc88;
extern "C" unsigned long g_0049feb8;
extern "C" unsigned long g_0049febc;
extern "C" unsigned long g_0049fec0;
extern "C" unsigned long g_0049fec4;
PetItemData::PetItemData()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = g_0049fc14 + 0x49fbda;
  uStack_14 = (undefined4)(p2);
  func_0079e45c(((int)this),iVar1,&uStack_14);
  func_0079e45c(((int)this) + 4,iVar1,&uStack_14);
  *(undefined4 *)(((int)this) + 8) = 0;
  *(undefined4 *)(((int)this) + 0xc) = 0;
  *(undefined4 *)(((int)this) + 0x10) = 0;
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(undefined4 *)(((int)this) + 0x18) = 0;
  *(undefined4 *)(((int)this) + 0x1c) = 0;
  *(undefined4 *)(((int)this) + 0x20) = 0;
  iVar1 = *(int *)(g_0049fc18 + 0x49fc00) + 0xc;
  *(int *)(((int)this) + 0x24) = iVar1;
  *(int *)(((int)this) + 0x28) = iVar1;
  return;
}

PetItemData::~PetItemData()
{
  *(undefined4 *)(((int)this) + 0x10) = *(undefined4 *)(((int)this) + 0xc);
  func_0079e2bc(((int)this) + 0x28);
  func_0079e2bc(((int)this) + 0x24);
  if (*(int *)(((int)this) + 0x18) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x18))));
  }
  if (*(int *)(((int)this) + 0xc) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0xc))));
  }
  func_0079e2bc(((int)this) + 4);
  func_0079e2bc(((int)this));
  return;
}

uint PetItemData::checkUpgraceable(int p1)
{
  return (((int)p1 >> 0x1f) - ((int)*(uint *)(((int)this) + 8) >> 0x1f)) +
         (uint)(*(uint *)(((int)this) + 8) <= p1) & 0xff;
}

undefined4 PetItemData::getUpgraceNeedExp(int p1)
{
  uint uVar1;
  uint extraout_r1;
  int iVar2;
  int extraout_r3;
  
  iVar2 = *(int *)(((int)this) + 0xc);
  uVar1 = (undefined4)(p1 - 1);
  if ((uint)(*(int *)(((int)this) + 0x10) - iVar2 >> 2) <= uVar1) {
    func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"));
    uVar1 = (undefined4)(extraout_r1);
    iVar2 = extraout_r3;
  }
  return *(undefined4 *)(uVar1 * 4 + iVar2);
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void PetItemData::initWithData(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this),*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 4,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 8) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e45c(auStack_48,*(undefined4 *)((iVar2 + 1) * 4 + p1),&puStack_24);
  *(int *)p2 = *(int *)p2 + 1;
  *(undefined4 *)(((int)this) + 0x10) = *(undefined4 *)(((int)this) + 0xc);
  func_0079e53c(auStack_44,auStack_48);
  func_0079e45c(auStack_40,g_0049feb8 + 0x49fd6c,&puStack_24);
  0 /* ctorZero */;
  func_0079e2bc(auStack_40);
  func_0079e2bc(auStack_44);
  for (puVar3 = puStack_30; puVar3 != puStack_2c; puVar3 = puVar3 + 1) {
    iVar2 = (undefined4)(intptr_t)(func_0079e4bc(puVar3,g_0049febc + 0x49fd98));
    if (iVar2 != 0) {
      puStack_24 = (undefined4 *)func_0079e6c0(*puVar3);
      ((std::vector<int, std::allocator<int>> *)(((int)this) + 0xc))->push_back(*(int const*)&puStack_24);
    }
  }
  func_0079e45c(auStack_3c,*(undefined4 *)(*(int *)p2 * 4 + p1),&puStack_24);
  *(int *)p2 = *(int *)p2 + 1;
  *(undefined4 *)(((int)this) + 0x1c) = *(undefined4 *)(((int)this) + 0x18);
  func_0079e53c(auStack_38,auStack_3c);
  func_0079e45c(&uStack_34,g_0049fec0 + 0x49fde4,auStack_40);
  0 /* ctorZero */;
  func_0079e2bc(&uStack_34);
  func_0079e2bc(auStack_38);
  for (puVar3 = puStack_24; puVar3 != puStack_20; puVar3 = puVar3 + 1) {
    iVar2 = (undefined4)(intptr_t)(func_0079e4bc(puVar3,g_0049fec4 + 0x49fe12));
    if (iVar2 != 0) {
      uStack_34 = (undefined4)(func_0079e6c0(*puVar3));
      ((std::vector<int, std::allocator<int>> *)(((int)this) + 0x18))->push_back(*(int const*)&uStack_34);
    }
  }
  func_0079e2dc(((int)this) + 0x24,*(undefined4 *)(*(int *)p2 * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x28,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  *(int *)p2 = *(int *)p2 + 1;
  ((std::vector<std::string, std::allocator<std::string>> *)(&puStack_24))->~vector();
  func_0079e2bc(auStack_3c);
  ((std::vector<std::string, std::allocator<std::string>> *)(&puStack_30))->~vector();
  func_0079e2bc(auStack_48);
  return;
}
