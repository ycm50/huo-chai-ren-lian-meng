#include "BLRingItemView.h"
#include "BLLeakUtils.h"
#include "BLRingItemNumItem.h"
#include "BLRingItemPresenter.h"
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
extern "C" unsigned long UNK_004c9da0;
extern "C" unsigned long UNK_004c9de4;
extern "C" unsigned long UNK_004c9e28;
extern "C" unsigned long UNK_004c9e50;
extern "C" unsigned long UNK_004c9f00;
extern "C" unsigned long UNK_004c9f2e;
extern "C" unsigned long UNK_004ca288;
extern "C" unsigned long UNK_004ca41e;
extern "C" unsigned long UNK_004ca422;
extern "C" unsigned long UNK_004ca4be;
extern "C" unsigned long UNK_004ca53e;
extern "C" unsigned long UNK_004ca56a;
extern "C" unsigned long UNK_004ca620;
extern "C" unsigned long _UNK_004c9e14;
extern "C" unsigned long _UNK_004c9e18;
extern "C" unsigned long _UNK_004c9e2c;
extern "C" unsigned long _UNK_004c9e54;
extern "C" unsigned long _UNK_004c9f58;
extern "C" unsigned long _UNK_004c9f5c;
extern "C" unsigned long _UNK_004ca664;
extern "C" unsigned long _UNK_004ca668;
extern "C" unsigned long _UNK_004ca66c;
extern "C" unsigned long _UNK_004ca670;
extern "C" unsigned long _UNK_004ca674;
extern "C" unsigned long _UNK_004ca678;
extern "C" unsigned long _UNK_004ca67c;
extern "C" unsigned long _UNK_004ca680;
extern "C" unsigned long _UNK_004ca684;
extern "C" unsigned long _UNK_004ca688;
extern "C" unsigned long _UNK_004ca68c;
extern "C" unsigned long _UNK_004ca690;
extern "C" unsigned long _UNK_004ca694;
extern "C" unsigned long _UNK_004ca698;
extern "C" unsigned long _UNK_004ca69c;
extern "C" unsigned long _UNK_004ca6a0;
extern "C" unsigned long _UNK_004ca6a4;
extern "C" unsigned long _UNK_004ca6a8;
extern "C" unsigned long _UNK_004ca6ac;
extern "C" unsigned long _UNK_004ca7e0;
extern "C" unsigned long _UNK_004ca7e4;
extern "C" unsigned long g_004c9da0;
extern "C" unsigned long g_004c9de4;
extern "C" unsigned long g_004c9e14;
extern "C" unsigned long g_004c9e18;
extern "C" unsigned long g_004c9e28;
extern "C" unsigned long g_004c9e2c;
extern "C" unsigned long g_004c9e50;
extern "C" unsigned long g_004c9e54;
extern "C" unsigned long g_004c9f00;
extern "C" unsigned long g_004c9f2e;
extern "C" unsigned long g_004c9f58;
extern "C" unsigned long g_004c9f5c;
extern "C" unsigned long g_004ca288;
extern "C" unsigned long g_004ca41e;
extern "C" unsigned long g_004ca422;
extern "C" unsigned long g_004ca4be;
extern "C" unsigned long g_004ca53e;
extern "C" unsigned long g_004ca56a;
extern "C" unsigned long g_004ca620;
extern "C" unsigned long g_004ca664;
extern "C" unsigned long g_004ca668;
extern "C" unsigned long g_004ca66c;
extern "C" unsigned long g_004ca670;
extern "C" unsigned long g_004ca674;
extern "C" unsigned long g_004ca678;
extern "C" unsigned long g_004ca67c;
extern "C" unsigned long g_004ca680;
extern "C" unsigned long g_004ca684;
extern "C" unsigned long g_004ca688;
extern "C" unsigned long g_004ca68c;
extern "C" unsigned long g_004ca690;
extern "C" unsigned long g_004ca694;
extern "C" unsigned long g_004ca698;
extern "C" unsigned long g_004ca69c;
extern "C" unsigned long g_004ca6a0;
extern "C" unsigned long g_004ca6a4;
extern "C" unsigned long g_004ca6a8;
extern "C" unsigned long g_004ca6ac;
extern "C" unsigned long g_004ca7e0;
extern "C" unsigned long g_004ca7e4;
int BLRingItemView::getIndex() const
{
  return *(undefined4 *)(((int)this) + 0x108);
}

