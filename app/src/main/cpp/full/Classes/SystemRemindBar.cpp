#include "SystemRemindBar.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCAction.h"
#include "CCObject.h"
#include "CCArray.h"
#include "CCTouch.h"
#include "CCInvocation.h"
#include "CCLayer.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCActionInterval.h"
#include "CCGeometry.h"
#include "BLLeakUtils.h"
#include "BLRichText.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004dfe6c;
extern "C" unsigned long UNK_004dfe84;
extern "C" unsigned long UNK_004dfe9c;
extern "C" unsigned long UNK_004dfeb4;
extern "C" unsigned long UNK_004dff0c;
extern "C" unsigned long UNK_004dff50;
extern "C" unsigned long UNK_004dff94;
extern "C" unsigned long UNK_004dffbc;
extern "C" unsigned long UNK_004dffe6;
extern "C" unsigned long UNK_004dffe8;
extern "C" unsigned long UNK_004e0063;
extern "C" unsigned long UNK_004e02c8;
extern "C" unsigned long _DAT_004e0414;
extern "C" unsigned long _DAT_004e0418;
extern "C" unsigned long _DAT_004e0514;
extern "C" unsigned long _DAT_004e0518;
extern "C" unsigned long _DAT_004e051c;
extern "C" unsigned long _DAT_004e06b4;
extern "C" unsigned long _DAT_004e06b8;
extern "C" unsigned long _DAT_004e06bc;
extern "C" unsigned long _DAT_004e06c0;
extern "C" unsigned long _UNK_004dfe70;
extern "C" unsigned long _UNK_004dfe88;
extern "C" unsigned long _UNK_004dfea0;
extern "C" unsigned long _UNK_004dfeb8;
extern "C" unsigned long _UNK_004dff80;
extern "C" unsigned long _UNK_004dff84;
extern "C" unsigned long _UNK_004dff98;
extern "C" unsigned long _UNK_004dffc0;
extern "C" unsigned long _UNK_004e01d4;
extern "C" unsigned long _UNK_004e01d8;
extern "C" unsigned long _UNK_004e01dc;
extern "C" unsigned long _UNK_004e01e0;
extern "C" unsigned long _UNK_004e01e4;
extern "C" unsigned long _UNK_004e01e8;
extern "C" unsigned long _UNK_004e01ec;
extern "C" unsigned long _UNK_004e025c;
extern "C" unsigned long _UNK_004e0350;
extern "C" unsigned long _UNK_004e0354;
extern "C" unsigned long g_004dfe6c;
extern "C" unsigned long g_004dfe70;
extern "C" unsigned long g_004dfe84;
extern "C" unsigned long g_004dfe88;
extern "C" unsigned long g_004dfe9c;
extern "C" unsigned long g_004dfea0;
extern "C" unsigned long g_004dfeb4;
extern "C" unsigned long g_004dfeb8;
extern "C" unsigned long g_004dff0c;
extern "C" unsigned long g_004dff50;
extern "C" unsigned long g_004dff80;
extern "C" unsigned long g_004dff84;
extern "C" unsigned long g_004dff94;
extern "C" unsigned long g_004dff98;
extern "C" unsigned long g_004dffbc;
extern "C" unsigned long g_004dffc0;
extern "C" unsigned long g_004dffe6;
extern "C" unsigned long g_004dffe8;
extern "C" unsigned long g_004e0063;
extern "C" unsigned long g_004e01d4;
extern "C" unsigned long g_004e01d8;
extern "C" unsigned long g_004e01dc;
extern "C" unsigned long g_004e01e0;
extern "C" unsigned long g_004e01e4;
extern "C" unsigned long g_004e01e8;
extern "C" unsigned long g_004e01ec;
extern "C" unsigned long g_004e025c;
extern "C" unsigned long g_004e02c8;
extern "C" unsigned long g_004e0350;
extern "C" unsigned long g_004e0354;
extern "C" unsigned long g_004e0414;
extern "C" unsigned long g_004e0418;
extern "C" unsigned long g_004e0514;
extern "C" unsigned long g_004e0518;
extern "C" unsigned long g_004e051c;
extern "C" unsigned long g_004e06b4;
extern "C" unsigned long g_004e06b8;
extern "C" unsigned long g_004e06bc;
extern "C" unsigned long g_004e06c0;
cocos2d::extension::CCInvocation* SystemRemindBar::getInvocation() const
{
  return (cocos2d::extension::CCInvocation*)(*(undefined4 *)(((int)this) + 0x108));
}

bool SystemRemindBar::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 0;
}

void SystemRemindBar::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void SystemRemindBar::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void SystemRemindBar::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

SystemRemindBar::~SystemRemindBar()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004dff0c + g_004dff80);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004dff50 + g_004dff84,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


