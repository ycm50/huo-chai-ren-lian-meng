#include "GetHeroDrawInfo.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2dc(...);
extern "C" unsigned long g_00488ed8;
extern "C" unsigned long g_00488ed4;
extern "C" long long func_0079e2bc(...);
GetHeroDrawInfo::~GetHeroDrawInfo()
{
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0xc)->~vector();
  func_0079e2bc(((int)this) + 8);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
GetHeroDrawInfo::GetHeroDrawInfo()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(g_00488ed8);
  *(int *)((int)this + 4*(2)) = *(int *)(g_00488ed4 + 0x488e9e) + 0xc;
  *(int *)((int)this + 4*(3)) = 0;
  *(int *)((int)this + 4*(4)) = 0;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)this = 0;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(6)) = 0;
  func_0079e2dc(((int)this) + 2,iVar1 + 0x488eba,p3,0,p4);
  return;
}
