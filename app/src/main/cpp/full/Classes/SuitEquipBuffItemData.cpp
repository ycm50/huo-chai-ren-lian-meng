#include "SuitEquipBuffItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e824(...);
extern "C" unsigned long _DAT_004aa45c;
extern "C" unsigned long _DAT_004aa460;
extern "C" unsigned long g_004aa45c;
extern "C" unsigned long g_004aa460;
SuitEquipBuffItemData::SuitEquipBuffItemData()
{
  int iVar1;
  
  *(int *)((int)this + 4*(1)) = *(int *)(g_004aa45c + 0x4aa430) + 0xc;
  iVar1 = g_004aa460;
  *(int *)this = 0;
  func_0079e2dc(((int)this) + 1,iVar1 + 0x4aa442);
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  return;
}

SuitEquipBuffItemData::~SuitEquipBuffItemData()
{
  func_0079e2bc(((int)this) + 4);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void SuitEquipBuffItemData::initWithData(char** p1, int& p2)
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
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(2)) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e824(*(undefined4 *)((iVar2 + 1) * 4 + p1),0);
  uVar1 = (undefined4)(func_0079e7e4());
  *(int *)((int)this + 4*(3)) = uVar1;
  *(int *)p2 = *(int *)p2 + 1;
  return;
}
