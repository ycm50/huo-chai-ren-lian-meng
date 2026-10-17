#include "GMSysFactory.h"
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
extern "C" long long func_0079e6d0(...);
extern "C" unsigned long _DAT_0047d804;
extern "C" unsigned long _DAT_0047d808;
extern "C" unsigned long _DAT_0047d80c;
extern "C" unsigned long _DAT_0047d830;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0047d804;
extern "C" unsigned long g_0047d808;
extern "C" unsigned long g_0047d80c;
extern "C" unsigned long g_0047d830;
void GMSysFactory::createSys(GM_SCENESTATUS p1)
{
  int *piVar1;
  undefined4 extraout_r3;
  int iVar2;
  
  iVar2 = g_0047d808 + 0x47d788;
  if ((uint)(((int)this) + g_0047d804) < 9) {
    func_0079e6d0();
    0 /* ctorZero */;
  }
  piVar1 = (int *)((long long)::operator new((size_t)(4)));
  *piVar1 = *(int *)(iVar2 + g_0047d830) + 8;
  return;
}
