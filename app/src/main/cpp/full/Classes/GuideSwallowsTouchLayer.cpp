#include "GuideSwallowsTouchLayer.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "GuideLayer.h"
#include "GuideStep.h"
#include "BLRoleBase.h"
#include "GuideManager.h"
#include "GuideMaskSprite.h"
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
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e6d0(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0056592e;
extern "C" unsigned long UNK_00565988;
extern "C" unsigned long UNK_005659b0;
extern "C" unsigned long UNK_00565abc;
extern "C" unsigned long UNK_00565b34;
extern "C" unsigned long UNK_00565b3c;
extern "C" unsigned long _UNK_00565978;
extern "C" unsigned long _UNK_0056598c;
extern "C" unsigned long _UNK_005659b4;
extern "C" unsigned long _UNK_00565b28;
extern "C" unsigned long _UNK_00565b2c;
extern "C" unsigned long _UNK_00565e80;
extern "C" unsigned long _UNK_00565e84;
extern "C" unsigned long _UNK_00565e88;
extern "C" unsigned long _UNK_00565e8c;
extern "C" unsigned long _UNK_00565e90;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_0056592e;
extern "C" unsigned long g_00565978;
extern "C" unsigned long g_00565988;
extern "C" unsigned long g_0056598c;
extern "C" unsigned long g_005659b0;
extern "C" unsigned long g_005659b4;
extern "C" unsigned long g_00565abc;
extern "C" unsigned long g_00565b28;
extern "C" unsigned long g_00565b2c;
extern "C" unsigned long g_00565b34;
extern "C" unsigned long g_00565b3c;
extern "C" unsigned long g_00565e80;
extern "C" unsigned long g_00565e84;
extern "C" unsigned long g_00565e88;
extern "C" unsigned long g_00565e8c;
extern "C" unsigned long g_00565e90;
int * GuideSwallowsTouchLayer::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x140)));
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

GuideStep* GuideSwallowsTouchLayer::getStep() const
{
  return (GuideStep*)(*(undefined4 *)(((int)this) + 0x108));
}

GuideLayer* GuideSwallowsTouchLayer::getGuideLayer() const
{
  return (GuideLayer*)(*(undefined4 *)(((int)this) + 0x10c));
}

GuideMaskSprite* GuideSwallowsTouchLayer::getGuideMaskSprite() const
{
  return (GuideMaskSprite*)(*(undefined4 *)(((int)this) + 0x110));
}

void GuideSwallowsTouchLayer::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void GuideSwallowsTouchLayer::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void GuideSwallowsTouchLayer::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

GuideSwallowsTouchLayer::~GuideSwallowsTouchLayer()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_0056592e + g_00565978);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x220;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x250;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x25c;
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void GuideSwallowsTouchLayer::setStep(GuideStep* p1)
{
  if (*(int *)(((int)this) + 0x108) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x108) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  }
  return;
}

void GuideSwallowsTouchLayer::setGuideMaskSprite(GuideMaskSprite* p1)
{
  if (*(int *)(((int)this) + 0x110) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x110) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x110) = (undefined4)(intptr_t)p1;
  }
  return;
}

void GuideSwallowsTouchLayer::setGuideLayer(GuideLayer* p1)
{
  if (*(int *)(((int)this) + 0x10c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x10c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x10c) = (undefined4)(intptr_t)p1;
  }
  return;
}



bool GuideSwallowsTouchLayer::init()
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    piVar2 = (int *)((long long)::operator new((size_t)(0x168)));
    0 /* ctorZero */;
    iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
    if (iVar3 == 0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar2 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar2)->autorelease();
    }
    *(int *)((int)this + 4*(0x44)) = (int)piVar2;
    (**(code **)(*(int *)this + 200))(((int)this));
  }
  return iVar1;
}

void GuideSwallowsTouchLayer::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4, 0xffffff7f, 1);
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void GuideSwallowsTouchLayer::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
bool GuideSwallowsTouchLayer::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar3 = (undefined4)(0);
  iStack_20 = (undefined4)(intptr_t)((int *)((int)this));
  if (*(int *)(((int)this) + 0x108) != 0) {
    uStack_1c = (undefined4)(p1);
    uStack_18 = (undefined4)(p2);
    if ((*(int **)(((int)this) + 0x10c) == (int *)0x0) ||
       (iVar2 = (**(code **)(**(int **)(((int)this) + 0x10c) + 0x200))(), iVar2 == 0)) {
      piVar1 = (int *)((GuideManager *)this)->shareManager();
      iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0xa8)))());
      if (iVar2 == 0) {
        iVar2 = (undefined4)(intptr_t)((**(code **)(**(int **)(((int)this) + 0x108) + 0x70))());
        if (iVar2 == 4) {
          ((GuideManager *)this)->shareManager();
          ((GuideManager *)this)->nextStep();
          uVar3 = (undefined4)(0);
        }
        else {
          *(CCPoint *)(&iStack_20) = ((cocos2d::CCTouch *)(p1))->getLocation();
          uVar3 = (undefined4)(((cocos2d::CCRect *)(((int)this) + 0x130))->containsPoint(*(cocos2d::CCPoint const*)&iStack_20));
          uVar3 = (undefined4)((uVar3 ^ 1) & 0xff);
        }
        goto code_r0x00565a26;
      }
    }
    uVar3 = (undefined4)(1);
  }
code_r0x00565a26:
  return ghidra_CONCAT44(iStack_20,uVar3);
}

GuideSwallowsTouchLayer::GuideSwallowsTouchLayer()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void GuideSwallowsTouchLayer::refreshStep(GuideStep* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
