#include "BLUpdatePublishPresenter.h"
#include "CCUserDefault.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCString.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLUpdatePublishView.h"
#include "PlatformHelp.h"
#include "UIManager.h"
#include "UpdatePublishData.h"
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
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f5a14;
extern "C" unsigned long UNK_005f5a2e;
extern "C" unsigned long UNK_005f5a74;
extern "C" unsigned long UNK_005f5a9c;
extern "C" unsigned long UNK_005f5ac2;
extern "C" unsigned long UNK_005f5ada;
extern "C" unsigned long UNK_005f5b94;
extern "C" unsigned long UNK_005f5bde;
extern "C" unsigned long UNK_005f60ce;
extern "C" unsigned long _UNK_005f5a60;
extern "C" unsigned long _UNK_005f5a64;
extern "C" unsigned long _UNK_005f5a78;
extern "C" unsigned long _UNK_005f5aa0;
extern "C" unsigned long _UNK_005f5b24;
extern "C" unsigned long _UNK_005f5b28;
extern "C" unsigned long _UNK_005f5bbc;
extern "C" unsigned long _UNK_005f5fd0;
extern "C" unsigned long _UNK_005f5fd4;
extern "C" unsigned long _UNK_005f60e4;
extern "C" unsigned long g_005f5a14;
extern "C" unsigned long g_005f5a2e;
extern "C" unsigned long g_005f5a60;
extern "C" unsigned long g_005f5a64;
extern "C" unsigned long g_005f5a74;
extern "C" unsigned long g_005f5a78;
extern "C" unsigned long g_005f5a9c;
extern "C" unsigned long g_005f5aa0;
extern "C" unsigned long g_005f5ac2;
extern "C" unsigned long g_005f5ada;
extern "C" unsigned long g_005f5b24;
extern "C" unsigned long g_005f5b28;
extern "C" unsigned long g_005f5b94;
extern "C" unsigned long g_005f5bbc;
extern "C" unsigned long g_005f5bde;
extern "C" unsigned long g_005f5fd0;
extern "C" unsigned long g_005f5fd4;
extern "C" unsigned long g_005f60ce;
extern "C" unsigned long g_005f60e4;
bool BLUpdatePublishPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLUpdatePublishPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLUpdatePublishPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLUpdatePublishPresenter::~BLUpdatePublishPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f5a14 + g_005f5a60);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f5a2e + g_005f5a64,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLUpdatePublishPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x87);
  return;
}

BLUpdatePublishPresenter::BLUpdatePublishPresenter()
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
  iVar3 = *(int *)(&g_005f5ac2 + g_005f5b24);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x34;
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f5ada + g_005f5b28,&piStack_18);
  ((BLLeakUtils *)uVar1)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  return;
}

void BLUpdatePublishPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

undefined4 BLUpdatePublishPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLUpdatePublishPresenter::initWithView(BLUpdatePublishView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLUpdatePublishView *)p1)->getBtnClose();
  uVar2 = (undefined4)(*(undefined4 *)(&g_005f5b94 + g_005f5bbc));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uVar2,0,0x20);
  piVar1 = (int *)((BLUpdatePublishView *)*(undefined4 *)(((int)this) + 0x18))->getBtnGame();
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uVar2,0,0x20);
  return;
}

