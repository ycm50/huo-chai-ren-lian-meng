#include "NormalWinUi.h"
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
extern "C" unsigned long UNK_0066717c;
extern "C" unsigned long UNK_0066717e;
extern "C" unsigned long UNK_006671aa;
extern "C" unsigned long _DAT_004e8ac8;
extern "C" unsigned long _UNK_00667198;
extern "C" unsigned long _UNK_0066719c;
extern "C" unsigned long _UNK_006671b8;
extern "C" unsigned long g_004e8ac8;
extern "C" unsigned long g_0066717c;
extern "C" unsigned long g_0066717e;
extern "C" unsigned long g_00667198;
extern "C" unsigned long g_0066719c;
extern "C" unsigned long g_006671aa;
extern "C" unsigned long g_006671b8;
NormalWinUi::NormalWinUi()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)&uStack_28 = ((cocos2d::CCDirector *)uVar1)->getWinSize();
  piVar2 = (int *)((long long)::operator new((size_t)(0x170)));
  0 /* ctorZero */;
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar3 == 0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar2 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar2)->autorelease();
  }
  *(int *)((int)this + 4*(9)) = (int)piVar2;
  pcVar5 = *(code **)(*piVar2 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar2,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(6)) + 200))((int *)*(int *)((int)this + 4*(6)),*(int *)((int)this + 4*(9)));
  return;
}

int * NormalWinUi::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x28)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

void NormalWinUi::tick(float p1)
{
  int iVar1;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_0066717c + g_0066719c),
                              *(undefined4 *)(&g_0066717e + g_00667198),0), iVar1 != 0)) {
    (**(code **)(**(int **)(iVar1 + 0x108) + 0x18))(*(int **)(iVar1 + 0x108),p1);
  }
  return;
}

NormalWinUi::~NormalWinUi()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  UIObject::~UIObject();
  return;
}
