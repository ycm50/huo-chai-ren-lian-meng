#include "ImmortalsInfoItemData.h"
#include "ImmortalsAttr.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e824(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long DAT_004818f4;
extern "C" unsigned long UNK_00481bba;
extern "C" unsigned long _DAT_00480d24;
extern "C" unsigned long _DAT_00480d28;
extern "C" unsigned long _DAT_00480d2c;
extern "C" unsigned long _DAT_00480d30;
extern "C" unsigned long _DAT_00480d34;
extern "C" unsigned long _DAT_00480d38;
extern "C" unsigned long _DAT_00480d3c;
extern "C" unsigned long _DAT_00480d8c;
extern "C" unsigned long _DAT_00480d90;
extern "C" unsigned long _DAT_00480d94;
extern "C" unsigned long _DAT_00480d98;
extern "C" unsigned long _DAT_00480d9c;
extern "C" unsigned long _DAT_00480da0;
extern "C" unsigned long _DAT_00480df0;
extern "C" unsigned long _DAT_00480df4;
extern "C" unsigned long _DAT_00480df8;
extern "C" unsigned long _DAT_00480dfc;
extern "C" unsigned long _DAT_00480e00;
extern "C" unsigned long _DAT_00480e04;
extern "C" unsigned long _DAT_004818e4;
extern "C" unsigned long _DAT_004818e8;
extern "C" unsigned long _DAT_004818ec;
extern "C" unsigned long _DAT_004818f0;
extern "C" unsigned long _DAT_004818f4;
extern "C" unsigned long _DAT_004818f8;
extern "C" unsigned long _DAT_004818fc;
extern "C" unsigned long _DAT_00481900;
extern "C" unsigned long _DAT_00481904;
extern "C" unsigned long _DAT_00481908;
extern "C" unsigned long _DAT_0048190c;
extern "C" unsigned long _DAT_00481910;
extern "C" unsigned long _DAT_00481914;
extern "C" unsigned long _DAT_00481918;
extern "C" unsigned long _DAT_0048191c;
extern "C" unsigned long _DAT_00481c40;
extern "C" unsigned long _DAT_00481c44;
extern "C" unsigned long _DAT_00481c48;
extern "C" unsigned long _DAT_00481c4c;
extern "C" unsigned long _DAT_00481c50;
extern "C" unsigned long _DAT_00481c54;
extern "C" unsigned long _DAT_00481c58;
extern "C" unsigned long _DAT_00481c5c;
extern "C" unsigned long _DAT_00481c60;
extern "C" unsigned long _DAT_00481c64;
extern "C" unsigned long _DAT_00481c68;
extern "C" unsigned long _DAT_00481c6c;
extern "C" unsigned long _DAT_00481c70;
extern "C" unsigned long _DAT_00481c74;
extern "C" unsigned long _DAT_00481c78;
extern "C" unsigned long _DAT_00481c7c;
extern "C" unsigned long _DAT_00481c80;
extern "C" unsigned long _DAT_00481c84;
extern "C" unsigned long _DAT_00481c88;
extern "C" unsigned long _DAT_00481c8c;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00480d24;
extern "C" unsigned long g_00480d28;
extern "C" unsigned long g_00480d2c;
extern "C" unsigned long g_00480d30;
extern "C" unsigned long g_00480d34;
extern "C" unsigned long g_00480d38;
extern "C" unsigned long g_00480d3c;
extern "C" unsigned long g_00480d8c;
extern "C" unsigned long g_00480d90;
extern "C" unsigned long g_00480d94;
extern "C" unsigned long g_00480d98;
extern "C" unsigned long g_00480d9c;
extern "C" unsigned long g_00480da0;
extern "C" unsigned long g_00480df0;
extern "C" unsigned long g_00480df4;
extern "C" unsigned long g_00480df8;
extern "C" unsigned long g_00480dfc;
extern "C" unsigned long g_00480e00;
extern "C" unsigned long g_00480e04;
extern "C" unsigned long g_004818e4;
extern "C" unsigned long g_004818e8;
extern "C" unsigned long g_004818ec;
extern "C" unsigned long g_004818f0;
extern "C" unsigned long g_004818f4;
extern "C" unsigned long g_004818f8;
extern "C" unsigned long g_004818fc;
extern "C" unsigned long g_00481900;
extern "C" unsigned long g_00481904;
extern "C" unsigned long g_00481908;
extern "C" unsigned long g_0048190c;
extern "C" unsigned long g_00481910;
extern "C" unsigned long g_00481914;
extern "C" unsigned long g_00481918;
extern "C" unsigned long g_0048191c;
extern "C" unsigned long g_00481bba;
extern "C" unsigned long g_00481c40;
extern "C" unsigned long g_00481c44;
extern "C" unsigned long g_00481c48;
extern "C" unsigned long g_00481c4c;
extern "C" unsigned long g_00481c50;
extern "C" unsigned long g_00481c54;
extern "C" unsigned long g_00481c58;
extern "C" unsigned long g_00481c5c;
extern "C" unsigned long g_00481c60;
extern "C" unsigned long g_00481c64;
extern "C" unsigned long g_00481c68;
extern "C" unsigned long g_00481c6c;
extern "C" unsigned long g_00481c70;
extern "C" unsigned long g_00481c74;
extern "C" unsigned long g_00481c78;
extern "C" unsigned long g_00481c7c;
extern "C" unsigned long g_00481c80;
extern "C" unsigned long g_00481c84;
extern "C" unsigned long g_00481c88;
extern "C" unsigned long g_00481c8c;
undefined8 ImmortalsInfoItemData::getUpgraceCost(int p1)
{
  int iVar1;
  int iVar2;
  int extraout_r3;
  
  iVar1 = (undefined4)(intptr_t)((int *)((int)this));
  if (10 < p1) {
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(((intptr_t)"getUpgraceCost"));
    func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),((intptr_t)"jni/../../Classes/data/immortals/ImmortalsInfoData.cpp"),
                    iVar1,199);
  }
  iVar2 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x14));
  if ((uint)(g_00480d38 * (*(int *)(((int)this) + 0x18) - iVar2 >> 2)) <= p1) {
    func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),p1);
    iVar2 = (undefined4)(intptr_t)(extraout_r3);
  }
  return ghidra_CONCAT44(iVar1,iVar2 + p1 * 0xc);
}

