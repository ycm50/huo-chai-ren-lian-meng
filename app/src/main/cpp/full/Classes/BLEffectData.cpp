#include "BLEffectData.h"
#include "BLLeakUtils.h"
#include "BLRoleData.h"
#include "DataManager.h"
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
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00455a60;
extern "C" unsigned long _DAT_00455a64;
extern "C" unsigned long _DAT_00455b20;
extern "C" unsigned long _DAT_00455b24;
extern "C" unsigned long _DAT_00455b28;
extern "C" unsigned long _DAT_00455b2c;
extern "C" unsigned long _DAT_00455c30;
extern "C" unsigned long _DAT_00455c34;
extern "C" unsigned long _DAT_00455c38;
extern "C" unsigned long _DAT_00455c3c;
extern "C" unsigned long _DAT_00455c40;
extern "C" unsigned long _DAT_00455c44;
extern "C" unsigned long g_00455a60;
extern "C" unsigned long g_00455a64;
extern "C" unsigned long g_00455b20;
extern "C" unsigned long g_00455b24;
extern "C" unsigned long g_00455b28;
extern "C" unsigned long g_00455b2c;
extern "C" unsigned long g_00455c30;
extern "C" unsigned long g_00455c34;
extern "C" unsigned long g_00455c38;
extern "C" unsigned long g_00455c3c;
extern "C" unsigned long g_00455c40;
extern "C" unsigned long g_00455c44;
int * BLEffectData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x34)));
  0 /* ctorZero */;
  if (piVar1 != (int *)0x0) {
    iVar2 = ((BLEffectData *)piVar1)->init();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar1)->autorelease();
    }
  }
  return (int *)(piVar1);
}

void BLEffectData::setSound(std::string p1)
{
  func_0079e52c(((int)this) + 0x30);
  return;
}

void BLEffectData::setResID(std::string p1)
{
  func_0079e52c(((int)this) + 0x2c);
  return;
}

void BLEffectData::setID(std::string p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

BLEffectData::~BLEffectData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLEffectData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0xc);
  func_0079e2bc(((int)this) + 0xb);
  func_0079e2bc(((int)this) + 10);
  BLRoleData::~BLRoleData();
  return;
}

std::string BLEffectData::getSound() const
{ return *(std::string *)(((int)this) + 0x30); }

std::string BLEffectData::getResID() const
{ return *(std::string *)(((int)this) + 0x2c); }

std::string BLEffectData::getID() const
{ return *(std::string *)(((int)this) + 0x28); }

BLEffectData::BLEffectData()
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
  iVar1 = g_00455b24;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar3 = *(int *)(g_00455b28 + 0x455ac6) + 0xc;
  *(int *)((int)this + 4*(10)) = iVar3;
  *(int *)((int)this + 4*(0xb)) = iVar3;
  *(int *)((int)this + 4*(0xc)) = iVar3;
  func_0079e2dc(((int)this) + 0xb,iVar1 + 0x455ac4);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLEffectData"),&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

bool BLEffectData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLEffectData::initWithID(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
