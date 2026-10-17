#include "BLChestPageView.h"
#include "BLChestItemView.h"
#include "BLChestPagePresenter.h"
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
extern "C" unsigned long UNK_0051b808;
extern "C" unsigned long UNK_0051b85a;
extern "C" unsigned long UNK_0051b8a0;
extern "C" unsigned long UNK_0051b8c8;
extern "C" unsigned long UNK_0051b910;
extern "C" unsigned long UNK_0051b94c;
extern "C" unsigned long UNK_0051bb54;
extern "C" unsigned long _UNK_0051b88c;
extern "C" unsigned long _UNK_0051b890;
extern "C" unsigned long _UNK_0051b8a4;
extern "C" unsigned long _UNK_0051b8cc;
extern "C" unsigned long _UNK_0051b980;
extern "C" unsigned long _UNK_0051b984;
extern "C" unsigned long _UNK_0051bca0;
extern "C" unsigned long _UNK_0051bca4;
extern "C" unsigned long _UNK_0051bca8;
extern "C" unsigned long _UNK_0051bcac;
extern "C" unsigned long _UNK_0051bcb0;
extern "C" unsigned long _UNK_0051bcb4;
extern "C" unsigned long _UNK_0051bcb8;
extern "C" unsigned long g_0051b808;
extern "C" unsigned long g_0051b85a;
extern "C" unsigned long g_0051b88c;
extern "C" unsigned long g_0051b890;
extern "C" unsigned long g_0051b8a0;
extern "C" unsigned long g_0051b8a4;
extern "C" unsigned long g_0051b8c8;
extern "C" unsigned long g_0051b8cc;
extern "C" unsigned long g_0051b910;
extern "C" unsigned long g_0051b94c;
extern "C" unsigned long g_0051b980;
extern "C" unsigned long g_0051b984;
extern "C" unsigned long g_0051bb54;
extern "C" unsigned long g_0051bca0;
extern "C" unsigned long g_0051bca4;
extern "C" unsigned long g_0051bca8;
extern "C" unsigned long g_0051bcac;
extern "C" unsigned long g_0051bcb0;
extern "C" unsigned long g_0051bcb4;
extern "C" unsigned long g_0051bcb8;
BLChestPageView::~BLChestPageView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0051b808 + g_0051b88c);
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
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0051b85a + g_0051b890,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


int * BLChestPageView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x11c)));
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

undefined4 BLChestPageView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLChestPageView::CopperChest()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLChestPageView::DiamonChest()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLChestPageView::getLineMiddle()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

void BLChestPageView::onEnter()
{
  ((BLChestPagePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLChestPageView::onExit()
{
  ((BLChestPagePresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLChestPageView::init()
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
    iVar2 = ((BLChestPagePresenter *)this)->create((BLChestPageView*)((int)this));
    *(int *)((int)this + 4*(0x43)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    piVar3 = (int *)((BLChestItemView *)this)->create();
    *(int *)((int)this + 4*(0x44)) = (int)piVar3;
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
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    piVar3 = (int *)((BLChestItemView *)this)->create();
    *(int *)((int)this + 4*(0x45)) = (int)piVar3;
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
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    func_0079e45c(auStack_20,&g_0051bb54 + g_0051bca8,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x46)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
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
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
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
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),3);
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
    ((BLChestPagePresenter *)*(int *)((int)this + 4*(0x43)))->initWithView((BLChestPageView*)((int)this));
  }
  return iVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
BLChestPageView::BLChestPageView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0051b910 + (intptr_t)(g_0051b980))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x42)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0051b94c + (intptr_t)(g_0051b984)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}
