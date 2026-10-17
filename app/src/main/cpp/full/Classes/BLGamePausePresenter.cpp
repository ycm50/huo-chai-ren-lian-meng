#include "BLGamePausePresenter.h"
#include "CCSet.h"
#include "CCActionManager.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCUserDefault.h"
#include "CCDirector.h"
#include "ADManager.h"
#include "BLGamePauseView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMission.h"
#include "BLResultManager.h"
#include "BluetoothHelper.h"
#include "DataManager.h"
#include "UIManager.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <new>   // ghost_fix.js 自动补齐
using namespace CocosDenshion;

using namespace cocos2d;
// 兜底声明
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e794(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005ec7b0;
extern "C" unsigned long UNK_005ec7c8;
extern "C" unsigned long UNK_005ec7e0;
extern "C" unsigned long UNK_005ec854;
extern "C" unsigned long UNK_005ec87c;
extern "C" unsigned long UNK_005ec8c0;
extern "C" unsigned long UNK_005ec8e8;
extern "C" unsigned long UNK_005ec93a;
extern "C" unsigned long UNK_005ec96c;
extern "C" unsigned long UNK_005ecaae;
extern "C" unsigned long UNK_005ecae8;
extern "C" unsigned long UNK_005ecb5c;
extern "C" unsigned long UNK_005ecb96;
extern "C" unsigned long UNK_005ecc38;
extern "C" unsigned long UNK_005ecc56;
extern "C" unsigned long UNK_005eccba;
extern "C" unsigned long UNK_005eccda;
extern "C" unsigned long UNK_005eccf8;
extern "C" unsigned long UNK_005ecd16;
extern "C" unsigned long _UNK_005ec7b4;
extern "C" unsigned long _UNK_005ec7cc;
extern "C" unsigned long _UNK_005ec7e4;
extern "C" unsigned long _UNK_005ec8ac;
extern "C" unsigned long _UNK_005ec8b0;
extern "C" unsigned long _UNK_005ec8c4;
extern "C" unsigned long _UNK_005ec8ec;
extern "C" unsigned long _UNK_005ec998;
extern "C" unsigned long _UNK_005ec99c;
extern "C" unsigned long _UNK_005ecc84;
extern "C" unsigned long _UNK_005ecc88;
extern "C" unsigned long _UNK_005ecc8c;
extern "C" unsigned long _UNK_005ecc90;
extern "C" unsigned long _UNK_005ecc94;
extern "C" unsigned long _UNK_005ecc98;
extern "C" unsigned long _UNK_005ecd2c;
extern "C" unsigned long _UNK_005ecd30;
extern "C" unsigned long _UNK_005ecd34;
extern "C" unsigned long _UNK_005ecd38;
extern "C" unsigned long g_005ec7b0;
extern "C" unsigned long g_005ec7b4;
extern "C" unsigned long g_005ec7c8;
extern "C" unsigned long g_005ec7cc;
extern "C" unsigned long g_005ec7e0;
extern "C" unsigned long g_005ec7e4;
extern "C" unsigned long g_005ec854;
extern "C" unsigned long g_005ec87c;
extern "C" unsigned long g_005ec8ac;
extern "C" unsigned long g_005ec8b0;
extern "C" unsigned long g_005ec8c0;
extern "C" unsigned long g_005ec8c4;
extern "C" unsigned long g_005ec8e8;
extern "C" unsigned long g_005ec8ec;
extern "C" unsigned long g_005ec93a;
extern "C" unsigned long g_005ec96c;
extern "C" unsigned long g_005ec998;
extern "C" unsigned long g_005ec99c;
extern "C" unsigned long g_005ecaae;
extern "C" unsigned long g_005ecae8;
extern "C" unsigned long g_005ecb5c;
extern "C" unsigned long g_005ecb96;
extern "C" unsigned long g_005ecc38;
extern "C" unsigned long g_005ecc56;
extern "C" unsigned long g_005ecc84;
extern "C" unsigned long g_005ecc88;
extern "C" unsigned long g_005ecc8c;
extern "C" unsigned long g_005ecc90;
extern "C" unsigned long g_005ecc94;
extern "C" unsigned long g_005ecc98;
extern "C" unsigned long g_005eccba;
extern "C" unsigned long g_005eccda;
extern "C" unsigned long g_005eccf8;
extern "C" unsigned long g_005ecd16;
extern "C" unsigned long g_005ecd2c;
extern "C" unsigned long g_005ecd30;
extern "C" unsigned long g_005ecd34;
extern "C" unsigned long g_005ecd38;
bool BLGamePausePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLGamePausePresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGamePausePresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGamePausePresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLGamePausePresenter::tick(float p1)
{
  return;
}

BLGamePausePresenter::~BLGamePausePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005ec854 + g_005ec8ac);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ec87c + g_005ec8b0,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLGamePausePresenter::onGoOn(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x50);
  return;
}

