#include "BLSpeed.h"
#include "CCAction.h"
#include "CCZone.h"
#include "CCObject.h"
#include "CCNode.h"
#include "CCActionInterval.h"
#include "CCInvocation.h"
#include "BLLeakUtils.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e51c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5ec(...);
extern "C" long long func_0079e864(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042e0ec;
extern "C" unsigned long _DAT_0042e0f0;
extern "C" unsigned long _DAT_0042e1f0;
extern "C" unsigned long _DAT_0042e1f4;
extern "C" unsigned long _DAT_0042e238;
extern "C" unsigned long _DAT_0042e23c;
extern "C" unsigned long _DAT_0042e240;
extern "C" unsigned long _DAT_0042e244;
extern "C" unsigned long _DAT_0042e248;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_0042e0ec;
extern "C" unsigned long g_0042e0f0;
extern "C" unsigned long g_0042e1f0;
extern "C" unsigned long g_0042e1f4;
extern "C" unsigned long g_0042e238;
extern "C" unsigned long g_0042e23c;
extern "C" unsigned long g_0042e240;
extern "C" unsigned long g_0042e244;
extern "C" unsigned long g_0042e248;
bool BLSpeed::getISPause() const
{
  return *(undefined1 *)(((int)this) + 0x34);
}

void BLSpeed::setISPause(bool p1)
{
  *(undefined1 *)(((int)this) + 0x34) = p1;
  return;
}

cocos2d::extension::CCInvocation* BLSpeed::getFrameInvocation() const
{
  return (cocos2d::extension::CCInvocation*)(*(undefined4 *)(((int)this) + 0x38));
}

cocos2d::extension::CCInvocation* BLSpeed::getFpsChange() const
{
  return (cocos2d::extension::CCInvocation*)(*(undefined4 *)(((int)this) + 0x3c));
}


void BLSpeed::setFpsChange(cocos2d::extension::CCInvocation* p1)
{
  if (*(int *)(((int)this) + 0x3c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x3c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x3c) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLSpeed::setFrameInvocation(cocos2d::extension::CCInvocation* p1)
{
  if (*(int *)(((int)this) + 0x38) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x38) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x38) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLSpeed::stop()
{
  (**(code **)(**(int **)(((int)this) + 0x24) + 0x20))();
  ((cocos2d::CCAction *)((int)this))->stop();
  return;
}


BLSpeed::~BLSpeed()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0xf)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xf)) = 0;
  }
  if (*(int *)((int)this + 4*(0xe)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xe)) = 0;
  }
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSpeed"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCAction(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLSpeed::BLSpeed()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0042e1f0 + 0x42e19e);
  *(int *)((int)this + 4*(8)) = 0;
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(9)) = 0;
  *(undefined1 *)(((int)this) + 0xd) = 0;
  *(int *)((int)this + 4*(10)) = 0;
  *(int *)((int)this + 4*(0xb)) = 0;
  *(int *)((int)this + 4*(0xc)) = 0;
  *(int *)((int)this + 4*(0xf)) = 0;
  *(int *)((int)this + 4*(0xe)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSpeed"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}





void BLSpeed::setInnerAction(cocos2d::CCActionInterval* p1)
{
  if (*(int *)(((int)this) + 0x24) != (int)(intptr_t)p1) {
    if (*(int *)(((int)this) + 0x24) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
  }
  return;
}

void BLSpeed::pause(int p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = p1;
  return;
}

void BLSpeed::changeFps(float p1, float p2)
{
  *(undefined4 *)(((int)this) + 0x20) = p1;
  *(undefined4 *)(((int)this) + 0x30) = p2;
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
bool BLSpeed::isDone()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLSpeed::startWithTarget(cocos2d::CCNode* p1)
{
  undefined4 p4 = 0;

  undefined4 extraout_r2;
  code *pcVar1;
  
  ((cocos2d::CCAction *)this)->startWithTarget((cocos2d::CCNode*)0);
  pcVar1 = *(code **)(**(int **)(((int)this) + 0x24) + 0x1c);
  (*pcVar1)(*(int **)(((int)this) + 0x24),p1,extraout_r2,pcVar1,p4);
  return;
}

void BLSpeed::step(float p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x30));
  iVar1 = (undefined4)(intptr_t)(func_0079e4ec(uVar2,0,p3,p4,p4));
  if (iVar1 != 0) {
    uVar2 = (undefined4)(func_0079e57c(uVar2,p1));
    *(undefined4 *)(((int)this) + 0x30) = uVar2;
  }
  if (*(char *)(((int)this) + 0x34) == '\0') {
    if (*(int *)(((int)this) + 0x2c) < 1) {
      iVar1 = (undefined4)(intptr_t)(func_0079e51c(*(undefined4 *)(((int)this) + 0x30),0));
      if (iVar1 != 0) {
        uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x28));
        iVar1 = (undefined4)(intptr_t)(func_0079e5ec(*(undefined4 *)(((int)this) + 0x20),uVar2));
        if (iVar1 == 0) {
          *(undefined4 *)(((int)this) + 0x20) = uVar2;
          if (*(int *)(((int)this) + 0x3c) != 0) {
            ((cocos2d::extension::CCInvocation *)(*(int *)(((int)this) + 0x3c)))->invoke(0);
          }
        }
      }
      uVar2 = (undefined4)(func_0079e4dc(*(undefined4 *)(((int)this) + 0x28),*(undefined4 *)(((int)this) + 0x20)));
      uVar2 = (undefined4)(func_0079e4fc(uVar2,p1));
      (**(code **)(**(int **)(((int)this) + 0x24) + 0x24))(*(int **)(((int)this) + 0x24),uVar2);
    }
    else {
      iVar1 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x2c) + -1);
      *(int *)(((int)this) + 0x2c) = iVar1;
      if ((iVar1 == 0) && (*(int *)(((int)this) + 0x38) != 0)) {
        ((cocos2d::extension::CCInvocation *)this)->invoke((cocos2d::CCObject*)0);
      }
    }
  }
  return;
}

void BLSpeed::initWithAction(cocos2d::CCActionInterval* p1, float p2)
{
  int iVar1;
  
  iVar1 = (undefined4)(intptr_t)((int *)((int)this));
  if ((int)(intptr_t)p1 == 0) {
    0 /* ctorZero */;
    iVar1 = (undefined4)(intptr_t)(((intptr_t)"initWithAction"));
    func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),((intptr_t)"jni/../../Classes/animation/BLSpeed.cpp"),
                    iVar1,0x24);
  }
  ((cocos2d::CCObject *)p1)->retain();
  *(int *)(((int)this) + 0x24) = (undefined4)(intptr_t)p1;
  *(undefined4 *)(((int)this) + 0x20) = p2;
  *(undefined4 *)(((int)this) + 0x28) = p2;
  return;
}

cocos2d::CCObject* BLSpeed::copyWithZone(cocos2d::CCZone* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

int * BLSpeed::create(cocos2d::CCActionInterval* p1, float p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

cocos2d::CCActionInterval* BLSpeed::reverse()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}
