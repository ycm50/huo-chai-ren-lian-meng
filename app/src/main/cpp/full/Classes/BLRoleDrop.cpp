#include "BLRoleDrop.h"
#include "BLDropData.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "ItemData.h"
#include "UserData.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e63c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e8a4(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00453950;
extern "C" unsigned long _DAT_00453954;
extern "C" unsigned long _DAT_00453998;
extern "C" unsigned long _DAT_0045399c;
extern "C" unsigned long _DAT_00453a90;
extern "C" unsigned long _DAT_00453a94;
extern "C" unsigned long _DAT_00453a98;
extern "C" unsigned long _DAT_00453a9c;
extern "C" unsigned long _DAT_00453aa0;
extern "C" unsigned long _DAT_00453b24;
extern "C" unsigned long _DAT_00453b28;
extern "C" unsigned long _DAT_00453bcc;
extern "C" unsigned long _DAT_00453bd0;
extern "C" unsigned long _DAT_00453bd4;
extern "C" unsigned long _DAT_00453c94;
extern "C" unsigned long _DAT_00453c98;
extern "C" unsigned long _DAT_00453c9c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00453950;
extern "C" unsigned long g_00453954;
extern "C" unsigned long g_00453998;
extern "C" unsigned long g_0045399c;
extern "C" unsigned long g_00453a90;
extern "C" unsigned long g_00453a94;
extern "C" unsigned long g_00453a98;
extern "C" unsigned long g_00453a9c;
extern "C" unsigned long g_00453aa0;
extern "C" unsigned long g_00453b24;
extern "C" unsigned long g_00453b28;
extern "C" unsigned long g_00453bcc;
extern "C" unsigned long g_00453bd0;
extern "C" unsigned long g_00453bd4;
extern "C" unsigned long g_00453c94;
extern "C" unsigned long g_00453c98;
extern "C" unsigned long g_00453c9c;
int BLRoleDrop::getEnemyType() const
{
  return *(undefined4 *)(((int)this) + 4);
}

void BLRoleDrop::setEnemyType(int p1)
{
  *(undefined4 *)(((int)this) + 4) = p1;
  return;
}

BLDropData* BLRoleDrop::getDropData() const
{
  return (BLDropData*)(*(undefined4 *)(((int)this) + 8));
}

void BLRoleDrop::setDropData(BLDropData* p1)
{
  *(undefined4 *)(((int)this) + 8) = (undefined4)(intptr_t)p1;
  return;
}

void BLRoleDrop::dropItem(ItemData* p1)
{
  return;
}

BLRoleDrop::BLRoleDrop()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(1)) = 0;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRoleDrop"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

BLRoleDrop::~BLRoleDrop()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRoleDrop"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}




void BLRoleDrop::drop(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 4) = p1;
  piVar1 = (int *)((BLMission *)this)->currentMission();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
  iVar3 = *(int *)(((int)this) + 4);
  if (iVar3 == 2) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0xb0))();
    puVar4 = (undefined4 *)(*piVar1 + 0xb8);
  }
  else if (iVar3 == 3) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0xb0))();
    puVar4 = (undefined4 *)(*piVar1 + 0xc0);
  }
  else {
    if (iVar3 != 1) goto LAB_00453c32;
    piVar1 = (int *)(**(code **)(*piVar1 + 0xb0))();
    puVar4 = (undefined4 *)(*piVar1 + 0xb0);
  }
  uVar2 = (undefined4)((*(code *)*puVar4)());
  *(undefined4 *)(((int)this) + 8) = uVar2;
