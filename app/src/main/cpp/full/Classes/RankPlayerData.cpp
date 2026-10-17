#include "RankPlayerData.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e68c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _UNK_006154d8;
extern "C" unsigned long _UNK_006154dc;
extern "C" unsigned long g_006154d8;
extern "C" unsigned long g_006154dc;
RankPlayerData::~RankPlayerData()
{
  if (*(int *)(((int)this) + 0x14) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x14))));
  }
  func_0079e2bc(((int)this) + 8);
  func_0079e2bc(((int)this) + 4);
  return;
}

RankPlayerData::RankPlayerData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
