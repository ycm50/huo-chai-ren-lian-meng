#include "RichTextData.h"
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
extern "C" unsigned long _DAT_00480540;
extern "C" unsigned long _DAT_004805ec;
extern "C" unsigned long _DAT_004805f0;
extern "C" unsigned long _DAT_004805f4;
extern "C" unsigned long _DAT_004805f8;
extern "C" unsigned long g_00480540;
extern "C" unsigned long g_004805ec;
extern "C" unsigned long g_004805f0;
extern "C" unsigned long g_004805f4;
extern "C" unsigned long g_004805f8;
cocos2d::extension::CCInvocation* RichTextData::getInvocation() const
{
  return (cocos2d::extension::CCInvocation*)(*(undefined4 *)(((int)this) + 0x20));
}

cocos2d::CCObject* RichTextData::getUserObject() const
{
  return (cocos2d::CCObject*)(*(undefined4 *)(((int)this) + 0x30));
}

void RichTextData::setUserObject(cocos2d::CCObject* p1)
{
  if (*(int *)(((int)this) + 0x30) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x30) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x30) = (undefined4)(intptr_t)p1;
  }
  return;
}

void RichTextData::setInvocation(cocos2d::extension::CCInvocation* p1)
{
  if (*(int *)(((int)this) + 0x20) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x20) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  }
  return;
}

RichTextData::~RichTextData()
{
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  if (*(int *)((int)this + 4*(0xc)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xc)) = 0;
  }
  func_0079e2bc(((int)this) + 7);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

int * RichTextData::create()
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)((long long)::operator new((size_t)(0x3c)));
  0 /* ctorZero */;
  *piVar2 = *(int *)(g_004805ec + 0x48056e) + 8;
  iVar1 = g_004805f4;
  iVar3 = *(int *)(g_004805f0 + 0x48057e) + 0xc;
  piVar2[6] = iVar3;
  piVar2[7] = iVar3;
  piVar2[5] = 1;
  func_0079e2dc(piVar2 + 6,iVar1 + 0x48058c);
  func_0079e2dc(piVar2 + 7,((intptr_t)"Arial"));
  piVar2[10] = 0x14;
  piVar2[8] = 0;
  *(undefined1 *)(piVar2 + 9) = 0xff;
  *(undefined1 *)((int)piVar2 + 0x25) = 0xff;
  *(undefined1 *)((int)piVar2 + 0x26) = 0xff;
  piVar2[0xb] = 0x3f800000;
  piVar2[0xd] = 0;
  piVar2[0xc] = 0;
  *(undefined1 *)(piVar2 + 0xe) = 0;
  *(undefined1 *)((int)piVar2 + 0x39) = 0;
  ((cocos2d::CCObject *)piVar2)->autorelease();
  return (int *)(piVar2);
}
