#include "BLHeroSprite.h"
#include "BLLanguage.h"
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
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT13(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042d7c0;
extern "C" unsigned long _DAT_0042d7c4;
extern "C" unsigned long _DAT_0042d83c;
extern "C" unsigned long _DAT_0042d840;
extern "C" unsigned long _DAT_0042dc38;
extern "C" unsigned long _DAT_0042dc3c;
extern "C" unsigned long _DAT_0042dc40;
extern "C" unsigned long _DAT_0042dc44;
extern "C" unsigned long _DAT_0042dc48;
extern "C" unsigned long _DAT_0042dc4c;
extern "C" unsigned long _DAT_0042dc50;
extern "C" unsigned long _DAT_0042dc54;
extern "C" unsigned long _DAT_0042dc58;
extern "C" unsigned long _DAT_0042dc5c;
extern "C" unsigned long _DAT_0042dc60;
extern "C" unsigned long _DAT_0042dc64;
extern "C" unsigned long _DAT_0042dc68;
extern "C" unsigned long _DAT_0042dc6c;
extern "C" unsigned long _DAT_0042dc70;
extern "C" unsigned long _DAT_0042dc74;
extern "C" unsigned long _DAT_0042dc78;
extern "C" unsigned long _DAT_0042dc7c;
extern "C" unsigned long _DAT_0042dc80;
extern "C" unsigned long _DAT_0042dc84;
extern "C" unsigned long _DAT_0042ddb0;
extern "C" unsigned long _DAT_0042ddb4;
extern "C" unsigned long _DAT_0042ddb8;
extern "C" unsigned long _DAT_0042ddbc;
extern "C" unsigned long _DAT_0042dfa8;
extern "C" unsigned long _DAT_0042dfac;
extern "C" unsigned long _DAT_0042dfb0;
extern "C" unsigned long _DAT_0042dfb4;
extern "C" unsigned long _DAT_0042dfb8;
extern "C" unsigned long _DAT_0042dfbc;
extern "C" unsigned long _DAT_0042dfc0;
extern "C" unsigned long g_0042d7c0;
extern "C" unsigned long g_0042d7c4;
extern "C" unsigned long g_0042d83c;
extern "C" unsigned long g_0042d840;
extern "C" unsigned long g_0042dc38;
extern "C" unsigned long g_0042dc3c;
extern "C" unsigned long g_0042dc40;
extern "C" unsigned long g_0042dc44;
extern "C" unsigned long g_0042dc48;
extern "C" unsigned long g_0042dc4c;
extern "C" unsigned long g_0042dc50;
extern "C" unsigned long g_0042dc54;
extern "C" unsigned long g_0042dc58;
extern "C" unsigned long g_0042dc5c;
extern "C" unsigned long g_0042dc60;
extern "C" unsigned long g_0042dc64;
extern "C" unsigned long g_0042dc68;
extern "C" unsigned long g_0042dc6c;
extern "C" unsigned long g_0042dc70;
extern "C" unsigned long g_0042dc74;
extern "C" unsigned long g_0042dc78;
extern "C" unsigned long g_0042dc7c;
extern "C" unsigned long g_0042dc80;
extern "C" unsigned long g_0042dc84;
extern "C" unsigned long g_0042ddb0;
extern "C" unsigned long g_0042ddb4;
extern "C" unsigned long g_0042ddb8;
extern "C" unsigned long g_0042ddbc;
extern "C" unsigned long g_0042dfa8;
extern "C" unsigned long g_0042dfac;
extern "C" unsigned long g_0042dfb0;
extern "C" unsigned long g_0042dfb4;
extern "C" unsigned long g_0042dfb8;
extern "C" unsigned long g_0042dfbc;
extern "C" unsigned long g_0042dfc0;
void BLHeroSprite::onExit()
{
  return;
}

BLHeroSprite::~BLHeroSprite()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(g_0042d7c0 + 0x42d764);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x284;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLHeroSprite"),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLHeroSprite::BLHeroSprite()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0042d83c + 0x42d7ec);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x284;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLHeroSprite"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}



bool BLHeroSprite::init()
{
  int iVar1;
  
  iVar1 = ((cocos2d::CCSprite *)this)->init();
  if (iVar1 != 0) {
    BLHeroSprite::initWithView();
  }
  return iVar1;
}

void BLHeroSprite::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  return;
}

int * BLHeroSprite::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1c8)));
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

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLHeroSprite::initWithView()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroSprite::updateInfo(std::string p1, int p2, std::string * p3, int p4, long p5)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
