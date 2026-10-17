#include "BLPack4399UI.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "BLPack4399View.h"
#include "UIObject.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long UNK_00556b46;
extern "C" unsigned long UNK_00556c48;
extern "C" unsigned long UNK_00556c4a;
extern "C" unsigned long _DAT_004e8290;
extern "C" unsigned long _UNK_00556b54;
extern "C" unsigned long _UNK_00556c64;
extern "C" unsigned long _UNK_00556c68;
extern "C" unsigned long g_004e8290;
extern "C" unsigned long g_00556b46;
extern "C" unsigned long g_00556b54;
extern "C" unsigned long g_00556c48;
extern "C" unsigned long g_00556c4a;
extern "C" unsigned long g_00556c64;
extern "C" unsigned long g_00556c68;

BLPack4399UI::~BLPack4399UI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLPack4399UI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00556c48 + g_00556c68),
                              *(undefined4 *)(&g_00556c4a + g_00556c64),0), iVar1 != 0)) {
    piVar2 = (int *)((BLPack4399View *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x28))(piVar2,p1);
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
int * BLPack4399UI::create()
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [12];
  
  piVar1 = (int *)::operator new(0x28);
  ::new ((void *)piVar1) UIObject();   /* ALLOC+CTOR_FIX(R120): 类名取自原版 dump（函数+尺寸对齐）*/
  *piVar1 = *(int *)(g_004e8290 + 0x4e820e) + 8;
  uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)(auStack_30) = ((cocos2d::CCDirector *)(uVar2))->getWinSize();
  piVar3 = (int *)((BLPack4399View *)this)->create();
  piVar1[9] = (int)piVar3;
  pcVar5 = *(code **)(*piVar3 + 0x4c);
  ((cocos2d::CCSize *)(auStack_30))->operator/(0x40000000);
  0 /* ctorZero */;
  (*pcVar5)(piVar3,auStack_20);
  (**(code **)(*(int *)piVar1[6] + 200))((int *)piVar1[6],piVar1[9]);
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x38)))(piVar1));
  if (iVar4 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar1))->autorelease();
  }
  return (int *)(piVar1);
}
