#include "BLAttackCommob.h"
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
extern "C" unsigned long UNK_004d84a2;
extern "C" unsigned long UNK_004d87de;
extern "C" unsigned long _UNK_004d84b0;
extern "C" unsigned long _UNK_004d87fc;
extern "C" unsigned long g_004d84a2;
extern "C" unsigned long g_004d84b0;
extern "C" unsigned long g_004d87de;
extern "C" unsigned long g_004d87fc;
BLAttackCommob::~BLAttackCommob()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int * BLAttackCommob::create()
{
  int *piVar1;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1c)));
  0 /* ctorZero */;
  *piVar1 = *(int *)(&g_004d87de + g_004d87fc) + 8;
  piVar1[5] = 0;
  piVar1[6] = 0;
  ((cocos2d::CCObject *)piVar1)->autorelease();
  return (int *)(piVar1);
}