void BLGamePausePresenter::onQuit(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  
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
  return;
}

BLGamePausePresenter::BLGamePausePresenter()
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
  iVar3 = *(int *)(&g_005ec93a + g_005ec998);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  *(int *)((int)this + 4*(7)) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005ec96c + g_005ec99c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

undefined4 BLGamePausePresenter::create(BLGamePauseView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x20))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLGamePausePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x38))());
  ((cocos2d::CCActionManager *)uVar2)->resumeTargets((cocos2d::CCSet*)*(undefined4 *)(((int)this) + 0x1c));
  ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
  ((CocosDenshion::SimpleAudioEngine *)this)->resumeBackgroundMusic();
  ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
  ((CocosDenshion::SimpleAudioEngine *)this)->resumeAllEffects();
  piVar1 = (int *)((BLMission *)this)->currentMission();
  (**(code **)(*piVar1 + 0x1fc))(piVar1,0);
  ((BluetoothHelper *)this)->share();
  ((BluetoothHelper *)this)->resumeGame();
  uVar2 = (undefined4)(((ADManager *)this)->getInstance());
  ((ADManager *)uVar2)->closeLenovoAD(0);
  return;
}

void BLGamePausePresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  (**(code **)(*piVar1 + 0x38))();
  uVar2 = (undefined4)(((cocos2d::CCActionManager *)this)->pauseAllRunningActions());
  ((cocos2d::CCObject *)this)->retain();
  if (*(int *)(((int)this) + 0x1c) != 0) {
    ((cocos2d::CCObject *)this)->release();
  }
  *(undefined4 *)(((int)this) + 0x1c) = uVar2;
  ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
  ((CocosDenshion::SimpleAudioEngine *)this)->pauseBackgroundMusic();
  ((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine();
  ((CocosDenshion::SimpleAudioEngine *)this)->pauseAllEffects();
  piVar1 = (int *)((BLMission *)this)->currentMission();
  (**(code **)(*piVar1 + 0x1fc))(piVar1,1);
  ((BluetoothHelper *)this)->share();
  ((BluetoothHelper *)this)->pauseGame();
  uVar2 = (undefined4)(((ADManager *)this)->getInstance());
  ((ADManager *)uVar2)->checkLenovoAD(0);
  return;
}


void BLGamePausePresenter::initWithView(BLGamePauseView* p1)
{
  int *piVar1;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLGamePauseView *)p1)->getBtnQuit();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005eccba + g_005ecd2c),0,0x20);
  piVar1 = (int *)((BLGamePauseView *)*(undefined4 *)(((int)this) + 0x18))->getBtnGoOn();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005eccda + g_005ecd30),0,0x20);
  piVar1 = (int *)((BLGamePauseView *)*(undefined4 *)(((int)this) + 0x18))->getBtnMusic();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005eccf8 + g_005ecd34),0,0x20);
  piVar1 = (int *)((BLGamePauseView *)*(undefined4 *)(((int)this) + 0x18))->getBtnSound();
  (**(code **)(*piVar1 + 0x254))
            (piVar1,((int)this),*(undefined4 *)(&g_005ecd16 + g_005ecd38),0,0x20);
  BLGamePausePresenter::updateInfo();
  return;
}

