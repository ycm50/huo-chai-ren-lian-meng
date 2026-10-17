#include "EquipData.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
#include "ItemData.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00488060;
extern "C" unsigned long _DAT_00488064;
extern "C" unsigned long _DAT_004882b4;
extern "C" unsigned long _DAT_004882b8;
extern "C" unsigned long _DAT_00488338;
extern "C" unsigned long _DAT_0048833c;
extern "C" unsigned long _DAT_00488340;
extern "C" unsigned long _DAT_00488344;
extern "C" unsigned long g_00488060;
extern "C" unsigned long g_00488064;
extern "C" unsigned long g_004882b4;
extern "C" unsigned long g_004882b8;
extern "C" unsigned long g_00488338;
extern "C" unsigned long g_0048833c;
extern "C" unsigned long g_00488340;
extern "C" unsigned long g_00488344;
int * EquipData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x84)));
  0 /* ctorZero */;
  iVar2 = ((EquipData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

int EquipData::getEquipLV() const
{
  return *(undefined4 *)(((int)this) + 0x7c);
}

void EquipData::setEquipLV(int p1)
{
  *(undefined4 *)(((int)this) + 0x7c) = p1;
  return;
}

EquipBaseData* EquipData::getEquipBaseData() const
{
  return (EquipBaseData*)(*(undefined4 *)(((int)this) + 0x80));
}

void EquipData::setEquipBaseData(EquipBaseData* p1)
{
  *(undefined4 *)(((int)this) + 0x80) = (undefined4)(intptr_t)p1;
  return;
}

EquipData::~EquipData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"EquipData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ItemData::~ItemData();
  return;
}

EquipData::EquipData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"EquipData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(0x20)) = 0;
  *(int *)((int)this + 4*(0x1f)) = 0;
  return;
}

bool EquipData::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined8 EquipData::initWithID(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  iVar4 = (undefined4)(intptr_t)(g_00488338);
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  iVar4 = (undefined4)(intptr_t)(iVar4 + 0x4882d8);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(p1));
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  if (iVar3 != 0) {
    uStack_18 = (undefined4)(*(int **)(iVar4 + g_0048833c));
    uStack_14 = (undefined4)(*(undefined4 *)(iVar4 + g_00488340));
    iVar3 = (undefined4)(intptr_t)(func_0079e55c(iVar3,uStack_18,uStack_14,0));
    if (iVar3 != 0) {
      ItemData::initWith((ItemData*)((int)this));
    }
  }
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x68))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(p1));
  if (iVar3 != 0) {
    uStack_18 = (undefined4)(*(int **)(iVar4 + g_0048833c));
    uStack_14 = (undefined4)(*(undefined4 *)(iVar4 + g_00488344));
    iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar3,uStack_18,uStack_14,0));
    if (iVar4 != 0) {
      (**(code **)(*(int *)this + 0xc4))(((int)this));
    }
  }
  return ghidra_CONCAT44(uStack_14,uStack_18);
}
