#include "BLMissionRewardInfoView.h"
#include "BLLeakUtils.h"
#include "BLMissionRewardInfoPresenter.h"
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
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005bf320;
extern "C" unsigned long UNK_005bf352;
extern "C" unsigned long UNK_005bf3ac;
extern "C" unsigned long UNK_005bf470;
extern "C" unsigned long UNK_005bf674;
extern "C" unsigned long UNK_005bf6b8;
extern "C" unsigned long UNK_005bf6ba;
extern "C" unsigned long UNK_005bf6cc;
extern "C" unsigned long UNK_005bf740;
extern "C" unsigned long UNK_005bf914;
extern "C" unsigned long UNK_005bf992;
extern "C" unsigned long UNK_005bf994;
extern "C" unsigned long UNK_005bf9a5;
extern "C" unsigned long UNK_005bf9e6;
extern "C" unsigned long UNK_005bfab8;
extern "C" unsigned long UNK_005bfaba;
extern "C" unsigned long UNK_005bfacb;
extern "C" unsigned long _DAT_005bf614;
extern "C" unsigned long _DAT_005bf618;
extern "C" unsigned long _UNK_005bf398;
extern "C" unsigned long _UNK_005bf39c;
extern "C" unsigned long _UNK_005bf3b0;
extern "C" unsigned long _UNK_005bf474;
extern "C" unsigned long _UNK_005bfa04;
extern "C" unsigned long _UNK_005bfa08;
extern "C" unsigned long _UNK_005bfa0c;
extern "C" unsigned long _UNK_005bfa10;
extern "C" unsigned long _UNK_005bfa14;
extern "C" unsigned long _UNK_005bfa18;
extern "C" unsigned long _UNK_005bfa1c;
extern "C" unsigned long _UNK_005bfa20;
extern "C" unsigned long _UNK_005bfa24;
extern "C" unsigned long _UNK_005bfa28;
extern "C" unsigned long _UNK_005bfa2c;
extern "C" unsigned long _UNK_005bfa30;
extern "C" unsigned long _UNK_005bfa34;
extern "C" unsigned long _UNK_005bfa38;
extern "C" unsigned long _UNK_005bfa3c;
extern "C" unsigned long _UNK_005bfa40;
extern "C" unsigned long _UNK_005bfa44;
extern "C" unsigned long _UNK_005bfa48;
extern "C" unsigned long _UNK_005bfb38;
extern "C" unsigned long _UNK_005bfb3c;
extern "C" unsigned long _UNK_005bfb40;
extern "C" unsigned long _UNK_005bfb44;
extern "C" unsigned long _UNK_005bfb48;
extern "C" unsigned long _UNK_005bfb4c;
extern "C" unsigned long g_005bf320;
extern "C" unsigned long g_005bf352;
extern "C" unsigned long g_005bf398;
extern "C" unsigned long g_005bf39c;
extern "C" unsigned long g_005bf3ac;
extern "C" unsigned long g_005bf3b0;
extern "C" unsigned long g_005bf470;
extern "C" unsigned long g_005bf474;
extern "C" unsigned long g_005bf614;
extern "C" unsigned long g_005bf618;
extern "C" unsigned long g_005bf674;
extern "C" unsigned long g_005bf6b8;
extern "C" unsigned long g_005bf6ba;
extern "C" unsigned long g_005bf6cc;
extern "C" unsigned long g_005bf740;
extern "C" unsigned long g_005bf914;
extern "C" unsigned long g_005bf992;
extern "C" unsigned long g_005bf994;
extern "C" unsigned long g_005bf9a5;
extern "C" unsigned long g_005bf9e6;
extern "C" unsigned long g_005bfa04;
extern "C" unsigned long g_005bfa08;
extern "C" unsigned long g_005bfa0c;
extern "C" unsigned long g_005bfa10;
extern "C" unsigned long g_005bfa14;
extern "C" unsigned long g_005bfa18;
extern "C" unsigned long g_005bfa1c;
extern "C" unsigned long g_005bfa20;
extern "C" unsigned long g_005bfa24;
extern "C" unsigned long g_005bfa28;
extern "C" unsigned long g_005bfa2c;
extern "C" unsigned long g_005bfa30;
extern "C" unsigned long g_005bfa34;
extern "C" unsigned long g_005bfa38;
extern "C" unsigned long g_005bfa3c;
extern "C" unsigned long g_005bfa40;
extern "C" unsigned long g_005bfa44;
extern "C" unsigned long g_005bfa48;
extern "C" unsigned long g_005bfab8;
extern "C" unsigned long g_005bfaba;
extern "C" unsigned long g_005bfacb;
extern "C" unsigned long g_005bfb38;
extern "C" unsigned long g_005bfb3c;
extern "C" unsigned long g_005bfb40;
extern "C" unsigned long g_005bfb44;
extern "C" unsigned long g_005bfb48;
extern "C" unsigned long g_005bfb4c;
BLMissionRewardInfoView::~BLMissionRewardInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005bf320 + g_005bf398);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005bf352 + g_005bf39c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLMissionRewardInfoView::BLMissionRewardInfoView()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_005bf614 + 0x5bf5bc);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMissionRewardInfoView"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}


