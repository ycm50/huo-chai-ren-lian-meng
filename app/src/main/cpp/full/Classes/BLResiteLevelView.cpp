#include "BLResiteLevelView.h"
#include "BLLeakUtils.h"
#include "BLResiteLevelPresenter.h"
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
extern "C" unsigned long UNK_006b4320;
extern "C" unsigned long UNK_006b4352;
extern "C" unsigned long UNK_006b43ac;
extern "C" unsigned long UNK_006b43d4;
extern "C" unsigned long UNK_006b449c;
extern "C" unsigned long UNK_006b44dc;
extern "C" unsigned long UNK_006b45b8;
extern "C" unsigned long UNK_006b45ba;
extern "C" unsigned long UNK_006b45cc;
extern "C" unsigned long UNK_006b4630;
extern "C" unsigned long UNK_006b4660;
extern "C" unsigned long _DAT_006b4474;
extern "C" unsigned long _DAT_006b4478;
extern "C" unsigned long _UNK_006b4398;
extern "C" unsigned long _UNK_006b439c;
extern "C" unsigned long _UNK_006b43b0;
extern "C" unsigned long _UNK_006b43d8;
extern "C" unsigned long _UNK_006b4770;
extern "C" unsigned long _UNK_006b4774;
extern "C" unsigned long _UNK_006b4778;
extern "C" unsigned long _UNK_006b477c;
extern "C" unsigned long _UNK_006b4780;
extern "C" unsigned long _UNK_006b4784;
extern "C" unsigned long _UNK_006b4788;
extern "C" unsigned long _UNK_006b478c;
extern "C" unsigned long _UNK_006b4790;
extern "C" unsigned long _UNK_006b4794;
extern "C" unsigned long _UNK_006b4798;
extern "C" unsigned long _UNK_006b479c;
extern "C" unsigned long _UNK_006b47a0;
extern "C" unsigned long g_006b4320;
extern "C" unsigned long g_006b4352;
extern "C" unsigned long g_006b4398;
extern "C" unsigned long g_006b439c;
extern "C" unsigned long g_006b43ac;
extern "C" unsigned long g_006b43b0;
extern "C" unsigned long g_006b43d4;
extern "C" unsigned long g_006b43d8;
extern "C" unsigned long g_006b4474;
extern "C" unsigned long g_006b4478;
extern "C" unsigned long g_006b449c;
extern "C" unsigned long g_006b44dc;
extern "C" unsigned long g_006b45b8;
extern "C" unsigned long g_006b45ba;
extern "C" unsigned long g_006b45cc;
extern "C" unsigned long g_006b4630;
extern "C" unsigned long g_006b4660;
extern "C" unsigned long g_006b4770;
extern "C" unsigned long g_006b4774;
extern "C" unsigned long g_006b4778;
extern "C" unsigned long g_006b477c;
extern "C" unsigned long g_006b4780;
extern "C" unsigned long g_006b4784;
extern "C" unsigned long g_006b4788;
extern "C" unsigned long g_006b478c;
extern "C" unsigned long g_006b4790;
extern "C" unsigned long g_006b4794;
extern "C" unsigned long g_006b4798;
extern "C" unsigned long g_006b479c;
extern "C" unsigned long g_006b47a0;
BLResiteLevelView::~BLResiteLevelView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006b4320 + g_006b4398);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006b4352 + g_006b439c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLResiteLevelView::BLResiteLevelView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_006b4474 + 0x6b441c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLResiteLevelView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLResiteLevelView::initView()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  0 /* ctorZero */;
  func_0079e45c(auStack_20,&g_006b449c + g_006b4774,auStack_28);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  func_0079e45c(auStack_20,&g_006b44dc + g_006b4778,auStack_28);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar6 = *(code **)(*piVar1 + 0x88);
  0 /* ctorZero */;
  uVar4 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar2)))));
  0 /* ctorZero */;
  uVar4 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  uVar4 = (undefined4)(auStack_30[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar2)))));
  0 /* ctorZero */;
  uVar4 = (undefined4)(uStack_24);
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(uVar3)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),piVar1,1);
  piVar1 = (int *)cocos2d::CCLabelTTF::create((char const*)&g_006b45b8 + g_006b4784, (char const*)&g_006b45ba + g_006b4788, g_006b478c);
  (**(code **)(*piVar1 + 0x1b4))(piVar1,&g_006b45cc + g_006b4790);
  pcVar6 = *(code **)(*piVar1 + 0x4c);
  puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(piVar1);
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(g_006b4794)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar4),(int)(0x41000000)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),piVar1,2);
  piVar1 = (int *)cocos2d::extension::CCControlButton::create();
  *(int *)((int)this + 4*(0x43)) = (int)piVar1;
  (**(code **)(*piVar1 + 0x294))(piVar1,0);
  func_0079e45c(auStack_20,&g_006b4630 + g_006b4798,auStack_28);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),uVar4,1);
  func_0079e45c(auStack_20,&g_006b4660 + g_006b479c,auStack_28);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),uVar4,2);
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar6 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30))((int *)*(int *)((int)this + 4*(0x43)),0x3f800000);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x38))((int *)*(int *)((int)this + 4*(0x43)),0x3f800000);
  pcVar6 = *(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x4c);
  puVar5 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))();
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_006b4794),(int)(uVar4)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar4)))));
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x8c))(piVar1);
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(*puVar5),(int)(0x3f000000)))));
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_006b4794),(int)(uVar2)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar2)))));
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),2);
  (**(code **)(*(int *)this + 0x88))(((int)this),auStack_38);
  return;
}

bool BLResiteLevelView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLResiteLevelPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLResiteLevelView::initView();
    ((BLResiteLevelPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLResiteLevelView*)((int)this));
  }
  return iVar1;
}

void BLResiteLevelView::onEnter()
{
  ((BLResiteLevelPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLResiteLevelView::onExit()
{
  ((BLResiteLevelPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}
