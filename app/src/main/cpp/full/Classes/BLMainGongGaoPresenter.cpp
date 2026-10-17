#include "BLMainGongGaoPresenter.h"
#include "CCFileUtils.h"
#include "CCNode.h"
#include "CCScrollView.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCControlButton.h"
#include "CCLayer.h"
#include "CCDirector.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLMainGongGaoView.h"
#include "DataManager.h"
#include "PagedScrollView.h"
#include "PlatformHelp.h"
#include "StringEx.h"
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
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005f3044;
extern "C" unsigned long UNK_005f305c;
extern "C" unsigned long UNK_005f3074;
extern "C" unsigned long UNK_005f30e8;
extern "C" unsigned long UNK_005f3102;
extern "C" unsigned long UNK_005f3148;
extern "C" unsigned long UNK_005f3170;
extern "C" unsigned long UNK_005f3184;
extern "C" unsigned long UNK_005f31f0;
extern "C" unsigned long UNK_005f320a;
extern "C" unsigned long UNK_005f320e;
extern "C" unsigned long UNK_005f3244;
extern "C" unsigned long UNK_005f32b4;
extern "C" unsigned long UNK_005f32fa;
extern "C" unsigned long UNK_005f331a;
extern "C" unsigned long UNK_005f3368;
extern "C" unsigned long UNK_005f3400;
extern "C" unsigned long UNK_005f3412;
extern "C" unsigned long UNK_005f3626;
extern "C" unsigned long UNK_005f3636;
extern "C" unsigned long UNK_005f36b8;
extern "C" unsigned long UNK_005f36ba;
extern "C" unsigned long UNK_005f36ea;
extern "C" unsigned long UNK_005f36fa;
extern "C" unsigned long UNK_005f3724;
extern "C" unsigned long _UNK_005f3048;
extern "C" unsigned long _UNK_005f3060;
extern "C" unsigned long _UNK_005f3078;
extern "C" unsigned long _UNK_005f3134;
extern "C" unsigned long _UNK_005f3138;
extern "C" unsigned long _UNK_005f314c;
extern "C" unsigned long _UNK_005f3174;
extern "C" unsigned long _UNK_005f31a4;
extern "C" unsigned long _UNK_005f3270;
extern "C" unsigned long _UNK_005f3274;
extern "C" unsigned long _UNK_005f3278;
extern "C" unsigned long _UNK_005f327c;
extern "C" unsigned long _UNK_005f32d4;
extern "C" unsigned long _UNK_005f3484;
extern "C" unsigned long _UNK_005f3488;
extern "C" unsigned long _UNK_005f348c;
extern "C" unsigned long _UNK_005f3490;
extern "C" unsigned long _UNK_005f3494;
extern "C" unsigned long _UNK_005f3498;
extern "C" unsigned long _UNK_005f349c;
extern "C" unsigned long _UNK_005f34a0;
extern "C" unsigned long _UNK_005f34a4;
extern "C" unsigned long _UNK_005f34a8;
extern "C" unsigned long _UNK_005f38d0;
extern "C" unsigned long _UNK_005f38d4;
extern "C" unsigned long _UNK_005f38d8;
extern "C" unsigned long _UNK_005f38dc;
extern "C" unsigned long _UNK_005f38e0;
extern "C" unsigned long _UNK_005f38e4;
extern "C" unsigned long _UNK_005f38e8;
extern "C" unsigned long _UNK_005f38ec;
extern "C" unsigned long _UNK_005f38f0;
extern "C" unsigned long _UNK_005f38f4;
extern "C" unsigned long _UNK_005f38f8;
extern "C" unsigned long g_005f3044;
extern "C" unsigned long g_005f3048;
extern "C" unsigned long g_005f305c;
extern "C" unsigned long g_005f3060;
extern "C" unsigned long g_005f3074;
extern "C" unsigned long g_005f3078;
extern "C" unsigned long g_005f30e8;
extern "C" unsigned long g_005f3102;
extern "C" unsigned long g_005f3134;
extern "C" unsigned long g_005f3138;
extern "C" unsigned long g_005f3148;
extern "C" unsigned long g_005f314c;
extern "C" unsigned long g_005f3170;
extern "C" unsigned long g_005f3174;
extern "C" unsigned long g_005f3184;
extern "C" unsigned long g_005f31a4;
extern "C" unsigned long g_005f31f0;
extern "C" unsigned long g_005f320a;
extern "C" unsigned long g_005f320e;
extern "C" unsigned long g_005f3244;
extern "C" unsigned long g_005f3270;
extern "C" unsigned long g_005f3274;
extern "C" unsigned long g_005f3278;
extern "C" unsigned long g_005f327c;
extern "C" unsigned long g_005f32b4;
extern "C" unsigned long g_005f32d4;
extern "C" unsigned long g_005f32fa;
extern "C" unsigned long g_005f331a;
extern "C" unsigned long g_005f3368;
extern "C" unsigned long g_005f3400;
extern "C" unsigned long g_005f3412;
extern "C" unsigned long g_005f3484;
extern "C" unsigned long g_005f3488;
extern "C" unsigned long g_005f348c;
extern "C" unsigned long g_005f3490;
extern "C" unsigned long g_005f3494;
extern "C" unsigned long g_005f3498;
extern "C" unsigned long g_005f349c;
extern "C" unsigned long g_005f34a0;
extern "C" unsigned long g_005f34a4;
extern "C" unsigned long g_005f34a8;
extern "C" unsigned long g_005f3626;
extern "C" unsigned long g_005f3636;
extern "C" unsigned long g_005f36b8;
extern "C" unsigned long g_005f36ba;
extern "C" unsigned long g_005f36ea;
extern "C" unsigned long g_005f36fa;
extern "C" unsigned long g_005f3724;
extern "C" unsigned long g_005f38d0;
extern "C" unsigned long g_005f38d4;
extern "C" unsigned long g_005f38d8;
extern "C" unsigned long g_005f38dc;
extern "C" unsigned long g_005f38e0;
extern "C" unsigned long g_005f38e4;
extern "C" unsigned long g_005f38e8;
extern "C" unsigned long g_005f38ec;
extern "C" unsigned long g_005f38f0;
extern "C" unsigned long g_005f38f4;
extern "C" unsigned long g_005f38f8;
bool BLMainGongGaoPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainGongGaoPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGongGaoPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGongGaoPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainGongGaoPresenter::tick(float p1)
{
  return;
}

