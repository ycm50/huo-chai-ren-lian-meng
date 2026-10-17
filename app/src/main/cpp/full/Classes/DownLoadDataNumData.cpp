#include "DownLoadDataNumData.h"
#include "DownLoadDataNumDataGet.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079eab4(...);
extern "C" unsigned long _DAT_00478cdc;
extern "C" unsigned long _DAT_00478ce0;
extern "C" unsigned long _DAT_00479054;
extern "C" unsigned long _DAT_00479058;
extern "C" unsigned long g_00478cdc;
extern "C" unsigned long g_00478ce0;
extern "C" unsigned long g_00479054;
extern "C" unsigned long g_00479058;
int DownLoadDataNumData::getIstatus() const
{
  return *(undefined4 *)(((int)this) + 4);
}

void DownLoadDataNumData::setIstatus(int p1)
{
  *(undefined4 *)(((int)this) + 4) = p1;
  return;
}

DownLoadDataNumData::~DownLoadDataNumData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_00478ce0 + 0x478cd6) = 0;
  return;
}

void DownLoadDataNumData::GetDataFromNet(URL_DownLoadNum p1, bool p2)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1c)));
  0 /* ctorZero */;
  *piVar1 = *(int *)(g_00479054 + 0x47900e) + 8;
  piVar1[6] = *(int *)(g_00479058 + 0x47901e) + 0xc;
  *(undefined1 *)(piVar1 + 5) = 1;
  func_0079eab4(piVar1 + 6,p1 & 0xff);
  *(undefined1 *)(piVar1 + 5) = p2;
  iVar2 = ((DownLoadDataNumDataGet *)piVar1)->init((URL_DownLoadNum)p1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return;
}
