#include "PetBuffItemData.h"
#include "DataManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e3cc(...);
extern "C" long long func_0079e3dc(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e874(...);
extern "C" unsigned long _DAT_0049fa88;
extern "C" unsigned long _DAT_0049fa8c;
extern "C" unsigned long _DAT_0049fa90;
extern "C" unsigned long _DAT_0049fa94;
extern "C" unsigned long _DAT_0049fa98;
extern "C" unsigned long _DAT_0049fa9c;
extern "C" unsigned long _DAT_0049faa0;
extern "C" unsigned long _DAT_0049faa4;
extern "C" unsigned long _DAT_0049faa8;
extern "C" unsigned long _DAT_0049faac;
extern "C" unsigned long _DAT_0049fab0;
extern "C" unsigned long _DAT_0049fab4;
extern "C" unsigned long _DAT_0049fab8;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long g_0049fa88;
extern "C" unsigned long g_0049fa8c;
extern "C" unsigned long g_0049fa90;
extern "C" unsigned long g_0049fa94;
extern "C" unsigned long g_0049fa98;
extern "C" unsigned long g_0049fa9c;
extern "C" unsigned long g_0049faa0;
extern "C" unsigned long g_0049faa4;
extern "C" unsigned long g_0049faa8;
extern "C" unsigned long g_0049faac;
extern "C" unsigned long g_0049fab0;
extern "C" unsigned long g_0049fab4;
extern "C" unsigned long g_0049fab8;
PetBuffItemData::PetBuffItemData()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  return;
}

undefined4 PetBuffItemData::getAttrByType(int p1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0);
  if (p1 < (uint)(*(int *)(((int)this) + 0x2c) - *(int *)(((int)this) + 0x28) >> 2)) {
    puVar1 = (undefined4 *)((std::vector<int, std::allocator<int>> *)this)->at((unsigned int)((int)this) + 0x28);
    uVar2 = (undefined4)(*puVar1);
  }
  return uVar2;
}

PetBuffItemData::~PetBuffItemData()
{
  *(undefined4 *)(((int)this) + 8) = *(undefined4 *)(((int)this) + 4);
  *(undefined4 *)(((int)this) + 0x14) = *(undefined4 *)(((int)this) + 0x10);
  *(undefined4 *)(((int)this) + 0x20) = *(undefined4 *)(((int)this) + 0x1c);
  *(undefined4 *)(((int)this) + 0x2c) = *(undefined4 *)(((int)this) + 0x28);
  ((std::vector<int, std::allocator<int>> *)this)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x1c)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x10)->~vector();
  ((std::vector<int, std::allocator<int>> *)((int)this) + 4)->~vector();
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void PetBuffItemData::updateAttrByLv(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void PetBuffItemData::initWithId(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
