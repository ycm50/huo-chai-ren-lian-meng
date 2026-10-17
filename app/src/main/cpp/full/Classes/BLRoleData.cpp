#include "BLRoleData.h"
#include "BLAnimateData.h"
#include "BLLeakUtils.h"
#include "DataCacheManager.h"
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
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0045619c;
extern "C" unsigned long _DAT_004561a0;
extern "C" unsigned long _DAT_004561a4;
extern "C" unsigned long _DAT_004561a8;
extern "C" unsigned long _DAT_004561ac;
extern "C" unsigned long _DAT_004561b0;
extern "C" unsigned long _DAT_004561b4;
extern "C" unsigned long _DAT_004561b8;
extern "C" unsigned long _DAT_004561bc;
extern "C" unsigned long _DAT_004561c0;
extern "C" unsigned long _DAT_004561c4;
extern "C" unsigned long _DAT_004561c8;
extern "C" unsigned long _DAT_004561cc;
extern "C" unsigned long _DAT_00456254;
extern "C" unsigned long _DAT_00456258;
extern "C" unsigned long _DAT_004562f0;
extern "C" unsigned long _DAT_004562f4;
extern "C" unsigned long _DAT_004562f8;
extern "C" unsigned long g_0045619c;
extern "C" unsigned long g_004561a0;
extern "C" unsigned long g_004561a4;
extern "C" unsigned long g_004561a8;
extern "C" unsigned long g_004561ac;
extern "C" unsigned long g_004561b0;
extern "C" unsigned long g_004561b4;
extern "C" unsigned long g_004561b8;
extern "C" unsigned long g_004561bc;
extern "C" unsigned long g_004561c0;
extern "C" unsigned long g_004561c4;
extern "C" unsigned long g_004561c8;
extern "C" unsigned long g_004561cc;
extern "C" unsigned long g_00456254;
extern "C" unsigned long g_00456258;
extern "C" unsigned long g_004562f0;
extern "C" unsigned long g_004562f4;
extern "C" unsigned long g_004562f8;

bool BLRoleData::init()
{
  return 1;
}

BLRoleData::~BLRoleData()
{
  undefined4 uVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,((intptr_t)"BLRoleData"),auStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(((int)this) + 9);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 6)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLRoleData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x28)));
  0 /* ctorZero */;
  iVar2 = ((BLRoleData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLRoleData::initWithID(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLRoleData::BLRoleData()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = *(int *)(g_004562f4 + 0x456290) + 0xc;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(5)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLRoleData"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}
