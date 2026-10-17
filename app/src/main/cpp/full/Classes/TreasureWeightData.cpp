#include "TreasureWeightData.h"
#include "DataManager.h"
#include "TreasureWeightItemData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" unsigned long _DAT_004bb8f4;
extern "C" unsigned long _DAT_004bb8f8;
extern "C" unsigned long g_004bb8f4;
extern "C" unsigned long g_004bb8f8;
TreasureWeightData::~TreasureWeightData()
{
  *(int *)((int)this + 4*(1)) = *(int *)this;
  *(int *)((int)this + 4*(5)) = *(int *)((int)this + 4*(4));
  if (*(int *)((int)this + 4*(4)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(4)))));
  }
  if (*(int *)this != 0) {
    (void)(::operator delete((void *)(*(int *)this)));
  }
  return;
}

void TreasureWeightData::getDatas()
{
  return;
}

undefined4 TreasureWeightData::getBuildWeightCount()
{
  int *piVar1;
  
  if (*(int *)((int)this + 4*(3)) == 0) {
    for (piVar1 = (int *)*(int *)this; piVar1 != (int *)*(int *)((int)this + 4*(1)); piVar1 = piVar1 + 1) {
      *(int *)((int)this + 4*(3)) = *(int *)((int)this + 4*(3)) + *(int *)(*piVar1 + 0x10);
    }
  }
  return *(int *)((int)this + 4*(3));
}

int TreasureWeightData::getTypeByFixedPos(int p1)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar4 = (int *)*(int *)this;
  do {
    if (piVar4 == (int *)*(int *)((int)this + 4*(1))) {
      return -1;
    }
    piVar1 = *(int **)(*piVar4 + 0x20);
    piVar3 = *(int **)(*piVar4 + 0x1c);
    if ((int)piVar1 - (int)piVar3 >> 2 != 0) {
      do {
        if (piVar1 == piVar3) goto LAB_004bae50;
        iVar2 = (int)*(int *)&(*piVar3);
        piVar3 = piVar3 + 1;
      } while (iVar2 != p1);
      iVar2 = 0 /* ctorZero */;
      if (iVar2 != -1) {
        return iVar2;
      }
    }
LAB_004bae50:
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while( true );
}

void TreasureWeightData::deleteData()
{
  *(int *)((int)this + 4*(1)) = *(int *)this;
  *(int *)((int)this + 4*(5)) = *(int *)((int)this + 4*(4));
  *(int *)((int)this + 4*(3)) = 0;
  return;
}








TreasureWeightData::TreasureWeightData()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  TreasureWeightData::init();
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
undefined4 TreasureWeightData::getItemData(TreasureType p1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0);
  if (-2 < (int)p1) {
    if (p1 < (uint)(*(int *)((int)this + 4*(1)) - *(int *)this >> 2)) {
      puVar1 = (undefined4 *)((std::vector<TreasureWeightItemData*, std::allocator<TreasureWeightItemData*>> *)this)->at((unsigned int)0);
      uVar2 = (undefined4)(*puVar1);
    }
    else {
      uVar2 = (undefined4)(0);
    }
  }
  return uVar2;
}

undefined4 TreasureWeightData::getTriggerWeightByType(TreasureType p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0);
  if (-2 < (int)p1) {
    if (p1 < (uint)(*(int *)((int)this + 4*(1)) - *(int *)this >> 2)) {
      piVar1 = (int *)((std::vector<TreasureWeightItemData*, std::allocator<TreasureWeightItemData*>> *)this)->at((unsigned int)0);
      uVar2 = (undefined4)(*(undefined4 *)(*piVar1 + 0x14));
    }
    else {
      uVar2 = (undefined4)(0);
    }
  }
  return uVar2;
}

undefined4 TreasureWeightData::getNumLimitByType(TreasureType p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0);
  if (-2 < (int)p1) {
    if (p1 < (uint)(*(int *)((int)this + 4*(1)) - *(int *)this >> 2)) {
      piVar1 = (int *)((std::vector<TreasureWeightItemData*, std::allocator<TreasureWeightItemData*>> *)this)->at((unsigned int)0);
      uVar2 = (undefined4)(*(undefined4 *)(*piVar1 + 0x18));
    }
    else {
      uVar2 = (undefined4)(0);
    }
  }
  return uVar2;
}

void TreasureWeightData::getTriggerDisposableByType(TreasureType p1)
{
  int *piVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (-2 < (int)p1) {
    if (p1 < (uint)(*(int *)((int)this + 4*(1)) - *(int *)this >> 2)) {
      piVar1 = (int *)((std::vector<TreasureWeightItemData*, std::allocator<TreasureWeightItemData*>> *)this)->at((unsigned int)0);
      uVar2 = (undefined4)(intptr_t)(*(undefined1 *)(*piVar1 + 0xc));
    }
    else {
      uVar2 = 0;
    }
  }
  return;
}

void TreasureWeightData::getTriggerSkippableByType(TreasureType p1)
{
  int *piVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (-2 < (int)p1) {
    if (p1 < (uint)(*(int *)((int)this + 4*(1)) - *(int *)this >> 2)) {
      piVar1 = (int *)((std::vector<TreasureWeightItemData*, std::allocator<TreasureWeightItemData*>> *)this)->at((unsigned int)0);
      uVar2 = (undefined4)(intptr_t)(*(undefined1 *)(*piVar1 + 0xd));
    }
    else {
      uVar2 = 0;
    }
  }
  return;
}

int * TreasureWeightData::getFixedPosByType(TreasureType p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

bool TreasureWeightData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
