#include "MainMenuItemData.h"
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
extern "C" unsigned long _DAT_0049d5b4;
extern "C" unsigned long _DAT_0049d5b8;
extern "C" unsigned long _DAT_0049d70c;
extern "C" unsigned long _DAT_0049d710;
extern "C" unsigned long _DAT_0049d714;
extern "C" unsigned long _DAT_0049d718;
extern "C" unsigned long g_0049d5b4;
extern "C" unsigned long g_0049d5b8;
extern "C" unsigned long g_0049d70c;
extern "C" unsigned long g_0049d710;
extern "C" unsigned long g_0049d714;
extern "C" unsigned long g_0049d718;
int MainMenuItemData::getUID() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void MainMenuItemData::setUID(int p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

int MainMenuItemData::getSubType() const
{
  return *(undefined4 *)(((int)this) + 0x24);
}

void MainMenuItemData::setSubType(int p1)
{
  *(undefined4 *)(((int)this) + 0x24) = p1;
  return;
}

void MainMenuItemData::setMissionID(std::string p1)
{
  func_0079e52c(((int)this) + 0x28);
  return;
}

void MainMenuItemData::setName(std::string p1)
{
  func_0079e52c(((int)this) + 0x20);
  return;
}

void MainMenuItemData::setIcon(std::string p1)
{
  func_0079e52c(((int)this) + 0x1c);
  return;
}

void MainMenuItemData::setID(std::string p1)
{
  func_0079e52c(((int)this) + 0x14);
  return;
}

MainMenuItemData::~MainMenuItemData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"MainMenuItemData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 10);
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string MainMenuItemData::getMissionID() const
{ return *(std::string *)(((int)this) + 0x28); }

std::string MainMenuItemData::getName() const
{ return *(std::string *)(((int)this) + 0x20); }

std::string MainMenuItemData::getIcon() const
{ return *(std::string *)(((int)this) + 0x1c); }

std::string MainMenuItemData::getID() const
{ return *(std::string *)(((int)this) + 0x14); }

MainMenuItemData::MainMenuItemData()
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
  iVar1 = g_0049d710;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar3 = *(int *)(g_0049d714 + 0x49d6a0) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar3;
  *(int *)((int)this + 4*(7)) = iVar3;
  *(int *)((int)this + 4*(8)) = iVar3;
  *(int *)((int)this + 4*(10)) = iVar3;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  func_0079e2dc(((int)this) + 10,iVar1 + 0x49d6a4);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"MainMenuItemData"),&piStack_20);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

bool MainMenuItemData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void MainMenuItemData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x14,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x1c,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x20,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x24) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 0x28,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  *(int *)p2 = *(int *)p2 + 1;
  return;
}
