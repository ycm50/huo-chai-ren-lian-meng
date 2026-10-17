#include "BLTreasureMapPresenter.h"
#include "BLGameScene.h"
#include "BLLeakUtils.h"
#include "BLTreasureMapItemPresenter.h"
#include "BLTreasureMapItemView.h"
#include "BLTreasureMapView.h"
#include "Toast.h"
#include "TreasureDataManager.h"
#include "TreasureHeroData.h"
#include "TreasureInfoDynamicData.h"
#include "TreasureMapItemBoss.h"
#include "TreasureMapItemChapter.h"
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
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4ec(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e50c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7b4(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006a8fac;
extern "C" unsigned long UNK_006a9052;
extern "C" unsigned long UNK_006a9054;
extern "C" unsigned long UNK_006a908e;
extern "C" unsigned long UNK_006a90b4;
extern "C" unsigned long UNK_006a90c4;
extern "C" unsigned long UNK_006a90c6;
extern "C" unsigned long UNK_006a910e;
extern "C" unsigned long UNK_006a9110;
extern "C" unsigned long UNK_006a9156;
extern "C" unsigned long UNK_006a9158;
extern "C" unsigned long UNK_006a917e;
extern "C" unsigned long UNK_006a91c4;
extern "C" unsigned long UNK_006a91e8;
extern "C" unsigned long UNK_006a9244;
extern "C" unsigned long UNK_006a9258;
extern "C" unsigned long UNK_006a9280;
extern "C" unsigned long UNK_006a9294;
extern "C" unsigned long UNK_006a92b0;
extern "C" unsigned long UNK_006a92b2;
extern "C" unsigned long UNK_006a92da;
extern "C" unsigned long UNK_006a93a0;
extern "C" unsigned long UNK_006a942c;
extern "C" unsigned long UNK_006a942e;
extern "C" unsigned long UNK_006a94ae;
extern "C" unsigned long UNK_006a94f0;
extern "C" unsigned long UNK_006a950c;
extern "C" unsigned long UNK_006a9528;
extern "C" unsigned long UNK_006a9544;
extern "C" unsigned long UNK_006a9560;
extern "C" unsigned long UNK_006a957c;
extern "C" unsigned long UNK_006a9598;
extern "C" unsigned long UNK_006a95b4;
extern "C" unsigned long UNK_006a95d0;
extern "C" unsigned long UNK_006a95ec;
extern "C" unsigned long UNK_006a9608;
extern "C" unsigned long UNK_006a9624;
extern "C" unsigned long UNK_006a9640;
extern "C" unsigned long UNK_006a965c;
extern "C" unsigned long UNK_006a9678;
extern "C" unsigned long UNK_006a969c;
extern "C" unsigned long UNK_006a96bc;
extern "C" unsigned long UNK_006a99ea;
extern "C" unsigned long UNK_006a9ace;
extern "C" unsigned long UNK_006a9ba6;
extern "C" unsigned long UNK_006a9bc2;
extern "C" unsigned long UNK_006a9bc4;
extern "C" unsigned long UNK_006a9c1a;
extern "C" unsigned long UNK_006a9c1c;
extern "C" unsigned long UNK_006a9c72;
extern "C" unsigned long UNK_006a9c74;
extern "C" unsigned long UNK_006a9cd8;
extern "C" unsigned long UNK_006a9d10;
extern "C" unsigned long UNK_006a9d36;
extern "C" unsigned long UNK_006a9d38;
extern "C" unsigned long UNK_006a9d8a;
extern "C" unsigned long UNK_006aa00a;
extern "C" unsigned long UNK_006aa022;
extern "C" unsigned long UNK_006aa054;
extern "C" unsigned long UNK_006aa06e;
extern "C" unsigned long UNK_006aa0a0;
extern "C" unsigned long UNK_006aa0c2;
extern "C" unsigned long UNK_006aa1b0;
extern "C" unsigned long UNK_006aa26e;
extern "C" unsigned long UNK_006aa33c;
extern "C" unsigned long UNK_006aa3de;
extern "C" unsigned long _UNK_006a8fb0;
extern "C" unsigned long _UNK_006a9010;
extern "C" unsigned long _UNK_006a9078;
extern "C" unsigned long _UNK_006a907c;
extern "C" unsigned long _UNK_006a90a0;
extern "C" unsigned long _UNK_006a90f0;
extern "C" unsigned long _UNK_006a90f4;
extern "C" unsigned long _UNK_006a90f8;
extern "C" unsigned long _UNK_006a913c;
extern "C" unsigned long _UNK_006a9140;
extern "C" unsigned long _UNK_006a91b0;
extern "C" unsigned long _UNK_006a91b4;
extern "C" unsigned long _UNK_006a91b8;
extern "C" unsigned long _UNK_006a9230;
extern "C" unsigned long _UNK_006a9234;
extern "C" unsigned long _UNK_006a9248;
extern "C" unsigned long _UNK_006a925c;
extern "C" unsigned long _UNK_006a9284;
extern "C" unsigned long _UNK_006a9298;
extern "C" unsigned long _UNK_006a9370;
extern "C" unsigned long _UNK_006a9374;
extern "C" unsigned long _UNK_006a9378;
extern "C" unsigned long _UNK_006a940c;
extern "C" unsigned long _UNK_006a9494;
extern "C" unsigned long _UNK_006a9498;
extern "C" unsigned long _UNK_006a96f4;
extern "C" unsigned long _UNK_006a96f8;
extern "C" unsigned long _UNK_006a96fc;
extern "C" unsigned long _UNK_006a9700;
extern "C" unsigned long _UNK_006a9704;
extern "C" unsigned long _UNK_006a9708;
extern "C" unsigned long _UNK_006a970c;
extern "C" unsigned long _UNK_006a9710;
extern "C" unsigned long _UNK_006a9714;
extern "C" unsigned long _UNK_006a9718;
extern "C" unsigned long _UNK_006a971c;
extern "C" unsigned long _UNK_006a9720;
extern "C" unsigned long _UNK_006a9724;
extern "C" unsigned long _UNK_006a9728;
extern "C" unsigned long _UNK_006a972c;
extern "C" unsigned long _UNK_006a9730;
extern "C" unsigned long _UNK_006a9734;
extern "C" unsigned long _UNK_006a9738;
extern "C" unsigned long _UNK_006a973c;
extern "C" unsigned long _UNK_006a9740;
extern "C" unsigned long _UNK_006a9744;
extern "C" unsigned long _UNK_006a9748;
extern "C" unsigned long _UNK_006a974c;
extern "C" unsigned long _UNK_006a9750;
extern "C" unsigned long _UNK_006a9754;
extern "C" unsigned long _UNK_006a9758;
extern "C" unsigned long _UNK_006a975c;
extern "C" unsigned long _UNK_006a9760;
extern "C" unsigned long _UNK_006a9764;
extern "C" unsigned long _UNK_006a9768;
extern "C" unsigned long _UNK_006a976c;
extern "C" unsigned long _UNK_006a9770;
extern "C" unsigned long _UNK_006a9774;
extern "C" unsigned long _UNK_006a9778;
extern "C" unsigned long _UNK_006a977c;
extern "C" unsigned long _UNK_006a99c8;
extern "C" unsigned long _UNK_006a99cc;
extern "C" unsigned long _UNK_006a99d0;
extern "C" unsigned long _UNK_006a99d4;
extern "C" unsigned long _UNK_006a99d8;
extern "C" unsigned long _UNK_006a9afc;
extern "C" unsigned long _UNK_006a9b00;
extern "C" unsigned long _UNK_006a9b04;
extern "C" unsigned long _UNK_006a9b08;
extern "C" unsigned long _UNK_006a9b0c;
extern "C" unsigned long _UNK_006a9b10;
extern "C" unsigned long _UNK_006a9bac;
extern "C" unsigned long _UNK_006a9c00;
extern "C" unsigned long _UNK_006a9c04;
extern "C" unsigned long _UNK_006a9c58;
extern "C" unsigned long _UNK_006a9c5c;
extern "C" unsigned long _UNK_006a9ca8;
extern "C" unsigned long _UNK_006a9cac;
extern "C" unsigned long _UNK_006a9d1c;
extern "C" unsigned long _UNK_006a9d20;
extern "C" unsigned long _UNK_006a9d6c;
extern "C" unsigned long _UNK_006a9d70;
extern "C" unsigned long _UNK_006a9ecc;
extern "C" unsigned long _UNK_006a9ed0;
extern "C" unsigned long _UNK_006a9ed4;
extern "C" unsigned long _UNK_006a9ed8;
extern "C" unsigned long _UNK_006aa340;
extern "C" unsigned long _UNK_006aa344;
extern "C" unsigned long _UNK_006aa348;
extern "C" unsigned long _UNK_006aa34c;
extern "C" unsigned long _UNK_006aa350;
extern "C" unsigned long _UNK_006aa354;
extern "C" unsigned long _UNK_006aa358;
extern "C" unsigned long _UNK_006aa35c;
extern "C" unsigned long _UNK_006aa360;
extern "C" unsigned long _UNK_006aa364;
extern "C" unsigned long _UNK_006aa368;
extern "C" unsigned long _UNK_006aa36c;
extern "C" unsigned long _UNK_006aa370;
extern "C" unsigned long _UNK_006aa374;
extern "C" unsigned long _UNK_006aa424;
extern "C" unsigned long _UNK_006aa428;
extern "C" unsigned long _UNK_006aa42c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long g_006a8fac;
extern "C" unsigned long g_006a8fb0;
extern "C" unsigned long g_006a9010;
extern "C" unsigned long g_006a9052;
extern "C" unsigned long g_006a9054;
extern "C" unsigned long g_006a9078;
extern "C" unsigned long g_006a907c;
extern "C" unsigned long g_006a908e;
extern "C" unsigned long g_006a90a0;
extern "C" unsigned long g_006a90b4;
extern "C" unsigned long g_006a90c4;
extern "C" unsigned long g_006a90c6;
extern "C" unsigned long g_006a90f0;
extern "C" unsigned long g_006a90f4;
extern "C" unsigned long g_006a90f8;
extern "C" unsigned long g_006a910e;
extern "C" unsigned long g_006a9110;
extern "C" unsigned long g_006a913c;
extern "C" unsigned long g_006a9140;
extern "C" unsigned long g_006a9156;
extern "C" unsigned long g_006a9158;
extern "C" unsigned long g_006a917e;
extern "C" unsigned long g_006a91b0;
extern "C" unsigned long g_006a91b4;
extern "C" unsigned long g_006a91b8;
extern "C" unsigned long g_006a91c4;
extern "C" unsigned long g_006a91e8;
extern "C" unsigned long g_006a9230;
extern "C" unsigned long g_006a9234;
extern "C" unsigned long g_006a9244;
extern "C" unsigned long g_006a9248;
extern "C" unsigned long g_006a9258;
extern "C" unsigned long g_006a925c;
extern "C" unsigned long g_006a9280;
extern "C" unsigned long g_006a9284;
extern "C" unsigned long g_006a9294;
extern "C" unsigned long g_006a9298;
extern "C" unsigned long g_006a92b0;
extern "C" unsigned long g_006a92b2;
extern "C" unsigned long g_006a92da;
extern "C" unsigned long g_006a9370;
extern "C" unsigned long g_006a9374;
extern "C" unsigned long g_006a9378;
extern "C" unsigned long g_006a93a0;
extern "C" unsigned long g_006a940c;
extern "C" unsigned long g_006a942c;
extern "C" unsigned long g_006a942e;
extern "C" unsigned long g_006a9494;
extern "C" unsigned long g_006a9498;
extern "C" unsigned long g_006a94ae;
extern "C" unsigned long g_006a94f0;
extern "C" unsigned long g_006a950c;
extern "C" unsigned long g_006a9528;
extern "C" unsigned long g_006a9544;
extern "C" unsigned long g_006a9560;
extern "C" unsigned long g_006a957c;
extern "C" unsigned long g_006a9598;
extern "C" unsigned long g_006a95b4;
extern "C" unsigned long g_006a95d0;
extern "C" unsigned long g_006a95ec;
extern "C" unsigned long g_006a9608;
extern "C" unsigned long g_006a9624;
extern "C" unsigned long g_006a9640;
extern "C" unsigned long g_006a965c;
extern "C" unsigned long g_006a9678;
extern "C" unsigned long g_006a969c;
extern "C" unsigned long g_006a96bc;
extern "C" unsigned long g_006a96f4;
extern "C" unsigned long g_006a96f8;
extern "C" unsigned long g_006a96fc;
extern "C" unsigned long g_006a9700;
extern "C" unsigned long g_006a9704;
extern "C" unsigned long g_006a9708;
extern "C" unsigned long g_006a970c;
extern "C" unsigned long g_006a9710;
extern "C" unsigned long g_006a9714;
extern "C" unsigned long g_006a9718;
extern "C" unsigned long g_006a971c;
extern "C" unsigned long g_006a9720;
extern "C" unsigned long g_006a9724;
extern "C" unsigned long g_006a9728;
extern "C" unsigned long g_006a972c;
extern "C" unsigned long g_006a9730;
extern "C" unsigned long g_006a9734;
extern "C" unsigned long g_006a9738;
extern "C" unsigned long g_006a973c;
extern "C" unsigned long g_006a9740;
extern "C" unsigned long g_006a9744;
extern "C" unsigned long g_006a9748;
extern "C" unsigned long g_006a974c;
extern "C" unsigned long g_006a9750;
extern "C" unsigned long g_006a9754;
extern "C" unsigned long g_006a9758;
extern "C" unsigned long g_006a975c;
extern "C" unsigned long g_006a9760;
extern "C" unsigned long g_006a9764;
extern "C" unsigned long g_006a9768;
extern "C" unsigned long g_006a976c;
extern "C" unsigned long g_006a9770;
extern "C" unsigned long g_006a9774;
extern "C" unsigned long g_006a9778;
extern "C" unsigned long g_006a977c;
extern "C" unsigned long g_006a99c8;
extern "C" unsigned long g_006a99cc;
extern "C" unsigned long g_006a99d0;
extern "C" unsigned long g_006a99d4;
extern "C" unsigned long g_006a99d8;
extern "C" unsigned long g_006a99ea;
extern "C" unsigned long g_006a9ace;
extern "C" unsigned long g_006a9afc;
extern "C" unsigned long g_006a9b00;
extern "C" unsigned long g_006a9b04;
extern "C" unsigned long g_006a9b08;
extern "C" unsigned long g_006a9b0c;
extern "C" unsigned long g_006a9b10;
extern "C" unsigned long g_006a9ba6;
extern "C" unsigned long g_006a9bac;
extern "C" unsigned long g_006a9bc2;
extern "C" unsigned long g_006a9bc4;
extern "C" unsigned long g_006a9c00;
extern "C" unsigned long g_006a9c04;
extern "C" unsigned long g_006a9c1a;
extern "C" unsigned long g_006a9c1c;
extern "C" unsigned long g_006a9c58;
extern "C" unsigned long g_006a9c5c;
extern "C" unsigned long g_006a9c72;
extern "C" unsigned long g_006a9c74;
extern "C" unsigned long g_006a9ca8;
extern "C" unsigned long g_006a9cac;
extern "C" unsigned long g_006a9cd8;
extern "C" unsigned long g_006a9d10;
extern "C" unsigned long g_006a9d1c;
extern "C" unsigned long g_006a9d20;
extern "C" unsigned long g_006a9d36;
extern "C" unsigned long g_006a9d38;
extern "C" unsigned long g_006a9d6c;
extern "C" unsigned long g_006a9d70;
extern "C" unsigned long g_006a9d8a;
extern "C" unsigned long g_006a9ecc;
extern "C" unsigned long g_006a9ed0;
extern "C" unsigned long g_006a9ed4;
extern "C" unsigned long g_006a9ed8;
extern "C" unsigned long g_006aa00a;
extern "C" unsigned long g_006aa022;
extern "C" unsigned long g_006aa054;
extern "C" unsigned long g_006aa06e;
extern "C" unsigned long g_006aa0a0;
extern "C" unsigned long g_006aa0c2;
extern "C" unsigned long g_006aa1b0;
extern "C" unsigned long g_006aa26e;
extern "C" unsigned long g_006aa33c;
extern "C" unsigned long g_006aa340;
extern "C" unsigned long g_006aa344;
extern "C" unsigned long g_006aa348;
extern "C" unsigned long g_006aa34c;
extern "C" unsigned long g_006aa350;
extern "C" unsigned long g_006aa354;
extern "C" unsigned long g_006aa358;
extern "C" unsigned long g_006aa35c;
extern "C" unsigned long g_006aa360;
extern "C" unsigned long g_006aa364;
extern "C" unsigned long g_006aa368;
extern "C" unsigned long g_006aa36c;
extern "C" unsigned long g_006aa370;
extern "C" unsigned long g_006aa374;
extern "C" unsigned long g_006aa3de;
extern "C" unsigned long g_006aa424;
extern "C" unsigned long g_006aa428;
extern "C" unsigned long g_006aa42c;
void BLTreasureMapPresenter::scrollViewDidScroll(cocos2d::extension::CCScrollView* p1)
{
  return;
}

void BLTreasureMapPresenter::scrollViewDidZoom(cocos2d::extension::CCScrollView* p1)
{
  return;
}

bool BLTreasureMapPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLTreasureMapPresenter::onReceiveMSGEventReward()
{
  return;
}

void BLTreasureMapPresenter::onReceiveMSGEventFreeDice()
{
  return;
}

void BLTreasureMapPresenter::onBOOSReward()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_006a9010);
  return;
}

