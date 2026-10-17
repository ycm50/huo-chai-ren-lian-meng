#include "MainEffectUI.h"
#include "BLMainEffectView.h"
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
extern "C" unsigned long UNK_00603106;
extern "C" unsigned long UNK_006031fc;
extern "C" unsigned long UNK_006031fe;
extern "C" unsigned long _DAT_004e6fac;
extern "C" unsigned long _UNK_00603114;
extern "C" unsigned long _UNK_00603218;
extern "C" unsigned long _UNK_0060321c;
extern "C" unsigned long g_004e6fac;
extern "C" unsigned long g_00603106;
extern "C" unsigned long g_00603114;
extern "C" unsigned long g_006031fc;
extern "C" unsigned long g_006031fe;
extern "C" unsigned long g_00603218;
extern "C" unsigned long g_0060321c;
MainEffectUI::MainEffectUI()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar1)->getWinSize(); uStack_20 = hw_fbits(_ws.width); uStack_1c = hw_fbits(_ws.height); }
  piVar2 = (int *)((BLMainEffectView *)this)->create();
  *(int *)((int)this + 4*(9)) = (int)piVar2;
  iVar7 = (int)*(int *)&(*piVar2);
  pcVar6 = *(code **)(iVar7 + 0x54);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(0x3f000000)))));
  puVar3 = (undefined4 *)(**(code **)(iVar7 + 0x8c))(piVar2);
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar3),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar4)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(0x3f000000)))));
  piVar2 = (int *)*(int *)((int)this + 4*(9));
  iVar7 = (**(code **)(*piVar2 + 0x8c))(piVar2);
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar7 + 4)),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar5)))));
  (*pcVar6)(piVar2,uVar1,uVar4);
  (**(code **)(*(int *)*(int *)((int)this + 4*(6)) + 200))((int *)*(int *)((int)this + 4*(6)),*(int *)((int)this + 4*(9)));
  return;
}

int * MainEffectUI::create()
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

MainEffectUI::~MainEffectUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  UIObject::~UIObject();
  return;
}

void MainEffectUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_006031fc + g_0060321c),
                              *(undefined4 *)(&g_006031fe + g_00603218),0), iVar1 != 0)) {
    piVar2 = (int *)((BLMainEffectView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