undefined8 SystemRemindBar::scaleTosmallEnd()
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined4)(g_004e025c);
  (**(code **)(**(int **)(((int)this) + 0x114) + 0x38))(*(int **)(((int)this) + 0x114),0);
  uVar4 = (undefined4)(*(undefined4 *)(((int)this) + 0x114));
  uVar1 = (undefined4)(cocos2d::CCFadeTo::create(uVar3, (unsigned char)0xff));
  uVar2 = (undefined4)(cocos2d::CCScaleTo::create(uVar3, 0x3f800000, 0x3f800000));
  uVar1 = (undefined4)(cocos2d::CCSpawn::create((cocos2d::CCFiniteTimeAction*)uVar1, uVar2, 0));
  ((cocos2d::CCNode *)uVar4)->runAction((cocos2d::CCAction*)uVar1);
  uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x10c));
  uVar1 = (undefined4)(cocos2d::CCFadeTo::create(uVar3, (unsigned char)0xff));
  uVar3 = (undefined4)(cocos2d::CCScaleTo::create(uVar3, 0x3f800000, 0x3f800000));
  uVar3 = (undefined4)(cocos2d::CCSpawn::create((cocos2d::CCFiniteTimeAction*)uVar1, uVar3, 0));
  ((cocos2d::CCNode *)uVar2)->runAction((cocos2d::CCAction*)uVar3);
  return ghidra_CONCAT44(uVar4,((int)this));
}


void SystemRemindBar::allEnd()
{
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::extension::CCInvocation *)*(int *)((int)this + 4*(0x42)))->invoke((cocos2d::CCObject*)((int)this));
  }
  (**(code **)(*(int *)this + 0xec))(((int)this),1);
  return;
}

void SystemRemindBar::setInvocation(cocos2d::extension::CCInvocation* p1)
{
  if (*(int *)(((int)this) + 0x108) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x108) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  }
  return;
}

SystemRemindBar::SystemRemindBar()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar2 = *(int *)(g_004e0414 + 0x4e03b0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x42)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"SystemRemindBar"),&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}



void SystemRemindBar::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4, 1, 1);
  ((cocos2d::CCLayer *)((int)this))->onEnter();
  return;
}

void SystemRemindBar::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  ((cocos2d::CCLayer *)((int)this))->onExit();
  return;
}

int * SystemRemindBar::create()
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

// ===== 修复: 补回被误删的函数占位 (4) =====
bool SystemRemindBar::init()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); uStack_28 = hw_fbits(_ws.width); uStack_24 = hw_fbits(_ws.height); }
  piVar2 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004dffe8 + (intptr_t)(g_004e01d4)), (char const*)(unsigned char *)((char *)&g_004dffe6 + (intptr_t)(g_004e01d8)), g_004e01dc);
  *(int *)((int)this + 4*(0x43)) = (int)piVar2;
  pcVar6 = *(code **)(*piVar2 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(uStack_28,0x3f000000));
  uVar3 = (undefined4)(func_0079e4fc(uStack_24,0x3f000000));
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x43)),3);
  piVar2 = (int *)*(int *)((int)this + 4*(0x43));
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  0 /* ctorZero */;
  ((cocos2d::CCLabelTTF *)(piVar2))->setDimensions(*(const CCSize *)(void *)auStack_20);
  piVar2 = (int *)cocos2d::CCLayerColor::create();
  *(int *)((int)this + 4*(0x44)) = (int)piVar2;
  iVar4 = (undefined4)(intptr_t)(g_004e01e4);
  (**(code **)(*(int *)(piVar2) + (0x218)))();
  uVar1 = (undefined4)(uStack_28);
  piVar2 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar2 + 0x88);
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  uVar3 = (undefined4)(func_0079e59c(*(undefined4 *)(iVar5 + 4),g_004e01e8));
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_20);
  piVar2 = (int *)*(int *)((int)this + 4*(0x44));
  pcVar6 = *(code **)(*piVar2 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_20);
  piVar2 = (int *)*(int *)((int)this + 4*(0x44));
  iVar5 = (int)*(int *)&(*piVar2);
  pcVar6 = *(code **)(iVar5 + 0x4c);
  uVar1 = (undefined4)(func_0079e4fc(uStack_24,0x3f000000));
  iVar5 = (undefined4)(intptr_t)((**(code **)(iVar5 + 0x8c))(piVar2));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar5 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar3));
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x44)),1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x200))((int *)*(int *)((int)this + 4*(0x44)),0xff);
  piVar2 = (int *)cocos2d::CCLayerColor::create();
  *(int *)((int)this + 4*(0x45)) = (int)piVar2;
  (**(code **)(*(int *)(piVar2) + (0x218)))(piVar2,&g_004e0063 + iVar4);
  piVar2 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar6 = *(code **)(*piVar2 + 0x88);
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x43)) + 0x8c))());
  uVar1 = (undefined4)(func_0079e59c(*(undefined4 *)(iVar4 + 4),g_004e01ec));
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_20);
  piVar2 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar6 = *(code **)(*piVar2 + 0x7c);
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),2);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x45)) + 0x200))((int *)*(int *)((int)this + 4*(0x45)),0xff);
  piVar2 = (int *)*(int *)((int)this + 4*(0x45));
  uVar1 = (undefined4)(func_0079e4fc(uStack_24,0x3f000000));
  pcVar6 = *(code **)(*piVar2 + 0x4c);
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar3));
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_20);
  return 1;
}

void SystemRemindBar::frontActionEnd()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void SystemRemindBar::setTitle(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void SystemRemindBar::setRichText(cocos2d::CCArray* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
