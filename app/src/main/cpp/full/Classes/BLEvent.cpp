#include "BLEvent.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e834(...);
extern "C" unsigned long _DAT_004bda14;
extern "C" unsigned long _DAT_004bddf8;
extern "C" unsigned long _DAT_004bddfc;
extern "C" unsigned long g_004bda14;
extern "C" unsigned long g_004bddf8;
extern "C" unsigned long g_004bddfc;
BLEventDispatcher* BLEvent::getDispatcher() const
{
  return (BLEventDispatcher*)(*(undefined4 *)(((int)this) + 0x18));
}

void BLEvent::setDispatcher(BLEventDispatcher* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}

void* BLEvent::getData() const
{
  return (void*)(*(undefined4 *)(((int)this) + 0x1c));
}

void BLEvent::setData(void* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

BLEvent::~BLEvent()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  func_0079e2bc(((int)this) + 5);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLEvent::getName() const
{ return *(std::string *)(((int)this) + 0x14); }

void BLEvent::setName(std::string p1)
{
  func_0079e834(((int)this) + 0x14);
  return;
}

int * BLEvent::create()
{
  int *piVar1;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x20)));
  (void)(((long long)::memset((void *)(piVar1),(int)(0),(size_t)(0x20))));
  0 /* ctorZero */;
  *piVar1 = *(int *)(g_004bddf8 + 0x4bddd8) + 8;
  piVar1[5] = *(int *)(g_004bddfc + 0x4bdde2) + 0xc;
  ((cocos2d::CCObject *)piVar1)->autorelease();
  return (int *)(piVar1);
}
