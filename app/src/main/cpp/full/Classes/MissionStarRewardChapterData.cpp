#include "MissionStarRewardChapterData.h"
#include "MissionStarRewardItemData.h"
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
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e53c(...);
extern "C" unsigned long _DAT_004970b0;
extern "C" unsigned long _DAT_004970b4;
extern "C" unsigned long g_004970b0;
extern "C" unsigned long g_004970b4;
MissionStarRewardChapterData::MissionStarRewardChapterData()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  return;
}

MissionStarRewardChapterData::~MissionStarRewardChapterData()
{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = (int *)*(int *)this; piVar1 != (int *)*(int *)((int)this + 4*(1)); piVar1 = piVar1 + 1) {
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      ((MissionStarRewardItemData *)iVar2)->~MissionStarRewardItemData();
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

// ===== 修复: 补回被误删的函数占位 (1) =====
void MissionStarRewardChapterData::initWithData(char** p1, int& p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
