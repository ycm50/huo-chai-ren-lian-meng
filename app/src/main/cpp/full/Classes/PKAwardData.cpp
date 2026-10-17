#include "PKAwardData.h"
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
extern "C" unsigned long _UNK_0061a4c4;
extern "C" unsigned long _UNK_0061a4c8;
extern "C" unsigned long g_0061a4c4;
extern "C" unsigned long g_0061a4c8;
PKAwardData::~PKAwardData()
{
  int *piVar1;
  int *piVar2;
  
  func_0079e2bc(((int)this) + 0x14);
  piVar2 = *(int **)(((int)this) + 0xc);
  for (piVar1 = *(int **)(((int)this) + 8); piVar1 != piVar2; piVar1 = piVar1 + 0x1f) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if (*(int *)(((int)this) + 8) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 8))));
  }
  return;
}

PKAwardData::PKAwardData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
