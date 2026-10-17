#include "CampaignTermDOUBLETALENT.h"
#include "DataManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
CampaignTermDOUBLETALENT::~CampaignTermDOUBLETALENT()
{
  return;
}

bool CampaignTermDOUBLETALENT::isComplete()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x168))();
  iVar2 = (**(code **)(*piVar1 + 0x18))();
  return 1 < iVar2;
}
