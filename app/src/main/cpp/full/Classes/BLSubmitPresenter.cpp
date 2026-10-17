#include "BLSubmitPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLSubmitView.h"
#include "PlatformHelp.h"
#include "StringJsonManager.h"
#include "UIManager.h"
#include "WebViewLayer.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
#include "BLForwards.h"

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004fcdb8;
extern "C" unsigned long UNK_004fcdd0;
extern "C" unsigned long UNK_004fcde8;
extern "C" unsigned long UNK_004fce00;
extern "C" unsigned long UNK_004fce5c;
extern "C" unsigned long UNK_004fce6e;
extern "C" unsigned long UNK_004fcea0;
extern "C" unsigned long UNK_004fcee8;
extern "C" unsigned long UNK_004fcf10;
extern "C" unsigned long UNK_004fcf22;
extern "C" unsigned long UNK_004fcf4a;
extern "C" unsigned long UNK_004fcf78;
extern "C" unsigned long UNK_004fcfac;
extern "C" unsigned long UNK_004fcfae;
extern "C" unsigned long UNK_004fcfc4;
extern "C" unsigned long UNK_004fd04a;
extern "C" unsigned long UNK_004fd0da;
extern "C" unsigned long UNK_004fd180;
extern "C" unsigned long UNK_004fd1a6;
extern "C" unsigned long UNK_004fd218;
extern "C" unsigned long _UNK_004fcdbc;
extern "C" unsigned long _UNK_004fcdd4;
extern "C" unsigned long _UNK_004fcdec;
extern "C" unsigned long _UNK_004fce04;
extern "C" unsigned long _UNK_004fced0;
extern "C" unsigned long _UNK_004fced4;
extern "C" unsigned long _UNK_004fced8;
extern "C" unsigned long _UNK_004fceec;
extern "C" unsigned long _UNK_004fcf14;
extern "C" unsigned long _UNK_004fcf3c;
extern "C" unsigned long _UNK_004fcf64;
extern "C" unsigned long _UNK_004fcff0;
extern "C" unsigned long _UNK_004fcff4;
extern "C" unsigned long _UNK_004fcff8;
extern "C" unsigned long _UNK_004fcffc;
extern "C" unsigned long _UNK_004fd154;
extern "C" unsigned long _UNK_004fd158;
extern "C" unsigned long _UNK_004fd25c;
extern "C" unsigned long _UNK_004fd260;
extern "C" unsigned long _UNK_004fd264;
extern "C" unsigned long g_004fcdb8;
extern "C" unsigned long g_004fcdbc;
extern "C" unsigned long g_004fcdd0;
extern "C" unsigned long g_004fcdd4;
extern "C" unsigned long g_004fcde8;
extern "C" unsigned long g_004fcdec;
extern "C" unsigned long g_004fce00;
extern "C" unsigned long g_004fce04;
extern "C" unsigned long g_004fce5c;
extern "C" unsigned long g_004fce6e;
extern "C" unsigned long g_004fcea0;
extern "C" unsigned long g_004fced0;
extern "C" unsigned long g_004fced4;
extern "C" unsigned long g_004fced8;
extern "C" unsigned long g_004fcee8;
extern "C" unsigned long g_004fceec;
extern "C" unsigned long g_004fcf10;
extern "C" unsigned long g_004fcf14;
extern "C" unsigned long g_004fcf22;
extern "C" unsigned long g_004fcf3c;
extern "C" unsigned long g_004fcf4a;
extern "C" unsigned long g_004fcf64;
extern "C" unsigned long g_004fcf78;
extern "C" unsigned long g_004fcfac;
extern "C" unsigned long g_004fcfae;
extern "C" unsigned long g_004fcfc4;
extern "C" unsigned long g_004fcff0;
extern "C" unsigned long g_004fcff4;
extern "C" unsigned long g_004fcff8;
extern "C" unsigned long g_004fcffc;
extern "C" unsigned long g_004fd04a;
extern "C" unsigned long g_004fd0da;
extern "C" unsigned long g_004fd154;
extern "C" unsigned long g_004fd158;
extern "C" unsigned long g_004fd180;
extern "C" unsigned long g_004fd1a6;
extern "C" unsigned long g_004fd218;
extern "C" unsigned long g_004fd25c;
extern "C" unsigned long g_004fd260;
extern "C" unsigned long g_004fd264;
bool BLSubmitPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSubmitPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSubmitPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSubmitPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSubmitPresenter::tick(float p1)
{
  return;
}

BLSubmitPresenter::~BLSubmitPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004fce5c + g_004fced0);
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
  func_0079e45c(&uStack_14,&g_004fcea0 + g_004fced8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSubmitPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  if (*(int *)(((int)this) + 0x1c) != 0) {
    ((WebViewLayer *)this)->closeWebView();
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xa1);
  return;
}

void BLSubmitPresenter::onCloseWebview()
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  if (*(int *)(((int)this) + 0x1c) != 0) {
    ((WebViewLayer *)this)->closeWebView();
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xa1);
  return;
}


undefined4 BLSubmitPresenter::create(BLSubmitView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLSubmitPresenter::onEnter()
{
  return;
}

void BLSubmitPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (3) =====
BLSubmitPresenter::BLSubmitPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004fcf78 + (intptr_t)(g_004fcff0))));
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(7)) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004fcfac + (intptr_t)(g_004fcff4))), 0, (char const*)(unsigned char *)((char *)&g_004fcfae + (intptr_t)(g_004fcff8)), 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_004fcfc4 + (intptr_t)(g_004fcffc)),auStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLSubmitPresenter::initWebview(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLSubmitPresenter::initWithView(BLSubmitView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLSubmitView *)(p1))->getBtnclose();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004fd180 + (intptr_t)(g_004fd25c))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  ((PlatformHelp *)(&uStack_38))->getVersionRelease();
  uVar2 = (undefined4)(0 /* ctorZero */);
  uVar3 = (undefined4)(((sir::singleton<StringJsonManager, 0> *)this)->instance());
  func_0079e45c(auStack_30,(unsigned char *)((char *)&g_004fd1a6 + (intptr_t)(g_004fd260)),auStack_40);
  puVar4 = (undefined4 *)(((StringJsonManager *)(uVar3)))->getStringUrlWithKey(*(std::string *)auStack_30);
  uVar3 = (undefined4)(*puVar4);
  ((PlatformHelp *)(&uStack_2c))->getDeviceID();
  ((PlatformHelp *)(&uStack_28))->getAppKey();
  ((PlatformHelp *)(&uStack_24))->getAppEmChannel();
  cocos2d::CCString::createWithFormat((char const*)uVar3, uStack_2c, uStack_28, uStack_24, uVar2);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(&uStack_34,uVar2,auStack_3c);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(&uStack_28);
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_30);
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_004fd218 + (intptr_t)(g_004fd264)), uStack_34);
  func_0079e2bc(&uStack_34);
  func_0079e2bc(&uStack_38);
  return 1;
}
