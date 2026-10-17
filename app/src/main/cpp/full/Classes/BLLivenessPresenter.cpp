#include "BLLivenessPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLivenessView.h"
#include "BLLeakUtils.h"
#include "BLLivenessDegreePresenter.h"
#include "BLLivenessMissionPresenter.h"
#include "BLLivenessMissionView.h"
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
extern "C" unsigned long UNK_0057f6c4;
extern "C" unsigned long UNK_0057f71c;
extern "C" unsigned long UNK_0057f736;
extern "C" unsigned long UNK_0057f77c;
extern "C" unsigned long UNK_0057f7a4;
extern "C" unsigned long UNK_0057f81e;
extern "C" unsigned long UNK_0057f836;
extern "C" unsigned long UNK_0057f8ce;
extern "C" unsigned long UNK_0057f8f2;
extern "C" unsigned long UNK_0057f8f4;
extern "C" unsigned long UNK_0057f90c;
extern "C" unsigned long UNK_0057f90e;
extern "C" unsigned long _UNK_0057f6c8;
extern "C" unsigned long _UNK_0057f768;
extern "C" unsigned long _UNK_0057f76c;
extern "C" unsigned long _UNK_0057f780;
extern "C" unsigned long _UNK_0057f7a8;
extern "C" unsigned long _UNK_0057f808;
extern "C" unsigned long _UNK_0057f80c;
extern "C" unsigned long _UNK_0057f880;
extern "C" unsigned long _UNK_0057f884;
extern "C" unsigned long _UNK_0057f8d8;
extern "C" unsigned long _UNK_0057f91c;
extern "C" unsigned long _UNK_0057f920;
extern "C" unsigned long _UNK_0057f924;
extern "C" unsigned long _UNK_0057f928;
extern "C" unsigned long g_0057f6c4;
extern "C" unsigned long g_0057f6c8;
extern "C" unsigned long g_0057f71c;
extern "C" unsigned long g_0057f736;
extern "C" unsigned long g_0057f768;
extern "C" unsigned long g_0057f76c;
extern "C" unsigned long g_0057f77c;
extern "C" unsigned long g_0057f780;
extern "C" unsigned long g_0057f7a4;
extern "C" unsigned long g_0057f7a8;
extern "C" unsigned long g_0057f808;
extern "C" unsigned long g_0057f80c;
extern "C" unsigned long g_0057f81e;
extern "C" unsigned long g_0057f836;
extern "C" unsigned long g_0057f880;
extern "C" unsigned long g_0057f884;
extern "C" unsigned long g_0057f8ce;
extern "C" unsigned long g_0057f8d8;
extern "C" unsigned long g_0057f8f2;
extern "C" unsigned long g_0057f8f4;
extern "C" unsigned long g_0057f90c;
extern "C" unsigned long g_0057f90e;
extern "C" unsigned long g_0057f91c;
extern "C" unsigned long g_0057f920;
extern "C" unsigned long g_0057f924;
extern "C" unsigned long g_0057f928;
bool BLLivenessPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLLivenessPresenter::~BLLivenessPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0057f71c + g_0057f768);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057f736 + g_0057f76c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLLivenessPresenter::onUpdateDegreeData()
{
  ((BLLivenessDegreePresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x114) + 0x108))->updateWithData();
  return;
}

void BLLivenessPresenter::onUpdateMissionData()
{
  ((BLLivenessDegreePresenter *)*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x18) + 0x114) + 0x108))->updateWithData();
  ((BLLivenessMissionView *)*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x110))->getPresenter();
  ((BLLivenessMissionPresenter *)this)->initWithData();
  return;
}


BLLivenessPresenter::BLLivenessPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar3 = *(int *)(&g_0057f81e + g_0057f880);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x2c;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0057f836 + g_0057f884,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  return;
}

undefined4 BLLivenessPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}



void BLLivenessPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLLivenessPresenter::onBtnClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(g_0057f808);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(g_0057f80c)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(g_0057f80c);
  }
  return;
}

void BLLivenessPresenter::initWithView(BLLivenessView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0057f8ce + (intptr_t)(g_0057f8d8))),0,
             0x20);
  return;
}

void BLLivenessPresenter::onEnter()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0057f8f4 + (intptr_t)(g_0057f91c))), 0, (char const*)(unsigned char *)((char *)&g_0057f8f2 + (intptr_t)(g_0057f920)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0057f90c + (intptr_t)(g_0057f924))), 0, (char const*)(unsigned char *)((char *)&g_0057f90e + (intptr_t)(g_0057f928)), 0);
  return;
}
