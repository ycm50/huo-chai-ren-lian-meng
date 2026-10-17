#include "BLChallengeWinResultView.h"
#include "BLChallengeWinResultPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00662264;
extern "C" unsigned long UNK_00662296;
extern "C" unsigned long UNK_006622f0;
extern "C" unsigned long UNK_00662318;
extern "C" unsigned long UNK_006623e4;
extern "C" unsigned long UNK_00662438;
extern "C" unsigned long UNK_006624b8;
extern "C" unsigned long UNK_006624ba;
extern "C" unsigned long UNK_006624cc;
extern "C" unsigned long UNK_00662594;
extern "C" unsigned long UNK_0066260a;
extern "C" unsigned long UNK_0066260c;
extern "C" unsigned long UNK_0066261d;
extern "C" unsigned long _DAT_006623c0;
extern "C" unsigned long _DAT_006623c4;
extern "C" unsigned long _UNK_006622dc;
extern "C" unsigned long _UNK_006622e0;
extern "C" unsigned long _UNK_006622f4;
extern "C" unsigned long _UNK_0066231c;
extern "C" unsigned long _UNK_00662670;
extern "C" unsigned long _UNK_00662674;
extern "C" unsigned long _UNK_00662678;
extern "C" unsigned long _UNK_0066267c;
extern "C" unsigned long _UNK_00662680;
extern "C" unsigned long _UNK_00662684;
extern "C" unsigned long _UNK_00662688;
extern "C" unsigned long _UNK_0066268c;
extern "C" unsigned long _UNK_00662690;
extern "C" unsigned long _UNK_00662694;
extern "C" unsigned long _UNK_00662698;
extern "C" unsigned long _UNK_0066269c;
extern "C" unsigned long _UNK_006626a0;
extern "C" unsigned long _UNK_006626a4;
extern "C" unsigned long _UNK_006626a8;
extern "C" unsigned long _UNK_006626ac;
extern "C" unsigned long _UNK_006626b0;
extern "C" unsigned long _UNK_006626b4;
extern "C" unsigned long _UNK_006626b8;
extern "C" unsigned long g_00662264;
extern "C" unsigned long g_00662296;
extern "C" unsigned long g_006622dc;
extern "C" unsigned long g_006622e0;
extern "C" unsigned long g_006622f0;
extern "C" unsigned long g_006622f4;
extern "C" unsigned long g_00662318;
extern "C" unsigned long g_0066231c;
extern "C" unsigned long g_006623c0;
extern "C" unsigned long g_006623c4;
extern "C" unsigned long g_006623e4;
extern "C" unsigned long g_00662438;
extern "C" unsigned long g_006624b8;
extern "C" unsigned long g_006624ba;
extern "C" unsigned long g_006624cc;
extern "C" unsigned long g_00662594;
extern "C" unsigned long g_0066260a;
extern "C" unsigned long g_0066260c;
extern "C" unsigned long g_0066261d;
extern "C" unsigned long g_00662670;
extern "C" unsigned long g_00662674;
extern "C" unsigned long g_00662678;
extern "C" unsigned long g_0066267c;
extern "C" unsigned long g_00662680;
extern "C" unsigned long g_00662684;
extern "C" unsigned long g_00662688;
extern "C" unsigned long g_0066268c;
extern "C" unsigned long g_00662690;
extern "C" unsigned long g_00662694;
extern "C" unsigned long g_00662698;
extern "C" unsigned long g_0066269c;
extern "C" unsigned long g_006626a0;
extern "C" unsigned long g_006626a4;
extern "C" unsigned long g_006626a8;
extern "C" unsigned long g_006626ac;
extern "C" unsigned long g_006626b0;
extern "C" unsigned long g_006626b4;
extern "C" unsigned long g_006626b8;
BLChallengeWinResultView::~BLChallengeWinResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00662264 + g_006622dc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00662296 + g_006622e0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLChallengeWinResultView::BLChallengeWinResultView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006623c0 + 0x662360);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLChallengeWinResultView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(0x43)) = 0;
  return;
}


bool BLChallengeWinResultView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLChallengeWinResultPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLChallengeWinResultView::initView();
    ((BLChallengeWinResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLChallengeWinResultView*)((int)this));
  }
  return iVar1;
}

void BLChallengeWinResultView::onEnter()
{
  ((BLChallengeWinResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLChallengeWinResultView::onExit()
{
  ((BLChallengeWinResultPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLChallengeWinResultView::initView()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_006623e4 + (intptr_t)(g_00662674)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00662678)))));
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_00662438 + (intptr_t)(g_0066267c)),auStack_2c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x8c))(piVar1));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x8c))(piVar1));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00662680)))));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_006624ba + (intptr_t)(g_00662688)), (char const*)(unsigned char *)((char *)&g_006624b8 + (intptr_t)(g_00662684)), g_0066268c);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,(unsigned char *)((char *)&g_006624cc + (intptr_t)(g_00662690)));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x8c))(piVar1));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar3 + 4)),(int)(g_00662694)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar4)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_00662698)))));
  piVar1 = (int *)((long long)::operator new((size_t)(0x134)));
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x18))(piVar1));
  if (iVar3 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x43)) = (int)piVar1;
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar6 = *(code **)(*piVar1 + 0x234);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(g_006626a4)))));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar3 = (undefined4)(intptr_t)(g_006626a8);
  *(int *)((int)this + 4*(0x44)) = iVar5;
  func_0079e45c(auStack_20,&g_00662594 + iVar3,auStack_2c);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x294))((int *)*(int *)((int)this + 4*(0x44)),0);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),uVar4,1);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_0066260a + (intptr_t)(g_006626b0)), (char const*)(unsigned char *)((char *)&g_0066260c + (intptr_t)(g_006626b4)), g_0066268c);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,(unsigned char *)((char *)&g_0066261d + (intptr_t)(g_006626b8)));
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  uVar2 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x50))());
  (*pcVar6)(piVar1,uVar2);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_28);
  return;
}
