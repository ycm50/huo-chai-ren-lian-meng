#include "PKHallUI.h"
#include "DataManager.h"
#include "PKHallView.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" unsigned long UNK_0061c17a;
extern "C" unsigned long UNK_0061c1ca;
extern "C" unsigned long _DAT_004e58f0;
extern "C" unsigned long _UNK_0061c1bc;
extern "C" unsigned long _UNK_0061c1d8;
extern "C" unsigned long g_004e58f0;
extern "C" unsigned long g_0061c17a;
extern "C" unsigned long g_0061c1bc;
extern "C" unsigned long g_0061c1ca;
extern "C" unsigned long g_0061c1d8;
int * PKHallUI::create()
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
  *piVar1 = *(int *)(g_004e58f0 + 0x4e5872) + 8;
  uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)&uStack_20 = ((cocos2d::CCDirector *)uVar2)->getWinSize();
  piVar3 = (int *)((PKHallView *)this)->create();
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

void PKHallUI::tick(float p1)
{
  int *piVar1;
  code *pcVar2;
  undefined1 auStack_24 [4];
  char *pcStack_20;
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  (**(code **)(*piVar1 + 0x160))(&pcStack_20,piVar1);
  if (*pcStack_20 != '\0') {
    (**(code **)(**(int **)(*(int *)(((int)this) + 0x24) + 0x13c) + 0x234))();
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
    pcVar2 = *(code **)(*piVar1 + 0x164);
    func_0079e45c(auStack_1c,&g_0061c17a + g_0061c1bc,auStack_24);
    (*pcVar2)(piVar1,auStack_1c);
    func_0079e2bc(auStack_1c);
  }
  piVar1 = *(int **)(*(int *)(((int)this) + 0x24) + 0x108);
  (**(code **)(*piVar1 + 0x18))(piVar1,p1);
  func_0079e2bc(&pcStack_20);
  return;
}

PKHallUI::~PKHallUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~UIObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}