void BLTreasureMapPresenter::onTouchUnable()
{
  undefined4 p4 = 0;

  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)((BLTreasureMapView *)*(undefined4 *)(((int)this) + 0x1c))->getScrollView();
  pcVar2 = *(code **)(*piVar1 + 0x1c8);
  (*pcVar2)(piVar1,0,*piVar1,pcVar2,p4);
  return;
}

void BLTreasureMapPresenter::onTouchReset()
{
  undefined4 p4 = 0;

  int *piVar1;
  code *pcVar2;
  
  piVar1 = (int *)((BLTreasureMapView *)*(undefined4 *)(((int)this) + 0x1c))->getScrollView();
  pcVar2 = *(code **)(*piVar1 + 0x1c8);
  (*pcVar2)(piVar1,1,*piVar1,pcVar2,p4);
  return;
}






BLTreasureMapPresenter::~BLTreasureMapPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006a91c4 + g_006a9230);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(6)) = iVar2 + 100;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x34;
  *(int *)((int)this + 4*(9)) = *(int *)((int)this + 4*(8));
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006a91e8 + g_006a9234,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  if (*(int *)((int)this + 4*(8)) != 0) {
    (void)(::operator delete((void *)(*(int *)((int)this + 4*(8)))));
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}




BLTreasureMapPresenter::BLTreasureMapPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLTreasureMapPresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x3c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTreasureMapPresenter::initWithView(BLTreasureMapView* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

void BLTreasureMapPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLTreasureMapPresenter::initData()
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  *(undefined1 *)(((int)this) + 0x38) = 0;
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  iVar1 = **(int **)(iVar1 + 0x6c);
  *(int *)(((int)this) + 0x2c) = iVar1;
  *(int *)(((int)this) + 0x30) = *(int *)(((int)this) + 0x20) + iVar1 * 4;
  piVar2 = (int *)((BLTreasureMapView *)*(undefined4 *)(((int)this) + 0x1c))->getSpPointer();
  pcVar4 = *(code **)(*piVar2 + 0x4c);
  uVar3 = (undefined4)((**(code **)(*(int *)**(undefined4 **)(((int)this) + 0x30) + 0x50))());
  (*pcVar4)(piVar2,uVar3);
  return;
}



