#include "BLCampaignQuestionPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLCampaignQuestionView.h"
#include "BLLeakUtils.h"
#include "PlatformHelp.h"
#include "UIManager.h"
#include "WebViewLayer.h"
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
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005012fc;
extern "C" unsigned long UNK_0050130e;
extern "C" unsigned long UNK_00501340;
extern "C" unsigned long UNK_00501388;
extern "C" unsigned long UNK_005013b0;
extern "C" unsigned long UNK_005013c2;
extern "C" unsigned long UNK_005013ea;
extern "C" unsigned long UNK_00501418;
extern "C" unsigned long UNK_0050144c;
extern "C" unsigned long UNK_0050144e;
extern "C" unsigned long UNK_00501464;
extern "C" unsigned long UNK_005014ea;
extern "C" unsigned long UNK_0050157a;
extern "C" unsigned long UNK_00501620;
extern "C" unsigned long UNK_00501644;
extern "C" unsigned long _UNK_00501370;
extern "C" unsigned long _UNK_00501374;
extern "C" unsigned long _UNK_00501378;
extern "C" unsigned long _UNK_0050138c;
extern "C" unsigned long _UNK_005013b4;
extern "C" unsigned long _UNK_005013dc;
extern "C" unsigned long _UNK_00501404;
extern "C" unsigned long _UNK_00501490;
extern "C" unsigned long _UNK_00501494;
extern "C" unsigned long _UNK_00501498;
extern "C" unsigned long _UNK_0050149c;
extern "C" unsigned long _UNK_005015f4;
extern "C" unsigned long _UNK_005015f8;
extern "C" unsigned long _UNK_005016ec;
extern "C" unsigned long _UNK_005016f0;
extern "C" unsigned long g_005012fc;
extern "C" unsigned long g_0050130e;
extern "C" unsigned long g_00501340;
extern "C" unsigned long g_00501370;
extern "C" unsigned long g_00501374;
extern "C" unsigned long g_00501378;
extern "C" unsigned long g_00501388;
extern "C" unsigned long g_0050138c;
extern "C" unsigned long g_005013b0;
extern "C" unsigned long g_005013b4;
extern "C" unsigned long g_005013c2;
extern "C" unsigned long g_005013dc;
extern "C" unsigned long g_005013ea;
extern "C" unsigned long g_00501404;
extern "C" unsigned long g_00501418;
extern "C" unsigned long g_0050144c;
extern "C" unsigned long g_0050144e;
extern "C" unsigned long g_00501464;
extern "C" unsigned long g_00501490;
extern "C" unsigned long g_00501494;
extern "C" unsigned long g_00501498;
extern "C" unsigned long g_0050149c;
extern "C" unsigned long g_005014ea;
extern "C" unsigned long g_0050157a;
extern "C" unsigned long g_005015f4;
extern "C" unsigned long g_005015f8;
extern "C" unsigned long g_00501620;
extern "C" unsigned long g_00501644;
extern "C" unsigned long g_005016ec;
extern "C" unsigned long g_005016f0;
bool BLCampaignQuestionPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLCampaignQuestionPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCampaignQuestionPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCampaignQuestionPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCampaignQuestionPresenter::tick(float p1)
{
  return;
}

BLCampaignQuestionPresenter::~BLCampaignQuestionPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005012fc + g_00501370);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  0 /* ctorZero */;
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((WebViewLayer *)this)->closeWebView();
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
  }
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00501340 + g_00501378,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLCampaignQuestionPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  if (*(int *)(((int)this) + 0x1c) != 0) {
    ((WebViewLayer *)this)->closeWebView();
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xa2);
  return;
}

void BLCampaignQuestionPresenter::onCloseWebview()
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  if (*(int *)(((int)this) + 0x1c) != 0) {
    ((WebViewLayer *)this)->closeWebView();
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xa2);
  return;
}


undefined4 BLCampaignQuestionPresenter::create(BLCampaignQuestionView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLCampaignQuestionPresenter::onEnter()
{
  return;
}

void BLCampaignQuestionPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
BLCampaignQuestionPresenter::BLCampaignQuestionPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_00501418 + (intptr_t)(g_00501490))));
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(7)) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_0050144c + (intptr_t)(g_00501494))), 0, (char const*)(unsigned char *)((char *)&g_0050144e + (intptr_t)(g_00501498)), 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_00501464 + (intptr_t)(g_0050149c)),auStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLCampaignQuestionPresenter::initWebview(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLCampaignQuestionPresenter::initWithView(BLCampaignQuestionView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
