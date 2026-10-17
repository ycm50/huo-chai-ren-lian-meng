#include "TreasureRecordItemData.h"
#include "BLRichText.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e67c(...);
extern "C" unsigned long _DAT_004ba554;
extern "C" unsigned long _DAT_004ba558;
extern "C" unsigned long _DAT_004ba55c;
extern "C" unsigned long g_004ba554;
extern "C" unsigned long g_004ba558;
extern "C" unsigned long g_004ba55c;
TreasureRecordItemData::TreasureRecordItemData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

TreasureRecordItemData::~TreasureRecordItemData()
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    piVar2 = (int *)(iVar1 + *(int *)(iVar1 + -4) * 0x18);
    while( true ) {
      piVar3 = piVar2 + -6;
      if (piVar2 == (int *)*(int *)this) break;
      (**(code **)(*piVar3 + 4))(piVar3);
      piVar2 = piVar3;
    }
    (void)(::operator delete[]((void *)(piVar2 + -2)));
  }
  *(int *)this = 0;
  return;
}
