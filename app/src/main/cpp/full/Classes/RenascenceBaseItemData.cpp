#include "RenascenceBaseItemData.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e864(...);
extern "C" unsigned long _DAT_004a5320;
extern "C" unsigned long _DAT_004a5324;
extern "C" unsigned long _DAT_004a5328;
extern "C" unsigned long _DAT_004a532c;
extern "C" unsigned long _DAT_004a5330;
extern "C" unsigned long _DAT_004a5334;
extern "C" unsigned long _DAT_004a5338;
extern "C" unsigned long _DAT_004a533c;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_004a5320;
extern "C" unsigned long g_004a5324;
extern "C" unsigned long g_004a5328;
extern "C" unsigned long g_004a532c;
extern "C" unsigned long g_004a5330;
extern "C" unsigned long g_004a5334;
extern "C" unsigned long g_004a5338;
extern "C" unsigned long g_004a533c;

RenascenceBaseItemData::~RenascenceBaseItemData()
{
  (void)(::operator delete((void *)(*(undefined4 *)(((int)this) + 0xc))));
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
RenascenceBaseItemData::RenascenceBaseItemData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void RenascenceBaseItemData::initWith(char** p1, int& p2)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *extraout_r3;
  undefined4 *puVar3;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 *puStack_24;
  int iStack_20;
  
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(int *)this = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(1)) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(2)) = uVar1;
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  func_0079e45c(auStack_30,*(undefined4 *)((iVar2 + 1) * 4 + p1),&puStack_24);
  iVar2 = (int)*(int *)&(*(int *)p2);
  *(int *)p2 = iVar2 + 1;
  uVar1 = (undefined4)(func_0079e6c0(*(undefined4 *)((iVar2 + 1) * 4 + p1)));
  *(int *)((int)this + 4*(4)) = uVar1;
  *(int *)p2 = *(int *)p2 + 1;
  func_0079e53c(auStack_2c,auStack_30);
  func_0079e45c(auStack_28,g_004a5320 + 0x4a5258,auStack_34);
  0 /* ctorZero */;
  func_0079e2bc(auStack_28);
  func_0079e2bc(auStack_2c);
  if (iStack_20 - (int)puStack_24 >> 2 != 2) goto LAB_004a5294;
  while( true ) {
    puVar3 = (undefined4 *)*(int *)((int)this + 4*(3));
    if (iStack_20 - (int)puStack_24 >> 2 != 0) break;
    func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),0);
LAB_004a5294:
    0 /* ctorZero */;
    if (iStack_20 - (int)puStack_24 >> 2 != 2) {
      func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),((intptr_t)"jni/../../Classes/data/renascence/RenascenceBaseData.cpp"),
                      ((intptr_t)"initWith"),0x33);
    }
  }
  uVar1 = (undefined4)(func_0079e6c0(*puStack_24));
  *puVar3 = uVar1;
  iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(3)));
  if ((uint)(iStack_20 - (int)puStack_24 >> 2) < 2) {
    func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),1);
    puStack_24 = extraout_r3;
  }
  uVar1 = (undefined4)(func_0079e6c0(puStack_24[1]));
  *(undefined4 *)(iVar2 + 4) = uVar1;
  ((std::vector<std::string, std::allocator<std::string>> *)&puStack_24)->~vector();
  func_0079e2bc(auStack_30);
  return;
}
