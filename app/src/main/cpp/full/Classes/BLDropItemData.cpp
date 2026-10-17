#include "BLDropItemData.h"
#include "BLLeakUtils.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0045658c;
extern "C" unsigned long _DAT_00456590;
extern "C" unsigned long _DAT_004566b0;
extern "C" unsigned long _DAT_004566b4;
extern "C" unsigned long g_0045658c;
extern "C" unsigned long g_00456590;
extern "C" unsigned long g_004566b0;
extern "C" unsigned long g_004566b4;
int BLDropItemData::getItemID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void BLDropItemData::setItemID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int BLDropItemData::getProbability() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void BLDropItemData::setProbability(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

BLDropItemData::~BLDropItemData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDropItemData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDropItemData::BLDropItemData()
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
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLDropItemData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLDropItemData::init()
{
  return 1;
}
