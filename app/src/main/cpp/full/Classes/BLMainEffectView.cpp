#include "BLMainEffectView.h"
#include "CCNode.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCDirector.h"
#include "CCSpriteFrameCache.h"
#include "CCGeometry.h"
#include "BLLeakUtils.h"
#include "BLMainEffectPresenter.h"
#include "MeteorSprite.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00602f2c;
extern "C" unsigned long UNK_00602f70;
extern "C" unsigned long UNK_00602fb4;
extern "C" unsigned long UNK_00602fdc;
extern "C" unsigned long UNK_00603022;
extern "C" unsigned long UNK_00603024;
extern "C" unsigned long UNK_00603232;
extern "C" unsigned long UNK_00603340;
extern "C" unsigned long UNK_00603392;
extern "C" unsigned long _DAT_0060319c;
extern "C" unsigned long _DAT_006031a0;
extern "C" unsigned long _UNK_00602fa0;
extern "C" unsigned long _UNK_00602fa4;
extern "C" unsigned long _UNK_00602fb8;
extern "C" unsigned long _UNK_00602fe0;
extern "C" unsigned long _UNK_006030d8;
extern "C" unsigned long _UNK_006030dc;
extern "C" unsigned long _UNK_006030e0;
extern "C" unsigned long _UNK_006030e4;
extern "C" unsigned long _UNK_006030e8;
extern "C" unsigned long _UNK_006030ec;
extern "C" unsigned long _UNK_006030f0;
extern "C" unsigned long _UNK_006030f4;
extern "C" unsigned long _UNK_006030f8;
extern "C" unsigned long _UNK_006032fc;
extern "C" unsigned long _UNK_00603300;
extern "C" unsigned long _UNK_00603304;
extern "C" unsigned long _UNK_00603308;
extern "C" unsigned long _UNK_0060330c;
extern "C" unsigned long _UNK_00603310;
extern "C" unsigned long _UNK_00603314;
extern "C" unsigned long _UNK_00603318;
extern "C" unsigned long _UNK_00603358;
extern "C" unsigned long _UNK_006033a0;
extern "C" unsigned long _UNK_006033a4;
extern "C" unsigned long g_00602f2c;
extern "C" unsigned long g_00602f70;
extern "C" unsigned long g_00602fa0;
extern "C" unsigned long g_00602fa4;
extern "C" unsigned long g_00602fb4;
extern "C" unsigned long g_00602fb8;
extern "C" unsigned long g_00602fdc;
extern "C" unsigned long g_00602fe0;
extern "C" unsigned long g_00603022;
extern "C" unsigned long g_00603024;
extern "C" unsigned long g_006030d8;
extern "C" unsigned long g_006030dc;
extern "C" unsigned long g_006030e0;
extern "C" unsigned long g_006030e4;
extern "C" unsigned long g_006030e8;
extern "C" unsigned long g_006030ec;
extern "C" unsigned long g_006030f0;
extern "C" unsigned long g_006030f4;
extern "C" unsigned long g_006030f8;
extern "C" unsigned long g_0060319c;
extern "C" unsigned long g_006031a0;
extern "C" unsigned long g_00603232;
extern "C" unsigned long g_006032fc;
extern "C" unsigned long g_00603300;
extern "C" unsigned long g_00603304;
extern "C" unsigned long g_00603308;
extern "C" unsigned long g_0060330c;
extern "C" unsigned long g_00603310;
extern "C" unsigned long g_00603314;
extern "C" unsigned long g_00603318;
extern "C" unsigned long g_00603340;
extern "C" unsigned long g_00603358;
extern "C" unsigned long g_00603392;
extern "C" unsigned long g_006033a0;
extern "C" unsigned long g_006033a4;
BLMainEffectView::~BLMainEffectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00602f2c + g_00602fa0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00602f70 + g_00602fa4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


BLMainEffectView::BLMainEffectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_0060319c + 0x60313c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x43)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainEffectView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLMainEffectView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x110)));
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