void BLTreasureMapPresenter::move(int p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(((int)this) + 0x2c);
  if (p1 < 1) {
    while ((p1 != 0 && (1 < *(int *)(((int)this) + 0x2c)))) {
      p1 = p1 + 1;
      puVar3 = (undefined4 *)(*(int *)(((int)this) + 0x30) + -4);
      *(undefined4 **)(((int)this) + 0x30) = puVar3;
      ((BLTreasureMapItemView *)*puVar3)->getPresenter();
      ((BLTreasureMapItemPresenter *)this)->reset();
      *(int *)(((int)this) + 0x2c) = *(int *)(((int)this) + 0x2c) + -1;
    }
  }
  else {
    do {
      if ((*(undefined4 **)(((int)this) + 0x30) == *(undefined4 **)(((int)this) + 0x24)) ||
         ((iVar1 = ((BLTreasureMapItemView *)**(undefined4 **)(((int)this) + 0x30))->getPresenter(),
          *(char *)(*(int *)(iVar1 + 0x1c) + 0xd) == '\0' &&
          ((iVar1 = ((BLTreasureMapItemView *)**(undefined4 **)(((int)this) + 0x30))->getPresenter(),
           *(char *)(*(int *)(iVar1 + 0x1c) + 0xc) == '\0' ||
           (iVar1 = ((BLTreasureMapItemView *)**(undefined4 **)(((int)this) + 0x30))->getPresenter(),
           *(int *)(*(int *)(iVar1 + 0x1c) + 0x1c) < 1)))))) break;
      p1 = p1 + -1;
      *(int *)(((int)this) + 0x30) = *(int *)(((int)this) + 0x30) + 4;
      *(int *)(((int)this) + 0x2c) = *(int *)(((int)this) + 0x2c) + 1;
    } while (p1 != 0);
  }
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  ((TreasureInfoDynamicData *)*(undefined4 *)(iVar1 + 0x6c))->movePos(*(undefined4 *)(((int)this) + 0x2c));
  if (iVar4 == 0) {
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)&g_006a9ba6 + g_006a9bac);
  }
  return;
}