void BLRingItemView::setIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x108) = p1;
  return;
}

BLRingItemView::~BLRingItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c9da0 + g_004c9e14);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004c9de4 + g_004c9e18,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char *)&uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRingItemView::BLRingItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_004c9f00 + g_004c9f58);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004c9f2e + g_004c9f5c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char *)&uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLRingItemView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x128)));
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

undefined4 BLRingItemView::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLRingItemView::getSprBG()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

undefined4 BLRingItemView::getSpNum()
{
  return *(undefined4 *)(((int)this) + 0x114);
}

undefined4 BLRingItemView::getLabName()
{
  return *(undefined4 *)(((int)this) + 0x118);
}

undefined4 BLRingItemView::getLabFight()
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

undefined4 BLRingItemView::getBtnInfo()
{
  return *(undefined4 *)(((int)this) + 0x120);
}

undefined4 BLRingItemView::getSprSel()
{
  return *(undefined4 *)(((int)this) + 0x124);
}

void BLRingItemView::onEnter()
{
  ((BLRingItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLRingItemView::onExit()
{
  ((BLRingItemPresenter *)*(undefined4 *)(((int)this) + 0x10c))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

bool BLRingItemView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  undefined *puVar8;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((BLRingItemPresenter *)this)->create((BLRingItemView*)((int)this));
    *(int *)((int)this + 4*(0x43)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(auStack_20,&g_004ca288 + g_004ca664,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x44)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar7 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
    piVar7 = (int *)((long long)::operator new((size_t)(0xe8)));
    0 /* ctorZero */;
    iVar2 = (**(code **)(*piVar7 + 0x18))(piVar7);
    if (iVar2 == 0) {
      (**(code **)(*piVar7 + 8))(piVar7);
      piVar7 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar7)->autorelease();
    }
    *(int *)((int)this + 4*(0x45)) = (int)piVar7;
    ((BLRingItemNumItem *)piVar7)->setIndex(100);
    piVar7 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_004ca674),(int)(uVar5)))));
    puVar8 = (undefined *)(&g_004ca41e + g_004ca678);
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_004ca422 + g_004ca67c, (char const*)puVar8, uVar5);
    *(int *)((int)this + 4*(0x46)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),2);
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_004ca674),(int)(uVar5)))));
    piVar7 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_004ca4be + g_004ca688, (char const*)puVar8, uVar5);
    *(int *)((int)this + 4*(0x47)) = (int)piVar7;
    pcVar6 = *(code **)(*piVar7 + 0x7c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x47));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x1b4))((int *)*(int *)((int)this + 4*(0x47)),&g_004ca53e + g_004ca690)
    ;
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x47)),2);
    piVar7 = (int *)cocos2d::extension::CCControlButton::create();
    *(int *)((int)this + 4*(0x48)) = (int)piVar7;
    (**(code **)(*piVar7 + 0x294))(piVar7,0);
    func_0079e45c(auStack_20,&g_004ca56a + g_004ca694,auStack_28);
    uVar5 = (undefined4)(0 /* ctorZero */);
    func_0079e2bc(auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x30c))((int *)*(int *)((int)this + 4*(0x48)),uVar5,1);
    piVar7 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar7 + 0x28c);
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x40))((int *)*(int *)((int)this + 4*(0x48)),0x3f800000);
    piVar7 = (int *)*(int *)((int)this + 4*(0x48));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x48)),3);
    func_0079e45c(auStack_20,&g_004ca620 + g_004ca6a4,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x49)) = iVar2;
    func_0079e2bc(auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar7 + 0x88);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar6)(piVar7,auStack_20);
    piVar7 = (int *)*(int *)((int)this + 4*(0x49));
    pcVar6 = *(code **)(*piVar7 + 0x4c);
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
  }
  return true;
}
