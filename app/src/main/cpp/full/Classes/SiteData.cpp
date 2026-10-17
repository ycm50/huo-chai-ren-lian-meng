#include "SiteData.h"
#include "SiteDataGet.h"
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
extern "C" unsigned long UNK_004cd588;
extern "C" unsigned long UNK_004cd592;
extern "C" unsigned long _DAT_004aa3dc;
extern "C" unsigned long _UNK_004cd598;
extern "C" unsigned long _UNK_004cd59c;
extern "C" unsigned long g_004aa3dc;
extern "C" unsigned long g_004cd588;
extern "C" unsigned long g_004cd592;
extern "C" unsigned long g_004cd598;
extern "C" unsigned long g_004cd59c;
void SiteData::GetDataFromNet(bool p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  iVar2 = g_004aa3dc;
  *(undefined1 *)(piVar1 + 5) = p1;
  *piVar1 = *(int *)(iVar2 + 0x4aa3b2) + 8;
  iVar2 = ((SiteDataGet *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return;
}

SiteData::~SiteData()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  **(undefined4 **)(&g_004cd592 + g_004cd59c) = 0;
  return;
}
