#include "PetSkillItemData.h"
#include "PetBuffItemData.h"
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
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004a0134;
extern "C" unsigned long _DAT_004a0138;
extern "C" unsigned long g_004a0134;
extern "C" unsigned long g_004a0138;
PetSkillItemData::PetSkillItemData()
{
  int iVar1;
  undefined1 auStack_1c [8];
  
  iVar1 = g_004a0134;
  *(int *)this = 0;
  func_0079e45c(((int)this) + 1,iVar1 + 0x4a00f8,auStack_1c);
  func_0079e45c(((int)this) + 2,iVar1 + 0x4a00f8,auStack_1c);
  iVar1 = g_004a0138;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  iVar1 = *(int *)(iVar1 + 0x4a011a);
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = iVar1 + 0xc;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

PetSkillItemData::~PetSkillItemData()
{
  int iVar1;
  
  iVar1 = *(int *)(((int)this) + 0x20);
  if (iVar1 != 0) {
    ((PetBuffItemData *)iVar1)->~PetBuffItemData();
    (void)(::operator delete((void *)(iVar1)));
  }
  *(undefined4 *)(((int)this) + 0x20) = 0;
  func_0079e2bc(((int)this) + 0x1c);
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 4);
  return;
}


bool PetSkillItemData::checkUpgraceAble(int p1)
{
  return p1 < *(int *)(((int)this) + 0x10);
}

int PetSkillItemData::getUpgraceCost(int p1)
{
  return (p1 + -1) * *(int *)(((int)this) + 0x18) + *(int *)(((int)this) + 0x14);
}

int PetSkillItemData::getUpgraceCost(int p1, int p2)
{
  int iVar1;
  
  iVar1 = 0;
  while (p1 + 1 <= p2) {
    iVar1 = iVar1 + p1 * *(int *)(((int)this) + 0x18) + *(int *)(((int)this) + 0x14);
    p1 = p1 + 1;
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void PetSkillItemData::initWithData(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(int *)this = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 1,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 2,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(3)) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(4)) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(5)) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(6)) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this) + 7,*(undefined4 *)((iVar2 + 1) * 4 + p1));
  *(int *)p2 = *(int *)p2 + 1;
  uVar1 = (undefined4)(func_0079e2fc(0x34));
  0 /* ctorZero */;
  *(int *)((int)this + 4*(8)) = uVar1;
  return;
}
