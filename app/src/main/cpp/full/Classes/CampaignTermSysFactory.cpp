#include "CampaignTermSysFactory.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e6ac(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00469160;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_00469160;
undefined8 CampaignTermSysFactory::createSys(CampaignChildTerm p1)
{
  int *piVar1;
  int extraout_r3;
  
  piVar1 = (int *)0x0;
  if (((int)this) < 0x19) {
    func_0079e6ac(((int)this));
    piVar1 = (int *)func_0079e2fc(0x1c,extraout_r3 << 0x14);
    (void)(((long long)::memset((void *)(piVar1),(int)(0),(size_t)(0x1c))));
    0 /* ctorZero */;
    *piVar1 = *(int *)(extraout_r3 * 0x800 + g_00469160) + 8;
  }
  return ghidra_CONCAT44(((int)this),piVar1);
}
