#include "BLArrangeButton.h"
#include "BLArrangeButtonPresenter.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004f919c;
extern "C" unsigned long UNK_004f91ce;
extern "C" unsigned long UNK_004f9228;
extern "C" unsigned long UNK_004f9388;
extern "C" unsigned long UNK_004f9420;
extern "C" unsigned long UNK_004f944e;
extern "C" unsigned long UNK_004f94cc;
extern "C" unsigned long UNK_004f94fe;
extern "C" unsigned long UNK_004f955a;
extern "C" unsigned long _UNK_004f9214;
extern "C" unsigned long _UNK_004f9218;
extern "C" unsigned long _UNK_004f922c;
extern "C" unsigned long _UNK_004f938c;
extern "C" unsigned long _UNK_004f9478;
extern "C" unsigned long _UNK_004f947c;
extern "C" unsigned long _UNK_004f961c;
extern "C" unsigned long _UNK_004f9620;
extern "C" unsigned long _UNK_004f9624;
extern "C" unsigned long _UNK_004f9628;
extern "C" unsigned long _UNK_004f962c;
extern "C" unsigned long g_004f919c;
extern "C" unsigned long g_004f91ce;
extern "C" unsigned long g_004f9214;
extern "C" unsigned long g_004f9218;
extern "C" unsigned long g_004f9228;
extern "C" unsigned long g_004f922c;
extern "C" unsigned long g_004f9388;
extern "C" unsigned long g_004f938c;
extern "C" unsigned long g_004f9420;
extern "C" unsigned long g_004f944e;
extern "C" unsigned long g_004f9478;
extern "C" unsigned long g_004f947c;
extern "C" unsigned long g_004f94cc;
extern "C" unsigned long g_004f94fe;
extern "C" unsigned long g_004f955a;
extern "C" unsigned long g_004f961c;
extern "C" unsigned long g_004f9620;
extern "C" unsigned long g_004f9624;
extern "C" unsigned long g_004f9628;
extern "C" unsigned long g_004f962c;
BLArrangeButton::~BLArrangeButton()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004f919c + g_004f9214);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f91ce + g_004f9218,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

BLArrangeButton::BLArrangeButton()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(&g_004f9420 + g_004f9478);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x208;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x238;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x244;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004f944e + g_004f947c,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

int * BLArrangeButton::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x118)));
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


undefined4 BLArrangeButton::getPresenter()
{
  return *(undefined4 *)(((int)this) + 0x108);
}

undefined4 BLArrangeButton::getBtn()
{
  return *(undefined4 *)(((int)this) + 0x10c);
}

undefined4 BLArrangeButton::getSprSel()
{
  return *(undefined4 *)(((int)this) + 0x110);
}

bool BLArrangeButton::getIsSelected()
{
  return *(undefined1 *)(((int)this) + 0x114);
}

void BLArrangeButton::setIsSelected(bool p1)
{
  *(undefined1 *)(((int)this) + 0x114) = p1;
  return;
}

bool BLArrangeButton::init()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    *(undefined1 *)(((int)this) + 0x114) = 0;
    uVar2 = (undefined4)(((BLArrangeButtonPresenter *)this)->create());
    *(undefined4 *)(((int)this) + 0x108) = uVar2;
    ((cocos2d::CCObject *)this)->retain();
    BLArrangeButton::initView();
    ((BLArrangeButtonPresenter *)*(undefined4 *)(((int)this) + 0x108))->initWithView((BLArrangeButton*)((int)this));
  }
  return iVar1;
}

void BLArrangeButton::onEnter()
{
  ((BLArrangeButtonPresenter *)*(undefined4 *)(((int)this) + 0x108))->onEnter();
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void BLArrangeButton::onExit()
{
  ((BLArrangeButtonPresenter *)*(undefined4 *)(((int)this) + 0x108))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLArrangeButton::initView()
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004f94cc + (intptr_t)(g_004f961c)),auStack_28);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_20);
  (**(code **)(*piVar1 + 0x40))(piVar1,g_004f9620);
  (**(code **)(*(int *)this + 200))(((int)this),piVar1);
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004f94fe + (intptr_t)(g_004f9624)),auStack_28);
  iVar2 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x44)) = iVar2;
  func_0079e2bc(auStack_20);
  piVar1 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x90))((int *)*(int *)((int)this + 4*(0x44)),0);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x44)));
  iVar3 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create());
  iVar2 = (undefined4)(intptr_t)(g_004f962c);
  *(int *)((int)this + 4*(0x43)) = iVar3;
  func_0079e45c(auStack_20,&g_004f955a + iVar2,auStack_28);
  uVar4 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x30c))((int *)*(int *)((int)this + 4*(0x43)),uVar4,1);
  piVar1 = (int *)*(int *)((int)this + 4*(0x43));
  pcVar6 = *(code **)(*piVar1 + 0x28c);
  0 /* ctorZero */;
  (*pcVar6)(piVar1,auStack_20);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x294))((int *)*(int *)((int)this + 4*(0x43)),0);
  (**(code **)(*(int *)this + 200))(((int)this),*(int *)((int)this + 4*(0x43)));
  pcVar6 = *(code **)(*(int *)this + 0x88);
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar4 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(auStack_30[0]),(int)(uVar4)))));
  0 /* ctorZero */;
  cocos2d::CCDirector::sharedDirector();
  uVar5 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar5 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x / _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(uVar5)))));
  0 /* ctorZero */;
  (*pcVar6)(((int)this),auStack_20);
  return;
}
