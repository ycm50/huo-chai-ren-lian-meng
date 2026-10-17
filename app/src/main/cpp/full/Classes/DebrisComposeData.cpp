#include "DebrisComposeData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00487ad8;
extern "C" unsigned long _DAT_00487adc;
extern "C" unsigned long _DAT_00487b4c;
extern "C" unsigned long _DAT_00487b50;
extern "C" unsigned long _DAT_00487c8c;
extern "C" unsigned long _DAT_00487c90;
extern "C" unsigned long _DAT_00487c94;
extern "C" unsigned long _DAT_00487c98;
extern "C" unsigned long _DAT_00487c9c;
extern "C" unsigned long _DAT_00487ca0;
extern "C" unsigned long _DAT_00487ca4;
extern "C" unsigned long g_00487ad8;
extern "C" unsigned long g_00487adc;
extern "C" unsigned long g_00487b4c;
extern "C" unsigned long g_00487b50;
extern "C" unsigned long g_00487c8c;
extern "C" unsigned long g_00487c90;
extern "C" unsigned long g_00487c94;
extern "C" unsigned long g_00487c98;
extern "C" unsigned long g_00487c9c;
extern "C" unsigned long g_00487ca0;
extern "C" unsigned long g_00487ca4;
int DebrisComposeData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void DebrisComposeData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int DebrisComposeData::getEquipID() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void DebrisComposeData::setEquipID(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int DebrisComposeData::getValue() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void DebrisComposeData::setValue(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

int DebrisComposeData::getCastType() const
{
  return *(undefined4 *)(((int)this) + 0x20);
}

void DebrisComposeData::setCastType(int p1)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  return;
}

int DebrisComposeData::getCastValue() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void DebrisComposeData::setCastValue(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

int DebrisComposeData::getPercent() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void DebrisComposeData::setPercent(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

DebrisComposeData::~DebrisComposeData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"DebrisComposeData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

DebrisComposeData::DebrisComposeData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"DebrisComposeData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool DebrisComposeData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void DebrisComposeData::initWith(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
