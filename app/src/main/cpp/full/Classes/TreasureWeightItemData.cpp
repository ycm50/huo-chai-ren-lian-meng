#include "TreasureWeightItemData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e58c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e8b4(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_004bb02c;
extern "C" unsigned long _DAT_004bb168;
extern "C" unsigned long _DAT_004bb27c;
extern "C" unsigned long _DAT_004bb2bc;
extern "C" unsigned long _DAT_004bb2fc;
extern "C" unsigned long _DAT_004bb33c;
extern "C" unsigned long _DAT_004bb5b0;
extern "C" unsigned long _DAT_004bb5b4;
extern "C" unsigned long _DAT_004bb824;
extern "C" unsigned long _DAT_004bb828;
extern "C" unsigned long _DAT_004bb82c;
extern "C" unsigned long _DAT_004bb830;
extern "C" unsigned long _DAT_004bb834;
extern "C" unsigned long _DAT_004bb838;
extern "C" unsigned long _DAT_004bb83c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_004bb02c;
extern "C" unsigned long g_004bb168;
extern "C" unsigned long g_004bb27c;
extern "C" unsigned long g_004bb2bc;
extern "C" unsigned long g_004bb2fc;
extern "C" unsigned long g_004bb33c;
extern "C" unsigned long g_004bb5b0;
extern "C" unsigned long g_004bb5b4;
extern "C" unsigned long g_004bb824;
extern "C" unsigned long g_004bb828;
extern "C" unsigned long g_004bb82c;
extern "C" unsigned long g_004bb830;
extern "C" unsigned long g_004bb834;
extern "C" unsigned long g_004bb838;
extern "C" unsigned long g_004bb83c;

TreasureWeightItemData::TreasureWeightItemData()
/* DESTROYAUX_V1: 1 处降级 */
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(*(int *)(g_004bb168 + 0x4bb10e) + 0xc);
  *(int *)(((int)this) + 4) = iVar1;
  *(int *)(((int)this) + 8) = iVar1;
  *(undefined4 *)(((int)this) + 0x28) = 0;
  *(undefined4 *)(((int)this) + 0x2c) = 0;
  *(undefined4 *)(((int)this) + 0x30) = 0;
  *(undefined4 *)(((int)this) + 0x34) = 0;
  *(undefined4 *)(((int)this) + 0x38) = 0;
  *(undefined4 *)(((int)this) + 0x3c) = 0;
  *(undefined4 *)(((int)this) + 0x40) = 0;
  *(undefined4 *)(((int)this) + 0x44) = 0;
  *(undefined4 *)(((int)this) + 0x48) = 0;
  *(undefined4 *)(((int)this) + 0x4c) = 0;
  *(undefined4 *)(((int)this) + 0x50) = 0;
  *(undefined4 *)(((int)this) + 0x54) = 0;
  *(undefined4 *)(((int)this) + 0x58) = 0;
  *(undefined4 *)(((int)this) + 0x5c) = 0;
  *(undefined4 *)(((int)this) + 0x60) = 0;
  *(undefined4 *)(((int)this) + 0x1c) = 0;
  *(undefined4 *)(((int)this) + 0x20) = 0;
  *(undefined4 *)(((int)this) + 0x24) = 0;
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)(((int)this) + 0x28))->clear();
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)(((int)this) + 0x34))->clear();
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)(((int)this) + 0x40))->clear();
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)(((int)this) + 0x4c))->clear();
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x58));
  (void)0; /* DESTROYAUX 降级 */
  *(undefined4 *)(((int)this) + 0x5c) = uVar2;
  return;
}

TreasureWeightItemData::~TreasureWeightItemData()
{
  *(undefined4 *)(((int)this) + 0x20) = *(undefined4 *)(((int)this) + 0x1c);
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)((int)this) + 0x28)->clear();
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)((int)this) + 0x34)->clear();
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)((int)this) + 0x40)->clear();
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)((int)this) + 0x4c)->clear();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x58)->~vector();
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)((int)this) + 0x4c)->~vector();
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)((int)this) + 0x40)->~vector();
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)((int)this) + 0x34)->~vector();
  ((std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>> *)((int)this) + 0x28)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x1c)->~vector();
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 4);
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
void TreasureWeightItemData::setFixedPos(int p1, int p2, int p3)
{
  undefined4 uVar1;
  int extraout_r1;
  uint extraout_r1_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iStack_24 = 0;
  iStack_20 = 0;
  uStack_1c = (undefined4)(0);
  for (iStack_28 = (undefined4)(intptr_t)(p1); iStack_28 <= p2; iStack_28 = iStack_28 + 1) {
    func_0079e964(iStack_28,10);
    if (extraout_r1 != 0) {
      ((std::vector<int, std::allocator<int>> *)(&iStack_24))->push_back(*(int const*)&iStack_28);
    }
  }
  for (iVar5 = 1; iVar5 <= p3; iVar5 = iVar5 + 1) {
    uVar1 = (undefined4)(func_0079e58c());
    iVar2 = (undefined4)(intptr_t)(iStack_24);
    uVar3 = (undefined4)(iStack_20 - iStack_24 >> 2);
    func_0079e8b4(uVar1,uVar3);
    uVar6 = (undefined4)(intptr_t)(ghidra_CONCAT44(extraout_r1_00,((int)this) + 0x1c));
    if (uVar3 <= extraout_r1_00) {
      uVar6 = (undefined4)(intptr_t)(func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",extraout_r1_00,uVar3));
    }
    iVar4 = (int)((ulonglong)uVar6 >> 0x20) * 4;
    ((std::vector<int, std::allocator<int>> *)((int)uVar6))->push_back(iVar2 + iVar4);
    iVar2 = (undefined4)(intptr_t)(iStack_24 + iVar4 + 4);
    if (iVar2 != iStack_20) {
      if (iStack_20 - iVar2 >> 2 != 0) {
        func_0079e68c();
      }
    }
    iStack_20 = (undefined4)(intptr_t)(iStack_20 + -4);
  }
  ((std::vector<int, std::allocator<int>> *)(&iStack_24))->~vector();
  return;
}

void TreasureWeightItemData::getEventDesc(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureWeightItemData::getWinDesc(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureWeightItemData::getLoseDesc(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureWeightItemData::getSpecialDesc(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureWeightItemData::formatDesc(std::string& p1, std::vector<std::vector<std::string, std::allocator<std::string>>, std::allocator<std::vector<std::string, std::allocator<std::string>>>>& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureWeightItemData::initWithData(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
