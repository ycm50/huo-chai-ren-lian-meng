#include "TreasureRecordData.h"
#include "CCArray.h"
#include "TreasureRecordItemData.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r2_00;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
TreasureRecordData::TreasureRecordData()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  return;
}

TreasureRecordData::~TreasureRecordData()
{
  *(int *)((int)this + 4*(1)) = *(int *)this;
  if (*(int *)this != 0) {
    (void)(::operator delete((void *)(*(int *)this)));
  }
  return;
}

void TreasureRecordData::getAllRecord()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void TreasureRecordData::getPosYByIndex(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void TreasureRecordData::resetCurHeight(int p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 TreasureRecordData::getItemByIndex(int p1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(0);
  if (p1 < (uint)(*(int *)((int)this + 4*(1)) - *(int *)this >> 2)) {
    puVar1 = (undefined4 *)((std::vector<TreasureRecordItemData*, std::allocator<TreasureRecordItemData*>> *)this)->at((unsigned int)0);
    uVar2 = (undefined4)(*puVar1);
  }
  return uVar2;
}

void TreasureRecordData::refreshData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 TreasureRecordData::addInfo(cocos2d::CCArray* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
