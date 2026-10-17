#include "SignInData.h"
#include "SignInDataGet.h"
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
extern "C" unsigned long _DAT_00424e40;
extern "C" unsigned long _DAT_00424e44;
extern "C" unsigned long _DAT_004a9808;
extern "C" unsigned long g_00424e40;
extern "C" unsigned long g_00424e44;
extern "C" unsigned long g_004a9808;
SignInData::~SignInData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  **(undefined4 **)(g_00424e44 + 0x424e3a) = 0;
  return;
}

void SignInData::GetDataFromNet(int p1, bool p2)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1c)));
  0 /* ctorZero */;
  iVar2 = g_004a9808;
  *(undefined1 *)(piVar1 + 5) = p2;
  piVar1[6] = p1;
  *piVar1 = *(int *)(iVar2 + 0x4a97dc) + 8;
  iVar2 = ((SignInDataGet *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return;
}
