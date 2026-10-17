#include "CampaignChildInfo.h"
#include "RewardInfo.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00469cc4;
extern "C" unsigned long _DAT_00469cc8;
extern "C" unsigned long _DAT_0046a6ec;
extern "C" unsigned long g_00469cc4;
extern "C" unsigned long g_00469cc8;
extern "C" unsigned long g_0046a6ec;
CampaignChildInfo::~CampaignChildInfo()
/* DESTROYAUX_V1: 1 处降级 */
{
  (void)0; /* DESTROYAUX 降级 */
  if (*(int *)(((int)this) + 0x28) != 0) {
    func_0079e2cc();
  }
  ((std::vector<RewardInfo, std::allocator<RewardInfo>> *)(((int)this) + 0x18))->~vector();
  ((std::vector<RewardInfo, std::allocator<RewardInfo>> *)(((int)this) + 0xc))->~vector();
  func_0079e2bc(((int)this) + 4);
  return;
}

CampaignChildInfo::CampaignChildInfo()
/* DESTROYAUX_V1: 1 处降级 */
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(int *)((int)this + 4*(1)) = *(int *)(g_00469cc4 + 0x469c16) + 0xc;
  iVar1 = (undefined4)(intptr_t)(g_00469cc8);
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)this = 0xffffffff;
  func_0079e2dc(((int)this) + 1,iVar1 + 0x469c3c,0xffffffff,0,p4);
  iVar3 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(3)));
  *(int *)((int)this + 4*(0xd)) = 0;
  *(int *)((int)this + 4*(2)) = 0;
  iVar4 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(4)));
  for (iVar1 = (undefined4)(intptr_t)(iVar3); iVar1 != iVar4; iVar1 = iVar1 + 0x14) {
    func_0079e2bc(iVar1 + 0x10);
    func_0079e2bc(iVar1 + 0xc);
  }
  *(int *)((int)this + 4*(4)) = iVar3;
  iVar4 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(7)));
  iVar3 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(6)));
  for (iVar1 = (undefined4)(intptr_t)(iVar3); iVar1 != iVar4; iVar1 = iVar1 + 0x14) {
    func_0079e2bc(iVar1 + 0x10);
    func_0079e2bc(iVar1 + 0xc);
  }
  uVar2 = (undefined4)(*(int *)((int)this + 4*(10)));
  *(int *)((int)this + 4*(7)) = iVar3;
  (void)0; /* DESTROYAUX 降级 */
  *(int *)((int)this + 4*(0xb)) = uVar2;
  return;
}
