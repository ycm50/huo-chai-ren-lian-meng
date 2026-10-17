#include "ReChargeData.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "ReChargeItemData.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004a3730;
extern "C" unsigned long _DAT_004a3734;
extern "C" unsigned long _DAT_004a38a0;
extern "C" unsigned long _DAT_004a38a4;
extern "C" unsigned long _DAT_004a3984;
extern "C" unsigned long _DAT_004a3988;
extern "C" unsigned long _DAT_004a398c;
extern "C" unsigned long g_004a3730;
extern "C" unsigned long g_004a3734;
extern "C" unsigned long g_004a38a0;
extern "C" unsigned long g_004a38a4;
extern "C" unsigned long g_004a3984;
extern "C" unsigned long g_004a3988;
extern "C" unsigned long g_004a398c;
int * ReChargeData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  iVar2 = ((ReChargeData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

cocos2d::CCArray* ReChargeData::getArrayReChargeData() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x14));
}

void ReChargeData::setArrayReChargeData(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

ReChargeData::~ReChargeData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"ReChargeData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
ReChargeData::ReChargeData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"ReChargeData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(5)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  return;
}

bool ReChargeData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
