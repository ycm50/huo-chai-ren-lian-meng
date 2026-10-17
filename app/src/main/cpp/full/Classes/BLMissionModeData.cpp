#include "BLMissionModeData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e834(...);
extern "C" long long func_0079e844(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00458ad0;
extern "C" unsigned long _DAT_00458ad4;
extern "C" unsigned long _DAT_00458b84;
extern "C" unsigned long _DAT_00458b88;
extern "C" unsigned long _DAT_00458b8c;
extern "C" unsigned long _DAT_00458b90;
extern "C" unsigned long g_00458ad0;
extern "C" unsigned long g_00458ad4;
extern "C" unsigned long g_00458b84;
extern "C" unsigned long g_00458b88;
extern "C" unsigned long g_00458b8c;
extern "C" unsigned long g_00458b90;
int BLMissionModeData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BLMissionModeData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int BLMissionModeData::getType() const
{
  return *(undefined4 *)(((int)this) + 0x1c);
}

void BLMissionModeData::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = p1;
  return;
}

BLMissionModeData::~BLMissionModeData()
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
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionModeData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(8)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(8)))));
  }
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMissionModeData::setName(std::string p1)
{
  func_0079e834(((int)this) + 0x18);
  return;
}

std::string BLMissionModeData::getName() const
{ return *(std::string *)(((int)this) + 0x18); }

BLMissionModeData::BLMissionModeData()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar1 = g_00458b88;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar3 = g_00458b8c;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  iVar3 = *(int *)(iVar3 + 0x458b28);
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = iVar3 + 0xc;
  func_0079e844(((int)this) + 6,iVar1 + 0x458b34);
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionModeData"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLMissionModeData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
int BLMissionModeData::getChapters() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMissionModeData::setChapters(std::vector<int, std::allocator<int>> p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
