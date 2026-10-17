#include "HttpTarget.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004dbee6;
extern "C" unsigned long UNK_004dbfc6;
extern "C" unsigned long _UNK_004dbf14;
extern "C" unsigned long _UNK_004dbff4;
extern "C" unsigned long g_004dbee6;
extern "C" unsigned long g_004dbf14;
extern "C" unsigned long g_004dbfc6;
extern "C" unsigned long g_004dbff4;
cocos2d::CCObject* HttpTarget::getTarget() const
{
  return (cocos2d::CCObject*)(*(undefined4 *)(((int)this) + 0x14));
}

HttpTarget::~HttpTarget()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  *(int *)((int)this + 4*(6)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void HttpTarget::setTarget(cocos2d::CCObject* p1)
{
  if (*(int *)(((int)this) + 0x14) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x14) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  }
  return;
}

int HttpTarget::create()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  int *piVar1;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x20)));
  0 /* ctorZero */;
  *piVar1 = *(int *)(&g_004dbfc6 + g_004dbff4) + 8;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  ((HttpTarget *)piVar1)->setTarget((cocos2d::CCObject*)((int)this));
  piVar1[6] = p2;
  piVar1[7] = p3;
  ((cocos2d::CCObject *)piVar1)->autorelease();
  return ghidra_CONCAT44(p2,piVar1);
}
