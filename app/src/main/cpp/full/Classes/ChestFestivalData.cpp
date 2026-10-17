#include "ChestFestivalData.h"
#include "ChestFestivalDataGet.h"
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
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long _DAT_00470610;
extern "C" unsigned long _DAT_00470614;
extern "C" unsigned long _DAT_00470618;
extern "C" unsigned long _DAT_00470660;
extern "C" unsigned long _DAT_00470664;
extern "C" unsigned long _DAT_00470668;
extern "C" unsigned long _DAT_004706a4;
extern "C" unsigned long _DAT_004706a8;
extern "C" unsigned long _DAT_004706c0;
extern "C" unsigned long _DAT_00470a54;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r2_00;
extern "C" unsigned long g_00470610;
extern "C" unsigned long g_00470614;
extern "C" unsigned long g_00470618;
extern "C" unsigned long g_00470660;
extern "C" unsigned long g_00470664;
extern "C" unsigned long g_00470668;
extern "C" unsigned long g_004706a4;
extern "C" unsigned long g_004706a8;
extern "C" unsigned long g_004706c0;
extern "C" unsigned long g_00470a54;
undefined4 ChestFestivalData::getintTypeID() const
{
  return *(undefined4 *)(((int)this) + 4);
}

void ChestFestivalData::setintTypeID(int p1)
{
  *(undefined4 *)(((int)this) + 4) = p1;
  return;
}

ChestFestivalData::~ChestFestivalData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(2)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(2)))));
  }
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_00470618 + 0x47060c) = 0;
  return;
}



void ChestFestivalData::clearData()
{
  *(undefined4 *)(((int)this) + 0xc) = *(undefined4 *)(((int)this) + 8);
  0 /* ctorZero */;
  return;
}

int ChestFestivalData::getRewardType()
{
  return *(int *)(((int)this) + 0xc) - *(int *)(((int)this) + 8) >> 3;
}

void ChestFestivalData::GetDataFromNet(int p1, int p2, bool p3)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x20)));
  0 /* ctorZero */;
  iVar2 = g_00470a54;
  piVar1[6] = p1;
  piVar1[7] = p2;
  *piVar1 = *(int *)(iVar2 + 0x470a24) + 8;
  *(undefined1 *)(piVar1 + 5) = 1;
  iVar2 = ((ChestFestivalDataGet *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void ChestFestivalData::PrintChestFestivalinfo(std::vector<ChestFestIvailInfo, std::allocator<ChestFestIvailInfo>> * p1) const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChestFestivalData::getItemBigType(ChestFestIvailInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChestFestivalData::setChestFestivalData(ChestFestIvailInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
