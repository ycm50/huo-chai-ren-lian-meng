#include "MirrorShopData.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00494b90;
extern "C" unsigned long _DAT_00494b94;
extern "C" unsigned long _DAT_00494c0c;
extern "C" unsigned long _DAT_00494c10;
extern "C" unsigned long _DAT_00494dbc;
extern "C" unsigned long _DAT_00494dc0;
extern "C" unsigned long _DAT_00494dc4;
extern "C" unsigned long _DAT_00494e68;
extern "C" unsigned long _DAT_00494e6c;
extern "C" unsigned long _DAT_00494e70;
extern "C" unsigned long g_00494b90;
extern "C" unsigned long g_00494b94;
extern "C" unsigned long g_00494c0c;
extern "C" unsigned long g_00494c10;
extern "C" unsigned long g_00494dbc;
extern "C" unsigned long g_00494dc0;
extern "C" unsigned long g_00494dc4;
extern "C" unsigned long g_00494e68;
extern "C" unsigned long g_00494e6c;
extern "C" unsigned long g_00494e70;
MirrorShopData::~MirrorShopData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"MirrorShopData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  for (piVar2 = (int *)*(int *)((int)this + 4*(5)); piVar2 != (int *)*(int *)((int)this + 4*(6)); piVar2 = piVar2 + 1) {
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 8))();
    }
    *piVar2 = 0;
  }
  *(int *)((int)this + 4*(6)) = *(int *)((int)this + 4*(5));
  if (*(int *)((int)this + 4*(5)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(5)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

MirrorShopData::MirrorShopData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"MirrorShopData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(6)) = *(int *)((int)this + 4*(5));
  return;
}

int MirrorShopData::getItemDatas()
{
  return ((int)this) + 0x14;
}



bool MirrorShopData::init()
{
  MirrorShopData::initWith();
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void MirrorShopData::initWith()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