void BLTreasureMapPresenter::onReceiveMSGMove(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_006a9bc2 + g_006a9c04),
                              *(undefined4 *)(&g_006a9bc4 + g_006a9c00),0), iVar1 != 0)) {
    uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x2c));
    BLTreasureMapPresenter::move(uVar2);
    uVar3 = (undefined4)(cocos2d::CCInteger::create(uVar3));
    BLTreasureMapPresenter::runMoveAction((cocos2d::CCObject*)uVar3);
    uVar3 = (undefined4)(((BLTreasureMapItemView *)**(undefined4 **)(((int)this) + 0x30))->getPresenter());
    ((BLTreasureMapItemPresenter *)uVar3)->addMoveInfo(uVar2, *(undefined4 *)(((int)this) + 0x2c));
  }
  return;
}

void BLTreasureMapPresenter::onReceiveMSGMoveSpecial(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_006a9c1a + g_006a9c5c),
                              *(undefined4 *)(&g_006a9c1c + g_006a9c58),0), iVar1 != 0)) {
    uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x2c));
    BLTreasureMapPresenter::move(uVar2);
    uVar3 = (undefined4)(cocos2d::CCInteger::create(uVar3));
    BLTreasureMapPresenter::runMoveAction((cocos2d::CCObject*)uVar3);
    uVar3 = (undefined4)(((BLTreasureMapItemView *)**(undefined4 **)(((int)this) + 0x30))->getPresenter());
    ((BLTreasureMapItemPresenter *)uVar3)->addSpecialMoveInfo(uVar2, *(undefined4 *)(((int)this) + 0x2c));
  }
  return;
}

