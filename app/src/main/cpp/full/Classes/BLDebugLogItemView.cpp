#include "BLDebugLogItemView.h"
#include "BLDebugLogItemPresenter.h"
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
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005e5dd0;
extern "C" unsigned long UNK_005e5e14;
extern "C" unsigned long UNK_005e5e58;
extern "C" unsigned long UNK_005e5e80;
extern "C" unsigned long UNK_005e5e98;
extern "C" unsigned long UNK_005e5ec6;
extern "C" unsigned long UNK_005e5f6a;
extern "C" unsigned long UNK_005e5f6c;
extern "C" unsigned long UNK_005e5ffa;
extern "C" unsigned long _UNK_005e5e44;
extern "C" unsigned long _UNK_005e5e48;
extern "C" unsigned long _UNK_005e5e5c;
extern "C" unsigned long _UNK_005e5e84;
extern "C" unsigned long _UNK_005e5ef0;
extern "C" unsigned long _UNK_005e5ef4;
extern "C" unsigned long _UNK_005e606c;
extern "C" unsigned long _UNK_005e6070;
extern "C" unsigned long _UNK_005e6074;
extern "C" unsigned long _UNK_005e6078;
extern "C" unsigned long _UNK_005e607c;
extern "C" unsigned long _UNK_005e6080;
extern "C" unsigned long _UNK_005e6084;
extern "C" unsigned long g_005e5dd0;
extern "C" unsigned long g_005e5e14;
extern "C" unsigned long g_005e5e44;
extern "C" unsigned long g_005e5e48;
extern "C" unsigned long g_005e5e58;
extern "C" unsigned long g_005e5e5c;
extern "C" unsigned long g_005e5e80;
extern "C" unsigned long g_005e5e84;
extern "C" unsigned long g_005e5e98;
extern "C" unsigned long g_005e5ec6;
extern "C" unsigned long g_005e5ef0;
extern "C" unsigned long g_005e5ef4;
extern "C" unsigned long g_005e5f6a;
extern "C" unsigned long g_005e5f6c;
extern "C" unsigned long g_005e5ffa;
extern "C" unsigned long g_005e606c;
extern "C" unsigned long g_005e6070;
extern "C" unsigned long g_005e6074;
extern "C" unsigned long g_005e6078;
extern "C" unsigned long g_005e607c;
extern "C" unsigned long g_005e6080;
extern "C" unsigned long g_005e6084;
BLDebugLogItemView::~BLDebugLogItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005e5dd0 + g_005e5e44);
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
  func_0079e45c(&uStack_14,&g_005e5e14 + g_005e5e48,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLDebugLogItemView::BLDebugLogItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005e5e98 + g_005e5ef0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005e5ec6 + g_005e5ef4,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLDebugLogItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLDebugLogItemView::getLabTitle()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

void BLDebugLogItemView::onEnter()
{
  ((BLDebugLogItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLDebugLogItemView::onExit()
{
  ((BLDebugLogItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLDebugLogItemView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLDebugLogItemPresenter *)this)->create();
    *(int *)((int)this + 4*(0x42)) = iVar2;
    ((cocos2d::CCObject *)this)->retain();
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_005e606c),(int)(uVar3)))));
    piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_005e5f6c + g_005e6074, (char const*)&g_005e5f6a + g_005e6070, uVar3);
    *(int *)((int)this + 4*(0x43)) = (int)piVar4;
    pcVar7 = *(code **)(*piVar4 + 0x4c);
    0 /* ctorZero */;
    uVar3 = (undefined4)(auStack_28[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar5)))));
    0 /* ctorZero */;
    uVar3 = (undefined4)(uStack_1c);
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar6)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar4,auStack_30);
    piVar4 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar4 + 0x7c);
    0 /* ctorZero */;
    (*pcVar7)(piVar4,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x43)),&g_005e5ffa + g_005e607c)
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),2);
    pcVar7 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar3)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(((int)this),auStack_30);
    ((BLDebugLogItemPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((BLDebugLogItemView*)((int)this));
  }
  return iVar1;
}
