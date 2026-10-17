#include "BLLuckyDrawUI.h"
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
extern "C" long long func_0079e55c(...);
extern "C" unsigned long UNK_0058901c;
extern "C" unsigned long UNK_0058901e;
extern "C" unsigned long UNK_0058904a;
extern "C" unsigned long _DAT_004e7998;
extern "C" unsigned long _UNK_00589038;
extern "C" unsigned long _UNK_0058903c;
extern "C" unsigned long _UNK_00589058;
extern "C" unsigned long g_004e7998;
extern "C" unsigned long g_0058901c;
extern "C" unsigned long g_0058901e;
extern "C" unsigned long g_00589038;
extern "C" unsigned long g_0058903c;
extern "C" unsigned long g_0058904a;
extern "C" unsigned long g_00589058;
int * BLLuckyDrawUI::create()
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x28)));
  0 /* ctorZero */;
  *piVar1 = *(int *)(g_004e7998 + 0x4e7920) + 8;
  piVar2 = (int *)((long long)::operator new((size_t)(0x150)));
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

void BLLuckyDrawUI::tick(float p1)
{
  int iVar1;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0058901c + g_0058903c),
                              *(undefined4 *)(&g_0058901e + g_00589038),0), iVar1 != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x108) + 0x18))(*(int **)(iVar1 + 0x108),p1);
  }
  return;
}

BLLuckyDrawUI::~BLLuckyDrawUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}