void BLTreasureMapPresenter::onReceiveMSGEventBack(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_006a9c72 + g_006a9cac),
                              *(undefined4 *)(&g_006a9c74 + g_006a9ca8),0,p4), iVar1 != 0)
     ) {
    uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    *(undefined4 *)(((int)this) + 0x34) = *(undefined4 *)(((int)this) + 0x30);
    uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x2c));
    *(undefined1 *)(((int)this) + 0x38) = 1;
    BLTreasureMapPresenter::move(uVar2);
    uVar2 = (undefined4)(cocos2d::CCInteger::create(uVar3));
    BLTreasureMapPresenter::runMoveAction((cocos2d::CCObject*)uVar2);
  }
  return;
}

void BLTreasureMapPresenter::moveTo(int p1)
{
  int iVar1;
  undefined4 uVar2;
  int extraout_r1;
  undefined4 *puVar3;
  int iVar4;
  int extraout_r3;
  int iVar5;
  
  iVar5 = *(int *)(((int)this) + 0x2c);
  do {
    if (((int)p1 < 0) || (*(int *)(((int)this) + 0x2c) <= (int)p1)) break;
    puVar3 = (undefined4 *)(*(int *)(((int)this) + 0x30) + -4);
    *(undefined4 **)(((int)this) + 0x30) = puVar3;
    ((BLTreasureMapItemView *)*puVar3)->getPresenter();
    ((BLTreasureMapItemPresenter *)this)->reset();
    *(int *)(((int)this) + 0x2c) = *(int *)(((int)this) + 0x2c) + -1;
    iVar1 = **(int **)(((int)this) + 0x30);
    iVar4 = *(int *)(((int)this) + 0x20);
    if ((uint)(*(int *)(((int)this) + 0x24) - iVar4 >> 2) <= p1) {
      func_0079e784(&g_006a9d10 + g_006a9d20,p1);
      iVar1 = extraout_r1;
      iVar4 = extraout_r3;
    }
  } while (iVar1 != *(int *)(iVar4 + p1 * 4));
  iVar1 = ((TreasureDataManager *)this)->getInstance();
  ((TreasureInfoDynamicData *)*(undefined4 *)(iVar1 + 0x6c))->movePos(*(undefined4 *)(((int)this) + 0x2c));
  if (iVar5 == 0) {
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar2)->postNotification((char const*)&g_006a9cd8 + g_006a9d1c);
  }
  return;
}

