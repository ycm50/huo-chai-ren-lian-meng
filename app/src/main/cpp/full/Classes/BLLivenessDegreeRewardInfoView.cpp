#include "BLLivenessDegreeRewardInfoView.h"
#include "BLLeakUtils.h"
#include "BLLivenessDegreeRewardInfoPresenter.h"
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
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0057f960;
extern "C" unsigned long UNK_0057f992;
extern "C" unsigned long UNK_0057f9ec;
extern "C" unsigned long UNK_0057fa14;
extern "C" unsigned long UNK_0057fb12;
extern "C" unsigned long UNK_0057fb54;
extern "C" unsigned long UNK_0057fb56;
extern "C" unsigned long UNK_0057fb6c;
extern "C" unsigned long UNK_0057fbe6;
extern "C" unsigned long _DAT_0057fab4;
extern "C" unsigned long _DAT_0057fab8;
extern "C" unsigned long _UNK_0057f9d8;
extern "C" unsigned long _UNK_0057f9dc;
extern "C" unsigned long _UNK_0057f9f0;
extern "C" unsigned long _UNK_0057fa18;
extern "C" unsigned long _UNK_0057fcbc;
extern "C" unsigned long _UNK_0057fcc0;
extern "C" unsigned long _UNK_0057fcc4;
extern "C" unsigned long _UNK_0057fcc8;
extern "C" unsigned long _UNK_0057fccc;
extern "C" unsigned long _UNK_0057fcd0;
extern "C" unsigned long _UNK_0057fcd4;
extern "C" unsigned long _UNK_0057fcd8;
extern "C" unsigned long g_0057f960;
extern "C" unsigned long g_0057f992;
extern "C" unsigned long g_0057f9d8;
extern "C" unsigned long g_0057f9dc;
extern "C" unsigned long g_0057f9ec;
extern "C" unsigned long g_0057f9f0;
extern "C" unsigned long g_0057fa14;
extern "C" unsigned long g_0057fa18;
extern "C" unsigned long g_0057fab4;
extern "C" unsigned long g_0057fab8;
extern "C" unsigned long g_0057fb12;
extern "C" unsigned long g_0057fb54;
extern "C" unsigned long g_0057fb56;
extern "C" unsigned long g_0057fb6c;
extern "C" unsigned long g_0057fbe6;
extern "C" unsigned long g_0057fcbc;
extern "C" unsigned long g_0057fcc0;
extern "C" unsigned long g_0057fcc4;
extern "C" unsigned long g_0057fcc8;
extern "C" unsigned long g_0057fccc;
extern "C" unsigned long g_0057fcd0;
extern "C" unsigned long g_0057fcd4;
extern "C" unsigned long g_0057fcd8;
BLLivenessDegreeRewardInfoView::~BLLivenessDegreeRewardInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0057f960 + (intptr_t)(g_0057f9d8))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_0057f992 + (intptr_t)(g_0057f9dc)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLLivenessDegreeRewardInfoView::BLLivenessDegreeRewardInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)(g_0057fab4 + 0x57fa5c));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLLivenessDegreeRewardInfoView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLLivenessDegreeRewardInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLLivenessDegreeRewardInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLLivenessDegreeRewardInfoView::initView();
    ((BLLivenessDegreeRewardInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLLivenessDegreeRewardInfoView*)((int)this));
  }
  return iVar1;
}

void BLLivenessDegreeRewardInfoView::onEnter()
{
  ((BLLivenessDegreeRewardInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLLivenessDegreeRewardInfoView::onExit()
{
  ((BLLivenessDegreeRewardInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLLivenessDegreeRewardInfoView::initView()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar2)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar3)))));
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_0057fb12 + (intptr_t)(g_0057fcc4)),auStack_28);
  piVar4 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar7 = *(code **)(*piVar4 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar4);
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0057fb54 + (intptr_t)(g_0057fcc8)), (char const*)(unsigned char *)((char *)&g_0057fb56 + (intptr_t)(g_0057fccc)), g_0057fcd0);
  *(int *)((int)this + 4*(0x44)) = (int)piVar4;
  (**(code **)(*piVar4 + 0x1b4))(piVar4,(unsigned char *)((char *)&g_0057fb6c + (intptr_t)(g_0057fcd4)));
  piVar4 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar7 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_2c),(int)(0x3f000000)))));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0057fcd0),(int)(uVar3)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar3)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar1 = (undefined4)(intptr_t)(g_0057fcd8);
  *(int *)((int)this + 4*(0x43)) = iVar5;
  func_0079e45c(auStack_20,&g_0057fbe6 + iVar1,auStack_28);
  piVar4 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),piVar4,1);
  piVar6 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar7 = *(code **)(*piVar6 + 0x28c);
  (**(code **)(*piVar4 + 0x1cc))(auStack_20,piVar4);
  (*pcVar7)(piVar6,auStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar7 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x294))((int *)*(int *)((int)this + 4*(0x43)),0);
  piVar4 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_30),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_2c),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&uStack_30);
  return;
}
