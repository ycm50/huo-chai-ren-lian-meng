#include "BLControlButton.h"
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
extern "C" long long func_0079eb24(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0051eb40;
extern "C" unsigned long UNK_0051eb7a;
extern "C" unsigned long UNK_0051ebc0;
extern "C" unsigned long UNK_0051ebe8;
extern "C" unsigned long UNK_0051ee28;
extern "C" unsigned long UNK_0051eef0;
extern "C" unsigned long UNK_0051ef08;
extern "C" unsigned long UNK_0051ef46;
extern "C" unsigned long UNK_0051efbc;
extern "C" unsigned long UNK_0051efd8;
extern "C" unsigned long UNK_0051eff4;
extern "C" unsigned long UNK_0051f044;
extern "C" unsigned long UNK_0051f060;
extern "C" unsigned long UNK_0051f0b0;
extern "C" unsigned long _UNK_0051ebac;
extern "C" unsigned long _UNK_0051ebb0;
extern "C" unsigned long _UNK_0051ebc4;
extern "C" unsigned long _UNK_0051ebec;
extern "C" unsigned long _UNK_0051ee2c;
extern "C" unsigned long _UNK_0051eef4;
extern "C" unsigned long _UNK_0051ef70;
extern "C" unsigned long _UNK_0051ef74;
extern "C" unsigned long _UNK_0051efc0;
extern "C" unsigned long _UNK_0051efdc;
extern "C" unsigned long _UNK_0051eff8;
extern "C" unsigned long _UNK_0051f048;
extern "C" unsigned long _UNK_0051f064;
extern "C" unsigned long _UNK_0051f0b4;
extern "C" unsigned long g_0051eb40;
extern "C" unsigned long g_0051eb7a;
extern "C" unsigned long g_0051ebac;
extern "C" unsigned long g_0051ebb0;
extern "C" unsigned long g_0051ebc0;
extern "C" unsigned long g_0051ebc4;
extern "C" unsigned long g_0051ebe8;
extern "C" unsigned long g_0051ebec;
extern "C" unsigned long g_0051ee28;
extern "C" unsigned long g_0051ee2c;
extern "C" unsigned long g_0051eef0;
extern "C" unsigned long g_0051eef4;
extern "C" unsigned long g_0051ef08;
extern "C" unsigned long g_0051ef46;
extern "C" unsigned long g_0051ef70;
extern "C" unsigned long g_0051ef74;
extern "C" unsigned long g_0051efbc;
extern "C" unsigned long g_0051efc0;
extern "C" unsigned long g_0051efd8;
extern "C" unsigned long g_0051efdc;
extern "C" unsigned long g_0051eff4;
extern "C" unsigned long g_0051eff8;
extern "C" unsigned long g_0051f044;
extern "C" unsigned long g_0051f048;
extern "C" unsigned long g_0051f060;
extern "C" unsigned long g_0051f064;
extern "C" unsigned long g_0051f0b0;
extern "C" unsigned long g_0051f0b4;
int * BLControlButton::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x198)));
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

BLControlButton::~BLControlButton()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0051eb40 + g_0051ebac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x33c;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x36c;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x378;
  *(int *)((int)this + 4*(0x42)) = iVar2 + 0x388;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0051eb7a + g_0051ebb0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCControlButton(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLControlButton::registerWithTouchDispatcher()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addStandardDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4, 0);
  return;
}





void BLControlButton::onEnter()
{
  ((cocos2d::extension::CCControl *)this)->onEnter();
  return;
}

void BLControlButton::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  ((cocos2d::extension::CCControl *)((int)this))->onExit();
  return;
}

// ===== 修复: 补回被误删的函数占位 (10) =====
void BLControlButton::ccTouchesMoved(cocos2d::CCSet* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLControlButton::ccTouchesBegan(cocos2d::CCSet* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLControlButton::BLControlButton()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLControlButton::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

bool BLControlButton::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLControlButton::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLControlButton::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLControlButton::ccTouchesEnded(cocos2d::CCSet* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLControlButton::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLControlButton::ccTouchesCancelled(cocos2d::CCSet* p1, cocos2d::CCEvent* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
