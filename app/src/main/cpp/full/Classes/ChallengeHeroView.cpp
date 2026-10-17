#include "ChallengeHeroView.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "ChallengeHeroPresenter.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0050d88c;
extern "C" unsigned long UNK_0050d8d0;
extern "C" unsigned long UNK_0050d914;
extern "C" unsigned long UNK_0050d93c;
extern "C" unsigned long UNK_0050d954;
extern "C" unsigned long UNK_0050d982;
extern "C" unsigned long UNK_0050da28;
extern "C" unsigned long UNK_0050db0a;
extern "C" unsigned long UNK_0050dc5c;
extern "C" unsigned long UNK_0050dcf6;
extern "C" unsigned long UNK_0050dd58;
extern "C" unsigned long UNK_0050dec2;
extern "C" unsigned long UNK_0050dec6;
extern "C" unsigned long UNK_0050dfba;
extern "C" unsigned long _UNK_0050d900;
extern "C" unsigned long _UNK_0050d904;
extern "C" unsigned long _UNK_0050d918;
extern "C" unsigned long _UNK_0050d940;
extern "C" unsigned long _UNK_0050d9ac;
extern "C" unsigned long _UNK_0050d9b0;
extern "C" unsigned long _UNK_0050dd14;
extern "C" unsigned long _UNK_0050dd18;
extern "C" unsigned long _UNK_0050dd1c;
extern "C" unsigned long _UNK_0050dd20;
extern "C" unsigned long _UNK_0050dd24;
extern "C" unsigned long _UNK_0050dd28;
extern "C" unsigned long _UNK_0050dd2c;
extern "C" unsigned long _UNK_0050dd30;
extern "C" unsigned long _UNK_0050dd34;
extern "C" unsigned long _UNK_0050dd38;
extern "C" unsigned long _UNK_0050dd3c;
extern "C" unsigned long _UNK_0050dd40;
extern "C" unsigned long _UNK_0050e0c8;
extern "C" unsigned long _UNK_0050e0cc;
extern "C" unsigned long _UNK_0050e0d0;
extern "C" unsigned long _UNK_0050e0d4;
extern "C" unsigned long _UNK_0050e0d8;
extern "C" unsigned long _UNK_0050e0dc;
extern "C" unsigned long _UNK_0050e0e0;
extern "C" unsigned long _UNK_0050e0e4;
extern "C" unsigned long _UNK_0050e0e8;
extern "C" unsigned long _UNK_0050e0ec;
extern "C" unsigned long _UNK_0050e0f0;
extern "C" unsigned long _UNK_0050e0f4;
extern "C" unsigned long _UNK_0050e0f8;
extern "C" unsigned long _UNK_0050e0fc;
extern "C" unsigned long g_0050d88c;
extern "C" unsigned long g_0050d8d0;
extern "C" unsigned long g_0050d900;
extern "C" unsigned long g_0050d904;
extern "C" unsigned long g_0050d914;
extern "C" unsigned long g_0050d918;
extern "C" unsigned long g_0050d93c;
extern "C" unsigned long g_0050d940;
extern "C" unsigned long g_0050d954;
extern "C" unsigned long g_0050d982;
extern "C" unsigned long g_0050d9ac;
extern "C" unsigned long g_0050d9b0;
extern "C" unsigned long g_0050da28;
extern "C" unsigned long g_0050db0a;
extern "C" unsigned long g_0050dc5c;
extern "C" unsigned long g_0050dcf6;
extern "C" unsigned long g_0050dd14;
extern "C" unsigned long g_0050dd18;
extern "C" unsigned long g_0050dd1c;
extern "C" unsigned long g_0050dd20;
extern "C" unsigned long g_0050dd24;
extern "C" unsigned long g_0050dd28;
extern "C" unsigned long g_0050dd2c;
extern "C" unsigned long g_0050dd30;
extern "C" unsigned long g_0050dd34;
extern "C" unsigned long g_0050dd38;
extern "C" unsigned long g_0050dd3c;
extern "C" unsigned long g_0050dd40;
extern "C" unsigned long g_0050dd58;
extern "C" unsigned long g_0050dec2;
extern "C" unsigned long g_0050dec6;
extern "C" unsigned long g_0050dfba;
extern "C" unsigned long g_0050e0c8;
extern "C" unsigned long g_0050e0cc;
extern "C" unsigned long g_0050e0d0;
extern "C" unsigned long g_0050e0d4;
extern "C" unsigned long g_0050e0d8;
extern "C" unsigned long g_0050e0dc;
extern "C" unsigned long g_0050e0e0;
extern "C" unsigned long g_0050e0e4;
extern "C" unsigned long g_0050e0e8;
extern "C" unsigned long g_0050e0ec;
extern "C" unsigned long g_0050e0f0;
extern "C" unsigned long g_0050e0f4;
extern "C" unsigned long g_0050e0f8;
extern "C" unsigned long g_0050e0fc;
ChallengeHeroView::~ChallengeHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0050d88c + g_0050d900);
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
  func_0079e45c(&uStack_14,&g_0050d8d0 + g_0050d904,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

ChallengeHeroView::ChallengeHeroView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0050d954 + g_0050d9ac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0050d982 + g_0050d9b0,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * ChallengeHeroView::create()
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

bool ChallengeHeroView::init()
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    iVar2 = ((ChallengeHeroPresenter *)this)->create((ChallengeHeroView*)((int)this));
    *(int *)((int)this + 4*(0x42)) = iVar2;
    if (iVar2 != 0) {
      ((cocos2d::CCObject *)this)->retain();
    }
    func_0079e45c(&uStack_20,&g_0050da28 + g_0050dd14,auStack_28);
    iVar2 = 0 /* ctorZero */;
    *(int *)((int)this + 4*(0x46)) = iVar2;
    func_0079e2bc(&uStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar8 = *(code **)(*piVar9 + 0x88);
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
    (*pcVar8)(piVar9,&uStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
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
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
    func_0079e45c(&uStack_20,&g_0050db0a + g_0050dd20,auStack_28);
    piVar9 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x88);
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
    (*pcVar8)(piVar9,&uStack_20);
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar2 + 4) + -0x80000000),(int)(0x3f000000)))));
    iVar2 = (**(code **)(*piVar9 + 0x8c))(piVar9);
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar2 + 4) + -0x80000000),(int)(0x3f000000)))));
    iVar2 = (**(code **)(*piVar9 + 0x8c))(piVar9);
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar2 + 4)),(int)(0x3f000000)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),piVar9);
    func_0079e45c(&uStack_20,&g_0050dc5c + g_0050dd2c,auStack_28);
    piVar6 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_20);
    pcVar8 = *(code **)(*piVar6 + 0x1d4);
    0 /* ctorZero */;
    (*pcVar8)(piVar6,&uStack_20);
    pcVar8 = *(code **)(*piVar6 + 0x4c);
    uVar5 = (undefined4)((**(code **)(*piVar9 + 0x50))(piVar9));
    (*pcVar8)(piVar6,uVar5);
    (**(code **)(*piVar6 + 0x30))(piVar6,g_0050dd38);
    (**(code **)(*piVar6 + 0x38))(piVar6,g_0050dd3c);
    (**(code **)(*(int *)this + 200))(((int)this),piVar6);
    piVar9 = (int *)((long long)::operator new((size_t)(300)));
    0 /* ctorZero */;
    iVar2 = (**(code **)(*piVar9 + 0x18))(piVar9);
    if (iVar2 == 0) {
      (**(code **)(*piVar9 + 8))(piVar9);
      piVar9 = (int *)0x0;
    }
    else {
      ((cocos2d::CCObject *)piVar9)->autorelease();
    }
    iVar2 = g_0050dd40;
    *(int *)((int)this + 4*(0x45)) = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x1fc);
    func_0079e45c(&uStack_20,&g_0050dcf6 + iVar2,auStack_28);
    (*pcVar8)(piVar9,&uStack_20);
    func_0079e2bc(&uStack_20);
    piVar9 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar8 = *(code **)(*piVar9 + 0x204);
    func_0079e45c(&uStack_20,&g_0050dd58 + g_0050e0e0,auStack_28);
    (*pcVar8)(piVar9,&uStack_20);
    func_0079e2bc(&uStack_20);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x20c))((int *)*(int *)((int)this + 4*(0x45)),2);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x214))((int *)*(int *)((int)this + 4*(0x45)),0);
    ((BLPageControl *)*(int *)((int)this + 4*(0x45)))->reload();
    piVar10 = (int *)*(int *)((int)this + 4*(0x45));
    pcVar8 = *(code **)(*piVar10 + 0x4c);
    piVar9 = (int *)(**(code **)(*piVar6 + 0x8c))(piVar6);
    uVar11 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*piVar9 + -0x80000000))));
    uVar11 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_0050e0c8))|(((long long)(unsigned)(g_0050e0cc))<<32)))));
    uVar11 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_0050e0d0))|(((long long)(unsigned)(g_0050e0d4))<<32)))));
    (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_0050e0d8))|(((long long)(unsigned)(g_0050e0dc))<<32))))));
    uVar5 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_0050e0d8))|(((long long)(unsigned)(g_0050e0dc))<<32))))))))));
    iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar2 + 4) + -0x80000000),(int)(0x3f000000)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0050e0e4)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    piVar9 = (int *)(**(code **)(*piVar6 + 0x8c))(piVar6);
    uVar11 = ((long long)([](int _a){float _f;__builtin_memcpy(&_f,&_a,4);double _d=(double)_f;long long _o;__builtin_memcpy(&_o,&_d,8);return _o;}((int)(*piVar9 + -0x80000000))));
    uVar11 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_0050e0c8))|(((long long)(unsigned)(g_0050e0cc))<<32)))));
    uVar11 = ((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x * _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_0050e0d0))|(((long long)(unsigned)(g_0050e0d4))<<32)))));
    (void)(((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_0050e0d8))|(((long long)(unsigned)(g_0050e0dc))<<32))))));
    uVar5 = (undefined4)(((long long)([](long long _a){double _x;__builtin_memcpy(&_x,&_a,8);float _r=(float)_x;int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((((long long)([](long long _a,long long _b){double _x,_y;__builtin_memcpy(&_x,&_a,8);__builtin_memcpy(&_y,&_b,8);double _r=(_x + _y);long long _o;__builtin_memcpy(&_o,&_r,8);return _o;}((((long long)(unsigned)((int)uVar11))|(((long long)(unsigned)((int)((ulonglong)uVar11 >> 0x20)))<<32)),(((long long)(unsigned)(g_0050e0d8))|(((long long)(unsigned)(g_0050e0dc))<<32))))))))));
    iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar2 + 4) + -0x80000000),(int)(0x3f000000)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_0050e0e4)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar10,&uStack_20);
    iVar2 = g_0050e0e8;
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0050e0ec),(int)(uVar5)))));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_0050dec6 + g_0050e0f0, (char const*)&g_0050dec2 + iVar2, uVar5);
    *(int *)((int)this + 4*(0x43)) = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x1b4))();
    piVar9 = (int *)*(int *)((int)this + 4*(0x43));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    iVar7 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar7 + 4) + -0x80000000),(int)(0x3f000000)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(g_0050e0f4)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(auStack_30[0]);
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar3)))));
    iVar7 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar7 + 4) + -0x80000000),(int)(0x3f000000)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(g_0050e0f4)))));
    0 /* ctorZero */;
    uVar5 = (undefined4)(uStack_24);
    cocos2d::CCDirector::sharedDirector();
    uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(uVar4)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_0050e0ec),(int)(uVar5)))));
    piVar9 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_0050dfba + g_0050e0f8, (char const*)&g_0050dec2 + iVar2, uVar5);
    *(int *)((int)this + 4*(0x44)) = (int)piVar9;
    pcVar8 = *(code **)(*piVar9 + 0x7c);
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    uStack_20 = 0xff;
    uStack_1f = 0xff;
    uStack_1e = 0;
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x1b4))();
    piVar9 = (int *)*(int *)((int)this + 4*(0x44));
    pcVar8 = *(code **)(*piVar9 + 0x4c);
    iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar2 + 4) + -0x80000000),(int)(0x3f000000)))));
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar5),(int)(g_0050e0fc)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar5)))));
    iVar2 = (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x8c))();
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(int *)(iVar2 + 4) + -0x80000000),(int)(0x3f000000)))));
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_0050e0fc)))));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar3)))));
    0 /* ctorZero */;
    (*pcVar8)(piVar9,&uStack_20);
    (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
    ((ChallengeHeroPresenter *)*(int *)((int)this + 4*(0x42)))->initWithView((ChallengeHeroView*)((int)this));
  }
  return iVar1;
}

void ChallengeHeroView::onEnter()
{
  ((ChallengeHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void ChallengeHeroView::onExit()
{
  ((ChallengeHeroPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
