#include "JianShengSkinUI.h"
#include "BLJianShengSkinView.h"
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
extern "C" unsigned long UNK_0055161e;
extern "C" unsigned long UNK_0055170c;
extern "C" unsigned long UNK_0055170e;
extern "C" unsigned long _DAT_004e7ea4;
extern "C" unsigned long _UNK_0055162c;
extern "C" unsigned long _UNK_00551728;
extern "C" unsigned long _UNK_0055172c;
extern "C" unsigned long g_004e7ea4;
extern "C" unsigned long g_0055161e;
extern "C" unsigned long g_0055162c;
extern "C" unsigned long g_0055170c;
extern "C" unsigned long g_0055170e;
extern "C" unsigned long g_00551728;
extern "C" unsigned long g_0055172c;
int * JianShengSkinUI::create()
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x28)));
  0 /* ctorZero */;
  *piVar1 = *(int *)(g_004e7ea4 + 0x4e7e26) + 8;
  uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)&uStack_20 = ((cocos2d::CCDirector *)uVar2)->getWinSize();
  piVar3 = (int *)((BLJianShengSkinView *)this)->create();
  piVar1[9] = (int)piVar3;
  iVar5 = (int)*(int *)&(*piVar3);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(0x3f000000)))));
  (**(code **)(iVar5 + 0x54))(piVar3,uVar2,uVar4);
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

JianShengSkinUI::~JianShengSkinUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void JianShengSkinUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0055170c + g_0055172c),
                              *(undefined4 *)(&g_0055170e + g_00551728),0), iVar1 != 0)) {
    piVar2 = (int *)((BLJianShengSkinView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
