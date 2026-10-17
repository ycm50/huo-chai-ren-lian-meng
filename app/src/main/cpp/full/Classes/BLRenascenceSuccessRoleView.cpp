#include "BLRenascenceSuccessRoleView.h"
#include "BLLeakUtils.h"
#include "BLRenascenceSuccessRolePresenter.h"
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
extern "C" unsigned long UNK_00650a5c;
extern "C" unsigned long UNK_00650a8e;
extern "C" unsigned long UNK_00650ae8;
extern "C" unsigned long UNK_00650b10;
extern "C" unsigned long UNK_00650b84;
extern "C" unsigned long UNK_00650bb2;
extern "C" unsigned long UNK_00650c3c;
extern "C" unsigned long UNK_00650c9e;
extern "C" unsigned long UNK_00650d24;
extern "C" unsigned long UNK_00650d9a;
extern "C" unsigned long UNK_00650d9c;
extern "C" unsigned long _UNK_00650ad4;
extern "C" unsigned long _UNK_00650ad8;
extern "C" unsigned long _UNK_00650aec;
extern "C" unsigned long _UNK_00650b14;
extern "C" unsigned long _UNK_00650bdc;
extern "C" unsigned long _UNK_00650be0;
extern "C" unsigned long _UNK_00650e50;
extern "C" unsigned long _UNK_00650e54;
extern "C" unsigned long _UNK_00650e58;
extern "C" unsigned long _UNK_00650e5c;
extern "C" unsigned long _UNK_00650e60;
extern "C" unsigned long _UNK_00650e64;
extern "C" unsigned long _UNK_00650e68;
extern "C" unsigned long g_00650a5c;
extern "C" unsigned long g_00650a8e;
extern "C" unsigned long g_00650ad4;
extern "C" unsigned long g_00650ad8;
extern "C" unsigned long g_00650ae8;
extern "C" unsigned long g_00650aec;
extern "C" unsigned long g_00650b10;
extern "C" unsigned long g_00650b14;
extern "C" unsigned long g_00650b84;
extern "C" unsigned long g_00650bb2;
extern "C" unsigned long g_00650bdc;
extern "C" unsigned long g_00650be0;
extern "C" unsigned long g_00650c3c;
extern "C" unsigned long g_00650c9e;
extern "C" unsigned long g_00650d24;
extern "C" unsigned long g_00650d9a;
extern "C" unsigned long g_00650d9c;
extern "C" unsigned long g_00650e50;
extern "C" unsigned long g_00650e54;
extern "C" unsigned long g_00650e58;
extern "C" unsigned long g_00650e5c;
extern "C" unsigned long g_00650e60;
extern "C" unsigned long g_00650e64;
extern "C" unsigned long g_00650e68;
BLRenascenceSuccessRoleView::~BLRenascenceSuccessRoleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00650a5c + g_00650ad4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00650a8e + g_00650ad8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRenascenceSuccessRoleView::BLRenascenceSuccessRoleView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00650b84 + g_00650bdc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00650bb2 + g_00650be0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLRenascenceSuccessRoleView::create()
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

void BLRenascenceSuccessRoleView::initView()
{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  *(CCSize *)auStack_38 = ((cocos2d::CCDirector *)uVar1)->getWinSize();
  func_0079e45c(&uStack_20,&g_00650c3c + g_00650e50,auStack_28);
  iVar2 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x43)) = iVar2;
  func_0079e2bc(&uStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar5 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar4,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x40))((int *)*(int *)((int)this + 4*(0x43)),0x3fc00000);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  piVar4 = (int *)cocos2d::CCSprite::create();
  *(int *)((int)this + 4*(0x45)) = (int)piVar4;
  pcVar5 = *(code **)(*piVar4 + 0x20c);
  uVar1 = (undefined4)(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache());
  uVar1 = (undefined4)(((cocos2d::CCSpriteFrameCache *)uVar1)->spriteFrameByName((char const*)&g_00650c9e + g_00650e54));
  (*pcVar5)(piVar4,uVar1);
  piVar4 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar4,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x40))((int *)*(int *)((int)this + 4*(0x45)),0x3fc00000);
  piVar4 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar4 + 0x4c);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00650e58),(int)(uVar1)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar4,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x19c))((int *)*(int *)((int)this + 4*(0x45)),200);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  piVar4 = (int *)cocos2d::CCSprite::create();
  *(int *)((int)this + 4*(0x46)) = (int)piVar4;
  pcVar5 = *(code **)(*piVar4 + 0x20c);
  uVar1 = (undefined4)(cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache());
  uVar1 = (undefined4)(((cocos2d::CCSpriteFrameCache *)uVar1)->spriteFrameByName((char const*)&g_00650d24 + g_00650e5c));
  (*pcVar5)(piVar4,uVar1);
  piVar4 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar5 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar5)(piVar4,&uStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar5 = *(code **)(*piVar4 + 0x4c);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00650e58),(int)(uVar1)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar4,&uStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x40))((int *)*(int *)((int)this + 4*(0x46)),0x3fc00000);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x19c))((int *)*(int *)((int)this + 4*(0x46)),200);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_00650d9a + g_00650e60, (char const*)&g_00650d9c + g_00650e64, g_00650e68);
  *(int *)((int)this + 4*(0x44)) = (int)piVar4;
  uStack_20 = 0xcc;
  uStack_1f = 0;
  uStack_1e = 0;
  (**(code **)(*piVar4 + 0x1b4))();
  piVar4 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar5 = *(code **)(*piVar4 + 0x4c);
  iVar2 = (**(code **)(*piVar4 + 0x8c))(piVar4);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar1)))));
  iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x8c))();
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar4,&uStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_38);
  return;
}

bool BLRenascenceSuccessRoleView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRenascenceSuccessRolePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRenascenceSuccessRoleView::initView();
    ((BLRenascenceSuccessRolePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLRenascenceSuccessRoleView*)((int)this));
  }
  return iVar1;
}