void BLTreasureMapPresenter::onReceiveMSGEventDeliver(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)(&g_006a9d36 + g_006a9d70),
                              *(undefined4 *)(&g_006a9d38 + g_006a9d6c),0,p4), iVar1 != 0)
     ) {
    uVar2 = (undefined4)(*(undefined4 *)(iVar1 + 0x14));
    *(undefined4 *)(((int)this) + 0x34) = *(undefined4 *)(((int)this) + 0x30);
    uVar3 = (undefined4)(*(undefined4 *)(((int)this) + 0x2c));
    *(undefined1 *)(((int)this) + 0x38) = 1;
    BLTreasureMapPresenter::moveTo(uVar2);
    uVar2 = (undefined4)(cocos2d::CCInteger::create(uVar3));
    BLTreasureMapPresenter::runMoveAction((cocos2d::CCObject*)uVar2);
  }
  return;
}


void BLTreasureMapPresenter::onEnter()
{
  int iVar1;
  
  BLTreasureMapPresenter::updateCurOffset();
  BLTreasureMapPresenter::checkUpdateChapterStatus();
  iVar1 = ((BLTreasureMapItemView *)**(undefined4 **)(((int)this) + 0x30))->getPresenter();
  if (*(char *)(*(int *)(iVar1 + 0x1c) + 0x18) == '\0') {
    ((BLTreasureMapItemView *)**(undefined4 **)(((int)this) + 0x30))->getPresenter();
    ((BLTreasureMapItemPresenter *)this)->trigger();
  }
  return;
}