BLMainGongGaoPresenter::~BLMainGongGaoPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005f30e8 + g_005f3134);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x3c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005f3102 + g_005f3138,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainGongGaoPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_005f3184 + g_005f31a4);
  ((BLGameScene *)this)->shareGameScene();
  ((BLGameScene *)this)->closeNetQuan();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(0x8e);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->removeGongGaoArrayItem();
  return;
}

void BLMainGongGaoPresenter::onWinList(cocos2d::CCObject* p1, unsigned int p2)
{
  ((PlatformHelp *)this)->openUrlHuoJiang();
  return;
}



undefined4 BLMainGongGaoPresenter::create(BLMainGongGaoView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLMainGongGaoPresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005f32b4 + g_005f32d4);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x14));
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  return;
}

void BLMainGongGaoPresenter::onEnter()
{
  return;
}

// ===== 修复: 补回被误删的函数占位 (4) =====
void BLMainGongGaoPresenter::onDoing(cocos2d::CCObject* p1, unsigned int* p2)
{
  int *piVar1;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p1);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x180))(&uStack_c,piVar1);
  ((PlatformHelp *)this)->openHuaWeiShop((char const*)uStack_c);
  func_0079e2bc(&uStack_c);
  return;
}

BLMainGongGaoPresenter::BLMainGongGaoPresenter()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  0 /* ctorZero */;
  iVar3 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_005f31f0 + (intptr_t)(g_005f3270))));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x3c;
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005f320a + (intptr_t)(g_005f3274))));
  uStack_14 = (undefined4)(0);
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_18, 0, (char const*)(unsigned char *)((char *)&g_005f320e + (intptr_t)(g_005f3278)), 0);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar1))->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 1);
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_1c,(unsigned char *)((char *)&g_005f3244 + (intptr_t)(g_005f327c)),auStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_1c);
  func_0079e2bc(auStack_1c);
  return;
}

