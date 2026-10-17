#include "BLTreasurePresenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "BLLeakUtils.h"
#include "BLTreasureDicePresenter.h"
#include "BLTreasureDiceView.h"
#include "BLTreasureMapPresenter.h"
#include "BLTreasureMapView.h"
#include "BLTreasureMenuPresenter.h"
#include "BLTreasureMenuView.h"
#include "BLTreasureRecordPresenter.h"
#include "BLTreasureRecordView.h"
#include "BLTreasureView.h"
#include "TreasureDataManager.h"
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
extern "C" unsigned long UNK_006aaa2c;
extern "C" unsigned long UNK_006aaa84;
extern "C" unsigned long UNK_006aaa9e;
extern "C" unsigned long UNK_006aaae4;
extern "C" unsigned long UNK_006aab0c;
extern "C" unsigned long UNK_006aab46;
extern "C" unsigned long UNK_006aab60;
extern "C" unsigned long UNK_006aab82;
extern "C" unsigned long UNK_006aaba6;
extern "C" unsigned long UNK_006aabaa;
extern "C" unsigned long _UNK_006aaa30;
extern "C" unsigned long _UNK_006aaad0;
extern "C" unsigned long _UNK_006aaad4;
extern "C" unsigned long _UNK_006aaae8;
extern "C" unsigned long _UNK_006aab10;
extern "C" unsigned long _UNK_006aab4c;
extern "C" unsigned long _UNK_006aabcc;
extern "C" unsigned long _UNK_006aabd0;
extern "C" unsigned long _UNK_006aabd4;
extern "C" unsigned long _UNK_006aabd8;
extern "C" unsigned long g_006aaa2c;
extern "C" unsigned long g_006aaa30;
extern "C" unsigned long g_006aaa84;
extern "C" unsigned long g_006aaa9e;
extern "C" unsigned long g_006aaad0;
extern "C" unsigned long g_006aaad4;
extern "C" unsigned long g_006aaae4;
extern "C" unsigned long g_006aaae8;
extern "C" unsigned long g_006aab0c;
extern "C" unsigned long g_006aab10;
extern "C" unsigned long g_006aab46;
extern "C" unsigned long g_006aab4c;
extern "C" unsigned long g_006aab60;
extern "C" unsigned long g_006aab82;
extern "C" unsigned long g_006aaba6;
extern "C" unsigned long g_006aabaa;
extern "C" unsigned long g_006aabcc;
extern "C" unsigned long g_006aabd0;
extern "C" unsigned long g_006aabd4;
extern "C" unsigned long g_006aabd8;
bool BLTreasurePresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

BLTreasurePresenter::~BLTreasurePresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006aaa84 + g_006aaad0);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006aaa9e + g_006aaad4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLTreasurePresenter::onRestart()
{
  undefined4 uVar1;
  
  ((TreasureDataManager *)this)->getInstance();
  ((TreasureDataManager *)this)->refreshtData();
  ((BLTreasureView *)*(undefined4 *)(((int)this) + 0x18))->getMapView();
  ((BLTreasureMapView *)this)->getPresenter();
  ((BLTreasureMapPresenter *)this)->refreshMap();
  ((BLTreasureView *)*(undefined4 *)(((int)this) + 0x18))->getRecordView();
  ((BLTreasureRecordView *)this)->getPresenter();
  ((BLTreasureRecordPresenter *)this)->refreshRecord();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)&g_006aab46 + g_006aab4c);
  return;
}

BLTreasurePresenter::BLTreasurePresenter()
{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  0 /* ctorZero */;
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_006aab60 + (intptr_t)(g_006aabcc))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x2c;
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->pushCurScrollViewUnEnable();
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(auStack_24,(unsigned char *)((char *)&g_006aab82 + (intptr_t)(g_006aabd0)),&uStack_20);
  ((BLLeakUtils *)(uVar1))->addClass((std::string)(char*)auStack_24);
  func_0079e2bc(auStack_24);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006aaba6 + (intptr_t)(g_006aabd4))));
  ((cocos2d::CCNotificationCenter *)(((int)this)))->addObserver((cocos2d::CCObject*)uStack_20, 0, (char const*)(unsigned char *)((char *)&g_006aabaa + (intptr_t)(g_006aabd8)), 0);
  return;
}

undefined4 BLTreasurePresenter::create()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x1c))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void BLTreasurePresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14, 1, 1);
  return;
}

void BLTreasurePresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  ((TreasureDataManager *)this)->getInstance();
  ((TreasureDataManager *)this)->saveData();
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

void BLTreasurePresenter::tick(float p1)
{
  return;
}

void BLTreasurePresenter::initMapItems()
{
  ((BLTreasureView *)*(undefined4 *)(((int)this) + 0x18))->getMapView();
  ((BLTreasureMapView *)this)->getPresenter();
  ((BLTreasureMapPresenter *)this)->initWithData();
  return;
}

void BLTreasurePresenter::initWithView(BLTreasureView* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t)p1;
  BLTreasurePresenter::initMapItems();
  ((BLTreasureView *)*(undefined4 *)(((int)this) + 0x18))->getMenuView();
  ((BLTreasureMenuView *)this)->getPresenter();
  ((BLTreasureMenuPresenter *)this)->initWithData();
  ((BLTreasureView *)*(undefined4 *)(((int)this) + 0x18))->getDiceView();
  ((BLTreasureDiceView *)this)->getPresenter();
  ((BLTreasureDicePresenter *)this)->initWithData();
  return;
}
