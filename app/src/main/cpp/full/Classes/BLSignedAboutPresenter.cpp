#include "BLSignedAboutPresenter.h"
#include "BLSignedAboutView.h"
#include "BLLeakUtils.h"
#include "UIManager.h"
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
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006874a0;
extern "C" unsigned long UNK_006874b8;
extern "C" unsigned long UNK_006874d0;
extern "C" unsigned long UNK_00687544;
extern "C" unsigned long UNK_0068755e;
extern "C" unsigned long UNK_006875a4;
extern "C" unsigned long UNK_006875cc;
extern "C" unsigned long UNK_006875f2;
extern "C" unsigned long UNK_00687620;
extern "C" unsigned long UNK_006876b2;
extern "C" unsigned long _UNK_006874a4;
extern "C" unsigned long _UNK_006874bc;
extern "C" unsigned long _UNK_006874d4;
extern "C" unsigned long _UNK_00687590;
extern "C" unsigned long _UNK_00687594;
extern "C" unsigned long _UNK_006875a8;
extern "C" unsigned long _UNK_006875d0;
extern "C" unsigned long _UNK_0068764c;
extern "C" unsigned long _UNK_00687650;
extern "C" unsigned long _UNK_006876bc;
extern "C" unsigned long g_006874a0;
extern "C" unsigned long g_006874a4;
extern "C" unsigned long g_006874b8;
extern "C" unsigned long g_006874bc;
extern "C" unsigned long g_006874d0;
extern "C" unsigned long g_006874d4;
extern "C" unsigned long g_00687544;
extern "C" unsigned long g_0068755e;
extern "C" unsigned long g_00687590;
extern "C" unsigned long g_00687594;
extern "C" unsigned long g_006875a4;
extern "C" unsigned long g_006875a8;
extern "C" unsigned long g_006875cc;
extern "C" unsigned long g_006875d0;
extern "C" unsigned long g_006875f2;
extern "C" unsigned long g_00687620;
extern "C" unsigned long g_0068764c;
extern "C" unsigned long g_00687650;
extern "C" unsigned long g_006876b2;
extern "C" unsigned long g_006876bc;
bool BLSignedAboutPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSignedAboutPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSignedAboutPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSignedAboutPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSignedAboutPresenter::tick(float p1)
{
  return;
}

BLSignedAboutPresenter::~BLSignedAboutPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00687544 + g_00687590);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0068755e + g_00687594,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSignedAboutPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xb7);
  return;
}

BLSignedAboutPresenter::BLSignedAboutPresenter()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_006875f2 + g_0068764c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00687620 + g_00687650,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLSignedAboutPresenter::create(BLSignedAboutView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSignedAboutPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLSignedAboutPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 BLSignedAboutPresenter::initWithView(BLSignedAboutView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x114) + 0x254))
            (*(int **)(p1 + 0x114),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_006876b2 + (intptr_t)(g_006876bc))),0,
             0x20);
  return 1;
}