bool BLMissionRewardInfoView::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    uVar2 = (undefined4)(((BLMissionRewardInfoPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLMissionRewardInfoView::initView();
    ((BLMissionRewardInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLMissionRewardInfoView*)((int)this));
  }
  return iVar1;
}

void BLMissionRewardInfoView::onEnter()
{
  ((BLMissionRewardInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLMissionRewardInfoView::onExit()
{
  ((BLMissionRewardInfoPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLMissionRewardInfoView::initView()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  uVar3 = (undefined4)(auStack_28[0]);
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar1)))));
  0 /* ctorZero */;
  uVar3 = (undefined4)(uStack_1c);
  cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar2)))));
  0 /* ctorZero */;
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005bf674 + (intptr_t)(g_005bfa0c)),auStack_28);
  piVar4 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  pcVar7 = *(code **)(*piVar4 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar4);
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005bf6b8 + (intptr_t)(g_005bfa10)), (char const*)(unsigned char *)((char *)&g_005bf6ba + (intptr_t)(g_005bfa14)), g_005bfa18);
  (**(code **)(*piVar4 + 0x1b4))(piVar4,(unsigned char *)((char *)&g_005bf6cc + (intptr_t)(g_005bfa1c)));
  pcVar7 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_34),(int)(0x3f000000)))));
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(g_005bfa18),(int)(uVar1)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(uVar1)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),piVar4);
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar6 = (undefined4)(intptr_t)(g_005bfa20);
  *(int *)((int)this + 4*(0x44)) = iVar5;
  func_0079e45c(auStack_20,&g_005bf740 + iVar6,auStack_28);
  piVar4 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x30c))((int *)*(int *)((int)this + 4*(0x44)),piVar4,1);
  piVar8 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar7 = *(code **)(*piVar8 + 0x28c);
  (**(code **)(*piVar4 + 0x1cc))(auStack_20,piVar4);
  (*pcVar7)(piVar8,auStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar7 = *(code **)(*piVar4 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x294))((int *)*(int *)((int)this + 4*(0x44)),0);
  piVar4 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_38),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_34),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_28[0]),(int)(uVar3)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_1c),(int)(uVar1)))));
  0 /* ctorZero */;
  piVar4 = (int *)((long long)::operator new((size_t)(0x134)));
  0 /* ctorZero */;
  iVar6 = (undefined4)(intptr_t)((**(code **)(*piVar4 + 0x18))(piVar4));
  if (iVar6 == 0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    piVar4 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar4)->autorelease();
  }
  *(int *)((int)this + 4*(0x43)) = (int)piVar4;
  (**(code **)(*piVar4 + 0x22c))(piVar4,0);
  piVar4 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar7 = *(code **)(*piVar4 + 0x234);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  piVar4 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_30 + -0x80000000),(int)(0x3f000000)))));
  uVar1 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_2c + -0x80000000),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(iStack_34 + -0x80000000),(int)(0x3f000000)))));
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x + _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uVar3),(int)(g_005bfa2c)))));
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar6 = (undefined4)(intptr_t)(g_005bfa30);
  *(int *)((int)this + 4*(0x45)) = iVar5;
  func_0079e45c(auStack_20,&g_005bf914 + iVar6,auStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x30c))((int *)*(int *)((int)this + 4*(0x45)),uVar1,1);
  piVar4 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar7 = *(code **)(*piVar4 + 0x28c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x294))((int *)*(int *)((int)this + 4*(0x45)),0);
  piVar4 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x45)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x90))((int *)*(int *)((int)this + 4*(0x45)),0);
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005bf992 + (intptr_t)(g_005bfa38)), (char const*)(unsigned char *)((char *)&g_005bf994 + (intptr_t)(g_005bfa3c)), g_005bfa40);
  iVar6 = (undefined4)(intptr_t)(g_005bfa44);
  *(int *)((int)this + 4*(0x46)) = (int)piVar4;
  (**(code **)(*piVar4 + 0x1b4))(piVar4,&g_005bf9a5 + iVar6);
  piVar4 = (int *)*(int *)((int)this + 4*(0x46));
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x46)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x46)) + 0x90))((int *)*(int *)((int)this + 4*(0x46)),0);
  iVar5 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar6 = (undefined4)(intptr_t)(g_005bfa48);
  *(int *)((int)this + 4*(0x47)) = iVar5;
  func_0079e45c(auStack_20,&g_005bf9e6 + iVar6,auStack_28);
  uVar1 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x30c))((int *)*(int *)((int)this + 4*(0x47)),uVar1,1);
  piVar4 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar7 = *(code **)(*piVar4 + 0x28c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x294))((int *)*(int *)((int)this + 4*(0x47)),0);
  piVar4 = (int *)*(int *)((int)this + 4*(0x47));
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x47)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x47)) + 0x90))((int *)*(int *)((int)this + 4*(0x47)),0);
  piVar4 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_005bfab8 + (intptr_t)(g_005bfb40)), (char const*)(unsigned char *)((char *)&g_005bfaba + (intptr_t)(g_005bfb44)), g_005bfb48);
  iVar6 = (undefined4)(intptr_t)(g_005bfb4c);
  *(int *)((int)this + 4*(0x48)) = (int)piVar4;
  (**(code **)(*piVar4 + 0x1b4))(piVar4,&g_005bfacb + iVar6);
  piVar4 = (int *)*(int *)((int)this + 4*(0x48));
  pcVar7 = *(code **)(*piVar4 + 0x4c);
  0 /* ctorZero */;
  (*pcVar7)(piVar4,auStack_20);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x48)));
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x48)) + 0x90))((int *)*(int *)((int)this + 4*(0x48)),0);
  (**(code **)(*(int *)this + 0x88))(((int)this),&uStack_38);
  return;
}
