#include "BLRoleStarItemView.h"
#include "BLLeakUtils.h"
#include "BLRoleStarItemPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00652b40;
extern "C" unsigned long UNK_00652b6a;
extern "C" unsigned long UNK_00652da8;
extern "C" unsigned long UNK_00652dce;
extern "C" unsigned long UNK_00652e5c;
extern "C" unsigned long UNK_00652eb2;
extern "C" unsigned long _UNK_00652bb0;
extern "C" unsigned long _UNK_00652bb4;
extern "C" unsigned long _UNK_00652df8;
extern "C" unsigned long _UNK_00652dfc;
extern "C" unsigned long _UNK_00652f08;
extern "C" unsigned long _UNK_00652f0c;
extern "C" unsigned long g_00652b40;
extern "C" unsigned long g_00652b6a;
extern "C" unsigned long g_00652bb0;
extern "C" unsigned long g_00652bb4;
extern "C" unsigned long g_00652da8;
extern "C" unsigned long g_00652dce;
extern "C" unsigned long g_00652df8;
extern "C" unsigned long g_00652dfc;
extern "C" unsigned long g_00652e5c;
extern "C" unsigned long g_00652eb2;
extern "C" unsigned long g_00652f08;
extern "C" unsigned long g_00652f0c;
BLRoleStarItemView::~BLRoleStarItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00652b40 + g_00652bb0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x284;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00652b6a + g_00652bb4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x6d)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x6d)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCSprite(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLRoleStarItemView::BLRoleStarItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00652da8 + g_00652df8);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x244;
  *(int *)((int)this + 4*(0x3d)) = iVar2 + 0x284;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00652dce + g_00652dfc,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLRoleStarItemView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar2)))));
  0 /* ctorZero */;
  func_0079e45c(auStack_20,&g_00652e5c + g_00652f08,auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_30),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_2c),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  func_0079e45c(auStack_20,&g_00652eb2 + g_00652f0c,auStack_28);
  iVar4 = 0 /* ctorZero */;
  *(int *)((int)this + 4*(0x6e)) = iVar4;
  func_0079e2bc(auStack_20);
  piVar5 = (int *)*(int *)((int)this + 4*(0x6e));
  pcVar6 = *(code **)(*piVar5 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*piVar3 + 0x50))(piVar3));
  (*pcVar6)(piVar5,uVar1);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x6e)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&uStack_30);
  return;
}

bool BLRoleStarItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCSprite *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLRoleStarItemPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x1b4) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLRoleStarItemView::initView();
    ((BLRoleStarItemPresenter *)*(undefined4 *)(((int)this) + 0x1b4))->initWithView((BLRoleStarItemView*)((int)this));
  }
  return iVar1;
}

void BLRoleStarItemView::onEnter()
{
  ((BLRoleStarItemPresenter *)*(undefined4 *)(((int)this) + 0x1b4))->onEnter();
  ((cocos2d::CCNode *)((int)this))->onEnter();
  return;
}

void BLRoleStarItemView::onExit()
{
  ((BLRoleStarItemPresenter *)*(undefined4 *)(((int)this) + 0x1b4))->onExit();
  ((cocos2d::CCNode *)((int)this))->onExit();
  return;
}
