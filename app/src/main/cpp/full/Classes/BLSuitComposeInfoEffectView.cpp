#include "BLSuitComposeInfoEffectView.h"
#include "BLLeakUtils.h"
#include "BLSuitComposeInfoEffectPresenter.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006930d4;
extern "C" unsigned long UNK_00693118;
extern "C" unsigned long UNK_0069315c;
extern "C" unsigned long UNK_0069326c;
extern "C" unsigned long UNK_00693824;
extern "C" unsigned long UNK_00693852;
extern "C" unsigned long UNK_006938da;
extern "C" unsigned long UNK_0069392c;
extern "C" unsigned long UNK_00693930;
extern "C" unsigned long UNK_00693944;
extern "C" unsigned long _UNK_00693148;
extern "C" unsigned long _UNK_0069314c;
extern "C" unsigned long _UNK_00693160;
extern "C" unsigned long _UNK_00693270;
extern "C" unsigned long _UNK_0069387c;
extern "C" unsigned long _UNK_00693880;
extern "C" unsigned long _UNK_00693a00;
extern "C" unsigned long _UNK_00693a04;
extern "C" unsigned long _UNK_00693a08;
extern "C" unsigned long _UNK_00693a0c;
extern "C" unsigned long _UNK_00693a10;
extern "C" unsigned long _UNK_00693a14;
extern "C" unsigned long _UNK_00693a18;
extern "C" unsigned long _UNK_00693a1c;
extern "C" unsigned long g_006930d4;
extern "C" unsigned long g_00693118;
extern "C" unsigned long g_00693148;
extern "C" unsigned long g_0069314c;
extern "C" unsigned long g_0069315c;
extern "C" unsigned long g_00693160;
extern "C" unsigned long g_0069326c;
extern "C" unsigned long g_00693270;
extern "C" unsigned long g_00693824;
extern "C" unsigned long g_00693852;
extern "C" unsigned long g_0069387c;
extern "C" unsigned long g_00693880;
extern "C" unsigned long g_006938da;
extern "C" unsigned long g_0069392c;
extern "C" unsigned long g_00693930;
extern "C" unsigned long g_00693944;
extern "C" unsigned long g_00693a00;
extern "C" unsigned long g_00693a04;
extern "C" unsigned long g_00693a08;
extern "C" unsigned long g_00693a0c;
extern "C" unsigned long g_00693a10;
extern "C" unsigned long g_00693a14;
extern "C" unsigned long g_00693a18;
extern "C" unsigned long g_00693a1c;
BLSuitComposeInfoEffectView::~BLSuitComposeInfoEffectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006930d4 + g_00693148);
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
  func_0079e45c(&uStack_14,&g_00693118 + g_0069314c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeInfoEffectView::BLSuitComposeInfoEffectView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_00693824 + g_0069387c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00693852 + g_00693880,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLSuitComposeInfoEffectView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int iStack_30;
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
  func_0079e45c(auStack_20,&g_006938da + g_00693a08,auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar7 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00693a0c),(int)(uVar1)))));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_00693930 + g_00693a14, (char const*)&g_0069392c + g_00693a10, uVar1);
  *(int *)((int)this + 4*(0x43)) = (int)piVar3;
  (**(code **)(*piVar3 + 0x1b4))(piVar3,&g_00693944 + g_00693a18);
  piVar3 = (int *)*(int *)((int)this + 4*(0x43));
  iVar6 = (int)*(int *)&(*piVar3);
  pcVar7 = *(code **)(iVar6 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_30 + -0x80000000),(int)(0x3f000000)))));
  puVar4 = (undefined4 *)(**(code **)(iVar6 + 0x8c))(piVar3);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar4),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00693a1c),(int)(uVar2)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_2c),(int)(0x3f000000)))));
  iVar6 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar6 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar5)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(0x40800000)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_30);
  return;
}

bool BLSuitComposeInfoEffectView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitComposeInfoEffectPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitComposeInfoEffectView::initView();
    ((BLSuitComposeInfoEffectPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitComposeInfoEffectView*)((int)this));
  }
  return iVar1;
}
