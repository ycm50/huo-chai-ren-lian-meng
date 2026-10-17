#include "JiTanData.h"
#include "GetHeroDrawInfo.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e52c(...);
extern "C" unsigned long _DAT_00488f40;
extern "C" unsigned long _DAT_00488f44;
extern "C" unsigned long _DAT_00488f48;
extern "C" unsigned long g_00488f40;
extern "C" unsigned long g_00488f44;
extern "C" unsigned long g_00488f48;
int JiTanData::getDoubleHeroId() const
{
  return *(undefined4 *)(((int)this) + 4);
}

void JiTanData::setDoubleHeroId(int p1)
{
  *(undefined4 *)(((int)this) + 4) = p1;
  return;
}

int JiTanData::getLuck() const
{
  return *(undefined4 *)(((int)this) + 8);
}

void JiTanData::setLuck(int p1)
{
  *(undefined4 *)(((int)this) + 8) = p1;
  return;
}

JiTanData::~JiTanData()
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4*(10));
  iVar2 = *(int *)((int)this + 4*(0xb));
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  for (; iVar1 != iVar2; iVar1 = iVar1 + 0x1c) {
    ((GetHeroDrawInfo *)iVar1)->~GetHeroDrawInfo();
  }
  if (*(int *)((int)this + 4*(10)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(10)))));
  }
  ((GetHeroDrawInfo *)((int)this) + 3)->~GetHeroDrawInfo();
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_00488f48 + 0x488f3a) = 0;
  return;
}


int JiTanData::getMyGetHeroDrawInfo() const
{
  0 /* ctorZero */;
  return ((int)this);
}

void JiTanData::GetDataFromNet(URL_JT * p1, bool p2)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void JiTanData::setMyGetHeroDrawInfo(GetHeroDrawInfo * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
