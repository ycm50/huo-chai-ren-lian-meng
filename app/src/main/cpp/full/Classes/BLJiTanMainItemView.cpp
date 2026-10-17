#include "BLJiTanMainItemView.h"
#include "BLJiTanMainItemPresenter.h"
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
extern "C" unsigned long UNK_0057b404;
extern "C" unsigned long UNK_0057b436;
extern "C" unsigned long UNK_0057b47c;
extern "C" unsigned long UNK_0057b4a4;
extern "C" unsigned long UNK_0057b4ec;
extern "C" unsigned long UNK_0057b51a;
extern "C" unsigned long UNK_0057b62c;
extern "C" unsigned long UNK_0057b706;
extern "C" unsigned long _UNK_0057b468;
extern "C" unsigned long _UNK_0057b46c;
extern "C" unsigned long _UNK_0057b480;
extern "C" unsigned long _UNK_0057b4a8;
extern "C" unsigned long _UNK_0057b544;
extern "C" unsigned long _UNK_0057b548;
extern "C" unsigned long _UNK_0057b814;
extern "C" unsigned long _UNK_0057b818;
extern "C" unsigned long _UNK_0057b81c;
extern "C" unsigned long _UNK_0057b820;
extern "C" unsigned long _UNK_0057b824;
extern "C" unsigned long g_0057b404;
extern "C" unsigned long g_0057b436;
extern "C" unsigned long g_0057b468;
extern "C" unsigned long g_0057b46c;
extern "C" unsigned long g_0057b47c;
extern "C" unsigned long g_0057b480;
extern "C" unsigned long g_0057b4a4;
extern "C" unsigned long g_0057b4a8;
extern "C" unsigned long g_0057b4ec;
extern "C" unsigned long g_0057b51a;
extern "C" unsigned long g_0057b544;
extern "C" unsigned long g_0057b548;
extern "C" unsigned long g_0057b62c;
extern "C" unsigned long g_0057b706;
extern "C" unsigned long g_0057b814;
extern "C" unsigned long g_0057b818;
extern "C" unsigned long g_0057b81c;
extern "C" unsigned long g_0057b820;
extern "C" unsigned long g_0057b824;
BLJiTanMainItemView::~BLJiTanMainItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057b404 + g_0057b468);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057b436 + g_0057b46c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLJiTanMainItemView::BLJiTanMainItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0057b4ec + g_0057b544);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057b51a + g_0057b548,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLJiTanMainItemView::create()
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

undefined4 BLJiTanMainItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLJiTanMainItemView::getSprIcon()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

void BLJiTanMainItemView::onEnter()
{
  ((BLJiTanMainItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLJiTanMainItemView::onExit()
{
  ((BLJiTanMainItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLJiTanMainItemView::init()
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLJiTanMainItemPresenter *)this)->create((BLJiTanMainItemView*)((int)this));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,&g_0057b62c + g_0057b814,auStack_28);
    piVar3 = (int *)0 /* ctorZero */;
    func_0079e2bc(auStack_20);
    pcVar7 = *(code **)(*piVar3 + 0x88);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,1);
    func_0079e45c(auStack_20,&g_0057b706 + g_0057b81c,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x43)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar3 + 0x88);
    0 /* ctorZero */;
    uVar6 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar6 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar6),(int)(uVar5)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    uVar6 = (undefined4)((**(code **)(*piVar3 + 0x50))(piVar3));
    (*pcVar7)(piVar3,uVar6);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),1);
    pcVar7 = *(code **)(*(int *)this + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar6)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar7)(((int)this),auStack_20);
    ((BLJiTanMainItemPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((BLJiTanMainItemView*)((int)this));
  }
  return iVar1;
}
