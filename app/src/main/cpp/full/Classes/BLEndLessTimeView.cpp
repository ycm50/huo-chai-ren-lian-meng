#include "BLEndLessTimeView.h"
#include "BLEndLessTimePresenter.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0052d6a0;
extern "C" unsigned long UNK_0052d6e4;
extern "C" unsigned long UNK_0052d728;
extern "C" unsigned long UNK_0052d750;
extern "C" unsigned long UNK_0052d768;
extern "C" unsigned long UNK_0052d796;
extern "C" unsigned long UNK_0052d866;
extern "C" unsigned long UNK_0052d896;
extern "C" unsigned long UNK_0052d936;
extern "C" unsigned long UNK_0052da5e;
extern "C" unsigned long UNK_0052dab0;
extern "C" unsigned long UNK_0052dafe;
extern "C" unsigned long UNK_0052db70;
extern "C" unsigned long _UNK_0052d714;
extern "C" unsigned long _UNK_0052d718;
extern "C" unsigned long _UNK_0052d72c;
extern "C" unsigned long _UNK_0052d754;
extern "C" unsigned long _UNK_0052d7c0;
extern "C" unsigned long _UNK_0052d7c4;
extern "C" unsigned long _UNK_0052dc38;
extern "C" unsigned long _UNK_0052dc3c;
extern "C" unsigned long _UNK_0052dc40;
extern "C" unsigned long _UNK_0052dc44;
extern "C" unsigned long _UNK_0052dc48;
extern "C" unsigned long _UNK_0052dc4c;
extern "C" unsigned long _UNK_0052dc50;
extern "C" unsigned long _UNK_0052dc54;
extern "C" unsigned long _UNK_0052dc58;
extern "C" unsigned long _UNK_0052dc5c;
extern "C" unsigned long _UNK_0052dc60;
extern "C" unsigned long _UNK_0052dc64;
extern "C" unsigned long _UNK_0052dc68;
extern "C" unsigned long _UNK_0052dc6c;
extern "C" unsigned long _UNK_0052dc70;
extern "C" unsigned long _UNK_0052dd1c;
extern "C" unsigned long _UNK_0052dd20;
extern "C" unsigned long _UNK_0052dd24;
extern "C" unsigned long g_0052d6a0;
extern "C" unsigned long g_0052d6e4;
extern "C" unsigned long g_0052d714;
extern "C" unsigned long g_0052d718;
extern "C" unsigned long g_0052d728;
extern "C" unsigned long g_0052d72c;
extern "C" unsigned long g_0052d750;
extern "C" unsigned long g_0052d754;
extern "C" unsigned long g_0052d768;
extern "C" unsigned long g_0052d796;
extern "C" unsigned long g_0052d7c0;
extern "C" unsigned long g_0052d7c4;
extern "C" unsigned long g_0052d866;
extern "C" unsigned long g_0052d896;
extern "C" unsigned long g_0052d936;
extern "C" unsigned long g_0052da5e;
extern "C" unsigned long g_0052dab0;
extern "C" unsigned long g_0052dafe;
extern "C" unsigned long g_0052db70;
extern "C" unsigned long g_0052dc38;
extern "C" unsigned long g_0052dc3c;
extern "C" unsigned long g_0052dc40;
extern "C" unsigned long g_0052dc44;
extern "C" unsigned long g_0052dc48;
extern "C" unsigned long g_0052dc4c;
extern "C" unsigned long g_0052dc50;
extern "C" unsigned long g_0052dc54;
extern "C" unsigned long g_0052dc58;
extern "C" unsigned long g_0052dc5c;
extern "C" unsigned long g_0052dc60;
extern "C" unsigned long g_0052dc64;
extern "C" unsigned long g_0052dc68;
extern "C" unsigned long g_0052dc6c;
extern "C" unsigned long g_0052dc70;
extern "C" unsigned long g_0052dd1c;
extern "C" unsigned long g_0052dd20;
extern "C" unsigned long g_0052dd24;
BLEndLessTimeView::~BLEndLessTimeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0052d6a0 + g_0052d714);
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
  func_0079e45c(&uStack_14,&g_0052d6e4 + g_0052d718,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLEndLessTimeView::BLEndLessTimeView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0052d768 + g_0052d7c0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052d796 + g_0052d7c4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLEndLessTimeView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
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

undefined4 BLEndLessTimeView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLEndLessTimeView::onEnter()
{
  ((BLEndLessTimePresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLEndLessTimeView::onExit()
{
  ((BLEndLessTimePresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
bool BLEndLessTimeView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLEndLessTimePresenter *)this)->create((BLEndLessTimeView*)((int)this));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_0052d866 + (intptr_t)(g_0052dc38)));
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,1);
    puVar8 = (unsigned char *)((char *)&g_0052d896 + (intptr_t)(g_0052dc3c));
    piVar4 = (int *)cocos2d::CCSprite::create((char const*)puVar8);
    *(int *)((int)this + 4*(0x43)) = (int)piVar4;
    pcVar9 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar4,auStack_20);
    piVar4 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar9 = *(code **)(*piVar4 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar4,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),2);
    piVar4 = (int *)cocos2d::CCSprite::create((char const*)puVar8);
    *(int *)((int)this + 4*(0x44)) = (int)piVar4;
    pcVar9 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar4,auStack_20);
    piVar4 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar9 = *(code **)(*piVar4 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar4,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),2);
    piVar4 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_0052d936 + (intptr_t)(g_0052dc48)));
    pcVar9 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar4,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar4,2);
    piVar5 = (int *)cocos2d::CCSprite::create((char const*)puVar8);
    *(int *)((int)this + 4*(0x45)) = (int)piVar5;
    pcVar9 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar5,auStack_20);
    piVar5 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar9 = *(code **)(*piVar5 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar5,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    piVar5 = (int *)cocos2d::CCSprite::create((char const*)puVar8);
    *(int *)((int)this + 4*(0x46)) = (int)piVar5;
    pcVar9 = *(code **)(*piVar5 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar5,auStack_20);
    piVar5 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar9 = *(code **)(*piVar5 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar5,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),2);
    (**(code **)(*piVar3 + 0x90))(piVar3,1);
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x90))(piVar3,1);
    }
    piVar3 = (int *)*(int *)((int)this + 4*(0x44));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x90))(piVar3,1);
    }
    (**(code **)(*piVar4 + 0x90))(piVar4,1);
    piVar3 = (int *)*(int *)((int)this + 4*(0x45));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x90))(piVar3,1);
    }
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x90))(piVar3,1);
    }
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_0052da5e + (intptr_t)(g_0052dc54)));
    *(int *)((int)this + 4*(0x47)) = (int)piVar3;
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),3);
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_0052dab0 + (intptr_t)(g_0052dc60)));
    *(int *)((int)this + 4*(0x48)) = (int)piVar3;
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),3);
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)(unsigned char *)((char *)&g_0052dafe + (intptr_t)(g_0052dc68)));
    *(int *)((int)this + 4*(0x49)) = (int)piVar3;
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x49)),3);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x90))((int *)*(int *)((int)this + 4*(0x47)),0);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x90))((int *)*(int *)((int)this + 4*(0x48)),0);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x49)) + 0x90))((int *)*(int *)((int)this + 4*(0x49)),0);
    puVar8 = (unsigned char *)((char *)&g_0052db70 + (intptr_t)(g_0052dc6c));
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)puVar8);
    *(int *)((int)this + 4*(0x4a)) = (int)piVar3;
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x4a));
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4a)),4);
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)puVar8);
    *(int *)((int)this + 4*(0x4b)) = (int)piVar3;
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x4b));
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4b)),4);
    piVar3 = (int *)cocos2d::CCSprite::create((char const*)puVar8);
    *(int *)((int)this + 4*(0x4c)) = (int)piVar3;
    pcVar9 = *(code **)(*piVar3 + 0x7c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x4c));
    pcVar9 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    (*pcVar9)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x4c)),4);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4a)) + 0x90))((int *)*(int *)((int)this + 4*(0x4a)),0);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4b)) + 0x90))((int *)*(int *)((int)this + 4*(0x4b)),0);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 0x90))((int *)*(int *)((int)this + 4*(0x4c)),0);
    pcVar9 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar6)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar7 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar7 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar7)))));
    0 /* ctorZero */;
    (*pcVar9)(((int)this),auStack_30);
    ((BLEndLessTimePresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((BLEndLessTimeView*)((int)this));
  }
  return iVar1;
}
