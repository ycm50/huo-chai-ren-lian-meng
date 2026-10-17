#include "ImmortalsRoleItemData.h"
#include "DataCacheManager.h"
#include "ImmortalsAttr.h"
#include "ImmortalsInfoData.h"
#include "ImmortalsInfoItemData.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00482434;
extern "C" unsigned long _DAT_00482438;
extern "C" unsigned long _DAT_004825c0;
extern "C" unsigned long _DAT_004825c4;
extern "C" unsigned long _DAT_004825c8;
extern "C" unsigned long _DAT_004825cc;
extern "C" unsigned long _DAT_004825d0;
extern "C" unsigned long _DAT_004825d4;
extern "C" unsigned long _DAT_004825d8;
extern "C" unsigned long _DAT_004825dc;
extern "C" unsigned long _DAT_00482660;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long g_00482434;
extern "C" unsigned long g_00482438;
extern "C" unsigned long g_004825c0;
extern "C" unsigned long g_004825c4;
extern "C" unsigned long g_004825c8;
extern "C" unsigned long g_004825cc;
extern "C" unsigned long g_004825d0;
extern "C" unsigned long g_004825d4;
extern "C" unsigned long g_004825d8;
extern "C" unsigned long g_004825dc;
extern "C" unsigned long g_00482660;
ImmortalsRoleItemData::~ImmortalsRoleItemData()
{
  int *piVar1;
  
  piVar1 = *(int **)(((int)this) + 0x18);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = *piVar1;
    if (*piVar1 != 0) {
      (void)(::operator delete((void *)(*piVar1)));
    }
    (void)(::operator delete((void *)(piVar1)));
  }
  piVar1 = *(int **)(((int)this) + 0x20);
  *(undefined4 *)(((int)this) + 0x18) = 0;
  if (piVar1 != (int *)0x0) {
    piVar1[1] = *piVar1;
    if (*piVar1 != 0) {
      (void)(::operator delete((void *)(*piVar1)));
    }
    (void)(::operator delete((void *)(piVar1)));
  }
  piVar1 = *(int **)(((int)this) + 0x28);
  *(undefined4 *)(((int)this) + 0x20) = 0;
  if (piVar1 != (int *)0x0) {
    piVar1[1] = *piVar1;
    if (*piVar1 != 0) {
      (void)(::operator delete((void *)(*piVar1)));
    }
    (void)(::operator delete((void *)(piVar1)));
  }
  *(undefined4 *)(((int)this) + 0x28) = 0;
  func_0079e2bc(((int)this) + 8);
  return;
}

void ImmortalsRoleItemData::updateRefineAttrLimit()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xf0))());
  uVar2 = (undefined4)(((ImmortalsInfoData *)uVar2)->getItemData(*(undefined4 *)(((int)this) + 4)));
  uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x24));
  uVar2 = (undefined4)(((ImmortalsInfoItemData *)uVar2)->getRefineLimit(*(undefined4 *)(((int)this) + 0x10)));
  ((ImmortalsAttr *)uVar3)->initWithData((ImmortalsAttr*)uVar2);
  return;
}

undefined8 ImmortalsRoleItemData::updateBaseAttr()
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0xf0))());
  uVar2 = (undefined4)(((ImmortalsInfoData *)uVar2)->getItemData(*(undefined4 *)(((int)this) + 4)));
  uVar5 = (undefined4)(*(undefined4 *)(((int)this) + 0x20));
  uVar2 = (undefined4)(((ImmortalsInfoItemData *)uVar2)->getAttr(*(undefined4 *)(((int)this) + 0x10)));
  ((ImmortalsAttr *)uVar5)->initWithData((ImmortalsAttr*)uVar2);
  iVar4 = (*(int **)(((int)this) + 0x20))[1] - **(int **)(((int)this) + 0x20) >> 2;
  for (iVar6 = 0; iVar6 < iVar4; iVar6 = iVar6 + 1) {
    piVar1 = (int *)((std::vector<int, std::allocator<int>> *)*(undefined4 *)(((int)this) + 0x28))->at((unsigned int)iVar6);
    piVar3 = (int *)((std::vector<int, std::allocator<int>> *)*(undefined4 *)(((int)this) + 0x20))->at((unsigned int)iVar6);
    iVar7 = (int)*(int *)&(*piVar3);
    piVar3 = (int *)((std::vector<int, std::allocator<int>> *)*(undefined4 *)(((int)this) + 0x18))->at((unsigned int)iVar6);
    *piVar1 = iVar7 + *piVar3;
  }
  return ghidra_CONCAT44(iVar4,((int)this));
}

