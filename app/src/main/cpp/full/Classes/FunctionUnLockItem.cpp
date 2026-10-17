#include "FunctionUnLockItem.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" unsigned long UNK_00561dfc;
extern "C" unsigned long UNK_00561ed6;
extern "C" unsigned long _UNK_00561e34;
extern "C" unsigned long _UNK_00561efc;
extern "C" unsigned long g_00561dfc;
extern "C" unsigned long g_00561e34;
extern "C" unsigned long g_00561ed6;
extern "C" unsigned long g_00561efc;
cocos2d::CCArray* FunctionUnLockItem::getUnLock() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x14));
}

void FunctionUnLockItem::setUnLock(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* FunctionUnLockItem::getNPCID() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x18));
}

void FunctionUnLockItem::setNPCID(cocos2d::CCArray* p1)
{
  if (*(int *)(((int)this) + 0x18) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x18) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  }
  return;
}

FunctionUnLockItem::~FunctionUnLockItem()
{
  /* VPTR_FIX(R87): vptr=(&g_A+g_B)+8 ?? g_ ?? 0 ?? -> ???? SEGV?????? vptr???? */;
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  if (*(int *)((int)this + 4*(6)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(6)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void FunctionUnLockItem::initWithDic(cocos2d::CCDictionary* p1)
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
FunctionUnLockItem::FunctionUnLockItem()
{
  int iVar1;
  
  0 /* ctorZero */;
  *(int *)this = *(int *)((unsigned char *)((char *)&g_00561ed6 + (intptr_t)(g_00561efc))) + 8;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(5)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(6)) = 0;
  return;
}
