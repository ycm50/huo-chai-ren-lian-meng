#include "CarSetUI.h"
#include "CarSetView.h"
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
extern "C" unsigned long UNK_006c4670;
extern "C" unsigned long UNK_006c4672;
extern "C" unsigned long UNK_006c46a2;
extern "C" unsigned long _DAT_004e9088;
extern "C" unsigned long _UNK_006c4690;
extern "C" unsigned long _UNK_006c4694;
extern "C" unsigned long _UNK_006c46b0;
extern "C" unsigned long g_004e9088;
extern "C" unsigned long g_006c4670;
extern "C" unsigned long g_006c4672;
extern "C" unsigned long g_006c4690;
extern "C" unsigned long g_006c4694;
extern "C" unsigned long g_006c46a2;
extern "C" unsigned long g_006c46b0;
CarSetUI::CarSetUI()
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
  piVar2 = (int *)((CarSetView *)this)->create();
  *(int *)((int)this + 4*(9)) = (int)piVar2;
  iVar4 = (int)*(int *)&(*piVar2);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_20),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(0x3f000000)))));
  (**(code **)(iVar4 + 0x54))(piVar2,uVar1,uVar3);
  (**(code **)(*(int *)*(int *)((int)this + 4*(6)) + 200))((int *)*(int *)((int)this + 4*(6)),*(int *)((int)this + 4*(9)));
  return;
}

void CarSetUI::tick(float p1)
{
  int *piVar1;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (piVar1 = (int *)func_0079e55c(*(int *)(((int)this) + 0x24),
                                      *(undefined4 *)(&g_006c4670 + g_006c4694),
                                      *(undefined4 *)(&g_006c4672 + g_006c4690),0),
     piVar1 != (int *)0x0)) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x1f8))();
    (**(code **)(*piVar1 + 0x18))(piVar1,p1);
  }
  return;
}

CarSetUI::~CarSetUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  UIObject::~UIObject();
  return;
}
