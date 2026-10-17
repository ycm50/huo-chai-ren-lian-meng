#include "BLDownLoadSaveAlertViewPresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLDownLoadSaveAlertView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
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
extern "C" unsigned long g_005eae32;
extern "C" unsigned long g_005eae64;
extern "C" unsigned long g_005eae52;
extern "C" unsigned long g_005eae68;
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005eac78;
extern "C" unsigned long UNK_005eac92;
extern "C" unsigned long UNK_005eacd8;
extern "C" unsigned long UNK_005ead00;
extern "C" unsigned long UNK_005ead4c;
extern "C" unsigned long UNK_005ead62;
extern "C" unsigned long UNK_005ead92;
extern "C" unsigned long UNK_005eadc0;
extern "C" unsigned long _UNK_005eacc4;
extern "C" unsigned long _UNK_005eacc8;
extern "C" unsigned long _UNK_005eacdc;
extern "C" unsigned long _UNK_005ead04;
extern "C" unsigned long _UNK_005ead7c;
extern "C" unsigned long _UNK_005ead80;
extern "C" unsigned long _UNK_005eadec;
extern "C" unsigned long _UNK_005eadf0;
extern "C" unsigned long g_005eac78;
extern "C" unsigned long g_005eac92;
extern "C" unsigned long g_005eacc4;
extern "C" unsigned long g_005eacc8;
extern "C" unsigned long g_005eacd8;
extern "C" unsigned long g_005eacdc;
extern "C" unsigned long g_005ead00;
extern "C" unsigned long g_005ead04;
extern "C" unsigned long g_005ead4c;
extern "C" unsigned long g_005ead62;
extern "C" unsigned long g_005ead7c;
extern "C" unsigned long g_005ead80;
extern "C" unsigned long g_005ead92;
extern "C" unsigned long g_005eadc0;
extern "C" unsigned long g_005eadec;
extern "C" unsigned long g_005eadf0;
void BLDownLoadSaveAlertViewPresenter::onEnter()
{
  return;
}

bool BLDownLoadSaveAlertViewPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLDownLoadSaveAlertViewPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDownLoadSaveAlertViewPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLDownLoadSaveAlertViewPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLDownLoadSaveAlertViewPresenter::~BLDownLoadSaveAlertViewPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005eac78 + g_005eacc4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x40;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005eac92 + g_005eacc8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLDownLoadSaveAlertViewPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLDownLoadSaveAlertViewPresenter::onCancle(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x12d);
  return;
}

void BLDownLoadSaveAlertViewPresenter::onSure(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  piVar2 = (int *)((long long)::operator new((size_t)(0x18)));
  0 /* ctorZero */;
  *piVar2 = *(int *)(&g_005ead4c + g_005ead7c) + 8;
  piVar2[5] = 1;
  ((cocos2d::CCObject *)piVar2)->autorelease();
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_005ead62 + g_005ead80, (cocos2d::CCObject*)piVar2);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x12d);
  return;
}

BLDownLoadSaveAlertViewPresenter::BLDownLoadSaveAlertViewPresenter()
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
  iVar3 = *(int *)(&g_005ead92 + g_005eadec);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x40;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005eadc0 + g_005eadf0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLDownLoadSaveAlertViewPresenter::create(BLDownLoadSaveAlertView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLDownLoadSaveAlertViewPresenter::initWithView(BLDownLoadSaveAlertView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x118) + 0x254))
            (*(int **)(p1 + 0x118),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005eae32 + (intptr_t)(g_005eae64))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  (**(code **)(*(int *)(piVar1) + (0x254)))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_005eae52 + (intptr_t)(g_005eae68))),0,0x20);
  return;
}