void BLGamePausePresenter::onMusic(cocos2d::CCObject* p1, unsigned int p2)
{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  pcVar4 = *(code **)(*piVar2 + 0x8c);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  bVar1 = (**(code **)(*piVar3 + 0x88))();
  (*pcVar4)(piVar2,bVar1 ^ 1);
  BLGamePausePresenter::updateInfo();
  return;
}

void BLGamePausePresenter::onSound(cocos2d::CCObject* p1, unsigned int p2)
{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  pcVar4 = *(code **)(*piVar2 + 0x9c);
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  bVar1 = (**(code **)(*piVar3 + 0x98))();
  (*pcVar4)(piVar2,bVar1 ^ 1);
  BLGamePausePresenter::updateInfo();
  return;
}

// ===== 修复: 补回被误删的函数占位 (1) =====
void BLGamePausePresenter::updateInfo()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x88)))());
  if (iVar2 == 0) {
    piVar1 = (int *)((BLGamePauseView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabMusic();
    pcVar6 = *(code **)(*piVar1 + 0x234);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005ecae8 + (intptr_t)(g_005ecc88)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    (*pcVar6)(piVar1,auStack_1c[0]);
  }
  else {
    piVar1 = (int *)((BLGamePauseView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabMusic();
    pcVar6 = *(code **)(*piVar1 + 0x234);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005ecaae + (intptr_t)(g_005ecc84)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    (*pcVar6)(piVar1,auStack_1c[0]);
  }
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  uVar3 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar1) + (0x88)))();
  uVar4 = (undefined4)(func_0079e794());
  ((CocosDenshion::SimpleAudioEngine *)(uVar3))->setBackgroundMusicVolume(uVar4);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x98)))());
  if (iVar2 == 0) {
    piVar1 = (int *)((BLGamePauseView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabSound();
    pcVar6 = *(code **)(*piVar1 + 0x234);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005ecb96 + (intptr_t)(g_005ecc90)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    (*pcVar6)(piVar1,auStack_1c[0]);
  }
  else {
    piVar1 = (int *)((BLGamePauseView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabSound();
    pcVar6 = *(code **)(*piVar1 + 0x234);
    uVar3 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005ecb5c + (intptr_t)(g_005ecc8c)),auStack_24);
    (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
    (*pcVar6)(piVar1,auStack_1c[0]);
  }
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  piVar1 = (int *)((BLGamePauseView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabGoOn();
  pcVar6 = *(code **)(*piVar1 + 0x1b4);
  piVar5 = (int *)((BLGamePauseView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabQuit();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x1ac)))());
  (*pcVar6)(piVar1,uVar3);
  piVar1 = (int *)((BLGamePauseView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabQuit();
  pcVar6 = *(code **)(*piVar1 + 0x1b4);
  piVar5 = (int *)((BLGamePauseView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabSound();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x1ac)))());
  (*pcVar6)(piVar1,uVar3);
  uVar3 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar1) + (0x98)))();
  uVar4 = (undefined4)(func_0079e794());
  ((CocosDenshion::SimpleAudioEngine *)(uVar3))->setEffectsVolume(uVar4);
  uVar3 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x88)))());
  ((cocos2d::CCUserDefault *)(uVar3))->setBoolForKey((char const*)(unsigned char *)((char *)&g_005ecc38 + (intptr_t)(g_005ecc94)), uVar4);
  uVar3 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x98)))());
  ((cocos2d::CCUserDefault *)(uVar3))->setBoolForKey((char const*)(unsigned char *)((char *)&g_005ecc56 + (intptr_t)(g_005ecc98)), uVar4);
  cocos2d::CCUserDefault::sharedUserDefault();
  ((cocos2d::CCUserDefault *)this)->flush();
  return;
}
