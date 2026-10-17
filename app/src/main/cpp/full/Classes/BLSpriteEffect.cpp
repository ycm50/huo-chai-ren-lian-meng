#include "BLSpriteEffect.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042ec6c;
extern "C" unsigned long _DAT_0042ec70;
extern "C" unsigned long _DAT_0042ece8;
extern "C" unsigned long _DAT_0042ecec;
extern "C" unsigned long g_0042ec6c;
extern "C" unsigned long g_0042ec70;
extern "C" unsigned long g_0042ece8;
extern "C" unsigned long g_0042ecec;
void BLSpriteEffect::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  return;
}

void BLSpriteEffect::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}


BLSpriteEffect::~BLSpriteEffect()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(g_0042ec6c + 0x42ec12);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x284;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSpriteEffect"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSpriteEffect::BLSpriteEffect()
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
  iVar2 = *(int *)(g_0042ece8 + 0x42ec9a);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x284;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLSpriteEffect"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSpriteEffect::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1b4)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
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
bool BLSpriteEffect::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}
