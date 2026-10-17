#include "TreasureMapItemChapter.h"
#include "CCString.h"
#include "TreasureDataManager.h"
#include "TreasureHeroData.h"
#include "TreasureMapDynamicData.h"
#include "TreasureMapItemBase.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004b7f30;
extern "C" unsigned long _DAT_004b7f34;
extern "C" unsigned long _DAT_004b7f38;
extern "C" unsigned long _DAT_004b8560;
extern "C" unsigned long _DAT_004b8828;
extern "C" unsigned long _DAT_004b8988;
extern "C" unsigned long _DAT_004b898c;
extern "C" unsigned long _DAT_004b8d84;
extern "C" unsigned long g_004b7f30;
extern "C" unsigned long g_004b7f34;
extern "C" unsigned long g_004b7f38;
extern "C" unsigned long g_004b8560;
extern "C" unsigned long g_004b8828;
extern "C" unsigned long g_004b8988;
extern "C" unsigned long g_004b898c;
extern "C" unsigned long g_004b8d84;
void TreasureMapItemChapter::onTrigger()
{
  *(int *)(((int)this) + 0x1c) = *(int *)(((int)this) + 0x1c) + 1;
  return;
}

void TreasureMapItemChapter::reset()
{
  *(undefined1 *)(((int)this) + 0x18) = 0;
  return;
}

undefined4 TreasureMapItemChapter::toString()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  undefined1 auStack_14 [8];
  
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"%d%s%d%s%d%s%s"), *(undefined4 *)(p2 + 4), g_004b7f38 + 0x4b7f1a, *(undefined1 *)(p2 + 0x18), g_004b7f30 + 0x4b7f04, *(undefined4 *)(p2 + 0x1c), g_004b7f30 + 0x4b7f04, *(undefined4 *)(p2 + 0x24));
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(((int)this),uVar1,auStack_14);
  return ((int)this);
}

void TreasureMapItemChapter::triggerEnd()
{
  *(undefined1 *)(((int)this) + 0x18) = 1;
  TreasureMapItemBase::triggerEnd();
  return;
}


TreasureMapItemChapter::~TreasureMapItemChapter()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 9);
  TreasureMapItemBase::~TreasureMapItemBase();
  return;
}

TreasureMapItemChapter::TreasureMapItemChapter()
{
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(9)) = *(int *)(g_004b898c + 0x4b8978) + 0xc;
  *(int *)((int)this + 4*(1)) = 1;
  *(undefined1 *)(((int)this) + 8) = 0;
  return;
}

undefined4 TreasureMapItemChapter::getHeroName()
{
  int iVar1;
  
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  func_0079e53c(((int)this),*(int *)(iVar1 + 0x70) + 0x3c);
  return ((int)this);
}

void TreasureMapItemChapter::passWithPay()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined1 *)(((int)this) + 6) = 1;
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x68));
  iVar1 = *(int *)((int)this + 4*(5));
  (**(code **)(*(int *)this + 8))(&uStack_1c,((int)this));
  ((TreasureMapDynamicData *)uVar2)->updateMapData(iVar1, (std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

undefined8 TreasureMapItemChapter::win()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined1 *)(((int)this) + 6) = 1;
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x68));
  iVar1 = *(int *)((int)this + 4*(5));
  (**(code **)(*(int *)this + 8))(&uStack_1c,((int)this));
  ((TreasureMapDynamicData *)uVar2)->updateMapData(iVar1, (std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return ghidra_CONCAT44(uStack_1c,((int)this));
}

undefined8 TreasureMapItemChapter::lose()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *(undefined1 *)(((int)this) + 6) = 0;
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x68));
  iVar1 = *(int *)((int)this + 4*(5));
  (**(code **)(*(int *)this + 8))(&uStack_1c,((int)this));
  ((TreasureMapDynamicData *)uVar2)->updateMapData(iVar1, (std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return ghidra_CONCAT44(uStack_1c,((int)this));
}

// ===== 修复: 补回被误删的函数占位 (2) =====
undefined8 TreasureMapItemChapter::beforeTrigger()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p2);
  iVar1 = (undefined4)(intptr_t)(((TreasureDataManager *)this)->getInstance());
  ((TreasureHeroData *)this)->randomFight();
  0 /* ctorZero */;
  func_0079e2bc(&uStack_c);
  return ghidra_CONCAT44(uStack_c,((int)this));
}

void TreasureMapItemChapter::initWithData(std::string p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
