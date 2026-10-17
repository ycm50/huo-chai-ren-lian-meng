#include "MissionStarRewardData.h"
#include "DataManager.h"
#include "MissionStarRewardChapterData.h"
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
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e784(...);
extern "C" unsigned long _DAT_00496da8;
extern "C" unsigned long _DAT_00497228;
extern "C" unsigned long _DAT_0049722c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00496da8;
extern "C" unsigned long g_00497228;
extern "C" unsigned long g_0049722c;
MissionStarRewardData::~MissionStarRewardData()
{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = (int *)*(int *)this; piVar1 != (int *)*(int *)((int)this + 4*(1)); piVar1 = piVar1 + 1) {
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      ((MissionStarRewardChapterData *)iVar2)->~MissionStarRewardChapterData();
      (void)(::operator delete((void *)(iVar2)));
    }
    *piVar1 = 0;
  }
  *(int *)((int)this + 4*(1)) = *(int *)this;
  if (*(int *)this != 0) {
    (void)(::operator delete((void *)(*(int *)this)));
  }
  return;
}

undefined4 MissionStarRewardData::getItemData(int p1)
{
  undefined4 uVar1;
  uint extraout_r1;
  uint uVar2;
  int iVar3;
  int extraout_r3;
  
  iVar3 = *(int *)this;
  uVar2 = (undefined4)(*(int *)((int)this + 4*(1)) - iVar3 >> 2);
  if (uVar2 < p1) {
    uVar1 = (undefined4)(0);
  }
  else {
    p1 = p1 - 1;
    if (uVar2 <= p1) {
      func_0079e784(((intptr_t)"vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)"));
      p1 = extraout_r1;
      iVar3 = extraout_r3;
    }
    uVar1 = (undefined4)(*(undefined4 *)(p1 * 4 + iVar3));
  }
  return uVar1;
}


MissionStarRewardData::MissionStarRewardData()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  MissionStarRewardData::init();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool MissionStarRewardData::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
