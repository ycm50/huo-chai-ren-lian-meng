#include "ArenaPlayerData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e834(...);
extern "C" long long func_0079e844(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0049bc80;
extern "C" unsigned long _DAT_0049bc84;
extern "C" unsigned long _DAT_0049bd28;
extern "C" unsigned long _DAT_0049bd2c;
extern "C" unsigned long _DAT_0049bd30;
extern "C" unsigned long _DAT_0049bd34;
extern "C" unsigned long g_0049bc80;
extern "C" unsigned long g_0049bc84;
extern "C" unsigned long g_0049bd28;
extern "C" unsigned long g_0049bd2c;
extern "C" unsigned long g_0049bd30;
extern "C" unsigned long g_0049bd34;
int * ArenaPlayerData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x28)));
  0 /* ctorZero */;
  iVar2 = ((ArenaPlayerData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

int ArenaPlayerData::getAttack() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void ArenaPlayerData::setAttack(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int ArenaPlayerData::getDefense() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void ArenaPlayerData::setDefense(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int ArenaPlayerData::getLife() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void ArenaPlayerData::setLife(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int ArenaPlayerData::getCrit() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void ArenaPlayerData::setCrit(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

ArenaPlayerData::~ArenaPlayerData()
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
  func_0079e45c(&uStack_14,((intptr_t)"ArenaPlayerData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void ArenaPlayerData::setMonsterID(std::string p1)
{
  func_0079e834(((int)this) + 0x14);
  return;
}

std::string ArenaPlayerData::getMonsterID() const
{ return *(std::string *)(((int)this) + 0x14); }

ArenaPlayerData::ArenaPlayerData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = g_0049bd2c + 0x49bccc;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = *(int *)(g_0049bd30 + 0x49bcd6) + 0xc;
  func_0079e844(((int)this) + 5,iVar2);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"ArenaPlayerData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool ArenaPlayerData::init()
{
  return 1;
}
