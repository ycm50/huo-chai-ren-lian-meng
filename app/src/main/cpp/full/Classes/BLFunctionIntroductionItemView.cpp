#include "BLFunctionIntroductionItemView.h"
#include "BLFunctionIntroductionItemPresenter.h"
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
extern "C" unsigned long UNK_0064edc8;
extern "C" unsigned long UNK_0064edfa;
extern "C" unsigned long UNK_0064ee54;
extern "C" unsigned long UNK_0064ef18;
extern "C" unsigned long UNK_0064efb4;
extern "C" unsigned long UNK_0064efe2;
extern "C" unsigned long _UNK_0064ee40;
extern "C" unsigned long _UNK_0064ee44;
extern "C" unsigned long _UNK_0064ee58;
extern "C" unsigned long _UNK_0064ef1c;
extern "C" unsigned long _UNK_0064f00c;
extern "C" unsigned long _UNK_0064f010;
extern "C" unsigned long _UNK_0064f4d0;
extern "C" unsigned long _UNK_0064f4d4;
extern "C" unsigned long g_0064edc8;
extern "C" unsigned long g_0064edfa;
extern "C" unsigned long g_0064ee40;
extern "C" unsigned long g_0064ee44;
extern "C" unsigned long g_0064ee54;
extern "C" unsigned long g_0064ee58;
extern "C" unsigned long g_0064ef18;
extern "C" unsigned long g_0064ef1c;
extern "C" unsigned long g_0064efb4;
extern "C" unsigned long g_0064efe2;
extern "C" unsigned long g_0064f00c;
extern "C" unsigned long g_0064f010;
extern "C" unsigned long g_0064f4d0;
extern "C" unsigned long g_0064f4d4;
BLFunctionIntroductionItemView::~BLFunctionIntroductionItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0064edc8 + (intptr_t)(g_0064ee40))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0064edfa + (intptr_t)(g_0064ee44)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLFunctionIntroductionItemView::BLFunctionIntroductionItemView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0064efb4 + (intptr_t)(g_0064f00c))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0064efe2 + (intptr_t)(g_0064f010)),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

bool BLFunctionIntroductionItemView::init()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_30 [8];
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar2)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar3)))));
    0 /* ctorZero */;
    (**(code **)(*(int *)this + 0x88))(((int)this),auStack_30);
    iVar4 = ((BLFunctionIntroductionItemPresenter *)this)->create();
    *(int *)((int)this + 4*(0x42)) = iVar4;
    ((cocos2d::CCObject *)this)->retain();
    ((BLFunctionIntroductionItemPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((BLFunctionIntroductionItemView*)((int)this));
  }
  return iVar1;
}
