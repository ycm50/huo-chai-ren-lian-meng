#include "PKResultPresenter.h"
#include "PKResultView.h"
#include "BLLeakUtils.h"
#include "BLResultManager.h"
#include "BluetoothHelper.h"
#include "PKOnlineManager.h"
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
extern "C" unsigned long UNK_0061b618;
extern "C" unsigned long UNK_0061b630;
extern "C" unsigned long UNK_0061b648;
extern "C" unsigned long UNK_0061b660;
extern "C" unsigned long UNK_0061b6b8;
extern "C" unsigned long UNK_0061b6d2;
extern "C" unsigned long UNK_0061b718;
extern "C" unsigned long UNK_0061b740;
extern "C" unsigned long UNK_0061b762;
extern "C" unsigned long UNK_0061b790;
extern "C" unsigned long UNK_0061b826;
extern "C" unsigned long _UNK_0061b61c;
extern "C" unsigned long _UNK_0061b634;
extern "C" unsigned long _UNK_0061b64c;
extern "C" unsigned long _UNK_0061b664;
extern "C" unsigned long _UNK_0061b704;
extern "C" unsigned long _UNK_0061b708;
extern "C" unsigned long _UNK_0061b71c;
extern "C" unsigned long _UNK_0061b744;
extern "C" unsigned long _UNK_0061b7bc;
extern "C" unsigned long _UNK_0061b7c0;
extern "C" unsigned long _UNK_0061b830;
extern "C" unsigned long _UNK_0061b870;
extern "C" unsigned long g_0061b618;
extern "C" unsigned long g_0061b61c;
extern "C" unsigned long g_0061b630;
extern "C" unsigned long g_0061b634;
extern "C" unsigned long g_0061b648;
extern "C" unsigned long g_0061b64c;
extern "C" unsigned long g_0061b660;
extern "C" unsigned long g_0061b664;
extern "C" unsigned long g_0061b6b8;
extern "C" unsigned long g_0061b6d2;
extern "C" unsigned long g_0061b704;
extern "C" unsigned long g_0061b708;
extern "C" unsigned long g_0061b718;
extern "C" unsigned long g_0061b71c;
extern "C" unsigned long g_0061b740;
extern "C" unsigned long g_0061b744;
extern "C" unsigned long g_0061b762;
extern "C" unsigned long g_0061b790;
extern "C" unsigned long g_0061b7bc;
extern "C" unsigned long g_0061b7c0;
extern "C" unsigned long g_0061b826;
extern "C" unsigned long g_0061b830;
extern "C" unsigned long g_0061b870;
void PKResultPresenter::tick(float p1)
{
  return;
}

bool PKResultPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void PKResultPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKResultPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void PKResultPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

PKResultPresenter::~PKResultPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0061b6b8 + g_0061b704);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0061b6d2 + g_0061b708,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void PKResultPresenter::goOnPlay(cocos2d::CCObject* p1, unsigned int p2)
{
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  return;
}

PKResultPresenter::PKResultPresenter()
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
  iVar3 = *(int *)(&g_0061b762 + g_0061b7bc);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0061b790 + g_0061b7c0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void PKResultPresenter::onEnter()
{
  return;
}

void PKResultPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 PKResultPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

bool PKResultPresenter::init()
{
  return 1;
}


void PKResultPresenter::exitLobby(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  
  ((PKOnlineManager *)this)->exitLobby();
  ((BLResultManager *)this)->shareManager();
  ((BLResultManager *)this)->returnMainCity();
  ((BluetoothHelper *)this)->share();
  iVar1 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar1 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar1 = ((BluetoothHelper *)this)->isHost();
    if (iVar1 != 0) {
      ((BluetoothHelper *)this)->share();
      ((BluetoothHelper *)this)->enterMainCity();
    }
  }
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->removeUIByID(g_0061b870);
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 PKResultPresenter::initWithView(PKResultView* p1)
{
  *(int *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x110) + 0x254))
            (*(int **)(p1 + 0x110),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_0061b826 + (intptr_t)(g_0061b830))),0,
             0x20);
  return 1;
}
