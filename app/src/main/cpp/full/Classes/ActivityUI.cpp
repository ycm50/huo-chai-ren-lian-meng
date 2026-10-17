#include "ActivityUI.h"
#include "BLActivityView.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long UNK_004f27ba;
extern "C" unsigned long UNK_004f28c0;
extern "C" unsigned long UNK_004f28c2;
extern "C" unsigned long _DAT_004e3e58;
extern "C" unsigned long _UNK_004f27c8;
extern "C" unsigned long _UNK_004f28dc;
extern "C" unsigned long _UNK_004f28e0;
extern "C" unsigned long g_004e3e58;
extern "C" unsigned long g_004f27ba;
extern "C" unsigned long g_004f27c8;
extern "C" unsigned long g_004f28c0;
extern "C" unsigned long g_004f28c2;
extern "C" unsigned long g_004f28dc;
extern "C" unsigned long g_004f28e0;
ActivityUI::ActivityUI()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)&uStack_20 = ((cocos2d::CCDirector *)uVar1)->getWinSize();
  piVar2 = (int *)((BLActivityView *)this)->create();
  *(int *)((int)this + 4*(9)) = (int)piVar2;
  iVar4 = (int)*(int *)&(*piVar2);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(0x3f000000)))));
  (**(code **)(iVar4 + 0x54))(piVar2,uVar1,uVar3);
  (**(code **)(*(int *)*(int *)((int)this + 4*(6)) + 200))((int *)*(int *)((int)this + 4*(6)),*(int *)((int)this + 4*(9)));
  return;
}

ActivityUI::~ActivityUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  UIObject::~UIObject();
  return;
}

void ActivityUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_004f28c0 + g_004f28e0),
                              *(undefined4 *)(&g_004f28c2 + g_004f28dc),0), iVar1 != 0)) {
    piVar2 = (int *)((BLActivityView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x18))(piVar2,p1);
  }
  return;
}
