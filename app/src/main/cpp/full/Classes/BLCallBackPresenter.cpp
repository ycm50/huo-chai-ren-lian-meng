#include "BLCallBackPresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLCallBackView.h"
#include "BLLeakUtils.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_004fc6a8;
extern "C" unsigned long UNK_004fc6c0;
extern "C" unsigned long UNK_004fc6d8;
extern "C" unsigned long UNK_004fc6f0;
extern "C" unsigned long UNK_004fc74c;
extern "C" unsigned long UNK_004fc75e;
extern "C" unsigned long UNK_004fc790;
extern "C" unsigned long UNK_004fc7d8;
extern "C" unsigned long UNK_004fc800;
extern "C" unsigned long UNK_004fc812;
extern "C" unsigned long UNK_004fc83a;
extern "C" unsigned long UNK_004fc868;
extern "C" unsigned long UNK_004fc89c;
extern "C" unsigned long UNK_004fc89e;
extern "C" unsigned long UNK_004fc8b4;
extern "C" unsigned long UNK_004fc93c;
extern "C" unsigned long UNK_004fc9ae;
extern "C" unsigned long UNK_004fc9c0;
extern "C" unsigned long UNK_004fc9d2;
extern "C" unsigned long UNK_004fc9e4;
extern "C" unsigned long UNK_004fc9f6;
extern "C" unsigned long UNK_004fca08;
extern "C" unsigned long UNK_004fca18;
extern "C" unsigned long UNK_004fca2e;
extern "C" unsigned long UNK_004fca46;
extern "C" unsigned long UNK_004fca5c;
extern "C" unsigned long UNK_004fca7c;
extern "C" unsigned long UNK_004fca94;
extern "C" unsigned long UNK_004fcb4e;
extern "C" unsigned long UNK_004fcc22;
extern "C" unsigned long UNK_004fcc42;
extern "C" unsigned long UNK_004fcc5e;
extern "C" unsigned long UNK_004fccbc;
extern "C" unsigned long UNK_004fccf2;
extern "C" unsigned long _UNK_004fc6ac;
extern "C" unsigned long _UNK_004fc6c4;
extern "C" unsigned long _UNK_004fc6dc;
extern "C" unsigned long _UNK_004fc6f4;
extern "C" unsigned long _UNK_004fc7c0;
extern "C" unsigned long _UNK_004fc7c4;
extern "C" unsigned long _UNK_004fc7c8;
extern "C" unsigned long _UNK_004fc7dc;
extern "C" unsigned long _UNK_004fc804;
extern "C" unsigned long _UNK_004fc82c;
extern "C" unsigned long _UNK_004fc854;
extern "C" unsigned long _UNK_004fc8e0;
extern "C" unsigned long _UNK_004fc8e4;
extern "C" unsigned long _UNK_004fc8e8;
extern "C" unsigned long _UNK_004fc8ec;
extern "C" unsigned long _UNK_004fcbc4;
extern "C" unsigned long _UNK_004fcbc8;
extern "C" unsigned long _UNK_004fcbcc;
extern "C" unsigned long _UNK_004fcbd0;
extern "C" unsigned long _UNK_004fcbd4;
extern "C" unsigned long _UNK_004fcbd8;
extern "C" unsigned long _UNK_004fcbdc;
extern "C" unsigned long _UNK_004fcbe0;
extern "C" unsigned long _UNK_004fcbe4;
extern "C" unsigned long _UNK_004fcbe8;
extern "C" unsigned long _UNK_004fcbec;
extern "C" unsigned long _UNK_004fcbf0;
extern "C" unsigned long _UNK_004fcbf4;
extern "C" unsigned long _UNK_004fcbf8;
extern "C" unsigned long _UNK_004fcbfc;
extern "C" unsigned long _UNK_004fcc00;
extern "C" unsigned long _UNK_004fcca4;
extern "C" unsigned long _UNK_004fcca8;
extern "C" unsigned long _UNK_004fccac;
extern "C" unsigned long _UNK_004fcda0;
extern "C" unsigned long _UNK_004fcda4;
extern "C" unsigned long g_004fc6a8;
extern "C" unsigned long g_004fc6ac;
extern "C" unsigned long g_004fc6c0;
extern "C" unsigned long g_004fc6c4;
extern "C" unsigned long g_004fc6d8;
extern "C" unsigned long g_004fc6dc;
extern "C" unsigned long g_004fc6f0;
extern "C" unsigned long g_004fc6f4;
extern "C" unsigned long g_004fc74c;
extern "C" unsigned long g_004fc75e;
extern "C" unsigned long g_004fc790;
extern "C" unsigned long g_004fc7c0;
extern "C" unsigned long g_004fc7c4;
extern "C" unsigned long g_004fc7c8;
extern "C" unsigned long g_004fc7d8;
extern "C" unsigned long g_004fc7dc;
extern "C" unsigned long g_004fc800;
extern "C" unsigned long g_004fc804;
extern "C" unsigned long g_004fc812;
extern "C" unsigned long g_004fc82c;
extern "C" unsigned long g_004fc83a;
extern "C" unsigned long g_004fc854;
extern "C" unsigned long g_004fc868;
extern "C" unsigned long g_004fc89c;
extern "C" unsigned long g_004fc89e;
extern "C" unsigned long g_004fc8b4;
extern "C" unsigned long g_004fc8e0;
extern "C" unsigned long g_004fc8e4;
extern "C" unsigned long g_004fc8e8;
extern "C" unsigned long g_004fc8ec;
extern "C" unsigned long g_004fc93c;
extern "C" unsigned long g_004fc9ae;
extern "C" unsigned long g_004fc9c0;
extern "C" unsigned long g_004fc9d2;
extern "C" unsigned long g_004fc9e4;
extern "C" unsigned long g_004fc9f6;
extern "C" unsigned long g_004fca08;
extern "C" unsigned long g_004fca18;
extern "C" unsigned long g_004fca2e;
extern "C" unsigned long g_004fca46;
extern "C" unsigned long g_004fca5c;
extern "C" unsigned long g_004fca7c;
extern "C" unsigned long g_004fca94;
extern "C" unsigned long g_004fcb4e;
extern "C" unsigned long g_004fcbc4;
extern "C" unsigned long g_004fcbc8;
extern "C" unsigned long g_004fcbcc;
extern "C" unsigned long g_004fcbd0;
extern "C" unsigned long g_004fcbd4;
extern "C" unsigned long g_004fcbd8;
extern "C" unsigned long g_004fcbdc;
extern "C" unsigned long g_004fcbe0;
extern "C" unsigned long g_004fcbe4;
extern "C" unsigned long g_004fcbe8;
extern "C" unsigned long g_004fcbec;
extern "C" unsigned long g_004fcbf0;
extern "C" unsigned long g_004fcbf4;
extern "C" unsigned long g_004fcbf8;
extern "C" unsigned long g_004fcbfc;
extern "C" unsigned long g_004fcc00;
extern "C" unsigned long g_004fcc22;
extern "C" unsigned long g_004fcc42;
extern "C" unsigned long g_004fcc5e;
extern "C" unsigned long g_004fcca4;
extern "C" unsigned long g_004fcca8;
extern "C" unsigned long g_004fccac;
extern "C" unsigned long g_004fccbc;
extern "C" unsigned long g_004fccf2;
extern "C" unsigned long g_004fcda0;
extern "C" unsigned long g_004fcda4;
bool BLCallBackPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLCallBackPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCallBackPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCallBackPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLCallBackPresenter::tick(float p1)
{
  return;
}

