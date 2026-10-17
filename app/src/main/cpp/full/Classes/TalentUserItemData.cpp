#include "TalentUserItemData.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004b0220;
extern "C" unsigned long _DAT_004b0224;
extern "C" unsigned long _DAT_004b0268;
extern "C" unsigned long _DAT_004b026c;
extern "C" unsigned long g_004b0220;
extern "C" unsigned long g_004b0224;
extern "C" unsigned long g_004b0268;
extern "C" unsigned long g_004b026c;
int TalentUserItemData::getId() const
{
  return *(undefined4 *)(((int)this) + 4);
}

void TalentUserItemData::setId(int p1)
{
  *(undefined4 *)(((int)this) + 4) = p1;
  return;
}

int TalentUserItemData::getLv() const
{
  return *(undefined4 *)(((int)this) + 8);
}

void TalentUserItemData::setLv(int p1)
{
  *(undefined4 *)(((int)this) + 8) = p1;
  return;
}

bool TalentUserItemData::getIsOpen() const
{
  return *(undefined1 *)(((int)this) + 0xc);
}

void TalentUserItemData::setIsOpen(bool p1)
{
  *(undefined1 *)(((int)this) + 0xc) = p1;
  return;
}

bool TalentUserItemData::getIsSelected() const
{
  return *(undefined1 *)(((int)this) + 0xd);
}

void TalentUserItemData::setIsSelected(bool p1)
{
  *(undefined1 *)(((int)this) + 0xd) = p1;
  return;
}

TalentUserItemData::TalentUserItemData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(undefined1 *)(((int)this) + 3) = 0;
  *(undefined1 *)((int)((int)this) + 0xd) = 0;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"TalentUserItemData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

TalentUserItemData::~TalentUserItemData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"TalentUserItemData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void TalentUserItemData::initWith(int p1)
{
  *(undefined4 *)(((int)this) + 8) = 1;
  *(undefined4 *)(((int)this) + 4) = p1;
  *(undefined1 *)(((int)this) + 0xc) = 0;
  *(undefined1 *)(((int)this) + 0xd) = 0;
  return;
}