LAB_00453c32:
  BLRoleDrop::dropCoin();
  lVar6 = 0 /* ctorZero */;
  cocos2d::CCLog((char const*)"==============掉落时间1=====:%lld", (int)((ulonglong)lVar6 >> 0x20),(int)(lVar6 - lVar5),
             (int)((ulonglong)(lVar6 - lVar5) >> 0x20));
  lVar5 = 0 /* ctorZero */;
  BLRoleDrop::dropExp();
  lVar6 = 0 /* ctorZero */;
  cocos2d::CCLog((char const*)"==============掉落时间2=====:%lld", (int)((ulonglong)lVar6 >> 0x20),(int)(lVar6 - lVar5),
             (int)((ulonglong)(lVar6 - lVar5) >> 0x20));
  lVar5 = 0 /* ctorZero */;
  BLRoleDrop::dropItems();
  lVar6 = 0 /* ctorZero */;
  cocos2d::CCLog((char const*)"==============掉落时间3=====:%lld", (int)((ulonglong)lVar6 >> 0x20),(int)(lVar6 - lVar5),
             (int)((ulonglong)(lVar6 - lVar5) >> 0x20));
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLRoleDrop::dropCoin()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int extraout_r1;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar7 = (undefined4)(intptr_t)(g_00453a98 + 0x4539ac);
  if (*(int *)((int)this + 4*(2)) != 0) {
    uVar1 = (undefined4)(((long long)::arc4random()));
    uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(2)) + 0x28))());
    uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(2)) + 0x28))());
    uVar8 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar2)))));
    (void)(((long long)((unsigned)(uVar1) / (unsigned)(10))));
    uVar9 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(extraout_r1 + -5)))));
    uVar9 = (undefined4)(intptr_t)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x / _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)(g_00453a90))|(((long long)(unsigned)(g_00453a94))<<32))))));
    uVar10 = (undefined4)(intptr_t)(((long long)([](int _a){double _d=(double)(int)_a;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(uVar3)))));
    uVar9 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32)),(((long long)(unsigned)((int)uVar10))|(((long long)(unsigned)((int)((ulonglong)uVar10 >> 0x20)))<<32)))));
    (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar8))|(((long long)(unsigned)((int)((ulonglong)uVar8 >> 0x20)))<<32)),(((long long)(unsigned)((int)uVar9))|(((long long)(unsigned)((int)((ulonglong)uVar9 >> 0x20)))<<32))))));
    uVar1 = (undefined4)(func_0079e8c4());
    piVar4 = (int *)((DataCacheManager *)this)->shareManager();
    uVar2 = (undefined4)((**(code **)(*piVar4 + 0x60))());
    iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(1));
    piVar4 = (int *)0x0;
    if (iVar5 != 0) {
      piVar4 = (int *)func_0079e55c(iVar5,*(undefined4 *)(iVar7 + g_00453a9c),
                                      *(undefined4 *)(iVar7 + g_00453aa0),0);
    }
    piVar6 = (int *)((DataCacheManager *)this)->shareManager();
    uVar2 = (undefined4)((**(code **)(*piVar6 + 0x60))());
    iVar5 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(1));
    uVar2 = (undefined4)(0);
    if (iVar5 != 0) {
      uVar2 = func_0079e55c(iVar5,*(undefined4 *)(iVar7 + g_00453a9c),
                              *(undefined4 *)(iVar7 + g_00453aa0),0);
    }
    ((ItemData *)piVar4)->initWith((ItemData*)uVar2);
    (**(code **)(*piVar4 + 0x9c))(piVar4,uVar1);
    (**(code **)(*(int *)this + 8))(((int)this),piVar4);
  }
  return;
}

void BLRoleDrop::dropExp()
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  
  if (*(int *)((int)this + 4*(2)) != 0) {
    piVar1 = (int *)((ItemData *)this)->create();
    piVar2 = (int *)((DataCacheManager *)this)->shareManager();
    uVar3 = (undefined4)((**(code **)(*piVar2 + 0x60))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey(3));
    uVar3 = (undefined4)(0);
    if (iVar4 != 0) {
      uVar3 = func_0079e55c(iVar4,*(undefined4 *)(g_00453b24 + 0x453ad6),
                              *(undefined4 *)(g_00453b28 + 0x453ad8),0);
    }
    ((ItemData *)piVar1)->initWith((ItemData*)uVar3);
    pcVar5 = *(code **)(*piVar1 + 0x9c);
    uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(2)) + 0x20))());
    (*pcVar5)(piVar1,uVar3);
    (**(code **)(*(int *)this + 8))(((int)this),piVar1);
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    iVar4 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x28))());
    if (iVar4 != 0) {
      uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(2)) + 0x20))());
      ((UserData *)iVar4)->addExp(uVar3);
    }
  }
  return;
}

void BLRoleDrop::dropItems()
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r3;
  uint uVar5;
  int iStack_24;
  int iStack_20;
  
  ((BLDropData *)this)->randomItems();
  uVar5 = (undefined4)(0);
  while( true ) {
    if ((uint)(iStack_20 - iStack_24 >> 2) <= uVar5) break;
    piVar1 = (int *)((ItemData *)this)->create();
    piVar2 = (int *)((DataCacheManager *)this)->shareManager();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x60)))());
    iVar4 = (undefined4)(intptr_t)(iStack_24);
    if ((uint)(iStack_20 - iStack_24 >> 2) <= uVar5) {
      uVar3 = (undefined4)(func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),uVar5));
      iVar4 = (undefined4)(intptr_t)(extraout_r3);
    }
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar3)->objectForKey(*(undefined4 *)(uVar5 * 4 + iVar4)));
    uVar3 = (undefined4)(0);
    if (iVar4 != 0) {
      uVar3 = func_0079e55c(iVar4,*(undefined4 *)(g_00453bd0 + 0x453b86),
                              *(undefined4 *)(g_00453bd4 + 0x453b88),0);
    }
    ((ItemData *)piVar1)->initWith((ItemData*)uVar3);
    (**(code **)(*(int *)(piVar1) + (0x9c)))(piVar1,1);
    (**(code **)(*(int *)this + 8))(((int)this),piVar1);
    uVar5 = (undefined4)(uVar5 + 1);
  }
  if (iStack_24 != 0) {
    func_0079e2cc();
  }
  return;
}
