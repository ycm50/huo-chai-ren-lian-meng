#include "BLEndLessTimePresenter.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLEndLessTimeView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "CCString.h"
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
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0052a45c;
extern "C" unsigned long UNK_0052a474;
extern "C" unsigned long UNK_0052a48c;
extern "C" unsigned long UNK_0052a4fc;
extern "C" unsigned long UNK_0052a516;
extern "C" unsigned long UNK_0052a55c;
extern "C" unsigned long UNK_0052a584;
extern "C" unsigned long UNK_0052a5a0;
extern "C" unsigned long UNK_0052a5a4;
extern "C" unsigned long UNK_0052a5d8;
extern "C" unsigned long UNK_0052a630;
extern "C" unsigned long UNK_0052a684;
extern "C" unsigned long UNK_0052a6ce;
extern "C" unsigned long UNK_0052a73a;
extern "C" unsigned long UNK_0052a73e;
extern "C" unsigned long UNK_0052aa9e;
extern "C" unsigned long UNK_0052abb8;
extern "C" unsigned long UNK_0052ac00;
extern "C" unsigned long UNK_0052ad72;
extern "C" unsigned long UNK_0052ada0;
extern "C" unsigned long UNK_0052ae0e;
extern "C" unsigned long UNK_0052ae10;
extern "C" unsigned long UNK_0052ae28;
extern "C" unsigned long UNK_0052ae2a;
extern "C" unsigned long UNK_0052ae58;
extern "C" unsigned long UNK_0052ae66;
extern "C" unsigned long _UNK_0052a460;
extern "C" unsigned long _UNK_0052a478;
extern "C" unsigned long _UNK_0052a490;
extern "C" unsigned long _UNK_0052a548;
extern "C" unsigned long _UNK_0052a54c;
extern "C" unsigned long _UNK_0052a560;
extern "C" unsigned long _UNK_0052a588;
extern "C" unsigned long _UNK_0052a70c;
extern "C" unsigned long _UNK_0052a710;
extern "C" unsigned long _UNK_0052a714;
extern "C" unsigned long _UNK_0052a718;
extern "C" unsigned long _UNK_0052a71c;
extern "C" unsigned long _UNK_0052a720;
extern "C" unsigned long _UNK_0052a8e8;
extern "C" unsigned long _UNK_0052a8ec;
extern "C" unsigned long _UNK_0052a8f0;
extern "C" unsigned long _UNK_0052a8f4;
extern "C" unsigned long _UNK_0052a8f8;
extern "C" unsigned long _UNK_0052ab54;
extern "C" unsigned long _UNK_0052ab58;
extern "C" unsigned long _UNK_0052ab5c;
extern "C" unsigned long _UNK_0052ab60;
extern "C" unsigned long _UNK_0052ad50;
extern "C" unsigned long _UNK_0052ad54;
extern "C" unsigned long _UNK_0052ad58;
extern "C" unsigned long _UNK_0052ad5c;
extern "C" unsigned long _UNK_0052ad60;
extern "C" unsigned long _UNK_0052adcc;
extern "C" unsigned long _UNK_0052add0;
extern "C" unsigned long _UNK_0052ae38;
extern "C" unsigned long _UNK_0052ae3c;
extern "C" unsigned long _UNK_0052ae40;
extern "C" unsigned long _UNK_0052ae44;
extern "C" unsigned long _UNK_0052ae7c;
extern "C" unsigned long _UNK_0052ae80;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long g_0052a45c;
extern "C" unsigned long g_0052a460;
extern "C" unsigned long g_0052a474;
extern "C" unsigned long g_0052a478;
extern "C" unsigned long g_0052a48c;
extern "C" unsigned long g_0052a490;
extern "C" unsigned long g_0052a4fc;
extern "C" unsigned long g_0052a516;
extern "C" unsigned long g_0052a548;
extern "C" unsigned long g_0052a54c;
extern "C" unsigned long g_0052a55c;
extern "C" unsigned long g_0052a560;
extern "C" unsigned long g_0052a584;
extern "C" unsigned long g_0052a588;
extern "C" unsigned long g_0052a5a0;
extern "C" unsigned long g_0052a5a4;
extern "C" unsigned long g_0052a5d8;
extern "C" unsigned long g_0052a630;
extern "C" unsigned long g_0052a684;
extern "C" unsigned long g_0052a6ce;
extern "C" unsigned long g_0052a70c;
extern "C" unsigned long g_0052a710;
extern "C" unsigned long g_0052a714;
extern "C" unsigned long g_0052a718;
extern "C" unsigned long g_0052a71c;
extern "C" unsigned long g_0052a720;
extern "C" unsigned long g_0052a73a;
extern "C" unsigned long g_0052a73e;
extern "C" unsigned long g_0052a8e8;
extern "C" unsigned long g_0052a8ec;
extern "C" unsigned long g_0052a8f0;
extern "C" unsigned long g_0052a8f4;
extern "C" unsigned long g_0052a8f8;
extern "C" unsigned long g_0052aa9e;
extern "C" unsigned long g_0052ab54;
extern "C" unsigned long g_0052ab58;
extern "C" unsigned long g_0052ab5c;
extern "C" unsigned long g_0052ab60;
extern "C" unsigned long g_0052abb8;
extern "C" unsigned long g_0052ac00;
extern "C" unsigned long g_0052ad50;
extern "C" unsigned long g_0052ad54;
extern "C" unsigned long g_0052ad58;
extern "C" unsigned long g_0052ad5c;
extern "C" unsigned long g_0052ad60;
extern "C" unsigned long g_0052ad72;
extern "C" unsigned long g_0052ada0;
extern "C" unsigned long g_0052adcc;
extern "C" unsigned long g_0052add0;
extern "C" unsigned long g_0052ae0e;
extern "C" unsigned long g_0052ae10;
extern "C" unsigned long g_0052ae28;
extern "C" unsigned long g_0052ae2a;
extern "C" unsigned long g_0052ae38;
extern "C" unsigned long g_0052ae3c;
extern "C" unsigned long g_0052ae40;
extern "C" unsigned long g_0052ae44;
extern "C" unsigned long g_0052ae58;
extern "C" unsigned long g_0052ae66;
extern "C" unsigned long g_0052ae7c;
extern "C" unsigned long g_0052ae80;
bool BLEndLessTimePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLEndLessTimePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEndLessTimePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLEndLessTimePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLEndLessTimePresenter::~BLEndLessTimePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_0052a4fc + g_0052a548);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x38;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052a516 + g_0052a54c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLEndLessTimePresenter::onUpdateTimeLayer(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_r1;
  code *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar5 = (undefined4)(0);
  if (p1 != 0) {
    iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_0052a5a0 + g_0052a70c),
                            *(undefined4 *)(&g_0052a5a4 + g_0052a710),0);
    uVar5 = (undefined4)(0);
    if (iVar1 != 0) {
      uVar5 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    }
  }
  piVar6 = *(int **)(*(int *)(((int)this) + 0x18) + 0x10c);
  pcVar4 = *(code **)(*piVar6 + 0x20c);
  uVar2 = (undefined4)(((long long)((int)(uVar5) / (int)(600))));
  cocos2d::CCString::createWithFormat((char const*)&g_0052a5d8 + g_0052a714, uVar2);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_1c,uVar2,auStack_20);
  piVar3 = (int *)0 /* ctorZero */;
  uVar2 = (undefined4)((**(code **)(*piVar3 + 0x214))());
  (*pcVar4)(piVar6,uVar2);
  func_0079e2bc(auStack_1c);
  piVar6 = *(int **)(*(int *)(((int)this) + 0x18) + 0x110);
  pcVar4 = *(code **)(*piVar6 + 0x20c);
  uVar2 = (undefined4)(((long long)((int)(uVar5) / (int)(0x3c))));
  func_0079e964(uVar2,10);
  cocos2d::CCString::createWithFormat((char const*)&g_0052a630 + g_0052a718);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_1c,uVar2,auStack_20);
  piVar3 = (int *)0 /* ctorZero */;
  uVar2 = (undefined4)((**(code **)(*piVar3 + 0x214))());
  (*pcVar4)(piVar6,uVar2);
  func_0079e2bc(auStack_1c);
  func_0079e964(uVar5,0x3c);
  piVar6 = *(int **)(*(int *)(((int)this) + 0x18) + 0x114);
  pcVar4 = *(code **)(*piVar6 + 0x20c);
  uVar5 = (undefined4)(((long long)((int)(extraout_r1) / (int)(10))));
  cocos2d::CCString::createWithFormat((char const*)&g_0052a684 + g_0052a71c, uVar5);
  uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_1c,uVar5,auStack_20);
  piVar3 = (int *)0 /* ctorZero */;
  uVar5 = (undefined4)((**(code **)(*piVar3 + 0x214))());
  (*pcVar4)(piVar6,uVar5);
  func_0079e2bc(auStack_1c);
  piVar6 = *(int **)(*(int *)(((int)this) + 0x18) + 0x118);
  pcVar4 = *(code **)(*piVar6 + 0x20c);
  func_0079e964(extraout_r1,10);
  cocos2d::CCString::createWithFormat((char const*)&g_0052a6ce + g_0052a720);
  uVar5 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_1c,uVar5,auStack_20);
  piVar3 = (int *)0 /* ctorZero */;
  uVar5 = (undefined4)((**(code **)(*piVar3 + 0x214))());
  (*pcVar4)(piVar6,uVar5);
  func_0079e2bc(auStack_1c);
  return;
}


BLEndLessTimePresenter::BLEndLessTimePresenter()
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
  iVar3 = *(int *)(&g_0052ad72 + g_0052adcc);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x38;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0052ada0 + g_0052add0,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLEndLessTimePresenter::create(BLEndLessTimeView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLEndLessTimePresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0052ae58 + g_0052ae7c);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_0052ae66 + g_0052ae80);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
void BLEndLessTimePresenter::onShowWaveLayer(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLEndLessTimePresenter::onEnter()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0052ae10 + (intptr_t)(g_0052ae38))), 0, (char const*)(unsigned char *)((char *)&g_0052ae0e + (intptr_t)(g_0052ae3c)), 0);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0052ae28 + (intptr_t)(g_0052ae40))), 0, (char const*)(unsigned char *)((char *)&g_0052ae2a + (intptr_t)(g_0052ae44)), 0);
  return;
}

void BLEndLessTimePresenter::initWithView(BLEndLessTimeView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  return;
}
