#include "ImmortalsInfoData.h"
#include "DataManager.h"
#include "ImmortalsInfoItemData.h"
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
extern "C" unsigned long _DAT_00481da4;
extern "C" unsigned long _DAT_00481da8;
extern "C" unsigned long g_00481da4;
extern "C" unsigned long g_00481da8;
int * ImmortalsInfoData::getItemData(int p1)
{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*(int *)this;
  while( true ) {
    if (piVar2 == (int *)*(int *)((int)this + 4*(1))) {
      return (int *)0x0;
    }
    piVar1 = (int *)*piVar2;
    if ((piVar1 != (int *)0x0) && (*piVar1 == p1)) break;
    piVar2 = piVar2 + 1;
  }
  return (int *)(piVar1);
}

ImmortalsInfoData::~ImmortalsInfoData()
{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = (int *)*(int *)this; piVar1 != (int *)*(int *)((int)this + 4*(1)); piVar1 = piVar1 + 1) {
    iVar2 = (int)*(int *)&(*piVar1);
    if (iVar2 != 0) {
      ((ImmortalsInfoItemData *)iVar2)->~ImmortalsInfoItemData();
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


ImmortalsInfoData::ImmortalsInfoData()
{
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  ImmortalsInfoData::initData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void ImmortalsInfoData::initData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
