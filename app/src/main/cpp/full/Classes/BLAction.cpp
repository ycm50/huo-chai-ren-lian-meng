#include "BLAction.h"
#include "BLAnimate.h"
#include "BLDebug.h"
#include "BLLeakUtils.h"
#include "BLSpeed.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042c358;
extern "C" unsigned long _DAT_0042c35c;
extern "C" unsigned long _DAT_0042c3e8;
extern "C" unsigned long _DAT_0042c3ec;
extern "C" unsigned long _DAT_0042c4fc;
extern "C" unsigned long _DAT_0042c500;
extern "C" unsigned long _DAT_0042c504;
extern "C" unsigned long _DAT_0042c508;
extern "C" unsigned long g_0042c358;
extern "C" unsigned long g_0042c35c;
extern "C" unsigned long g_0042c3e8;
extern "C" unsigned long g_0042c3ec;
extern "C" unsigned long g_0042c4fc;
extern "C" unsigned long g_0042c500;
extern "C" unsigned long g_0042c504;
extern "C" unsigned long g_0042c508;
BLAnimate* BLAction::getAnimate() const
{
  return (BLAnimate*)(*(undefined4 *)(((int)this) + 0x14));
}

BLAction::~BLAction()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLAction"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLAction::setAnimate(BLAnimate* p1)
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

BLAction::BLAction()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(5)) = 0;
  *(int *)((int)this + 4*(7)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLAction"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLAction::init()
{
  return 1;
}

void BLAction::initWith(char const* p1, int p2, int p3, int p4)
{
  return;
}


void BLAction::setAnimateTime(float p1)
{
  *(undefined4 *)(*(int *)(((int)this) + 0x1c) + 0x20) = p1;
  return;
}

void BLAction::getActionWithCallBack(cocos2d::CCAction* p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  
  uVar1 = (undefined4)(p4);
  if (*(int *)(((int)this) + 0x1c) != 0) {
    ((cocos2d::CCObject *)this)->release();
    p4 = 0;
    *(undefined4 *)(((int)this) + 0x1c) = 0;
  }
  if ((int)(intptr_t)p1 == 0) {
    uVar1 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)*(undefined4 *)(((int)this) + 0x14)));
  }
  else {
    uVar1 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)*(undefined4 *)(((int)this) + 0x14), p1, 0, p4, uVar1));
  }
  uVar1 = (undefined4)(((BLSpeed *)this)->create((cocos2d::CCActionInterval*)uVar1, *(undefined4 *)(((int)this) + 0x18)));
  *(undefined4 *)(((int)this) + 0x1c) = uVar1;
  if (*(int *)(((int)this) + 0x1c) != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  return;
}

int * BLAction::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x20)));
  0 /* ctorZero */;
  iVar2 = ((BLAction *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLAction::initWithAnimata(BLAnimateData* p1, int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
