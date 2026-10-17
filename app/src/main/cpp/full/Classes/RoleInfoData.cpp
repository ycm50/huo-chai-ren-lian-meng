#include "RoleInfoData.h"
#include "CCArray.h"
#include "BLLeakUtils.h"
#include "DataManager.h"
#include "RoleInfoItemData.h"
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
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004a8154;
extern "C" unsigned long _DAT_004a8158;
extern "C" unsigned long _DAT_004a839c;
extern "C" unsigned long _DAT_004a83a0;
extern "C" unsigned long _DAT_004a8488;
extern "C" unsigned long _DAT_004a848c;
extern "C" unsigned long _DAT_004a8490;
extern "C" unsigned long _DAT_004a8514;
extern "C" unsigned long _DAT_004a8518;
extern "C" unsigned long g_004a8154;
extern "C" unsigned long g_004a8158;
extern "C" unsigned long g_004a839c;
extern "C" unsigned long g_004a83a0;
extern "C" unsigned long g_004a8488;
extern "C" unsigned long g_004a848c;
extern "C" unsigned long g_004a8490;
extern "C" unsigned long g_004a8514;
extern "C" unsigned long g_004a8518;
int * RoleInfoData::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  iVar2 = ((RoleInfoData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

cocos2d::CCArray* RoleInfoData::getArrayItemsData() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x14));
}

void RoleInfoData::setArrayItemsData(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

RoleInfoData::~RoleInfoData()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"RoleInfoData"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
RoleInfoData::RoleInfoData()
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
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(5)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"RoleInfoData"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool RoleInfoData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int * RoleInfoData::getRoleInfoItemData(std::string * p1)
{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  int aiStack_1c [2];
  
  uVar4 = (undefined4)(0);
  do {
    uVar1 = (undefined4)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x14))->count());
    if (uVar1 <= uVar4) {
      return (int *)0x0;
    }
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)*(undefined4 *)(((int)this) + 0x14))->objectAtIndex((unsigned int)uVar4));
    if ((iVar2 != 0) &&
       (piVar3 = (int *)func_0079e55c(iVar2,*(undefined4 *)(g_004a8514 + 0x4a84be),
                                        *(undefined4 *)(g_004a8518 + 0x4a84c0),0),
       piVar3 != (int *)0x0)) {
      (**(code **)(*(int *)(piVar3) + (0x18)))(aiStack_1c,piVar3);
      bVar5 = (undefined4)(intptr_t)(false);
      if (*(int *)(aiStack_1c[0] + -0xc) == *(int *)(*(int *)p1 + -0xc)) {
        iVar2 = (undefined4)(intptr_t)(func_0079e60c());
        bVar5 = (undefined4)(intptr_t)(iVar2 == 0);
      }
      func_0079e2bc(aiStack_1c);
      if (bVar5) {
        return (int *)(piVar3);
      }
    }
    uVar4 = (undefined4)(uVar4 + 1);
  } while( true );
}
