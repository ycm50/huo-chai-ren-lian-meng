#include "BLMissionMainPresenter.h"
#include "CCString.h"
#include "BLForwards.h"
#include "CCArray.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "BLMissionChapterItemData.h"
#include "CCLayer.h"
#include "BLMissionMainView.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCNotificationCenter.h"
#include "CCDirector.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLMissionChaptersData.h"
#include "BLMissionData.h"
#include "BLMissionItemPresenter.h"
#include "BLMissionItemView.h"
#include "BLMissionRewardPresenter.h"
#include "BLPageControl.h"
#include "BLPageLayer.h"
#include "DataManager.h"
#include "MissionStarRewardUserData.h"
#include "MissionStarRewardUserItemData.h"
#include "MissionSweepData.h"
#include "UIManager.h"
#include "UserData.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4ac(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e7e4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long func_0079e964(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005b6464;
extern "C" unsigned long UNK_005b647c;
extern "C" unsigned long UNK_005b6494;
extern "C" unsigned long UNK_005b6548;
extern "C" unsigned long UNK_005b6562;
extern "C" unsigned long UNK_005b6564;
extern "C" unsigned long UNK_005b6620;
extern "C" unsigned long UNK_005b6622;
extern "C" unsigned long UNK_005b6748;
extern "C" unsigned long UNK_005b677c;
extern "C" unsigned long UNK_005b677e;
extern "C" unsigned long UNK_005b6796;
extern "C" unsigned long UNK_005b6798;
extern "C" unsigned long UNK_005b67d0;
extern "C" unsigned long UNK_005b67de;
extern "C" unsigned long UNK_005b683e;
extern "C" unsigned long UNK_005b698e;
extern "C" unsigned long UNK_005b69d0;
extern "C" unsigned long UNK_005b69da;
extern "C" unsigned long UNK_005b6a12;
extern "C" unsigned long UNK_005b6ac2;
extern "C" unsigned long UNK_005b6b62;
extern "C" unsigned long UNK_005b6bc4;
extern "C" unsigned long UNK_005b6bc6;
extern "C" unsigned long UNK_005b6bfc;
extern "C" unsigned long UNK_005b6c2c;
extern "C" unsigned long UNK_005b6c7a;
extern "C" unsigned long UNK_005b6cd0;
extern "C" unsigned long UNK_005b6cf8;
extern "C" unsigned long UNK_005b6d10;
extern "C" unsigned long UNK_005b6d66;
extern "C" unsigned long UNK_005b6f2e;
extern "C" unsigned long UNK_005b6f58;
extern "C" unsigned long UNK_005b6fca;
extern "C" unsigned long UNK_005b705c;
extern "C" unsigned long UNK_005b7084;
extern "C" unsigned long UNK_005b717a;
extern "C" unsigned long UNK_005b72d0;
extern "C" unsigned long UNK_005b7396;
extern "C" unsigned long UNK_005b73e0;
extern "C" unsigned long UNK_005b75fa;
extern "C" unsigned long UNK_005b770c;
extern "C" unsigned long _UNK_005b6468;
extern "C" unsigned long _UNK_005b6480;
extern "C" unsigned long _UNK_005b6498;
extern "C" unsigned long _UNK_005b654c;
extern "C" unsigned long _UNK_005b659c;
extern "C" unsigned long _UNK_005b65a0;
extern "C" unsigned long _UNK_005b6730;
extern "C" unsigned long _UNK_005b6734;
extern "C" unsigned long _UNK_005b6738;
extern "C" unsigned long _UNK_005b674c;
extern "C" unsigned long _UNK_005b67a8;
extern "C" unsigned long _UNK_005b67ac;
extern "C" unsigned long _UNK_005b67b0;
extern "C" unsigned long _UNK_005b67b4;
extern "C" unsigned long _UNK_005b67f4;
extern "C" unsigned long _UNK_005b67f8;
extern "C" unsigned long _UNK_005b689c;
extern "C" unsigned long _UNK_005b68a0;
extern "C" unsigned long _UNK_005b68a4;
extern "C" unsigned long _UNK_005b6b1c;
extern "C" unsigned long _UNK_005b6b20;
extern "C" unsigned long _UNK_005b6b24;
extern "C" unsigned long _UNK_005b6b28;
extern "C" unsigned long _UNK_005b6b2c;
extern "C" unsigned long _UNK_005b6b30;
extern "C" unsigned long _UNK_005b6b34;
extern "C" unsigned long _UNK_005b6b38;
extern "C" unsigned long _UNK_005b6be0;
extern "C" unsigned long _UNK_005b6be4;
extern "C" unsigned long _UNK_005b6be8;
extern "C" unsigned long _UNK_005b6bec;
extern "C" unsigned long _UNK_005b6c00;
extern "C" unsigned long _UNK_005b6cbc;
extern "C" unsigned long _UNK_005b6cc0;
extern "C" unsigned long _UNK_005b6cd4;
extern "C" unsigned long _UNK_005b6cfc;
extern "C" unsigned long _UNK_005b6d98;
extern "C" unsigned long _UNK_005b6d9c;
extern "C" unsigned long _UNK_005b7208;
extern "C" unsigned long _UNK_005b720c;
extern "C" unsigned long _UNK_005b7210;
extern "C" unsigned long _UNK_005b7214;
extern "C" unsigned long _UNK_005b7218;
extern "C" unsigned long _UNK_005b721c;
extern "C" unsigned long _UNK_005b7220;
extern "C" unsigned long _UNK_005b7224;
extern "C" unsigned long _UNK_005b7228;
extern "C" unsigned long _UNK_005b722c;
extern "C" unsigned long _UNK_005b7230;
extern "C" unsigned long _UNK_005b7234;
extern "C" unsigned long _UNK_005b7238;
extern "C" unsigned long _UNK_005b723c;
extern "C" unsigned long _UNK_005b7240;
extern "C" unsigned long _UNK_005b7364;
extern "C" unsigned long _UNK_005b7368;
extern "C" unsigned long _UNK_005b736c;
extern "C" unsigned long _UNK_005b7370;
extern "C" unsigned long _UNK_005b7684;
extern "C" unsigned long _UNK_005b7688;
extern "C" unsigned long _UNK_005b768c;
extern "C" unsigned long _UNK_005b7690;
extern "C" unsigned long _UNK_005b777c;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long extraout_r3_00;
extern "C" unsigned long extraout_r3_01;
extern "C" unsigned long g_005b6464;
extern "C" unsigned long g_005b6468;
extern "C" unsigned long g_005b647c;
extern "C" unsigned long g_005b6480;
extern "C" unsigned long g_005b6494;
extern "C" unsigned long g_005b6498;
extern "C" unsigned long g_005b6548;
extern "C" unsigned long g_005b654c;
extern "C" unsigned long g_005b6562;
extern "C" unsigned long g_005b6564;
extern "C" unsigned long g_005b659c;
extern "C" unsigned long g_005b65a0;
extern "C" unsigned long g_005b6620;
extern "C" unsigned long g_005b6622;
extern "C" unsigned long g_005b6730;
extern "C" unsigned long g_005b6734;
extern "C" unsigned long g_005b6738;
extern "C" unsigned long g_005b6748;
extern "C" unsigned long g_005b674c;
extern "C" unsigned long g_005b677c;
extern "C" unsigned long g_005b677e;
extern "C" unsigned long g_005b6796;
extern "C" unsigned long g_005b6798;
extern "C" unsigned long g_005b67a8;
extern "C" unsigned long g_005b67ac;
extern "C" unsigned long g_005b67b0;
extern "C" unsigned long g_005b67b4;
extern "C" unsigned long g_005b67d0;
extern "C" unsigned long g_005b67de;
extern "C" unsigned long g_005b67f4;
extern "C" unsigned long g_005b67f8;
extern "C" unsigned long g_005b683e;
extern "C" unsigned long g_005b689c;
extern "C" unsigned long g_005b68a0;
extern "C" unsigned long g_005b68a4;
extern "C" unsigned long g_005b698e;
extern "C" unsigned long g_005b69d0;
extern "C" unsigned long g_005b69da;
extern "C" unsigned long g_005b6a12;
extern "C" unsigned long g_005b6ac2;
extern "C" unsigned long g_005b6b1c;
extern "C" unsigned long g_005b6b20;
extern "C" unsigned long g_005b6b24;
extern "C" unsigned long g_005b6b28;
extern "C" unsigned long g_005b6b2c;
extern "C" unsigned long g_005b6b30;
extern "C" unsigned long g_005b6b34;
extern "C" unsigned long g_005b6b38;
extern "C" unsigned long g_005b6b62;
extern "C" unsigned long g_005b6bc4;
extern "C" unsigned long g_005b6bc6;
extern "C" unsigned long g_005b6be0;
extern "C" unsigned long g_005b6be4;
extern "C" unsigned long g_005b6be8;
extern "C" unsigned long g_005b6bec;
extern "C" unsigned long g_005b6bfc;
extern "C" unsigned long g_005b6c00;
extern "C" unsigned long g_005b6c2c;
extern "C" unsigned long g_005b6c7a;
extern "C" unsigned long g_005b6cbc;
extern "C" unsigned long g_005b6cc0;
extern "C" unsigned long g_005b6cd0;
extern "C" unsigned long g_005b6cd4;
extern "C" unsigned long g_005b6cf8;
extern "C" unsigned long g_005b6cfc;
extern "C" unsigned long g_005b6d10;
extern "C" unsigned long g_005b6d66;
extern "C" unsigned long g_005b6d98;
extern "C" unsigned long g_005b6d9c;
extern "C" unsigned long g_005b6f2e;
extern "C" unsigned long g_005b6f58;
extern "C" unsigned long g_005b6fca;
extern "C" unsigned long g_005b705c;
extern "C" unsigned long g_005b7084;
extern "C" unsigned long g_005b717a;
extern "C" unsigned long g_005b7208;
extern "C" unsigned long g_005b720c;
extern "C" unsigned long g_005b7210;
extern "C" unsigned long g_005b7214;
extern "C" unsigned long g_005b7218;
extern "C" unsigned long g_005b721c;
extern "C" unsigned long g_005b7220;
extern "C" unsigned long g_005b7224;
extern "C" unsigned long g_005b7228;
extern "C" unsigned long g_005b722c;
extern "C" unsigned long g_005b7230;
extern "C" unsigned long g_005b7234;
extern "C" unsigned long g_005b7238;
extern "C" unsigned long g_005b723c;
extern "C" unsigned long g_005b7240;
extern "C" unsigned long g_005b72d0;
extern "C" unsigned long g_005b7364;
extern "C" unsigned long g_005b7368;
extern "C" unsigned long g_005b736c;
extern "C" unsigned long g_005b7370;
extern "C" unsigned long g_005b7396;
extern "C" unsigned long g_005b73e0;
extern "C" unsigned long g_005b75fa;
extern "C" unsigned long g_005b7684;
extern "C" unsigned long g_005b7688;
extern "C" unsigned long g_005b768c;
extern "C" unsigned long g_005b7690;
extern "C" unsigned long g_005b770c;
extern "C" unsigned long g_005b777c;
bool BLMissionMainPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMissionMainPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionMainPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMissionMainPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLMissionChaptersData* BLMissionMainPresenter::getMissionChaptersData() const
{
  return (BLMissionChaptersData*)(*(undefined4 *)(((int)this) + 0x24));
}

