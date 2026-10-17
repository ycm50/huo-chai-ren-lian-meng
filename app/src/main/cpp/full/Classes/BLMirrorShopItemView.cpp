#include "BLMirrorShopItemView.h"
#include "BLLeakUtils.h"
#include "BLMirrorShopItemPresenter.h"
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
extern "C" unsigned long UNK_005ce5b4;
extern "C" unsigned long UNK_005ce5e6;
extern "C" unsigned long UNK_005ce640;
extern "C" unsigned long UNK_005ce704;
extern "C" unsigned long UNK_005ce774;
extern "C" unsigned long UNK_005ce7a2;
extern "C" unsigned long UNK_005ce830;
extern "C" unsigned long UNK_005ce870;
extern "C" unsigned long UNK_005ce8f8;
extern "C" unsigned long UNK_005ce940;
extern "C" unsigned long UNK_005ce9c6;
extern "C" unsigned long UNK_005ce9c8;
extern "C" unsigned long UNK_005cea58;
extern "C" unsigned long UNK_005ceb66;
extern "C" unsigned long UNK_005ceb68;
extern "C" unsigned long _UNK_005ce62c;
extern "C" unsigned long _UNK_005ce630;
extern "C" unsigned long _UNK_005ce644;
extern "C" unsigned long _UNK_005ce708;
extern "C" unsigned long _UNK_005ce7cc;
extern "C" unsigned long _UNK_005ce7d0;
extern "C" unsigned long _UNK_005cebb0;
extern "C" unsigned long _UNK_005cebb4;
extern "C" unsigned long _UNK_005cebb8;
extern "C" unsigned long _UNK_005cebbc;
extern "C" unsigned long _UNK_005cebc0;
extern "C" unsigned long _UNK_005cebc4;
extern "C" unsigned long _UNK_005cebc8;
extern "C" unsigned long _UNK_005cebcc;
extern "C" unsigned long _UNK_005cebd0;
extern "C" unsigned long _UNK_005cebd4;
extern "C" unsigned long _UNK_005cebd8;
extern "C" unsigned long _UNK_005cebdc;
extern "C" unsigned long _UNK_005cebe0;
extern "C" unsigned long _UNK_005cebe4;
extern "C" unsigned long _UNK_005cebe8;
extern "C" unsigned long _UNK_005cebec;
extern "C" unsigned long _UNK_005cebf0;
extern "C" unsigned long g_005ce5b4;
extern "C" unsigned long g_005ce5e6;
extern "C" unsigned long g_005ce62c;
extern "C" unsigned long g_005ce630;
extern "C" unsigned long g_005ce640;
extern "C" unsigned long g_005ce644;
extern "C" unsigned long g_005ce704;
extern "C" unsigned long g_005ce708;
extern "C" unsigned long g_005ce774;
extern "C" unsigned long g_005ce7a2;
extern "C" unsigned long g_005ce7cc;
extern "C" unsigned long g_005ce7d0;
extern "C" unsigned long g_005ce830;
extern "C" unsigned long g_005ce870;
extern "C" unsigned long g_005ce8f8;
extern "C" unsigned long g_005ce940;
extern "C" unsigned long g_005ce9c6;
extern "C" unsigned long g_005ce9c8;
extern "C" unsigned long g_005cea58;
extern "C" unsigned long g_005ceb66;
extern "C" unsigned long g_005ceb68;
extern "C" unsigned long g_005cebb0;
extern "C" unsigned long g_005cebb4;
extern "C" unsigned long g_005cebb8;
extern "C" unsigned long g_005cebbc;
extern "C" unsigned long g_005cebc0;
extern "C" unsigned long g_005cebc4;
extern "C" unsigned long g_005cebc8;
extern "C" unsigned long g_005cebcc;
extern "C" unsigned long g_005cebd0;
extern "C" unsigned long g_005cebd4;
extern "C" unsigned long g_005cebd8;
extern "C" unsigned long g_005cebdc;
extern "C" unsigned long g_005cebe0;
extern "C" unsigned long g_005cebe4;
extern "C" unsigned long g_005cebe8;
extern "C" unsigned long g_005cebec;
extern "C" unsigned long g_005cebf0;
int * BLMirrorShopItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
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

BLMirrorShopItemView::~BLMirrorShopItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ce5b4 + g_005ce62c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ce5e6 + g_005ce630,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMirrorShopItemView::BLMirrorShopItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_005ce774 + g_005ce7cc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ce7a2 + g_005ce7d0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLMirrorShopItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMirrorShopItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMirrorShopItemView::initView();
    ((BLMirrorShopItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMirrorShopItemView*)((int)this));
  }
  return iVar1;
}

void BLMirrorShopItemView::onEnter()
{
  ((BLMirrorShopItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMirrorShopItemView::onExit()
{
  ((BLMirrorShopItemPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMirrorShopItemView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar2)))));
  0 /* ctorZero */;
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_005ce830 + (intptr_t)(g_005cebb8)),&uStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  pcVar7 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar7)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_005ce870 + (intptr_t)(g_005cebbc)),&uStack_28);
  iVar4 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x43)) = iVar4;
  func_0079e2bc(&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  uVar1 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  0 /* ctorZero */;
  uVar1 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar5)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_005ce8f8 + (intptr_t)(g_005cebc4)),&uStack_28);
  iVar4 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x44)) = iVar4;
  func_0079e2bc(&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x50))());
  (*pcVar7)(piVar3,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  iVar6 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar4 = (undefined4)(intptr_t)(g_005cebc8);
  *(int *)((int)this + 4*(0x45)) = iVar6;
  func_0079e45c(&uStack_20,&g_005ce940 + iVar4,&uStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar1,1);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar7 = *(code **)(*piVar3 + 0x28c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))());
  0 /* ctorZero */;
  (*pcVar7)(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  (*pcVar7)(piVar3,uVar1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x294))((int *)*(int *)((int)this + 4*(0x45)),0);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005ce9c6 + (intptr_t)(g_005cebcc)), (char const*)(unsigned char *)((char *)&g_005ce9c8 + (intptr_t)(g_005cebd0)), g_005cebd4);
  *(int *)((int)this + 4*(0x46)) = (int)piVar3;
  uStack_20 = 0xff;
  uStack_1f = 0xff;
  uStack_1e = 0;
  (**(code **)(*piVar3 + 0x1b4))(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  uVar1 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  0 /* ctorZero */;
  uVar1 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar5)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  iVar6 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar4 = (undefined4)(intptr_t)(g_005cebdc);
  *(int *)((int)this + 4*(0x47)) = iVar6;
  func_0079e45c(&uStack_20,&g_005cea58 + iVar4,&uStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x30c))((int *)*(int *)((int)this + 4*(0x47)),uVar1,1);
  piVar3 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar7 = *(code **)(*piVar3 + 0x28c);
  0 /* ctorZero */;
  uVar1 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  0 /* ctorZero */;
  uVar1 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar5)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,&uStack_20);
  piVar3 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar2)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x294))((int *)*(int *)((int)this + 4*(0x47)),0);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005ceb66 + (intptr_t)(g_005cebec)), (char const*)(unsigned char *)((char *)&g_005ceb68 + (intptr_t)(g_005cebf0)), g_005cebc0);
  *(int *)((int)this + 4*(0x48)) = (int)piVar3;
  uStack_20 = 0xff;
  uStack_1f = 0xff;
  uStack_1e = 0;
  (**(code **)(*piVar3 + 0x1b4))();
  piVar3 = (int *)*(int *)((int)this + 4*(0x48));
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x50))());
  (*pcVar7)(piVar3,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x48)));
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_38);
  return;
}
