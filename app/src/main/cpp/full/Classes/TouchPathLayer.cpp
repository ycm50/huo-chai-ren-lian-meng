#include "TouchPathLayer.h"
#include "CCNode.h"
#include "CCAction.h"
#include "CCAnimation.h"
#include "CCActionInterval.h"
#include "CCActionInstant.h"
#include "CCTextureCache.h"
#include "CCSprite.h"
#include "CCGeometry.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCSpriteBatchNode.h"
#include "CCSpriteFrameCache.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2cc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004e1868;
extern "C" unsigned long UNK_004e1880;
extern "C" unsigned long UNK_004e18ee;
extern "C" unsigned long UNK_004e1948;
extern "C" unsigned long UNK_004e1970;
extern "C" unsigned long UNK_004e1a0a;
extern "C" unsigned long UNK_004e1a58;
extern "C" unsigned long UNK_004e1a62;
extern "C" unsigned long UNK_004e1ab0;
extern "C" unsigned long UNK_004e1ad0;
extern "C" unsigned long UNK_004e1ada;
extern "C" unsigned long _DAT_004e19d8;
extern "C" unsigned long _UNK_004e186c;
extern "C" unsigned long _UNK_004e1884;
extern "C" unsigned long _UNK_004e1938;
extern "C" unsigned long _UNK_004e194c;
extern "C" unsigned long _UNK_004e1974;
extern "C" unsigned long _UNK_004e1a8c;
extern "C" unsigned long _UNK_004e1a90;
extern "C" unsigned long _UNK_004e1a94;
extern "C" unsigned long _UNK_004e1ab4;
extern "C" unsigned long _UNK_004e1b08;
extern "C" unsigned long _UNK_004e1b0c;
extern "C" unsigned long g_004e1868;
extern "C" unsigned long g_004e186c;
extern "C" unsigned long g_004e1880;
extern "C" unsigned long g_004e1884;
extern "C" unsigned long g_004e18ee;
extern "C" unsigned long g_004e1938;
extern "C" unsigned long g_004e1948;
extern "C" unsigned long g_004e194c;
extern "C" unsigned long g_004e1970;
extern "C" unsigned long g_004e1974;
extern "C" unsigned long g_004e19d8;
extern "C" unsigned long g_004e1a0a;
extern "C" unsigned long g_004e1a58;
extern "C" unsigned long g_004e1a62;
extern "C" unsigned long g_004e1a8c;
extern "C" unsigned long g_004e1a90;
extern "C" unsigned long g_004e1a94;
extern "C" unsigned long g_004e1ab0;
extern "C" unsigned long g_004e1ab4;
extern "C" unsigned long g_004e1ad0;
extern "C" unsigned long g_004e1ada;
extern "C" unsigned long g_004e1b08;
extern "C" unsigned long g_004e1b0c;
void TouchPathLayer::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void TouchPathLayer::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

TouchPathLayer::~TouchPathLayer()
{
  int iVar1;
  
  iVar1 = *(int *)(&g_004e18ee + g_004e1938);
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}





void TouchPathLayer::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4, 0xffffff7e, 0);
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void TouchPathLayer::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (5) =====
void TouchPathLayer::removeTouchPath(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  if ((int)(intptr_t)(int)(intptr_t)p1 != 0) {
    (**(code **)(*(int *)(p1) + (0xec)))(p1,1,p3,*(code **)(*(int *)p1 + 0xec),p4);
  }
  return;
}

TouchPathLayer::TouchPathLayer()
{
  int iVar1;
  
  0 /* ctorZero */;
  iVar1 = (undefined4)(intptr_t)(*(int *)(g_004e19d8 + 0x4e1988));
  *(int *)this = iVar1 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar1 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar1 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar1 + 0x244;
  iVar1 = (undefined4)(intptr_t)(cocos2d::CCArray::createWithCapacity((unsigned int)0x14));
  *(int *)((int)this + 4*(0x42)) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(undefined1 *)(((int)this) + 0x43) = 0;
  *(int *)((int)this + 4*(0x44)) = 0;
  return;
}

void TouchPathLayer::addTouchPath(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar1 = (int *)cocos2d::CCSprite::create();
  (**(code **)(*(int *)(piVar1) + (0x40)))(piVar1,0x40800000);
  pcVar4 = *(code **)(*piVar1 + 0x1d0);
  uVar2 = (undefined4)(cocos2d::CCTextureCache::sharedTextureCache());
  uVar2 = (undefined4)(((cocos2d::CCTextureCache *)(uVar2))->textureForKey((char const*)(unsigned char *)((char *)&g_004e1a0a + (intptr_t)(g_004e1a8c))));
  0 /* ctorZero */;
  (*pcVar4)(piVar1,uVar2,&uStack_28);
  *(CCPoint *)(auStack_30) = ((cocos2d::CCTouch *)(p1))->getLocation();
  (**(code **)(*(int *)(piVar1) + (0x4c)))(piVar1,auStack_30);
  (**(code **)(**(int **)(((int)this) + 0x110) + 200))(*(int **)(((int)this) + 0x110),piVar1);
  uVar2 = (undefined4)(0 /* ctorZero */);
  uStack_28 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004e1a62 + (intptr_t)(g_004e1a94))));
  uStack_24 = (undefined4)(0);
  uVar3 = (undefined4)(cocos2d::CCCallFuncO::create((cocos2d::CCObject*)((int)this), 0 /*memptr*/, 0));
  uVar2 = (undefined4)(cocos2d::CCAnimate::create((cocos2d::CCAnimation*)uVar2));
  uVar2 = (undefined4)(cocos2d::CCSequence::create((cocos2d::CCFiniteTimeAction*)uVar2, uVar3, 0));
  ((cocos2d::CCNode *)(piVar1))->runAction((cocos2d::CCAction*)uVar2);
  return;
}

bool TouchPathLayer::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  TouchPathLayer::addTouchPath((cocos2d::CCTouch*)0, (cocos2d::CCEvent*)0);
  return 1;
}

bool TouchPathLayer::init()
{
  undefined4 p2 = 0;

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)((int)this);
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    uVar2 = (undefined4)(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache());
    ((cocos2d::CCSpriteFrameCache *)uVar2)->addSpriteFramesWithFile((char const*)(unsigned char *)((char *)&g_004e1ad0 + (intptr_t)(g_004e1b08)));
    iVar3 = (undefined4)(intptr_t)(cocos2d::CCSpriteBatchNode::create((char const*)(unsigned char *)((char *)&g_004e1ada + (intptr_t)(g_004e1b0c)), (unsigned int)0x1d));
    *(int *)((int)this + 4*(0x44)) = iVar3;
    (**(code **)(*(int *)this + 0xcc))(((int)this),iVar3,100,*(code **)(*(int *)this + 0xcc),piVar4,p2);
    piVar4 = (int *)0x1;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x19c))((int *)*(int *)((int)this + 4*(0x44)),1);
  }
  return ghidra_CONCAT44(piVar4,iVar1);
}