void BLTreasureMapPresenter::initWithData()
{
  ((TreasureDataManager *)this)->getInstance();
  ((TreasureDataManager *)this)->checkMapData();
  BLTreasureMapPresenter::initMap();
  BLTreasureMapPresenter::initData();
  return;
}

void BLTreasureMapPresenter::refreshMap()
{
  int *piVar1;
  
  ((BLTreasureMapView *)*(undefined4 *)(((int)this) + 0x1c))->getScrollView();
  piVar1 = (int *)((cocos2d::extension::CCScrollView *)this)->getContainer();
  (**(code **)(*piVar1 + 0x104))(piVar1,1);
  *(undefined4 *)(((int)this) + 0x24) = *(undefined4 *)(((int)this) + 0x20);
  BLTreasureMapPresenter::initMap();
  BLTreasureMapPresenter::initData();
  BLTreasureMapPresenter::updateCurOffset();
  return;
}

// ===== 修复: 补回被误删的函数占位 (12) =====
void BLTreasureMapPresenter::onReceiveMSGEventCard(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapPresenter::onReceiveMSGEventAllCard(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapPresenter::onReceiveMSGEventKey(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapPresenter::onReceiveMSGEventBadThief(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapPresenter::onReceiveMSGEventRelive(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapPresenter::onReceiveMSGEventDie(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapPresenter::onReceiveMSGEventPrison(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLTreasureMapPresenter::onReceiveMSGPassWithPay()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLTreasureMapPresenter::updateCurOffset()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapPresenter::runMoveAction(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapPresenter::checkUpdateChapterStatus()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLTreasureMapPresenter::initMap()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
