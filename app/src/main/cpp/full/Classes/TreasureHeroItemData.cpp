#include "TreasureHeroItemData.h"
#include "BLRoleAttribute.h"
#include "DBUtil.h"
#include "DataManager.h"
#include "Toast.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e874(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004b2920;
extern "C" unsigned long _DAT_004b2924;
extern "C" unsigned long _DAT_004b2a88;
extern "C" unsigned long _DAT_004b2bdc;
extern "C" unsigned long _DAT_004b2be0;
extern "C" unsigned long _DAT_004b2be4;
extern "C" unsigned long _DAT_004b2be8;
extern "C" unsigned long _DAT_004b2bec;
extern "C" unsigned long _DAT_004b2d24;
extern "C" unsigned long _DAT_004b2d28;
extern "C" unsigned long _DAT_004b2d2c;
extern "C" unsigned long _DAT_004b2d30;
extern "C" unsigned long _DAT_004b2d34;
extern "C" unsigned long g_004b2920;
extern "C" unsigned long g_004b2924;
extern "C" unsigned long g_004b2a88;
extern "C" unsigned long g_004b2bdc;
extern "C" unsigned long g_004b2be0;
extern "C" unsigned long g_004b2be4;
extern "C" unsigned long g_004b2be8;
extern "C" unsigned long g_004b2bec;
extern "C" unsigned long g_004b2d24;
extern "C" unsigned long g_004b2d28;
extern "C" unsigned long g_004b2d2c;
extern "C" unsigned long g_004b2d30;
extern "C" unsigned long g_004b2d34;
TreasureHeroItemData::TreasureHeroItemData()
{
  int iVar1;
  
  iVar1 = g_004b2924 + 0x4b28f6;
  *(int *)this = *(int *)(g_004b2920 + 0x4b28f2) + 0xc;
  func_0079e2dc(((int)this),iVar1);
  *(undefined1 *)(((int)this) + 1) = 0;
  *(undefined1 *)((int)((int)this) + 5) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(6)) = 1;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  return;
}

TreasureHeroItemData::~TreasureHeroItemData()
{
  func_0079e2bc();
  return;
}



void TreasureHeroItemData::saveData()
{
  return;
}


void TreasureHeroItemData::die()
{
  *(undefined1 *)(((int)this) + 4) = 1;
  TreasureHeroItemData::updateDie();
  return;
}

void TreasureHeroItemData::relive()
{
  *(undefined1 *)(((int)this) + 4) = 0;
  TreasureHeroItemData::updateDie();
  return;
}


void TreasureHeroItemData::dropInPrison()
{
  *(undefined1 *)(((int)this) + 5) = 1;
  TreasureHeroItemData::updateInPrison();
  return;
}

void TreasureHeroItemData::outOfPrison()
{
  *(undefined1 *)(((int)this) + 5) = 0;
  TreasureHeroItemData::updateInPrison();
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void TreasureHeroItemData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e2dc(((int)this),*(undefined4 *)((iVar2 + 1) * 4 + p1));
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(char *)(((int)this) + 4) = '\x01' - (iVar2 == 0);
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  iVar2 = (undefined4)(intptr_t)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(char *)(((int)this) + 5) = '\x01' - (iVar2 == 0);
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 8) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0xc) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x10) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x14) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x18) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(undefined4 *)(((int)this) + 0x1c) = uVar1;
  *(int *)p2 = *(int *)p2 + 1;
  return;
}

void TreasureHeroItemData::initWithID(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureHeroItemData::updateDie()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureHeroItemData::updateInPrison()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
