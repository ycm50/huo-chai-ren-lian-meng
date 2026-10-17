#include "MainCityUIUI.h"
#include "UIObject.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" unsigned long UNK_004e1c94;
extern "C" unsigned long UNK_004e1c96;
extern "C" unsigned long UNK_004e1e06;
extern "C" unsigned long _DAT_004e2284;
extern "C" unsigned long _UNK_004e1cb0;
extern "C" unsigned long _UNK_004e1cb4;
extern "C" unsigned long _UNK_004e1e14;
extern "C" unsigned long g_004e1c94;
extern "C" unsigned long g_004e1c96;
extern "C" unsigned long g_004e1cb0;
extern "C" unsigned long g_004e1cb4;
extern "C" unsigned long g_004e1e06;
extern "C" unsigned long g_004e1e14;
extern "C" unsigned long g_004e2284;
void MainCityUIUI::tick(float p1)
{
  int *piVar1;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (piVar1 = (int *)func_0079e55c(*(int *)(((int)this) + 0x24),
                                      *(undefined4 *)(&g_004e1c94 + g_004e1cb4),
                                      *(undefined4 *)(&g_004e1c96 + g_004e1cb0),0),
     piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x200))(piVar1,p1);
  }
  return;
}

MainCityUIUI::~MainCityUIUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  UIObject::~UIObject();
  return;
}

MainCityUIUI::MainCityUIUI()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); uStack_20 = hw_fbits(_ws.width); uStack_1c = hw_fbits(_ws.height); }
  piVar2 = (int *)((long long)::operator new((size_t)(0x110)));
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
  iVar3 = (int)*(int *)&(*piVar2);
  pcVar7 = *(code **)(iVar3 + 0x54);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(0x3f000000)))));
  puVar4 = (undefined4 *)(**(code **)(iVar3 + 0x8c))(piVar2);
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar4),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar5)))));
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(0x3f000000)))));
  piVar2 = (int *)*(int *)((int)this + 4*(9));
  iVar3 = (**(code **)(*piVar2 + 0x8c))(piVar2);
  uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(0x3f000000)))));
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar6)))));
  (*pcVar7)(piVar2,uVar1,uVar5);
  (**(code **)(*(int *)*(int *)((int)this + 4*(6)) + 200))((int *)*(int *)((int)this + 4*(6)),*(int *)((int)this + 4*(9)));
  return;
}

int * MainCityUIUI::create()
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
