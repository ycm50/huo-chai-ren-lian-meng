#include "LuckyDrawItem.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e53c(...);
extern "C" unsigned long _DAT_0048ca40;
extern "C" unsigned long _DAT_0048ca44;
extern "C" unsigned long _DAT_0048ca48;
extern "C" unsigned long g_0048ca40;
extern "C" unsigned long g_0048ca44;
extern "C" unsigned long g_0048ca48;
LuckyDrawItem::LuckyDrawItem()
{
  int iVar1;
  
  iVar1 = *(int *)(g_0048ca40 + 0x48c9f4) + 0xc;
  *(int *)((int)this + 4*(5)) = iVar1;
  *(int *)((int)this + 4*(6)) = iVar1;
  *(int *)((int)this + 4*(1)) = 0;
  *(int *)((int)this + 4*(3)) = 0;
  iVar1 = g_0048ca44;
  *(int *)this = 0xffffffff;
  *(int *)((int)this + 4*(2)) = 0xffffffff;
  *(int *)((int)this + 4*(4)) = 0;
  func_0079e2dc(((int)this) + 5,iVar1 + 0x48ca1a);
  func_0079e2dc(((int)this) + 6,g_0048ca48 + 0x48ca28);
  return;
}

LuckyDrawItem::~LuckyDrawItem()
{
  func_0079e2bc(((int)this) + 0x18);
  func_0079e2bc(((int)this) + 0x14);
  return;
}
