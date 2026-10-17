#include "MeteorSprite.h"
#include "CCNode.h"
#include "CCGeometry.h"
#include "CCObject.h"
#include "CCSprite.h"
#include "CCSpriteFrameCache.h"
#include "CCString.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long _DAT_0042ef34;
extern "C" unsigned long _DAT_0042efdc;
extern "C" unsigned long _DAT_0042f00c;
extern "C" unsigned long _DAT_0042f010;
extern "C" unsigned long _DAT_0042f014;
extern "C" unsigned long _DAT_0042f098;
extern "C" unsigned long _DAT_0042f0c8;
extern "C" unsigned long g_0042ef34;
extern "C" unsigned long g_0042efdc;
extern "C" unsigned long g_0042f00c;
extern "C" unsigned long g_0042f010;
extern "C" unsigned long g_0042f014;
extern "C" unsigned long g_0042f098;
extern "C" unsigned long g_0042f0c8;
MeteorSprite::~MeteorSprite()
{
  int iVar1;
  
  iVar1 = *(int *)(g_0042ef34 + 0x42ef10);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x244;
  *(int *)((int)this + 4*(0x3d)) = iVar1 + 0x284;
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


bool MeteorSprite::init()
{
  undefined4 p4 = 0;

  int iVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(int *)this + 0x1dc);
  iVar1 = (*pcVar3)(((int)this),((intptr_t)"liuxing0.png"),*(int *)this,pcVar3,p4);
  if (iVar1 != 0) {
    0 /* ctorZero */;
    iVar2 = func_0079e5fc();
    *(int *)((int)this + 4*(0x71)) = iVar2;
  }
  return iVar1;
}

int * MeteorSprite::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x1c8)));
  (void)(((long long)::memset((void *)(piVar1),(int)(0),(size_t)(0x1c8))));
  0 /* ctorZero */;
  /* VPTR_FIX2 (读取形式) 略过 */;
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

void MeteorSprite::setNextNeedCount(int p1)
{
  *(undefined4 *)(((int)this) + 0x1c0) = p1;
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void MeteorSprite::update(float p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x6f)));
  *(int *)((int)this + 4*(0x6f)) = iVar3 + 1;
  if (iVar3 + 1 == 10) {
    (**(code **)(*(int *)this + 0x90))(((int)this),0,p3,*(code **)(*(int *)this + 0x90),p4);
  }
  if (*(int *)((int)this + 4*(0x6f)) < 10) {
    uVar1 = (undefined4)(intptr_t)(cocos2d::CCString::createWithFormat((char const*)((intptr_t)"liuxing%d.png"), *(int *)((int)this + 4*(0x6f)) + -1));
    uVar2 = (undefined4)(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache());
    uVar1 = (undefined4)(((cocos2d::CCString *)uVar1)->getCString());
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCSpriteFrameCache *)uVar2)->spriteFrameByName((char const*)uVar1));
    if (iVar3 != 0) {
      (**(code **)(*(int *)this + 0x20c))(((int)this));
    }
  }
  if ((10 < *(int *)((int)this + 4*(0x6f))) && (*(int *)((int)this + 4*(0x6f)) + -0xb == *(int *)((int)this + 4*(0x71)))) {
    *(int *)((int)this + 4*(0x71)) = *(int *)((int)this + 4*(0x70));
    (**(code **)(*(int *)this + 0x4c))(((int)this),((int)this) + 0x6d);
    (**(code **)(*(int *)this + 0x90))(((int)this),1);
    *(int *)((int)this + 4*(0x6f)) = 0;
  }
  return;
}

void MeteorSprite::setNextPosition(cocos2d::CCPoint p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void MeteorSprite::onEnter()
{
  ((cocos2d::CCNode *)this)->onEnter();
  ((cocos2d::CCNode *)(0x14))->schedule(0 /*memptr*/, g_0042f0c8);
  return;
}

void MeteorSprite::onExit()
{
  ((cocos2d::CCNode *)this)->onExit();
  ((cocos2d::CCNode *)(0x14))->unschedule(0 /*memptr*/);
  return;
}
