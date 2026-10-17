#include "PKRankRewardMainUI.h"
#include "PKRankRewardMainView.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long UNK_00621d5a;
extern "C" unsigned long UNK_00621e48;
extern "C" unsigned long UNK_00621e4a;
extern "C" unsigned long _DAT_004e5a30;
extern "C" unsigned long _UNK_00621d68;
extern "C" unsigned long _UNK_00621e64;
extern "C" unsigned long _UNK_00621e68;
extern "C" unsigned long g_004e5a30;
extern "C" unsigned long g_00621d5a;
extern "C" unsigned long g_00621d68;
extern "C" unsigned long g_00621e48;
extern "C" unsigned long g_00621e4a;
extern "C" unsigned long g_00621e64;
extern "C" unsigned long g_00621e68;
int * PKRankRewardMainUI::create()
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x28)));
  0 /* ctorZero */;
  *piVar1 = *(int *)(g_004e5a30 + 0x4e59a2) + 8;
  uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)&uStack_28 = ((cocos2d::CCDirector *)uVar2)->getWinSize();
  piVar3 = (int *)((PKRankRewardMainView *)this)->create();
  piVar1[9] = (int)piVar3;
  pcVar6 = *(code **)(*piVar3 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  (**(code **)(*(int *)piVar1[6] + 200))((int *)piVar1[6],piVar1[9]);
  iVar5 = (**(code **)(*piVar1 + 0x38))(piVar1);
  if (iVar5 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

PKRankRewardMainUI::~PKRankRewardMainUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void PKRankRewardMainUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_00621e48 + g_00621e68),
                              *(undefined4 *)(&g_00621e4a + g_00621e64),0), iVar1 != 0)) {
    piVar2 = (int *)((PKRankRewardMainView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x3c))(piVar2,p1);
  }
  return;
}
