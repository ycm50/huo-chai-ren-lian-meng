#include "ChallengeTicketPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "ChallengeTicketView.h"
#include "BLLeakUtils.h"
#include "ChallengeHttpUtil.h"
#include "DataManager.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e734(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0050aa28;
extern "C" unsigned long UNK_0050aa42;
extern "C" unsigned long UNK_0050aa90;
extern "C" unsigned long UNK_0050aab8;
extern "C" unsigned long UNK_0050aadc;
extern "C" unsigned long UNK_0050ab9e;
extern "C" unsigned long UNK_0050abb8;
extern "C" unsigned long UNK_0050abe8;
extern "C" unsigned long UNK_0050ac10;
extern "C" unsigned long UNK_0050ac12;
extern "C" unsigned long UNK_0050ac2a;
extern "C" unsigned long UNK_0050ac2e;
extern "C" unsigned long UNK_0050acbe;
extern "C" unsigned long UNK_0050acde;
extern "C" unsigned long UNK_0050acfc;
extern "C" unsigned long UNK_0050ad1a;
extern "C" unsigned long _UNK_0050aa7c;
extern "C" unsigned long _UNK_0050aa80;
extern "C" unsigned long _UNK_0050aa94;
extern "C" unsigned long _UNK_0050aabc;
extern "C" unsigned long _UNK_0050aae0;
extern "C" unsigned long _UNK_0050aba4;
extern "C" unsigned long _UNK_0050ac50;
extern "C" unsigned long _UNK_0050ac54;
extern "C" unsigned long _UNK_0050ac58;
extern "C" unsigned long _UNK_0050ac5c;
extern "C" unsigned long _UNK_0050ac60;
extern "C" unsigned long _UNK_0050ac64;
extern "C" unsigned long _UNK_0050ad2c;
extern "C" unsigned long _UNK_0050ad30;
extern "C" unsigned long _UNK_0050ad34;
extern "C" unsigned long _UNK_0050ad38;
extern "C" unsigned long g_0050aa28;
extern "C" unsigned long g_0050aa42;
extern "C" unsigned long g_0050aa7c;
extern "C" unsigned long g_0050aa80;
extern "C" unsigned long g_0050aa90;
extern "C" unsigned long g_0050aa94;
extern "C" unsigned long g_0050aab8;
extern "C" unsigned long g_0050aabc;
extern "C" unsigned long g_0050aadc;
extern "C" unsigned long g_0050aae0;
extern "C" unsigned long g_0050ab9e;
extern "C" unsigned long g_0050aba4;
extern "C" unsigned long g_0050abb8;
extern "C" unsigned long g_0050abe8;
extern "C" unsigned long g_0050ac10;
extern "C" unsigned long g_0050ac12;
extern "C" unsigned long g_0050ac2a;
extern "C" unsigned long g_0050ac2e;
extern "C" unsigned long g_0050ac50;
extern "C" unsigned long g_0050ac54;
extern "C" unsigned long g_0050ac58;
extern "C" unsigned long g_0050ac5c;
extern "C" unsigned long g_0050ac60;
extern "C" unsigned long g_0050ac64;
extern "C" unsigned long g_0050acbe;
extern "C" unsigned long g_0050acde;
extern "C" unsigned long g_0050acfc;
extern "C" unsigned long g_0050ad1a;
extern "C" unsigned long g_0050ad2c;
extern "C" unsigned long g_0050ad30;
extern "C" unsigned long g_0050ad34;
extern "C" unsigned long g_0050ad38;
void ChallengeTicketPresenter::tick(float p1)
{
  return;
}

bool ChallengeTicketPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

ChallengeTicketPresenter::~ChallengeTicketPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0050aa28 + g_0050aa7c);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x30;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0050aa42 + g_0050aa80,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void ChallengeTicketPresenter::onCancelClick(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(700);
  return;
}

void ChallengeTicketPresenter::onBuyFail()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((Toast *)this)->sharedToast());
  ((Toast *)uVar1)->showToast((char const*)&g_0050aadc + g_0050aae0);
  return;
}

void ChallengeTicketPresenter::onClick100(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  iVar2 = ((DataManager *)uVar1)->isEnoughVirNumber(2, 100, 1);
  if (iVar2 != 0) {
    *(undefined4 *)(((int)this) + 0x1c) = 100;
    uVar1 = (undefined4)(((ChallengeHttpUtil *)this)->getInstance());
    ((ChallengeHttpUtil *)uVar1)->putChallengeStata(0);
  }
  return;
}




ChallengeTicketPresenter::ChallengeTicketPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_2c [12];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_0050abb8 + (intptr_t)(g_0050ac50))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x30;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_2c,(unsigned char *)((char *)&g_0050abe8 + (intptr_t)(g_0050ac54)),&uStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_2c);
  func_0079e2bc(auStack_2c);
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0050ac10 + (intptr_t)(g_0050ac58))), 0, (char const*)(unsigned char *)((char *)&g_0050ac12 + (intptr_t)(g_0050ac5c)), 0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_0050ac2a + (intptr_t)(g_0050ac60))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_0050ac2e + (intptr_t)(g_0050ac64)), 0);
  return;
}

void ChallengeTicketPresenter::onEnter()
{
  return;
}

void ChallengeTicketPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 ChallengeTicketPresenter::create(ChallengeTicketView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void ChallengeTicketPresenter::onClick300(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  iVar2 = (undefined4)(intptr_t)(((DataManager *)this)->isEnoughVirNumber(uVar1, 2, 300));
  if (iVar2 != 0) {
    *(undefined4 *)(((int)this) + 0x1c) = 300;
    uVar1 = (undefined4)(((ChallengeHttpUtil *)this)->getInstance());
    ((ChallengeHttpUtil *)uVar1)->putChallengeStata(1);
  }
  return;
}

void ChallengeTicketPresenter::onClick500(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  iVar2 = (undefined4)(intptr_t)(((DataManager *)this)->isEnoughVirNumber(uVar1, 2, 500));
  if (iVar2 != 0) {
    *(undefined4 *)(((int)this) + 0x1c) = 500;
    uVar1 = (undefined4)(((ChallengeHttpUtil *)this)->getInstance());
    ((ChallengeHttpUtil *)uVar1)->putChallengeStata(2);
  }
  return;
}

void ChallengeTicketPresenter::onBuySucceed()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = (undefined4)(intptr_t)((int *)((int)this));
  uVar1 = (undefined4)(((DataManager *)this)->shareDataManager());
  iVar2 = (undefined4)(intptr_t)(((DataManager *)this)->isEnoughVirNumber(uVar1, 2, *(undefined4 *)(((int)this) + 0x1c)));
  if (iVar2 != 0) {
    piVar3 = (int *)((DataManager *)this)->shareDataManager();
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))());
    uVar4 = (undefined4)(intptr_t)(func_0079e734(*(undefined4 *)(((int)this) + 0x1c)));
    iVar5 = 1;
    ((UserData *)uVar1)->subVirNumber(2, (int)uVar4, (int)((ulonglong)uVar4 >> 0x20));
    uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)(unsigned char *)((char *)&g_0050ab9e + (intptr_t)(g_0050aba4)));
  }
  return;
}

void ChallengeTicketPresenter::initWithView(ChallengeTicketView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x110) + 0x254))
            (*(int **)(p1 + 0x110),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0050acbe + (intptr_t)(g_0050ad2c))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0050acde + (intptr_t)(g_0050ad30))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0050acfc + (intptr_t)(g_0050ad34))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x11c);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0050ad1a + (intptr_t)(g_0050ad38))),0,0x20);
  return;
}
