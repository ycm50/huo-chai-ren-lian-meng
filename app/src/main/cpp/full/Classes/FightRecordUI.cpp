#include "FightRecordUI.h"
#include "BLFightRecordView.h"
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
extern "C" unsigned long UNK_004c7632;
extern "C" unsigned long UNK_004c7720;
extern "C" unsigned long UNK_004c7722;
extern "C" unsigned long _DAT_004e411c;
extern "C" unsigned long _UNK_004c7640;
extern "C" unsigned long _UNK_004c773c;
extern "C" unsigned long _UNK_004c7740;
extern "C" unsigned long g_004c7632;
extern "C" unsigned long g_004c7640;
extern "C" unsigned long g_004c7720;
extern "C" unsigned long g_004c7722;
extern "C" unsigned long g_004c773c;
extern "C" unsigned long g_004c7740;
extern "C" unsigned long g_004e411c;
FightRecordUI::~FightRecordUI()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  UIObject::~UIObject();
  return;
}

void FightRecordUI::tick(float p1)
{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(((int)this) + 0x24) != 0) &&
     (iVar1 = func_0079e55c(*(int *)(((int)this) + 0x24),
                              *(undefined4 *)(&g_004c7720 + g_004c7740),
                              *(undefined4 *)(&g_004c7722 + g_004c773c),0), iVar1 != 0)) {
    piVar2 = (int *)((BLFightRecordView *)this)->getPresenter();
    (**(code **)(*piVar2 + 0x38))(piVar2,p1);
  }
  return;
}

FightRecordUI::FightRecordUI()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)&uStack_28 = ((cocos2d::CCDirector *)uVar1)->getWinSize();
  piVar2 = (int *)((BLFightRecordView *)this)->create();
  *(int *)((int)this + 4*(9)) = (int)piVar2;
  pcVar4 = *(code **)(*piVar2 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar4)(piVar2,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(6)) + 200))((int *)*(int *)((int)this + 4*(6)),*(int *)((int)this + 4*(9)));
  return;
}