// ===== 修复: 补回被误删的函数占位 (2) =====
void BLUpdatePublishPresenter::updateInfo()
{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  code *pcVar12;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  piVar1 = (int *)((UpdatePublishData *)this)->getInstance();
  (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_20,piVar1);
  uVar2 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005f5bde + (intptr_t)(g_005f5fd0)), auStack_20[0]));
  func_0079e2bc(auStack_20);
  piVar1 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDate();
  pcVar12 = *(code **)(*piVar1 + 0x234);
  uVar3 = (undefined4)(((BLLanguage *)this)->share());
  uVar2 = (undefined4)(((cocos2d::CCString *)(uVar2))->getCString());
  func_0079e45c(auStack_28,uVar2,auStack_2c);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
  (*pcVar12)(piVar1,auStack_20[0]);
  func_0079e2bc(auStack_20);
  func_0079e2bc(auStack_28);
  piVar1 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabPlay();
  pcVar12 = *(code **)(*piVar1 + 0x234);
  piVar4 = (int *)((UpdatePublishData *)this)->getInstance();
  (**(code **)(*(int *)(piVar4) + (0x20)))(auStack_20,piVar4);
  (*pcVar12)(piVar1,auStack_20[0]);
  func_0079e2bc(auStack_20);
  piVar1 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOptimization();
  pcVar12 = *(code **)(*piVar1 + 0x234);
  piVar4 = (int *)((UpdatePublishData *)this)->getInstance();
  (**(code **)(*(int *)(piVar4) + (0x28)))(auStack_20,piVar4);
  (*pcVar12)(piVar1,auStack_20[0]);
  func_0079e2bc(auStack_20);
  piVar1 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabBug();
  pcVar12 = *(code **)(*piVar1 + 0x234);
  piVar4 = (int *)((UpdatePublishData *)this)->getInstance();
  (**(code **)(*(int *)(piVar4) + (0x30)))(auStack_20,piVar4);
  (*pcVar12)(piVar1,auStack_20[0]);
  func_0079e2bc(auStack_20);
  piVar1 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDate();
  piVar4 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabPlayTit();
  piVar5 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabPlay();
  piVar6 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOptimizationTit()
  ;
  piVar7 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabOptimization();
  piVar8 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabBugTit();
  piVar9 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabBug();
  pcVar12 = *(code **)(*piVar9 + 100);
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))());
  uVar2 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(g_005f5fd4,uVar3));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  (*pcVar12)(piVar9,uVar2);
  pcVar12 = *(code **)(*piVar8 + 100);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar9) + (0x68)))(piVar9));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar9) + (0x8c)))(piVar9));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(0x41000000,uVar3));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  (*pcVar12)(piVar8,uVar2);
  pcVar12 = *(code **)(*piVar7 + 100);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar8) + (0x68)))(piVar8));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar8) + (0x8c)))(piVar8));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(g_005f5fd4,uVar3));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  (*pcVar12)(piVar7,uVar2);
  pcVar12 = *(code **)(*piVar6 + 100);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar7) + (0x68)))(piVar7));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar7) + (0x8c)))(piVar7));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(0x41000000,uVar3));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  (*pcVar12)(piVar6,uVar2);
  piVar7 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabPlay();
  pcVar12 = *(code **)(*piVar7 + 100);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x68)))(piVar6));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x8c)))(piVar5));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(g_005f5fd4,uVar3));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  (*pcVar12)(piVar7,uVar2);
  pcVar12 = *(code **)(*piVar4 + 100);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x68)))(piVar5));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar5) + (0x8c)))(piVar5));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(0x41000000,uVar3));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  (*pcVar12)(piVar4,uVar2);
  pcVar12 = *(code **)(*piVar1 + 100);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x68)))(piVar4));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x8c)))(piVar4));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x8c)))(piVar1));
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  cocos2d::CCDirector::sharedDirector();
  uVar3 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
  uVar3 = (undefined4)(func_0079e4dc(g_005f5fd4,uVar3));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  (*pcVar12)(piVar1,uVar2);
  piVar1 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDate();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
  piVar1 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDate();
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x8c)))());
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  piVar1 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabBug();
  iVar10 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x8c)))());
  uVar3 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar10 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e59c(uVar2,uVar3));
  piVar1 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView();
  pcVar12 = *(code **)(*piVar1 + 0x88);
  piVar4 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView();
  puVar11 = (undefined4 *)(**(code **)(*(int *)(piVar4) + (0x200)))();
  0 /* ctorZero */;
  (*pcVar12)(piVar1,auStack_20);
  piVar1 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getContainerLayer();
  pcVar12 = *(code **)(*piVar1 + 0x4c);
  piVar4 = (int *)((BLUpdatePublishView *)(*(undefined4 *)(((int)this) + 0x18)))->getScrollView();
  (**(code **)(*(int *)(piVar4) + (0x1f8)))(auStack_28,piVar4);
  uVar2 = (undefined4)(func_0079e57c(uStack_24,uVar2));
  0 /* ctorZero */;
  (*pcVar12)(piVar1,auStack_20);
  return;
}

void BLUpdatePublishPresenter::onEnter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p2);
  BLUpdatePublishPresenter::updateInfo();
  ((PlatformHelp *)(&uStack_c))->getAppVersion();
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)(uVar1))->setStringForKey((char const*)(unsigned char *)((char *)&g_005f60ce + (intptr_t)(g_005f60e4)), *(std::string const*)&uStack_c)
  ;
  func_0079e2bc(&uStack_c);
  return;
}