undefined8 ImmortalsInfoItemData::getAttr(int p1)
{
  int iVar1;
  int iVar2;
  int extraout_r3;
  
  iVar1 = (undefined4)(intptr_t)((int *)((int)this));
  if (0xb < p1) {
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(((intptr_t)"getAttr"));
    func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),((intptr_t)"jni/../../Classes/data/immortals/ImmortalsInfoData.cpp"),
                    iVar1,0xcd);
  }
  iVar2 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x20));
  if ((uint)(*(int *)(((int)this) + 0x24) - iVar2 >> 2) <= p1) {
    func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),p1);
    iVar2 = (undefined4)(intptr_t)(extraout_r3);
  }
  return ghidra_CONCAT44(iVar1,*(undefined4 *)(p1 * 4 + iVar2));
}

undefined8 ImmortalsInfoItemData::getRefineLimit(int p1)
{
  int iVar1;
  int iVar2;
  int extraout_r3;
  
  iVar1 = (undefined4)(intptr_t)((int *)((int)this));
  if (0xb < p1) {
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(((intptr_t)"getRefineLimit"));
    func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),((intptr_t)"jni/../../Classes/data/immortals/ImmortalsInfoData.cpp"),
                    iVar1,0xd3);
  }
  iVar2 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x2c));
  if ((uint)(*(int *)(((int)this) + 0x30) - iVar2 >> 2) <= p1) {
    func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"),p1);
    iVar2 = (undefined4)(intptr_t)(extraout_r3);
  }
  return ghidra_CONCAT44(iVar1,*(undefined4 *)(p1 * 4 + iVar2));
}

ImmortalsInfoItemData::~ImmortalsInfoItemData()
/* DESTROYAUX_V1: 1 处降级 */
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  for (puVar1 = *(undefined4 **)(((int)this) + 8); puVar1 != *(undefined4 **)(((int)this) + 0xc);
      puVar1 = puVar1 + 1) {
    func_0079e2cc(*puVar1);
    *puVar1 = 0;
  }
  puVar1 = *(undefined4 **)(((int)this) + 0x20);
  *(undefined4 *)(((int)this) + 0xc) = *(undefined4 *)(((int)this) + 8);
  for (; puVar1 != *(undefined4 **)(((int)this) + 0x24); puVar1 = puVar1 + 1) {
    piVar2 = (int *)*puVar1;
    if (piVar2 != (int *)0x0) {
      piVar2[1] = *piVar2;
      if (*piVar2 != 0) {
        func_0079e2cc();
      }
      func_0079e2cc(piVar2);
    }
    *puVar1 = 0;
  }
  puVar1 = *(undefined4 **)(((int)this) + 0x2c);
  *(undefined4 *)(((int)this) + 0x24) = *(undefined4 *)(((int)this) + 0x20);
  for (; puVar1 != *(undefined4 **)(((int)this) + 0x30); puVar1 = puVar1 + 1) {
    piVar2 = (int *)*puVar1;
    if (piVar2 != (int *)0x0) {
      piVar2[1] = *piVar2;
      if (*piVar2 != 0) {
        func_0079e2cc();
      }
      func_0079e2cc(piVar2);
    }
    *puVar1 = 0;
  }
  puVar1 = *(undefined4 **)(((int)this) + 0x14);
  *(undefined4 *)(((int)this) + 0x30) = *(undefined4 *)(((int)this) + 0x2c);
  for (; puVar1 != *(undefined4 **)(((int)this) + 0x18); puVar1 = puVar1 + 3) {
    for (puVar3 = (undefined4 *)*puVar1; puVar3 != (undefined4 *)puVar1[1]; puVar3 = puVar3 + 1) {
      func_0079e2cc(*puVar3);
      *puVar3 = 0;
    }
    puVar1[1] = *puVar1;
  }
  ((std::vector<ImmortalsAttr*, std::allocator<ImmortalsAttr*>> *)(((int)this) + 0x2c))->~vector();
  ((std::vector<ImmortalsAttr*, std::allocator<ImmortalsAttr*>> *)(((int)this) + 0x20))->~vector();
  (void)0; /* DESTROYAUX 降级 */
  if (*(int *)(((int)this) + 0x14) != 0) {
    func_0079e2cc();
  }
  if (*(int *)(((int)this) + 8) != 0) {
    func_0079e2cc();
  }
  func_0079e2bc(((int)this) + 4);
  return;
}

void ImmortalsInfoItemData::initWithData(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

// ===== 修复: 补回被误删的函数占位 (1) =====
ImmortalsInfoItemData::ImmortalsInfoItemData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
