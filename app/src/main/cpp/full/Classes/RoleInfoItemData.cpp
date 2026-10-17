#include "RoleInfoItemData.h"
#include "CCObject.h"
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
extern "C" unsigned long _DAT_004a80dc;
extern "C" unsigned long _DAT_004a80e0;
extern "C" unsigned long _DAT_004a8274;
extern "C" unsigned long _DAT_004a8278;
extern "C" unsigned long _DAT_004a827c;
extern "C" unsigned long g_004a80dc;
extern "C" unsigned long g_004a80e0;
extern "C" unsigned long g_004a8274;
extern "C" unsigned long g_004a8278;
extern "C" unsigned long g_004a827c;
int RoleInfoItemData::getStar() const
{
  return *(undefined4 *)(((int)this) + 0x28);
}

void RoleInfoItemData::setStar(int p1)
{
  *(undefined4 *)(((int)this) + 0x28) = p1;
  return;
}

int RoleInfoItemData::getPriceType() const
{
  return *(undefined4 *)(((int)this) + 0x2c);
}

void RoleInfoItemData::setPriceType(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

int RoleInfoItemData::getPrice() const
{
  return *(undefined4 *)(((int)this) + 0x30);
}

void RoleInfoItemData::setPrice(int p1)
{
  *(undefined4 *)(((int)this) + 0x30) = p1;
  return;
}

void RoleInfoItemData::setHunShi(std::string p1)
{
  func_0079e52c(((int)this) + 0x38);
  return;
}

void RoleInfoItemData::setHeroId(std::string p1)
{
  func_0079e52c(((int)this) + 0x34);
  return;
}

void RoleInfoItemData::setDes(std::string p1)
{
  func_0079e52c(((int)this) + 0x24);
  return;
}

void RoleInfoItemData::setIcon(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

void RoleInfoItemData::setImage(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void RoleInfoItemData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void RoleInfoItemData::setID(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

RoleInfoItemData::~RoleInfoItemData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"RoleInfoItemData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 0xe);
  func_0079e2bc(((int)this) + 0xd);
  func_0079e2bc(((int)this) + 9);
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string RoleInfoItemData::getID() const
{ return *(std::string *)(((int)this) + 0x14); }

std::string RoleInfoItemData::getHunShi() const
{ return *(std::string *)(((int)this) + 0x38); }

std::string RoleInfoItemData::getHeroId() const
{ return *(std::string *)(((int)this) + 0x34); }

std::string RoleInfoItemData::getDes() const
{ return *(std::string *)(((int)this) + 0x24); }

std::string RoleInfoItemData::getIcon() const
{ return *(std::string *)(((int)this) + 0x20); }

std::string RoleInfoItemData::getImage() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string RoleInfoItemData::getName() const
{ return *(std::string *)(((int)this) + 0x18); }

RoleInfoItemData::RoleInfoItemData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_004a8274 + 0x4a81e0);
  *(int *)((int)this + 4*(0xc)) = 100;
  *(int *)this = iVar2 + 8;
  iVar2 = *(int *)(g_004a8278 + 0x4a81ec) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar2;
  *(int *)((int)this + 4*(6)) = iVar2;
  *(int *)((int)this + 4*(7)) = iVar2;
  *(int *)((int)this + 4*(8)) = iVar2;
  *(int *)((int)this + 4*(9)) = iVar2;
  *(int *)((int)this + 4*(0xd)) = iVar2;
  *(int *)((int)this + 4*(0xe)) = iVar2;
  *(int *)((int)this + 4*(10)) = 1;
  *(int *)((int)this + 4*(0xb)) = 1;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"RoleInfoItemData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool RoleInfoItemData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void RoleInfoItemData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x14,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x18,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x1c,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x20,*(undefined4 *)((iVar2 + 1) * 4 + p1));
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
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x30) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x34,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x38,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  *(int *)p2 = *(int *)p2 + 1;
  return;
}
