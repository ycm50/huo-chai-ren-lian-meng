#include "ChestData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e31c(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00470070;
extern "C" unsigned long _DAT_00470074;
extern "C" unsigned long _DAT_00470078;
extern "C" unsigned long _DAT_00470120;
extern "C" unsigned long _DAT_00470124;
extern "C" unsigned long _DAT_00470284;
extern "C" unsigned long _DAT_00470288;
extern "C" unsigned long _DAT_0047028c;
extern "C" unsigned long _DAT_00470290;
extern "C" unsigned long _DAT_00470294;
extern "C" unsigned long _DAT_00470298;
extern "C" unsigned long _DAT_0047029c;
extern "C" unsigned long _DAT_004702a0;
extern "C" unsigned long _DAT_004702a4;
extern "C" unsigned long _DAT_004702a8;
extern "C" unsigned long _DAT_00470424;
extern "C" unsigned long _DAT_00470428;
extern "C" unsigned long _DAT_0047042c;
extern "C" unsigned long _DAT_004704f4;
extern "C" unsigned long _DAT_004704f8;
extern "C" unsigned long _DAT_004704fc;
extern "C" unsigned long _DAT_00470500;
extern "C" unsigned long _DAT_00470504;
extern "C" unsigned long _DAT_00470508;
extern "C" unsigned long _DAT_0047050c;
extern "C" unsigned long g_00470070;
extern "C" unsigned long g_00470074;
extern "C" unsigned long g_00470078;
extern "C" unsigned long g_00470120;
extern "C" unsigned long g_00470124;
extern "C" unsigned long g_00470284;
extern "C" unsigned long g_00470288;
extern "C" unsigned long g_0047028c;
extern "C" unsigned long g_00470290;
extern "C" unsigned long g_00470294;
extern "C" unsigned long g_00470298;
extern "C" unsigned long g_0047029c;
extern "C" unsigned long g_004702a0;
extern "C" unsigned long g_004702a4;
extern "C" unsigned long g_004702a8;
extern "C" unsigned long g_00470424;
extern "C" unsigned long g_00470428;
extern "C" unsigned long g_0047042c;
extern "C" unsigned long g_004704f4;
extern "C" unsigned long g_004704f8;
extern "C" unsigned long g_004704fc;
extern "C" unsigned long g_00470500;
extern "C" unsigned long g_00470504;
extern "C" unsigned long g_00470508;
extern "C" unsigned long g_0047050c;
int ChestData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void ChestData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int ChestData::getVirtualType() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void ChestData::setVirtualType(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

int ChestData::getOnePrice() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void ChestData::setOnePrice(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

int ChestData::getTenPrice() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void ChestData::setTenPrice(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

int ChestData::getStar() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void ChestData::setStar(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

void ChestData::setDes(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

void ChestData::setIcon(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void ChestData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

std::string ChestData::getDes() const
{ return *(std::string *)(((int)this) + 0x20); }

std::string ChestData::getIcon() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string ChestData::getName() const
{ return *(std::string *)(((int)this) + 0x18); }

bool ChestData::init()
{
  return 1;
}

int ChestData::getTotalProbabilityOne()
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(((int)this) + 0x40);
  while (iVar1 != ((int)this) + 0x38) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x14);
    iVar1 = func_0079e31c();
  }
  return iVar2;
}

int ChestData::getTotalProbabilityTen()
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(((int)this) + 0x58);
  while (iVar1 != ((int)this) + 0x50) {
    iVar2 = iVar2 + *(int *)(iVar1 + 0x14);
    iVar1 = func_0079e31c();
  }
  return iVar2;
}

undefined4 ChestData::getOneIDbyRandom(int p1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(((int)this) + 0x40);
  iVar2 = 0;
  iVar1 = iVar3;
  while( true ) {
    if (iVar1 == ((int)this) + 0x38) {
      return *(undefined4 *)(iVar3 + 0x10);
    }
    iVar2 = iVar2 + *(int *)(iVar1 + 0x14);
    if (p1 <= iVar2) break;
    iVar1 = func_0079e31c();
  }
  return *(undefined4 *)(iVar1 + 0x10);
}

undefined4 ChestData::getTenIDbyRandom(int p1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(((int)this) + 0x58);
  while( true ) {
    if (iVar1 == ((int)this) + 0x50) {
      return *(undefined4 *)(*(int *)(((int)this) + 0x40) + 0x10);
    }
    iVar2 = iVar2 + *(int *)(iVar1 + 0x14);
    if (p1 <= iVar2) break;
    iVar1 = func_0079e31c();
  }
  return *(undefined4 *)(iVar1 + 0x10);
}

ChestData::ChestData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

ChestData::~ChestData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"ChestData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  ((std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>> *)((int)this) + 0x13)->~map();
  ((std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int>>> *)((int)this) + 0xd)->~map();
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void ChestData::initProbability(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChestData::createProbability()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChestData::initWith(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 ChestData::getChestDatas()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
