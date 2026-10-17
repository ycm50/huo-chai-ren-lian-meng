#include "ActionSeque.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_00446b5c;
extern "C" unsigned long _DAT_00446b60;
extern "C" unsigned long _DAT_00446dc8;
extern "C" unsigned long _DAT_00446dcc;
extern "C" unsigned long _DAT_00446dd0;
extern "C" unsigned long _DAT_00446dd4;
extern "C" unsigned long g_00446b5c;
extern "C" unsigned long g_00446b60;
extern "C" unsigned long g_00446dc8;
extern "C" unsigned long g_00446dcc;
extern "C" unsigned long g_00446dd0;
extern "C" unsigned long g_00446dd4;
ActionSeque::~ActionSeque()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"ActionSeque"),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined8 ActionSeque::create()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = (undefined4)((int *)((int)this));
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  piVar2 = (int *)((long long)::operator new((size_t)(0x24)));
  0 /* ctorZero */;
  iVar1 = (undefined4)(intptr_t)(g_00446dcc);
  *piVar2 = *(int *)(g_00446dc8 + 0x446d5a) + 8;
  piVar2[5] = *(int *)(g_00446dd0 + 0x446d68) + 0xc;
  func_0079e2dc(piVar2 + 5,iVar1 + 0x446d66);
  piVar2[6] = 1;
  piVar2[7] = 0;
  piVar2[8] = 0;
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"ActionSeque"),&uStack_20);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  ((cocos2d::CCObject *)piVar2)->autorelease();
  return ghidra_CONCAT44(uStack_20,piVar2);
}
