#include "TreasureRewardData.h"
#include "DataManager.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e6c0(...);
extern "C" unsigned long _DAT_004bad24;
extern "C" unsigned long _DAT_004bad28;
extern "C" unsigned long _DAT_004bad8c;
extern "C" unsigned long g_004bad24;
extern "C" unsigned long g_004bad28;
extern "C" unsigned long g_004bad8c;
TreasureRewardData::~TreasureRewardData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}


TreasureRewardData::TreasureRewardData()
{
  undefined4 p4 = 0;

  int iVar1;
  
  iVar1 = ((int)this) + 4;
  func_0079e34c(iVar1,0,0x10,p4,p4);
  *(int *)(((int)this) + 0xc) = iVar1;
  *(undefined4 *)(((int)this) + 0x14) = 0;
  *(int *)(((int)this) + 0x10) = iVar1;
  TreasureRewardData::initData();
  return;
}

int TreasureRewardData::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_004bad8c + 0x4bad64);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(0x18)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void TreasureRewardData::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