void BLMissionMainPresenter::tick(float p1)
{
  return;
}



void BLMissionMainPresenter::onClose(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->removeUIByID(10);
  return;
}



void BLMissionMainPresenter::onExit()
{
  undefined4 uVar1;
  int *piVar2;
  
  ((UIManager *)this)->shareManager();
  ((UIManager *)this)->popUnEnableScrollView();
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005b67d0 + g_005b67f4);
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005b67de + g_005b67f8);
  piVar2 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar1 = (undefined4)((**(code **)(*piVar2 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar1)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0x1c));
  return;
}


undefined4 BLMissionMainPresenter::checkHasStarRewards(int p1)
{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int aiStack_24 [4];
  
  aiStack_24[0] = 5;
  aiStack_24[1] = 10;
  aiStack_24[2] = 0xf;
  iVar5 = p1 + -9;
  do {
    iVar1 = BLMissionMainPresenter::getGotStarNum(iVar5);
    iVar6 = 0;
    do {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*piVar2 + 0x28))();
      uVar3 = (undefined4)((**(code **)(*piVar2 + 0x198))());
      uVar3 = (undefined4)(((MissionStarRewardUserData *)uVar3)->getItemData(iVar5));
      iVar4 = ((MissionStarRewardUserItemData *)uVar3)->isAcceptable(iVar6);
      if ((iVar4 != 0) && (aiStack_24[iVar6] <= iVar1)) {
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 3);
    iVar5 = iVar5 + 1;
    if (iVar5 == p1 + 1) {
      return 0;
    }
  } while( true );
}