undefined4 BLMainEffectView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLMainEffectView::initliuxing()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  uVar1 = (undefined4)(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache());
  iVar6 = g_00603300;
  ((cocos2d::CCSpriteFrameCache *)uVar1)->addSpriteFramesWithFile((char const*)&g_00603232 + g_006032fc);
  do {
    piVar2 = (int *)((MeteorSprite *)this)->create();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x11c))(piVar2,iVar6);
      (**(code **)(*(int *)this + 0xcc))(((int)this),piVar2,10);
      (**(code **)(*piVar2 + 0x98))(piVar2,g_00603304);
      uVar1 = (undefined4)(0 /* ctorZero */);
      uVar3 = (undefined4)(0 /* ctorZero */);
      pcVar5 = *(code **)(*piVar2 + 0x4c);
      uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
      *(CCSize *)auStack_30 = ((cocos2d::CCDirector *)uVar4)->getWinSize();
      uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(auStack_30[0])))));
      uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_00603314)))));
      (void)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(uVar1)))));
      uVar1 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(uVar1)))))))));
      uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar1)))));
      uVar4 = (undefined4)(cocos2d::CCDirector::sharedDirector());
      { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar4)->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); uStack_24 = hw_fbits(_ws.height); }
      uVar4 = (undefined4)(func_0079e59c(uStack_24));
      uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_00603314)))));
      (void)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(uVar3)))));
      uVar3 = (undefined4)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);float _r=(float)(int)_a;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);return (int)_f;}((int)(uVar3)))))))));
      uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
      0 /* ctorZero */;
      (*pcVar5)(piVar2,auStack_20);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != g_00603318);
  return;
}

void BLMainEffectView::onEnter()
{
  ((BLMainEffectPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLMainEffectView::updateLiuxingAnim(float p1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar4 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x43)));
  *(int *)((int)this + 4*(0x43)) = iVar4 + 1;
  iVar5 = (undefined4)(intptr_t)(g_006030d8);
  if (iVar4 + 1 == 0x12) {
    do {
      iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)this + 0xd4))(((int)this),iVar5));
      if ((iVar4 != 0) &&
         (iVar4 = func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_00603022 + (intptr_t)(g_006030dc))),
                                  *(undefined4 *)((unsigned char *)((char *)&g_00603024 + (intptr_t)(g_006030e0))),0), iVar4 != 0)) {
        uVar1 = (undefined4)(0 /* ctorZero */);
        uVar2 = (undefined4)(0 /* ctorZero */);
        uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
        *(CCSize *)(auStack_30) = ((cocos2d::CCDirector *)(uVar3))->getWinSize();
        uVar3 = (undefined4)(func_0079e59c(auStack_30[0],auStack_30[0]));
        uVar3 = (undefined4)(func_0079e4dc(uVar3,g_006030ec));
        func_0079e5fc(uVar1);
        uVar1 = (undefined4)(func_0079e2ec());
        uVar1 = (undefined4)(func_0079e59c(uVar3,uVar1));
        uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
        { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar3))->getWinSize(); __builtin_memcpy(&auStack_28, &_ws.width, 4); uStack_24 = hw_fbits(_ws.height); }
        uVar3 = (undefined4)(func_0079e59c(uStack_24));
        uVar3 = (undefined4)(func_0079e4dc(uVar3,g_006030ec));
        func_0079e5fc(uVar2);
        uVar2 = (undefined4)(func_0079e2ec());
        uVar2 = (undefined4)(func_0079e59c(uVar3,uVar2));
        0 /* ctorZero */;
        ((MeteorSprite *)(iVar4))->setNextPosition(*(cocos2d::CCPoint *)(void *)&auStack_20);
        0 /* ctorZero */;
        uVar1 = (undefined4)(func_0079e5fc());
        ((MeteorSprite *)(iVar4))->setNextNeedCount(uVar1);
      }
      iVar5 = (undefined4)(intptr_t)(iVar5 + 1);
    } while (iVar5 != g_006030f8);
  }
  if (0x12 < *(int *)((int)this + 4*(0x43))) {
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  return;
}

void BLMainEffectView::onExit()
{
  ((cocos2d::CCNode *)(*(undefined4 *)((unsigned char *)((char *)&g_00603340 + (intptr_t)(g_00603358)))))->unschedule(0);
  ((BLMainEffectPresenter *)(*(undefined4 *)(((int)this) + 0x108)))->onExit();
  ((cocos2d::CCLayer *)(((int)this)))->onExit();
  return;
}

bool BLMainEffectView::init()
{
  int iVar1;
  int iVar2;
  
  iVar1 = (undefined4)(intptr_t)(((cocos2d::CCLayer *)this)->init());
  if (iVar1 != 0) {
    iVar2 = (undefined4)(intptr_t)(((BLMainEffectPresenter *)this)->create((BLMainEffectView*)((int)this)));
    *(int *)(((int)this) + 0x108) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    ((BLMainEffectView *)(((int)this)))->initliuxing();
    ((BLMainEffectPresenter *)(*(undefined4 *)(((int)this) + 0x108)))->initWithView((BLMainEffectView*)((int)this));
    ((cocos2d::CCNode *)(*(undefined4 *)((unsigned char *)((char *)&g_00603392 + (intptr_t)(g_006033a0)))))->schedule(0, g_006033a4);
  }
  return ghidra_CONCAT44(((int)this),iVar1);
}
