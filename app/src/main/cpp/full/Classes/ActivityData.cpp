#include "ActivityData.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0046830c;
extern "C" unsigned long _DAT_00468310;
extern "C" unsigned long _DAT_004686d4;
extern "C" unsigned long _DAT_004686d8;
extern "C" unsigned long _DAT_004686dc;
extern "C" unsigned long g_0046830c;
extern "C" unsigned long g_00468310;
extern "C" unsigned long g_004686d4;
extern "C" unsigned long g_004686d8;
extern "C" unsigned long g_004686dc;
int ActivityData::getID() const
{
  return *(undefined4 *)(((int)this) + 0x14);
}

void ActivityData::setID(int p1)
{
  *(undefined4 *)(((int)this) + 0x14) = p1;
  return;
}

int ActivityData::getType() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void ActivityData::setType(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

void ActivityData::setDes(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

void ActivityData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

ActivityData::~ActivityData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"ActivityData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 7);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string ActivityData::getDes() const
{ return *(std::string *)(((int)this) + 0x20); }

std::string ActivityData::getName() const
{ return *(std::string *)(((int)this) + 0x1c); }

ActivityData::ActivityData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar2 = *(int *)(g_004686d8 + 0x468684) + 0xc;
  *(int *)((int)this + 4*(7)) = iVar2;
  *(int *)((int)this + 4*(8)) = iVar2;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"ActivityData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool ActivityData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void ActivityData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x14) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x1c,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x20,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  *(int *)p2 = *(int *)p2 + 1;
  return;
}