void BLMainGongGaoPresenter::initWithView(BLMainGongGaoView* p1)
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLMainGongGaoView *)p1)->getBtnClose();
  uStack_30 = (undefined4)(*(undefined4 *)(&g_005f32fa + g_005f3484));
  uStack_2c = (undefined4)(0);
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_30,0,0x20);
  piVar1 = (int *)((BLMainGongGaoView *)*(undefined4 *)(((int)this) + 0x18))->getBtnWinList();
  uStack_24 = (undefined4)(0);
  uStack_28 = (undefined4)(*(undefined4 *)(&g_005f331a + g_005f3488));
  (**(code **)(*piVar1 + 0x254))(piVar1,((int)this),uStack_28,0,0x20);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x18) + 0x108);
  (**(code **)(*piVar1 + 0x1d4))(piVar1,1);
  piVar1 = (int *)cocos2d::CCLayer::create();
  ((cocos2d::extension::CCScrollView *)*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x108))->setContainer((cocos2d::CCNode*)piVar1);
  piVar2 = (int *)cocos2d::extension::CCControlButton::create();
  (**(code **)(*piVar2 + 0x294))(piVar2,0);
  func_0079e45c(&uStack_20,&g_005f3368 + g_005f348c,auStack_38);
  uVar3 = (undefined4)(0 /* ctorZero */);
  func_0079e2bc(&uStack_20);
  (**(code **)(*piVar2 + 0x30c))(piVar2,uVar3,1);
  pcVar4 = *(code **)(*piVar2 + 0x28c);
  0 /* ctorZero */;
  (*pcVar4)(piVar2,&uStack_20);
  (**(code **)(*piVar2 + 0x30))(piVar2,0x3f800000);
  (**(code **)(*piVar2 + 0x38))(piVar2,0x3f800000);
  (**(code **)(*piVar2 + 0x90))(piVar2,0);
  (**(code **)(*piVar2 + 0x11c))(piVar2,1000);
  (**(code **)(*piVar1 + 200))(piVar1,piVar2);
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)(&g_005f3400 + g_005f3498));
  (**(code **)(*piVar2 + 0x254))(piVar2,((int)this),uStack_20,0,0x20);
  func_0079e45c(auStack_38,&g_005f3412 + g_005f349c,auStack_3c);
  piVar1 = (int *)0 /* ctorZero */;
  func_0079e2bc(auStack_38);
  pcVar4 = *(code **)(*piVar1 + 0x1d4);
  0 /* ctorZero */;
  (*pcVar4)(piVar1,auStack_38);
  pcVar4 = *(code **)(*piVar1 + 0x4c);
  0 /* ctorZero */;
  (*pcVar4)(piVar1,auStack_38);
  (**(code **)(*piVar1 + 0x11c))(piVar1,g_005f34a8);
  piVar2 = (int *)((cocos2d::extension::CCScrollView *)*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x108))->getContainer();
  (**(code **)(*piVar2 + 200))(piVar2,piVar1);
  return;
}