BLMissionMainPresenter::~BLMissionMainPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

BLMissionMainPresenter::BLMissionMainPresenter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLMissionMainPresenter::create(BLMissionMainView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x44))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (12) =====
void BLMissionMainPresenter::setMissionChaptersData(BLMissionChaptersData* p1)
{
  *(undefined4 *)(((int)this) + 0x24) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void BLMissionMainPresenter::numOfPages(BLPageLayer* p1)
{
  undefined4 p3 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p1);
  uStack_10 = (undefined4)(p3);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
  ((UserData *)this)->getChapter();
  uVar2 = (undefined4)(func_0079e6c0(uStack_14));
  func_0079e2bc(&uStack_14);
  func_0079e964(uVar2,1000);
  return;
}

void BLMissionMainPresenter::onPageChangeByNum(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 p4 = 0;

  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((int)(intptr_t)p1 != 0) {
    piVar2 = (int *)func_0079e55c(p1,*(undefined4 *)(&g_005b6562 + g_005b65a0),
                                    *(undefined4 *)(&g_005b6564 + g_005b659c),0,p4);
    uVar4 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x11c));
    iVar3 = (**(code **)(*piVar2 + 0x118))();
    ((BLPageLayer *)uVar4)->setCurrentPage((iVar3 + 1) * 10);
    ((BLPageLayer *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x11c))->reloadData();
    return;
  }
                    /* WARNING: Does not return;
  (*pcVar1)();
}

void BLMissionMainPresenter::pageChange(BLPageLayer* p1, int p2)
{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar5 = *(int **)(*(int *)((int)this + 4*(8)) + 0x114);
  pcVar6 = *(code **)(*piVar5 + 0x90);
  iVar1 = (**(code **)(*(int *)this + 0x2c))();
  (*pcVar6)(piVar5,iVar1 != p2 + 1);
  (**(code **)(**(int **)(*(int *)((int)this + 4*(8)) + 0x118) + 0x90))(*(int **)(*(int *)((int)this + 4*(8)) + 0x118),p2 != 0);
  (**(code **)(*(int *)*(int *)((int)this + 4*(9)) + 0x18))();
  uVar2 = (undefined4)(((cocos2d::CCArray *)this)->count());
  if (p2 < uVar2) {
    uVar3 = (undefined4)((**(code **)(*(int *)*(int *)((int)this + 4*(9)) + 0x18))());
    iVar1 = ((cocos2d::CCArray *)uVar3)->objectAtIndex((unsigned int)p2);
    if ((iVar1 != 0) &&
       (piVar5 = (int *)func_0079e55c(iVar1,*(undefined4 *)(&g_005b6620 + g_005b6730),
                                        *(undefined4 *)(&g_005b6622 + g_005b6734),0),
       piVar5 != 0)) {
      uVar3 = (undefined4)(((DataManager *)this)->shareDataManager());
      (**(code **)(*piVar5 + 0x18))(auStack_1c,piVar5);
      ((DataManager *)uVar3)->setCurrentChapter((std::string *)(char *)auStack_1c);
      func_0079e2bc(auStack_1c);
      piVar7 = *(int **)(*(int *)((int)this + 4*(8)) + 0x124);
      pcVar6 = *(code **)(*piVar7 + 0x234);
      uVar3 = (undefined4)(BLLanguage::share());
      (**(code **)(*piVar5 + 0x20))(auStack_20,piVar5);
      BLLanguage::getString(auStack_1c,uVar3,auStack_20);
      (*pcVar6)(piVar7,auStack_1c[0]);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      piVar7 = *(int **)(*(int *)((int)this + 4*(8)) + 0x134);
      pcVar6 = *(code **)(*piVar7 + 0x5c);
      uVar3 = (undefined4)((**(code **)(**(int **)(*(int *)((int)this + 4*(8)) + 0x124) + 0x60))());
      puVar4 = (undefined4 *)(**(code **)(**(int **)(*(int *)((int)this + 4*(8)) + 0x124) + 0x8c))();
      uVar3 = (undefined4)(func_0079e59c(uVar3,*puVar4));
      uVar3 = (undefined4)(func_0079e59c(uVar3,g_005b6738));
      (*pcVar6)(piVar7,uVar3);
      piVar7 = (int *)((DataManager *)this)->shareDataManager();
      iVar1 = (**(code **)(*piVar7 + 0x118))();
      if (iVar1 == 1) {
        (**(code **)(*piVar5 + 0x18))(auStack_1c,piVar5);
        uVar3 = (undefined4)(func_0079e6c0(auStack_1c[0]));
        func_0079e2bc(auStack_1c);
        ((BLMissionRewardPresenter *)*(undefined4 *)(*(int *)(*(int *)((int)this + 4*(8)) + 0x140) + 0x108))->updateWithData(uVar3);
      }
    }
  }
  (**(code **)(**(int **)(*(int *)((int)this + 4*(8)) + 0x13c) + 0x224))(*(int **)(*(int *)((int)this + 4*(8)) + 0x13c),p2);
  return;
}

void BLMissionMainPresenter::onEnter()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x1c, 1, 1);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  cocos2d::CCNotificationCenter::addObserver(uVar2,((int)this),*(undefined4 *)(&g_005b677e + g_005b67a8),0,
             &g_005b677c + g_005b67ac,0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  cocos2d::CCNotificationCenter::addObserver(uVar2,((int)this),*(undefined4 *)(&g_005b6796 + g_005b67b0),0,
             &g_005b6798 + g_005b67b4,0);
  return;
}

int BLMissionMainPresenter::getGotStarNum(int p1)
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iStack_ec;
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [180];
  
  iVar4 = (p1 + -1) * 5;
  iVar5 = iVar4 + g_005b689c;
  iVar4 = iVar4 + g_005b68a0;
  iStack_ec = 0;
  do {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    uVar2 = (undefined4)((**(code **)(*piVar1 + 0x28))());
    func_0079e43c(auStack_d4,0x18);
    func_0079e44c(auStack_cc,iVar5);
    func_0079e45c(auStack_d8,&g_005b683e + g_005b68a4,auStack_dc);
    func_0079e46c(auStack_dc,auStack_c8);
    func_0079e2bc(auStack_d8);
    func_0079e47c(auStack_d4);
    uVar3 = (undefined4)(((UserData *)uVar2)->getMissionStar((std::string *)(char *)auStack_dc));
    func_0079e2bc(auStack_dc);
    iVar5 = iVar5 + 1;
    iStack_ec = iStack_ec + (uVar3 & (int)~uVar3 >> 0x1f);
  } while (iVar5 != iVar4);
  return iStack_ec;
}

void BLMissionMainPresenter::createPageLayer(cocos2d::CCLayer* p1, BLMissionChapterItemData* p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMainPresenter::nodeOfPageAtIndex(BLPageLayer* p1, int p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 auStack_1c [2];
  
  uVar1 = (undefined4)(cocos2d::CCLayer::create());
  (**(code **)(**(int **)(((int)this) + 0x24) + 0x18))();
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)this)->count());
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_005b6b62 + (intptr_t)(g_005b6be0)), iVar2);
  *(undefined1 *)(((int)this) + 0x28) = 1;
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))());
  ((UserData *)this)->getMission();
  iVar5 = (undefined4)(intptr_t)(func_0079e6c0(auStack_1c[0]));
  func_0079e2bc(auStack_1c);
  if (iVar5 <= g_005b6be4) {
    *(undefined1 *)(((int)this) + 0x28) = 0;
  }
  if ((p2 < iVar2) && (-1 < p2)) {
    uVar4 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x24) + 0x18))());
    iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar4)->objectAtIndex((unsigned int)p2));
    if ((iVar2 != 0) &&
       (iVar2 = func_0079e55c(iVar2,*(undefined4 *)((unsigned char *)((char *)&g_005b6bc4 + (intptr_t)(g_005b6be8))),
                                *(undefined4 *)((unsigned char *)((char *)&g_005b6bc6 + (intptr_t)(g_005b6bec))),0), iVar2 != 0)) {
      BLMissionMainPresenter::createPageLayer((cocos2d::CCLayer*)((int)this), (BLMissionChapterItemData*)uVar1);
    }
  }
  return;
}

void BLMissionMainPresenter::initMissionButton()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMissionMainPresenter::onUpdateStarRewards()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLMissionMainPresenter::initWithView(BLMissionMainView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005b7396 + (intptr_t)(g_005b7684))));
  (**(code **)(**(int **)(p1 + 0x138) + 0x254))
            (*(int **)(p1 + 0x138),((int)this),uStack_20,0,0x20);
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x138);
  pcVar5 = *(code **)(*piVar4 + 0x28c);
  piVar1 = (int *)(**(code **)(*(int *)(piVar4) + (0x308)))(piVar4,1);
  (**(code **)(*(int *)(piVar1) + (0x1cc)))(auStack_28,piVar1);
  (*pcVar5)(piVar4,auStack_28);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x138);
  pcVar5 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_005b73e0 + (intptr_t)(g_005b7688)),&uStack_2c);
  (*pcVar5)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  ((BLPageLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x11c)))->setDataSource((BLPageLayerDataSource*)((int)this + 0x14));
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x11c);
  (**(code **)(*(int *)(piVar1) + (0x210)))(piVar1,((int)this) + 0x18);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x13c);
  (**(code **)(*(int *)(piVar1) + (0x214)))(piVar1,0x40800000);
  piVar4 = *(int **)(*(int *)(((int)this) + 0x20) + 0x13c);
  pcVar5 = *(code **)(*piVar4 + 0x20c);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
  ((UserData *)this)->getChapter();
  uVar2 = (undefined4)(func_0079e6c0(auStack_28[0]));
  func_0079e964(uVar2,1000);
  (*pcVar5)(piVar4);
  func_0079e2bc(auStack_28);
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x13c);
  (**(code **)(*(int *)(piVar1) + (0x224)))(piVar1,0);
  ((BLPageControl *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x13c)))->reload();
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x140);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x118)))());
  if (iVar3 == 1) {
    uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
    ((DataManager *)this)->getCurrentChapter();
    uVar2 = (undefined4)(func_0079e6c0(auStack_28[0]));
    func_0079e2bc(auStack_28);
    ((BLMissionRewardPresenter *)(*(undefined4 *)(*(int *)(*(int *)(((int)this) + 0x20) + 0x140) + 0x108)))->updateWithData(uVar2);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x140);
    (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,1);
  }
  piVar1 = (int *)::operator new(0x18);
  ::new ((void *)piVar1) BLMissionChaptersData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
  iVar3 = (undefined4)(intptr_t)(((BLMissionChaptersData *)(piVar1))->init());
  if (iVar3 == 0) {
    (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)(piVar1))->autorelease();
  }
  *(int **)(((int)this) + 0x24) = piVar1;
  if (piVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar6 = (undefined4)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x11c));
  uVar2 = (undefined4)(((DataManager *)this)->shareDataManager());
  ((DataManager *)this)->getCurrentChapter();
  uVar2 = (undefined4)(func_0079e6c0(auStack_28[0]));
  func_0079e964(uVar2,1000);
  ((BLPageLayer *)(uVar6))->setCurrentPage(extraout_r1 + -1);
  func_0079e2bc(auStack_28);
  ((BLPageLayer *)(*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x11c)))->reloadData();
  piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x13c);
  (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
  ((UserData *)this)->getMission();
  iVar3 = (undefined4)(intptr_t)(func_0079e6c0(auStack_28[0]));
  func_0079e2bc(auStack_28);
  if (iVar3 <= g_005b768c) {
    ((BLMissionMainPresenter *)(((int)this)))->initMissionButton();
  }
  piVar1 = (int *)((BLMissionData *)this)->create();
  piVar4 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x28)))());
  ((UserData *)this)->getMission();
  func_0079e45c(auStack_28,uStack_2c,auStack_30);
  ((BLMissionData *)(piVar1))->initWith((std::string *)(char *)auStack_28);
  func_0079e2bc(auStack_28);
  func_0079e2bc(&uStack_2c);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x28)))(piVar1));
  if (iVar3 == 2) {
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x130);
    if (piVar1 != 0) {
      (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
    }
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 300);
    if (piVar1 != 0) {
      (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
    }
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x134);
    if (piVar1 == 0) {
      return 1;
    }
    uVar2 = (undefined4)(0);
    pcVar5 = *(code **)(*piVar1 + 0x90);
  }
  else {
    uVar2 = (undefined4)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    ((MissionSweepData *)(uVar2))->GetDataFromNet(0);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x130);
    pcVar5 = *(code **)(*piVar1 + 0x234);
    iVar3 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    uVar2 = (undefined4)(*(undefined4 *)(iVar3 + 0x60));
    iVar3 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005b75fa + (intptr_t)(g_005b7690)), uVar2, *(undefined4 *)(iVar3 + 100));
    uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar5)(piVar1,uVar2);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x134);
    if (piVar1 == 0) {
      return 1;
    }
    uVar2 = (undefined4)(1);
    pcVar5 = *(code **)(*piVar1 + 0x90);
  }
  (*pcVar5)(piVar1,uVar2);
  return 1;
}

void BLMissionMainPresenter::onSweepUpdate()
{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  ((BLPageLayer *)*(undefined4 *)(*(int *)(((int)this) + 0x20) + 0x11c))->reloadData();
  piVar1 = (int *)((BLMissionData *)this)->create();
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  uVar3 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x28)))());
  ((UserData *)this)->getMission();
  func_0079e45c(auStack_1c,uStack_20,auStack_24);
  ((BLMissionData *)piVar1)->initWith((std::string *)(char *)auStack_1c);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(&uStack_20);
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x28)))(piVar1));
  if (iVar4 == 2) {
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x130);
    if (piVar1 != 0) {
      (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
    }
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 300);
    if (piVar1 != 0) {
      (**(code **)(*(int *)(piVar1) + (0x90)))(piVar1,0);
    }
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x134);
    if (piVar1 == 0) {
      return;
    }
    uVar3 = (undefined4)(0);
    pcVar5 = *(code **)(*piVar1 + 0x90);
  }
  else {
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x130);
    pcVar5 = *(code **)(*piVar1 + 0x234);
    iVar4 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    uVar3 = (undefined4)(*(undefined4 *)(iVar4 + 0x60));
    iVar4 = (undefined4)(intptr_t)(((sir::singleton<MissionSweepData, 0> *)this)->instance());
    cocos2d::CCString::createWithFormat((char const*)(unsigned char *)((char *)&g_005b770c + (intptr_t)(g_005b777c)), uVar3, *(undefined4 *)(iVar4 + 100));
    uVar3 = (undefined4)(((cocos2d::CCString *)this)->getCString());
    (*pcVar5)(piVar1,uVar3);
    piVar1 = *(int **)(*(int *)(((int)this) + 0x20) + 0x134);
    if (piVar1 == 0) {
      return;
    }
    uVar3 = (undefined4)(1);
    pcVar5 = *(code **)(*piVar1 + 0x90);
  }
  (*pcVar5)(piVar1,uVar3);
  return;
}
