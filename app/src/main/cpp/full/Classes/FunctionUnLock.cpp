#include "FunctionUnLock.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e55c(...);
extern "C" unsigned long UNK_00561dc4;
extern "C" unsigned long UNK_00561eb6;
extern "C" unsigned long UNK_00561eb8;
extern "C" unsigned long _DAT_00561e8c;
extern "C" unsigned long _UNK_00561df0;
extern "C" unsigned long _UNK_00561ec0;
extern "C" unsigned long _UNK_00561ec4;
extern "C" unsigned long g_00561dc4;
extern "C" unsigned long g_00561df0;
extern "C" unsigned long g_00561e8c;
extern "C" unsigned long g_00561eb6;
extern "C" unsigned long g_00561eb8;
extern "C" unsigned long g_00561ec0;
extern "C" unsigned long g_00561ec4;
FunctionUnLock::~FunctionUnLock()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void FunctionUnLock::judgeUnLockFunction()
{
  ((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x14))->removeAllObjects();
  return;
}

bool FunctionUnLock::init()
{
  return 1;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
FunctionUnLock::FunctionUnLock()
{
  int iVar1;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(5)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  return;
}

void FunctionUnLock::getFunctionDataByType(int p1)
{
  undefined4 p4 = 0;

  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)this)->objectForKey(*(undefined4 *)(((int)this) + 0x14)));
  if (iVar1 != 0) {
    func_0079e55c(iVar1,*(undefined4 *)((unsigned char *)((char *)&g_00561eb6 + (intptr_t)(g_00561ec0))),
                    *(undefined4 *)((unsigned char *)((char *)&g_00561eb8 + (intptr_t)(g_00561ec4))),0,p4);
  }
  return;
}