BLCallBackPresenter::~BLCallBackPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004fc74c + g_004fc7c0);
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
  func_0079e45c(&uStack_14,&g_004fc790 + g_004fc7c8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLCallBackPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  if (*(int *)(((int)this) + 0x1c) != 0) {
    ((WebViewLayer *)this)->closeWebView();
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xa0);
  return;
}

void BLCallBackPresenter::onCloseWebview()
{
  undefined4 uVar1;
  
  0 /* ctorZero */;
  if (*(int *)(((int)this) + 0x1c) != 0) {
    ((WebViewLayer *)this)->closeWebView();
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0xa0);
  return;
}


undefined4 BLCallBackPresenter::create(BLCallBackView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLCallBackPresenter::onEnter()
{
  return;
}

void BLCallBackPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
BLCallBackPresenter::BLCallBackPresenter()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004fc868 + (intptr_t)(g_004fc8e0))));
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(7)) = 0;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)*(undefined4 *)((unsigned char *)((char *)&g_004fc89c + (intptr_t)(g_004fc8e4))), 0, (char const*)(unsigned char *)((char *)&g_004fc89e + (intptr_t)(g_004fc8e8)), 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_004fc8b4 + (intptr_t)(g_004fc8ec)),auStack_20);
  ((BLLeakUtils *)(uVar2))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLCallBackPresenter::initWebview(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLCallBackPresenter::initWithView(BLCallBackView* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLCallBackPresenter::onGreenBtn(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  0 /* ctorZero */;
  if (*(int *)(((int)this) + 0x1c) != 0) {
    ((WebViewLayer *)this)->closeWebView();
  }
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar1))->removeUIByID(0xa0);
  ((PlatformHelp *)(&uStack_30))->getVersionRelease();
  uVar1 = (undefined4)(0 /* ctorZero */);
  uVar2 = (undefined4)(((sir::singleton<StringJsonManager, 0> *)this)->instance());
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_004fccf2 + (intptr_t)(g_004fcda4)),auStack_38);
  puVar3 = (undefined4 *)(((StringJsonManager *)(uVar2)))->getStringUrlWithKey(*(std::string *)auStack_28);
  uVar2 = (undefined4)(*puVar3);
  ((PlatformHelp *)(&uStack_24))->getDeviceID();
  ((PlatformHelp *)(&uStack_20))->getAppKey();
  ((PlatformHelp *)(auStack_1c))->getAppEmChannel();
  cocos2d::CCString::createWithFormat((char const*)uVar2, uStack_24, uStack_20, auStack_1c[0], uVar1);
  uVar1 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  func_0079e45c(auStack_2c,uVar1,auStack_34);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(auStack_28);
  (((PlatformHelp *)this))->opensumbiturl(*(std::string *)auStack_2c);
  func_0079e2bc(auStack_2c);
  func_0079e2bc(&uStack_30);
  return;
}
