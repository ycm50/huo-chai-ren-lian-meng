#include "CampaignTermLUCKCHEST.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
CampaignTermLUCKCHEST::~CampaignTermLUCKCHEST()
{
  return;
}

uint CampaignTermLUCKCHEST::isComplete()
{
  return (((int)*(uint *)(((int)this) + 8) >> 0x1f) - ((int)*(uint *)(((int)this) + 4) >> 0x1f)) +
         (uint)(*(uint *)(((int)this) + 4) <= *(uint *)(((int)this) + 8)) & 0xff;
}
