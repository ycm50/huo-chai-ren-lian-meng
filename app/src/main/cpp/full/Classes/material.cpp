#include "material.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" unsigned long _DAT_004ade8c;
extern "C" unsigned long _DAT_004ade90;
extern "C" unsigned long _DAT_004adf28;
extern "C" unsigned long g_004ade8c;
extern "C" unsigned long g_004ade90;
extern "C" unsigned long g_004adf28;
material::material()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  
  iVar1 = g_004ade90;
  *(int *)((int)this + 4*(1)) = *(int *)(g_004ade8c + 0x4ade56) + 0xc;
  *(int *)((int)this + 4*(2)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)this = 0;
  func_0079e2dc(((int)this) + 1,iVar1 + 0x4ade6e,p3,0,p4);
  *(int *)((int)this + 4*(3)) = *(int *)((int)this + 4*(2));
  return;
}

material::~material()
{
  if (*(int *)(((int)this) + 8) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 8))));
  }
  func_0079e2bc(((int)this) + 4);
  return;
}
