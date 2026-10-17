#include "BLLuckyDrawResultUI.h"
#include "UIObject.h"
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
extern "C" unsigned long UNK_004e1f26;
extern "C" unsigned long _DAT_004e7ac4;
extern "C" unsigned long _UNK_004e1f34;
extern "C" unsigned long g_004e1f26;
extern "C" unsigned long g_004e1f34;
extern "C" unsigned long g_004e7ac4;
void BLLuckyDrawResultUI::tick(float p1)
{
  return;
}

BLLuckyDrawResultUI::~BLLuckyDrawResultUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int * BLLuckyDrawResultUI::create()
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x28)));
  0 /* ctorZero */;
  *piVar1 = *(int *)(g_004e7ac4 + 0x4e7a4c) + 8;
  piVar2 = (int *)((long long)::operator new((size_t)(0x118)));
  0 /* ctorZero */;
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar3 == 0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar2 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar2)->autorelease();
  }
  piVar1[9] = (int)piVar2;
  (**(code **)(*(int *)piVar1[6] + 200))();
  iVar3 = (**(code **)(*piVar1 + 0x38))(piVar1);
  if (iVar3 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}
