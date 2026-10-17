#include "CampaignInfo.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
CampaignInfo::~CampaignInfo()
{
  if (*(int *)(((int)this) + 0x48) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x48))));
  }
  if (*(int *)(((int)this) + 0x3c) != 0) {
    (void)(::operator delete((void *)(*(int *)(((int)this) + 0x3c))));
  }
  func_0079e2bc(((int)this) + 0x38);
  func_0079e2bc(((int)this) + 0x14);
  func_0079e2bc(((int)this) + 0x10);
  func_0079e2bc(((int)this) + 0xc);
  func_0079e2bc(((int)this) + 8);
  return;
}

int CampaignInfo::operator=(int P2)
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  
  *(int *)this = 0;
  uVar1 = (undefined4)(0);
  *(int *)((int)this + 4*(1)) = uVar1;
  func_0079e52c(((int)this) + 2,p2 + 2,p3,uVar1,p4);
  func_0079e52c(((int)this) + 3,p2 + 3);
  func_0079e52c(((int)this) + 4,p2 + 4);
  func_0079e52c(((int)this) + 5,p2 + 5);
  uVar1 = (undefined4)(0);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = uVar1;
  uVar1 = (undefined4)(0);
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = uVar1;
  uVar1 = (undefined4)(0);
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = uVar1;
  uVar1 = (undefined4)(0);
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = uVar1;
  func_0079e52c(((int)this) + 0xe,p2 + 0xe);
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0xf)->operator=(std::vector<int>());
  ((std::vector<int, std::allocator<int>> *)((int)this) + 0x12)->operator=(std::vector<int>());
  *(int *)((int)this + 4*(0x15)) = 0;
  return ((int)this);
}

CampaignInfo::CampaignInfo()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 *puVar1;
  undefined4 uVar2;
  
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  puVar1 = (undefined4 *)((int)this) + 2;
  func_0079e53c(puVar1,p2 + 2,p3,puVar1,puVar1);
  func_0079e53c(((int)this) + 3,p2 + 3);
  func_0079e53c(((int)this) + 4,p2 + 4);
  func_0079e53c(((int)this) + 5,p2 + 5);
  uVar2 = (undefined4)(0);
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = uVar2;
  uVar2 = (undefined4)(0);
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)((int)this + 4*(9)) = uVar2;
  uVar2 = (undefined4)(0);
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = uVar2;
  uVar2 = (undefined4)(0);
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xd)) = uVar2;
  func_0079e53c(((int)this) + 0xe,p2 + 0xe);
  ; /* CampaignInfo vector 构造垃圾桩化 */
  ; /* CampaignInfo vector 构造垃圾桩化 */
  *(int *)((int)this + 4*(0x15)) = 0;
  return;
}
