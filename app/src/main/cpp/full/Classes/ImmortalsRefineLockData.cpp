#include "ImmortalsRefineLockData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2fc(...);
extern "C" unsigned long _DAT_00481e04;
extern "C" unsigned long g_00481e04;
ImmortalsRefineLockData::ImmortalsRefineLockData()
{
  *(int *)this = 0;
  return;
}

ImmortalsRefineLockData::~ImmortalsRefineLockData()
{
  return;
}

int ImmortalsRefineLockData::getInstance()
{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(g_00481e04 + 0x481de0);
  if (*piVar2 == 0) {
    iVar1 = ((long long)::operator new((size_t)(4)));
    0 /* ctorZero */;
    *piVar2 = iVar1;
  }
  return *piVar2;
}

int ImmortalsRefineLockData::checkLockable()
{
  return (uint)(*(int *)this < 2) - ((int)*(int *)this >> 0x1f);
}

void ImmortalsRefineLockData::lock()
{
  *(int *)this = *(int *)this + 1;
  return;
}

void ImmortalsRefineLockData::unLock()
{
  *(int *)this = *(int *)this + -1;
  return;
}

void ImmortalsRefineLockData::reset()
{
  *(int *)this = 0;
  return;
}
