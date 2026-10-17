#include "BLSuitComposeInfoBaseView.h"
#include "BLLeakUtils.h"
#include "BLSuitComposeInfoBasePresenter.h"
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
extern "C" unsigned long UNK_0069303c;
extern "C" unsigned long UNK_00693080;
extern "C" unsigned long UNK_006930c4;
extern "C" unsigned long UNK_00693244;
extern "C" unsigned long UNK_0069361c;
extern "C" unsigned long UNK_0069364a;
extern "C" unsigned long UNK_006936d2;
extern "C" unsigned long UNK_00693726;
extern "C" unsigned long UNK_00693728;
extern "C" unsigned long UNK_0069373a;
extern "C" unsigned long _UNK_006930b0;
extern "C" unsigned long _UNK_006930b4;
extern "C" unsigned long _UNK_006930c8;
extern "C" unsigned long _UNK_00693248;
extern "C" unsigned long _UNK_00693674;
extern "C" unsigned long _UNK_00693678;
extern "C" unsigned long _UNK_006937f4;
extern "C" unsigned long _UNK_006937f8;
extern "C" unsigned long _UNK_006937fc;
extern "C" unsigned long _UNK_00693800;
extern "C" unsigned long _UNK_00693804;
extern "C" unsigned long _UNK_00693808;
extern "C" unsigned long _UNK_0069380c;
extern "C" unsigned long _UNK_00693810;
extern "C" unsigned long g_0069303c;
extern "C" unsigned long g_00693080;
extern "C" unsigned long g_006930b0;
extern "C" unsigned long g_006930b4;
extern "C" unsigned long g_006930c4;
extern "C" unsigned long g_006930c8;
extern "C" unsigned long g_00693244;
extern "C" unsigned long g_00693248;
extern "C" unsigned long g_0069361c;
extern "C" unsigned long g_0069364a;
extern "C" unsigned long g_00693674;
extern "C" unsigned long g_00693678;
extern "C" unsigned long g_006936d2;
extern "C" unsigned long g_00693726;
extern "C" unsigned long g_00693728;
extern "C" unsigned long g_0069373a;
extern "C" unsigned long g_006937f4;
extern "C" unsigned long g_006937f8;
extern "C" unsigned long g_006937fc;
extern "C" unsigned long g_00693800;
extern "C" unsigned long g_00693804;
extern "C" unsigned long g_00693808;
extern "C" unsigned long g_0069380c;
extern "C" unsigned long g_00693810;
BLSuitComposeInfoBaseView::~BLSuitComposeInfoBaseView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0069303c + g_006930b0);
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
  func_0079e45c(&uStack_14,&g_00693080 + g_006930b4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLSuitComposeInfoBaseView::BLSuitComposeInfoBaseView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_0069361c + g_00693674);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0069364a + g_00693678,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLSuitComposeInfoBaseView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
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
  func_0079e45c(auStack_20,&g_006936d2 + g_006937fc,auStack_28);
  piVar3 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar3 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00693800),(int)(uVar1)))));
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_00693728 + g_00693808, (char const*)&g_00693726 + g_00693804, uVar1);
  (**(code **)(*piVar3 + 0x1b4))(piVar3,&g_0069373a + g_0069380c);
  iVar7 = (int)*(int *)&(*piVar3);
  pcVar6 = *(code **)(iVar7 + 0x4c);
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_30 + -0x80000000),(int)(0x3f000000)))));
  puVar4 = (undefined4 *)(**(code **)(iVar7 + 0x8c))(piVar3);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar4),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_00693810),(int)(uVar2)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar1),(int)(uVar2)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_2c),(int)(0x3f000000)))));
  iVar7 = (**(code **)(*piVar3 + 0x8c))(piVar3);
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*(undefined4 *)(iVar7 + 4)),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(uVar5)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar2),(int)(0x40800000)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar3,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  (**(code **)(*(int *)this + 0x88))(((int)this),&iStack_30);
  return;
}

bool BLSuitComposeInfoBaseView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLSuitComposeInfoBasePresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLSuitComposeInfoBaseView::initView();
    ((BLSuitComposeInfoBasePresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLSuitComposeInfoBaseView*)((int)this));
  }
  return iVar1;
}
