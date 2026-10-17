#include "BLAnimate.h"
#include "CCNotificationCenter.h"
#include "CCArray.h"
#include "CCActionInterval.h"
#include "CCObject.h"
#include "CCAnimation.h"
#include "CCDictionary.h"
#include "BLAnimateData.h"
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
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e794(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7c4(...);
extern "C" long long func_0079e7d4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042c60c;
extern "C" unsigned long _DAT_0042c610;
extern "C" unsigned long _DAT_0042c7a4;
extern "C" unsigned long _DAT_0042c7a8;
extern "C" unsigned long _DAT_0042c7ac;
extern "C" unsigned long _DAT_0042c7b0;
extern "C" unsigned long _DAT_0042c7b4;
extern "C" unsigned long _DAT_0042c7b8;
extern "C" unsigned long _DAT_0042c884;
extern "C" unsigned long _DAT_0042c888;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_0042c60c;
extern "C" unsigned long g_0042c610;
extern "C" unsigned long g_0042c7a4;
extern "C" unsigned long g_0042c7a8;
extern "C" unsigned long g_0042c7ac;
extern "C" unsigned long g_0042c7b0;
extern "C" unsigned long g_0042c7b4;
extern "C" unsigned long g_0042c7b8;
extern "C" unsigned long g_0042c884;
extern "C" unsigned long g_0042c888;
BLAnimateData* BLAnimate::getAnimateData() const
{
  return (BLAnimateData*)(*(undefined4 *)(((int)this) + 0x40));
}

BLAnimate::~BLAnimate()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x10)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLAnimate"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCAnimate(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void BLAnimate::setAnimateData(BLAnimateData* p1)
{
  if (*(int *)(((int)this) + 0x40) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x40) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x40) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLAnimate::BLAnimate()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(0x10)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLAnimate"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLAnimate::create(cocos2d::CCAnimation* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x44))));
  0 /* ctorZero */;
  ((cocos2d::CCAnimate *)uVar1)->initWithAnimation((cocos2d::CCAnimation*)((int)this));
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLAnimate::update(float p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_r3;
  uint uVar8;
  undefined4 uStack_34;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar1 = (undefined4)(intptr_t)(func_0079e7b4(p1,0x3f800000));
  uStack_34 = (undefined4)(p1);
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x2c))(((int)this));
    (**(code **)(*(int *)(piVar2) + (0x38)))();
    uVar3 = (undefined4)(func_0079e794());
    uVar3 = (undefined4)(func_0079e4fc(p1,uVar3));
    uVar8 = (undefined4)(*(int *)((int)this + 4*(0xf)));
    uVar4 = (undefined4)(func_0079e7c4());
    if (uVar8 < uVar4) {
      *(int *)((int)this + 4*(0xd)) = 0;
      *(int *)((int)this + 4*(0xf)) = uVar8 + 1;
    }
    uStack_34 = (undefined4)(func_0079e7d4(uVar3,0x3f800000));
  }
  piVar2 = (int *)(**(code **)(*(int *)this + 0x2c))(((int)this));
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
  uVar4 = (undefined4)(((cocos2d::CCArray *)this)->count());
  uVar8 = (undefined4)(*(int *)((int)this + 4*(0xd)));
  iVar1 = (undefined4)(intptr_t)(uVar8 << 2);
  while( true ) {
    if (uVar4 <= uVar8) {
      return;
    }
    iVar7 = (undefined4)(intptr_t)(*(int *)*(int *)((int)this + 4*(0xc)));
    if ((uint)(((int *)*(int *)((int)this + 4*(0xc)))[1] - iVar7 >> 2) <= uVar8) {
      func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",uVar8);
      iVar7 = (undefined4)(intptr_t)(extraout_r3);
    }
    iVar7 = (undefined4)(intptr_t)(func_0079e51c(*(undefined4 *)(iVar7 + iVar1),uStack_34));
    if (iVar7 == 0) break;
    piVar2 = (int *)((cocos2d::CCArray *)(uVar3))->objectAtIndex((unsigned int)uVar8);
    uVar5 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x18)))());
    (**(code **)(*(int *)*(int *)((int)this + 4*(6)) + 0x20c))((int *)*(int *)((int)this + 4*(6)),uVar5);
    (**(code **)(*(int *)(piVar2) + (0x28)))(piVar2);
    uVar5 = (undefined4)(cocos2d::CCDictionary::create());
    iVar7 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(6)));
    func_0079e45c(auStack_1c,"ANIMATE_TARGET",auStack_20);
    ((cocos2d::CCDictionary *)(uVar5))->setObject((cocos2d::CCObject*)iVar7, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    iVar7 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x10)));
    if (iVar7 != 0) {
      func_0079e45c(auStack_1c,"ANIMATE_DATA",auStack_20);
      ((cocos2d::CCDictionary *)(uVar5))->setObject((cocos2d::CCObject*)iVar7, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
    }
    piVar2 = (int *)func_0079e2fc(0x18);
    0 /* ctorZero */;
    iVar7 = (undefined4)(intptr_t)(g_0042c7b0);
    piVar2[5] = uVar8;
    *piVar2 = *(int *)(iVar7 + 0x42c74a) + 8;
    ((cocos2d::CCObject *)(piVar2))->autorelease();
    func_0079e45c(auStack_1c,"ANIMATE_FRAME_INDEX",auStack_20);
    ((cocos2d::CCDictionary *)(uVar5))->setObject((cocos2d::CCObject*)piVar2, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
    uVar6 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    uVar8 = (undefined4)(uVar8 + 1);
    ((cocos2d::CCNotificationCenter *)(uVar6))->postNotification((char const*)"EVENT_ANIMATE_UPDATE", (cocos2d::CCObject*)uVar5);
    *(int *)((int)this + 4*(0xd)) = uVar8;
    iVar1 = (undefined4)(intptr_t)(iVar1 + 4);
  }
  return;
}
