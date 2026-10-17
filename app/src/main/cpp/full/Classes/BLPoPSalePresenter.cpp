#include "BLPoPSalePresenter.h"
#include "BLPoPSaleView.h"
#include "BLLeakUtils.h"
#include "PlatformHelp.h"
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
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0062809c;
extern "C" unsigned long UNK_006280b4;
extern "C" unsigned long UNK_006280cc;
extern "C" unsigned long UNK_006280e4;
extern "C" unsigned long UNK_00628148;
extern "C" unsigned long UNK_00628166;
extern "C" unsigned long UNK_006281b8;
extern "C" unsigned long UNK_006281e0;
extern "C" unsigned long UNK_0062823c;
extern "C" unsigned long UNK_00628290;
extern "C" unsigned long UNK_006282c2;
extern "C" unsigned long UNK_006282d2;
extern "C" unsigned long UNK_006282fa;
extern "C" unsigned long UNK_00628376;
extern "C" unsigned long UNK_00628396;
extern "C" unsigned long UNK_006283b4;
extern "C" unsigned long _UNK_006280a0;
extern "C" unsigned long _UNK_006280b8;
extern "C" unsigned long _UNK_006280d0;
extern "C" unsigned long _UNK_006280e8;
extern "C" unsigned long _UNK_006281a4;
extern "C" unsigned long _UNK_006281a8;
extern "C" unsigned long _UNK_006281bc;
extern "C" unsigned long _UNK_006281e4;
extern "C" unsigned long _UNK_006281f8;
extern "C" unsigned long _UNK_00628258;
extern "C" unsigned long _UNK_0062825c;
extern "C" unsigned long _UNK_006282ac;
extern "C" unsigned long _UNK_006282b0;
extern "C" unsigned long _UNK_0062832c;
extern "C" unsigned long _UNK_00628330;
extern "C" unsigned long _UNK_00628334;
extern "C" unsigned long _UNK_006283c4;
extern "C" unsigned long _UNK_006283c8;
extern "C" unsigned long _UNK_006283cc;
extern "C" unsigned long g_0062809c;
extern "C" unsigned long g_006280a0;
extern "C" unsigned long g_006280b4;
extern "C" unsigned long g_006280b8;
extern "C" unsigned long g_006280cc;
extern "C" unsigned long g_006280d0;
extern "C" unsigned long g_006280e4;
extern "C" unsigned long g_006280e8;
extern "C" unsigned long g_00628148;
extern "C" unsigned long g_00628166;
extern "C" unsigned long g_006281a4;
extern "C" unsigned long g_006281a8;
extern "C" unsigned long g_006281b8;
extern "C" unsigned long g_006281bc;
extern "C" unsigned long g_006281e0;
extern "C" unsigned long g_006281e4;
extern "C" unsigned long g_006281f8;
extern "C" unsigned long g_0062823c;
extern "C" unsigned long g_00628258;
extern "C" unsigned long g_0062825c;
extern "C" unsigned long g_00628290;
extern "C" unsigned long g_006282ac;
extern "C" unsigned long g_006282b0;
extern "C" unsigned long g_006282c2;
extern "C" unsigned long g_006282d2;
extern "C" unsigned long g_006282fa;
extern "C" unsigned long g_0062832c;
extern "C" unsigned long g_00628330;
extern "C" unsigned long g_00628334;
extern "C" unsigned long g_00628376;
extern "C" unsigned long g_00628396;
extern "C" unsigned long g_006283b4;
extern "C" unsigned long g_006283c4;
extern "C" unsigned long g_006283c8;
extern "C" unsigned long g_006283cc;
bool BLPoPSalePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPoPSalePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPoPSalePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPoPSalePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPoPSalePresenter::tick(float p1)
{
  return;
}

void BLPoPSalePresenter::setStrPayName(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

BLPoPSalePresenter::~BLPoPSalePresenter()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(&g_00628148 + g_006281a4);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x44;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,&g_00628166 + g_006281a8,&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  func_0079e2bc(((int)this) + 6);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLPoPSalePresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006281f8);
  return;
}

std::string BLPoPSalePresenter::getStrPayName() const
{ return *(std::string *)(((int)this) + 0x18); }

undefined8 BLPoPSalePresenter::onPage1(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p1);
  func_0079e53c(&uStack_c,((int)this) + 0x18);
  ((PlatformHelp *)this)->charge((std::string)(char*)uStack_c, 1);
  func_0079e2bc(&uStack_c);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(1));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_0062823c + g_00628258, (cocos2d::CCObject*)uVar2);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_0062825c);
  return ghidra_CONCAT44(uStack_c,((int)this));
}

undefined8 BLPoPSalePresenter::onPage2(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p1);
  func_0079e53c(&uStack_c,((int)this) + 0x18);
  ((PlatformHelp *)this)->charge((std::string)(char*)uStack_c, 2);
  func_0079e2bc(&uStack_c);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uVar2 = (undefined4)(cocos2d::CCInteger::create(1));
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_00628290 + g_006282ac, (cocos2d::CCObject*)uVar2);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(g_006282b0);
  return ghidra_CONCAT44(uStack_c,((int)this));
}

BLPoPSalePresenter::BLPoPSalePresenter()
{
  undefined4 p2 = 0;

  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piStack_18;
  undefined4 uStack_14;
  
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  iVar4 = *(int *)(&g_006282c2 + g_0062832c);
  *(int *)((int)this + 4*(5)) = iVar4 + 0x44;
  iVar1 = g_00628330;
  *(int *)this = iVar4 + 8;
  *(int *)((int)this + 4*(6)) = *(int *)(&g_006282d2 + iVar1) + 0xc;
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar3)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar3 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006282fa + g_00628334,&piStack_18);
  ((BLLeakUtils *)uVar3)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLPoPSalePresenter::create(BLPoPSaleView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLPoPSalePresenter::initWithData(std::string p1)
{
  func_0079e52c(((int)this) + 0x18);
  return;
}

void BLPoPSalePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

void BLPoPSalePresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
undefined4 BLPoPSalePresenter::initWithView(BLPoPSaleView* p1)
{
  int *piVar1;
  
  *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  (**(code **)(**(int **)(p1 + 0x10c) + 0x254))
            (*(int **)(p1 + 0x10c),((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00628376 + (intptr_t)(g_006283c4))),0,
             0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x110);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_00628396 + (intptr_t)(g_006283c8))),0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x1c) + 0x114);
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)((unsigned char *)((char *)&g_006283b4 + (intptr_t)(g_006283cc))),0,0x20);
  return 1;
}