ImmortalsRoleItemData::ImmortalsRoleItemData()
{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)((int)this + 4*(2)) = *(int *)(g_00482434 + 0x4823b8) + 0xc;
  iVar1 = g_00482438;
  *(int *)this = 1;
  *(int *)((int)this + 4*(1)) = 0;
  func_0079e2dc(((int)this) + 2,iVar1 + 0x4823d0);
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  uVar2 = (undefined4)(((long long)::operator new((size_t)(0xc))));
  0 /* ctorZero */;
  *(int *)((int)this + 4*(6)) = uVar2;
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((long long)::operator new((size_t)(0xc))));
  0 /* ctorZero */;
  *(int *)((int)this + 4*(8)) = uVar2;
  uVar2 = (undefined4)(((long long)::operator new((size_t)(0xc))));
  0 /* ctorZero */;
  *(int *)((int)this + 4*(9)) = uVar2;
  uVar2 = (undefined4)(((long long)::operator new((size_t)(0xc))));
  0 /* ctorZero */;
  *(int *)((int)this + 4*(10)) = uVar2;
  return;
}


void ImmortalsRoleItemData::initRefineAttr(std::string p1)
{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  
  func_0079e53c(auStack_2c);
  func_0079e45c(auStack_28,g_00482660 + 0x4825f8,auStack_30);
  0 /* ctorZero */;
  func_0079e2bc(auStack_28);
  func_0079e2bc(auStack_2c);
  uVar2 = (undefined4)(0);
  do {
    uVar1 = (undefined4)(0);
    if (uVar2 < (uint)(iStack_20 - iStack_24 >> 2)) {
      uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)(uVar2 * 4 + iStack_24),iStack_24,0));
    }
    ((ImmortalsAttr *)*(undefined4 *)(((int)this) + 0x18))->setAttrByType(uVar2, uVar1);
    uVar2 = (undefined4)(uVar2 + 1);
  } while (uVar2 != 4);
  ((std::vector<std::string, std::allocator<std::string>> *)&iStack_24)->~vector();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void ImmortalsRoleItemData::initWithData(char** p1, int& p2)
{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r2;
  int iVar3;
  int extraout_r3;
  int extraout_r3_00;
  int iVar4;
  uint uVar5;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)(*(int *)p2 * 4 + p1)));
  *(int *)this = uVar1;
  iVar3 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar3 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar3 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(1)) = uVar1;
  iVar3 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar3 + 1;
  func_0079e2dc(((int)this) + 2,*(undefined4 *)((iVar3 + 1) * 4 + p1));
  iVar3 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar3 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar3 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(3)) = uVar1;
  iVar3 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar3 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar3 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(4)) = uVar1;
  iVar3 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar3 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar3 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(5)) = uVar1;
  iVar3 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar3 + 1;
  func_0079e45c(auStack_30,*(undefined4 *)((iVar3 + 1) * 4 + p1),&iStack_24);
  iVar3 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar3 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar3 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(7)) = uVar1;
  *(int *)p2 = *(int *)p2 + 1;
  func_0079e53c(auStack_2c,auStack_30);
  func_0079e45c(auStack_28,g_004825c0 + 0x4824e6,auStack_34);
  0 /* ctorZero */;
  func_0079e2bc(auStack_28);
  func_0079e2bc(auStack_2c);
  iVar3 = (undefined4)(intptr_t)(iStack_20 - iStack_24 >> 2);
  if (iVar3 != 4) {
    0 /* ctorZero */;
    func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),((intptr_t)"jni/../../Classes/data/immortals/ImmortalsRoleData.cpp"),
                    ((intptr_t)"initWithData"),0x49);
  }
  uVar5 = (undefined4)(0);
  do {
    if (iVar3 <= (int)uVar5) {
      if (0 < (int)*(int *)((int)this + 4*(4))) {
        ImmortalsRoleItemData::updateBaseAttr();
      }
      ImmortalsRoleItemData::updateRefineAttrLimit();
      ((std::vector<std::string, std::allocator<std::string>> *)&iStack_24)->~vector();
      func_0079e2bc(auStack_30);
      return;
    }
    uVar2 = (undefined4)(iStack_20 - iStack_24 >> 2);
    iVar4 = (undefined4)(intptr_t)(iStack_24);
    if (uVar5 == 3) {
      if (uVar2 < 4) {
        func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),3);
        uVar2 = (undefined4)(extraout_r2);
        iVar4 = (undefined4)(intptr_t)(extraout_r3);
        goto LAB_00482564;
      }
      uVar1 = (undefined4)(*(undefined4 *)(iStack_24 + 0xc));
    }
    else {
LAB_00482564:
      if (uVar2 <= uVar5) {
        func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),uVar5);
        iVar4 = (undefined4)(intptr_t)(extraout_r3_00);
      }
      uVar1 = (undefined4)(*(undefined4 *)(uVar5 * 4 + iVar4));
    }
    uVar1 = (undefined4)(func_0079e6c0(uVar1));
    ((ImmortalsAttr *)*(int *)((int)this + 4*(6)))->setAttrByType(uVar5, uVar1);
    uVar5 = (undefined4)(uVar5 + 1);
  } while( true );
}