void BLMainGongGaoPresenter::updateInfo()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  code *pcVar8;
  int iStack_44;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  ((UIManager *)this)->shareManager();
  iVar1 = (undefined4)((void)(((UIManager *)this)->getGongGaoPngNum()),(intptr_t)0);
  uVar2 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x108));
  if (iVar1 == 0) {
    piVar3 = (int *)((cocos2d::extension::CCScrollView *)(uVar2))->getContainer();
    pcVar8 = *(code **)(*piVar3 + 0x88);
    0 /* ctorZero */;
    (*pcVar8)(piVar3,auStack_20);
    piVar3 = *(int **)(*(int *)(((int)this) + 0x18) + 0x108);
    pcVar8 = *(code **)(*piVar3 + 0x88);
    0 /* ctorZero */;
    (*pcVar8)(piVar3,auStack_20);
    puVar6 = &uStack_24;
    uVar2 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x108));
    func_0079e45c(puVar6,(unsigned char *)((char *)&g_005f3626 + (intptr_t)(g_005f38d8)),auStack_2c);
    func_0079e45c(auStack_20,(unsigned char *)((char *)&g_005f3636 + (intptr_t)(g_005f38dc)),auStack_28);
    (((PagedScrollView *)(uVar2)))->enableIndicator(*(const std::string *)(void *)puVar6,*(std::string *)auStack_20,1);
    func_0079e2bc(auStack_20);
  }
  else {
    piVar3 = (int *)((cocos2d::extension::CCScrollView *)(uVar2))->getContainer();
    (**(code **)(*(int *)(piVar3) + (0xf8)))(piVar3,g_005f38e0);
    piVar3 = (int *)((cocos2d::extension::CCScrollView *)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x108)))->getContainer();
    pcVar8 = *(code **)(*piVar3 + 0x88);
    uVar2 = (undefined4)(func_0079e2ec(iVar1 * 0x30c));
    0 /* ctorZero */;
    (*pcVar8)(piVar3,auStack_20);
    iStack_44 = 0;
    while( true ) {
      puVar6 = auStack_20;
      if (iVar1 <= iStack_44) break;
      uVar4 = (undefined4)(((UIManager *)this)->shareManager());
      uVar4 = ((void)(((UIManager *)(uVar4))->getGongGaoArrayItem(iStack_44)),(undefined4)0);
      iVar5 = (undefined4)(intptr_t)(((StringEx *)this)->SerachStr((char const*)uVar4, (char const*)(unsigned char *)((char *)&g_005f36b8 + (intptr_t)(g_005f38e4)), (char const*)(unsigned char *)((char *)&g_005f36ba + (intptr_t)(g_005f38e8))));
      if (iVar5 == 0) {
        piVar3 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
        (**(code **)(*(int *)(piVar3) + (0x44)))(puVar6,piVar3);
        func_0079e53c(&uStack_24,puVar6);
        func_0079e854(&uStack_24,uVar4);
        func_0079e2bc(puVar6);
        func_0079e45c(puVar6,uStack_24,auStack_28);
        piVar3 = (int *)0 /* ctorZero */;
        func_0079e2bc(puVar6);
        pcVar8 = *(code **)(*piVar3 + 0x1d4);
        0 /* ctorZero */;
        (*pcVar8)(piVar3,auStack_20);
        pcVar8 = *(code **)(*piVar3 + 0x4c);
        uVar4 = (undefined4)(func_0079e2ec(iStack_44 * 0x30c + 0x186));
        0 /* ctorZero */;
        (*pcVar8)(piVar3,auStack_20);
        piVar7 = (int *)((cocos2d::extension::CCScrollView *)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x108)))->getContainer();
        (**(code **)(*(int *)(piVar7) + (200)))(piVar7,piVar3);
      }
      else {
        piVar3 = (int *)cocos2d::CCFileUtils::sharedFileUtils();
        (**(code **)(*(int *)(piVar3) + (0x44)))(puVar6,piVar3);
        func_0079e53c(&uStack_24,puVar6);
        func_0079e854(&uStack_24,uVar4);
        func_0079e2bc(puVar6);
        piVar3 = (int *)((cocos2d::extension::CCScrollView *)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x108)))->getContainer();
        piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0xd4)))(piVar3,1000);
        func_0079e45c(puVar6,uStack_24,auStack_28);
        uVar4 = (undefined4)(0 /* ctorZero */);
        func_0079e2bc(puVar6);
        (**(code **)(*(int *)(piVar3) + (0x30c)))(piVar3,uVar4,1);
        pcVar8 = *(code **)(*piVar3 + 0x28c);
        0 /* ctorZero */;
        (*pcVar8)(piVar3,auStack_20);
        pcVar8 = *(code **)(*piVar3 + 0x4c);
        uVar4 = (undefined4)(func_0079e2ec(iStack_44 * 0x30c + 0x186));
        0 /* ctorZero */;
        (*pcVar8)(piVar3,auStack_20);
        (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,1);
      }
      func_0079e2bc(&uStack_24);
      iStack_44 = (undefined4)(intptr_t)(iStack_44 + 1);
    }
    piVar3 = *(int **)(*(int *)(((int)this) + 0x18) + 0x108);
    pcVar8 = *(code **)(*piVar3 + 0x88);
    0 /* ctorZero */;
    (*pcVar8)(piVar3,puVar6);
    uVar2 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x108));
    func_0079e45c(&uStack_24,(unsigned char *)((char *)&g_005f36ea + (intptr_t)(g_005f38ec)),auStack_2c);
    func_0079e45c(puVar6,(unsigned char *)((char *)&g_005f36fa + (intptr_t)(g_005f38f0)),auStack_28);
    ((PagedScrollView *)(uVar2))->enableIndicator(*(std::string const*)&uStack_24, *(const std::string *)(void *)puVar6, iVar1);
    func_0079e2bc(puVar6);
    func_0079e2bc(&uStack_24);
    uVar2 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x18) + 0x108));
    func_0079e45c(puVar6,(unsigned char *)((char *)&g_005f3724 + (intptr_t)(g_005f38f4)),&uStack_24);
    ((PagedScrollView *)(uVar2))->enablejiantou(*(const std::string *)(void *)puVar6);
  }
  func_0079e2bc(puVar6);
  return;
}
