#include "BLSuitUpGraceInfoPropertyView.h"
#include "BLLeakUtils.h"
#include "BLSuitUpGraceInfoPropertyPresenter.h"
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
extern "C" unsigned long UNK_0069b49c;
extern "C" unsigned long UNK_0069b4e0;
extern "C" unsigned long UNK_0069b524;
extern "C" unsigned long UNK_0069b6a4;
extern "C" unsigned long UNK_0069bab8;
extern "C" unsigned long UNK_0069bae6;
extern "C" unsigned long _UNK_0069b510;
extern "C" unsigned long _UNK_0069b514;
extern "C" unsigned long _UNK_0069b528;
extern "C" unsigned long _UNK_0069b6a8;
extern "C" unsigned long _UNK_0069bb10;
extern "C" unsigned long _UNK_0069bb14;
extern "C" unsigned long _UNK_0069bbb4;
extern "C" unsigned long g_0069b49c;
extern "C" unsigned long g_0069b4e0;
extern "C" unsigned long g_0069b510;
extern "C" unsigned long g_0069b514;
extern "C" unsigned long g_0069b524;
extern "C" unsigned long g_0069b528;
extern "C" unsigned long g_0069b6a4;
extern "C" unsigned long g_0069b6a8;
extern "C" unsigned long g_0069bab8;
extern "C" unsigned long g_0069bae6;
extern "C" unsigned long g_0069bb10;
extern "C" unsigned long g_0069bb14;
extern "C" unsigned long g_0069bbb4;
BLSuitUpGraceInfoPropertyView::~BLSuitUpGraceInfoPropertyView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069b49c + g_0069b510);
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
  func_0079e45c(&uStack_14,&g_0069b4e0 + g_0069b514,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitUpGraceInfoPropertyView::BLSuitUpGraceInfoPropertyView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0069bab8 + g_0069bb10);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069bae6 + g_0069bb14,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLSuitUpGraceInfoPropertyView::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x10c)));
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

void BLSuitUpGraceInfoPropertyView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uVar2 = (undefined4)(g_0069bbb4);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar1)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar2)))));
  0 /* ctorZero */;
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_30);
  return;
}

bool BLSuitUpGraceInfoPropertyView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitUpGraceInfoPropertyPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitUpGraceInfoPropertyView::initView();
    ((BLSuitUpGraceInfoPropertyPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitUpGraceInfoPropertyView*)((int)this));
  }
  return iVar1;
}

void BLSuitUpGraceInfoPropertyView::onEnter()
{
  ((BLSuitUpGraceInfoPropertyPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLSuitUpGraceInfoPropertyView::onExit()
{
  ((BLSuitUpGraceInfoPropertyPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
