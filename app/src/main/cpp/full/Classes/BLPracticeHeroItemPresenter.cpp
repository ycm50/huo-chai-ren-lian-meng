#include "BLPracticeHeroItemPresenter.h"
#include "CCLabelTTF.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "PlayerData.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "RoleInfoItemData.h"
#include "RoleData.h"
#include "BLBuyRoleAlertPresenter.h"
#include "BLBuyRoleAlertView.h"
#include "BLEquipGiftPresenter.h"
#include "BLEquipGiftView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "BLPracticeHeroItemView.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "GiftData.h"
#include "PracticeData.h"
#include "RichTextData.h"
#include "RoleInfoData.h"
#include "Toast.h"
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
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e49c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_00637130;
extern "C" unsigned long UNK_00637166;
extern "C" unsigned long UNK_006371ac;
extern "C" unsigned long UNK_006371d4;
extern "C" unsigned long UNK_00637236;
extern "C" unsigned long UNK_00637238;
extern "C" unsigned long UNK_0063731e;
extern "C" unsigned long UNK_00637348;
extern "C" unsigned long UNK_0063737a;
extern "C" unsigned long UNK_006373b0;
extern "C" unsigned long UNK_006373b2;
extern "C" unsigned long UNK_006373cc;
extern "C" unsigned long UNK_006373ce;
extern "C" unsigned long UNK_006373f6;
extern "C" unsigned long UNK_0063740e;
extern "C" unsigned long UNK_00637466;
extern "C" unsigned long UNK_0063746a;
extern "C" unsigned long UNK_00637498;
extern "C" unsigned long UNK_006374b8;
extern "C" unsigned long UNK_00637508;
extern "C" unsigned long UNK_00637584;
extern "C" unsigned long UNK_00637598;
extern "C" unsigned long UNK_006375d0;
extern "C" unsigned long UNK_00637622;
extern "C" unsigned long UNK_0063769e;
extern "C" unsigned long UNK_006376ac;
extern "C" unsigned long UNK_0063770e;
extern "C" unsigned long UNK_0063773c;
extern "C" unsigned long UNK_00637788;
extern "C" unsigned long UNK_0063778a;
extern "C" unsigned long UNK_006377be;
extern "C" unsigned long UNK_006377cc;
extern "C" unsigned long UNK_006377da;
extern "C" unsigned long UNK_00637834;
extern "C" unsigned long UNK_0063785e;
extern "C" unsigned long UNK_00637902;
extern "C" unsigned long UNK_0063794a;
extern "C" unsigned long UNK_006379d8;
extern "C" unsigned long UNK_006379f8;
extern "C" unsigned long UNK_00637ac8;
extern "C" unsigned long UNK_00637afc;
extern "C" unsigned long UNK_00637ba8;
extern "C" unsigned long UNK_00637c94;
extern "C" unsigned long UNK_00637cdc;
extern "C" unsigned long UNK_00637d34;
extern "C" unsigned long UNK_00637d64;
extern "C" unsigned long UNK_00637dbe;
extern "C" unsigned long UNK_00637e20;
extern "C" unsigned long UNK_00637e76;
extern "C" unsigned long UNK_00637eca;
extern "C" unsigned long UNK_00637f04;
extern "C" unsigned long UNK_00637f30;
extern "C" unsigned long UNK_00637f5e;
extern "C" unsigned long UNK_00637f88;
extern "C" unsigned long UNK_00637fb4;
extern "C" unsigned long UNK_00637fce;
extern "C" unsigned long UNK_0063803c;
extern "C" unsigned long UNK_00638068;
extern "C" unsigned long UNK_00638094;
extern "C" unsigned long UNK_006380c0;
extern "C" unsigned long UNK_006380e0;
extern "C" unsigned long UNK_006380fe;
extern "C" unsigned long UNK_00638264;
extern "C" unsigned long UNK_00638440;
extern "C" unsigned long UNK_006384fe;
extern "C" unsigned long UNK_0063853e;
extern "C" unsigned long UNK_00638596;
extern "C" unsigned long UNK_006385d6;
extern "C" unsigned long UNK_0063882e;
extern "C" unsigned long UNK_006388e4;
extern "C" unsigned long UNK_00638922;
extern "C" unsigned long UNK_00638976;
extern "C" unsigned long UNK_006389b4;
extern "C" unsigned long UNK_00638b9a;
extern "C" unsigned long UNK_00638bdc;
extern "C" unsigned long UNK_00638c28;
extern "C" unsigned long UNK_00638c68;
extern "C" unsigned long UNK_00638cae;
extern "C" unsigned long UNK_00638cee;
extern "C" unsigned long UNK_00638d34;
extern "C" unsigned long UNK_00638dec;
extern "C" unsigned long UNK_00638e20;
extern "C" unsigned long UNK_00638e38;
extern "C" unsigned long _UNK_00637198;
extern "C" unsigned long _UNK_0063719c;
extern "C" unsigned long _UNK_006371b0;
extern "C" unsigned long _UNK_006371d8;
extern "C" unsigned long _UNK_00637324;
extern "C" unsigned long _UNK_00637328;
extern "C" unsigned long _UNK_0063732c;
extern "C" unsigned long _UNK_00637430;
extern "C" unsigned long _UNK_00637434;
extern "C" unsigned long _UNK_00637438;
extern "C" unsigned long _UNK_0063743c;
extern "C" unsigned long _UNK_00637440;
extern "C" unsigned long _UNK_00637444;
extern "C" unsigned long _UNK_00637448;
extern "C" unsigned long _UNK_0063744c;
extern "C" unsigned long _UNK_006376d0;
extern "C" unsigned long _UNK_006376d4;
extern "C" unsigned long _UNK_006376d8;
extern "C" unsigned long _UNK_006376dc;
extern "C" unsigned long _UNK_006376e0;
extern "C" unsigned long _UNK_006376e4;
extern "C" unsigned long _UNK_006376e8;
extern "C" unsigned long _UNK_006376ec;
extern "C" unsigned long _UNK_006376f0;
extern "C" unsigned long _UNK_006376f4;
extern "C" unsigned long _UNK_006376f8;
extern "C" unsigned long _UNK_006376fc;
extern "C" unsigned long _UNK_0063776c;
extern "C" unsigned long _UNK_00637770;
extern "C" unsigned long _UNK_00637794;
extern "C" unsigned long _UNK_00637798;
extern "C" unsigned long _UNK_006377e0;
extern "C" unsigned long _UNK_006377e4;
extern "C" unsigned long _UNK_006377e8;
extern "C" unsigned long _UNK_00637924;
extern "C" unsigned long _UNK_00637928;
extern "C" unsigned long _UNK_0063792c;
extern "C" unsigned long _UNK_00637930;
extern "C" unsigned long _UNK_00637934;
extern "C" unsigned long _UNK_006379c8;
extern "C" unsigned long _UNK_00637bfc;
extern "C" unsigned long _UNK_00637c00;
extern "C" unsigned long _UNK_00637c04;
extern "C" unsigned long _UNK_00637c08;
extern "C" unsigned long _UNK_00637c0c;
extern "C" unsigned long _UNK_00637c10;
extern "C" unsigned long _UNK_00637c14;
extern "C" unsigned long _UNK_00637ff4;
extern "C" unsigned long _UNK_00637ff8;
extern "C" unsigned long _UNK_00637ffc;
extern "C" unsigned long _UNK_00638000;
extern "C" unsigned long _UNK_00638004;
extern "C" unsigned long _UNK_00638008;
extern "C" unsigned long _UNK_0063800c;
extern "C" unsigned long _UNK_00638010;
extern "C" unsigned long _UNK_00638014;
extern "C" unsigned long _UNK_00638018;
extern "C" unsigned long _UNK_0063801c;
extern "C" unsigned long _UNK_00638020;
extern "C" unsigned long _UNK_00638024;
extern "C" unsigned long _UNK_00638028;
extern "C" unsigned long _UNK_0063802c;
extern "C" unsigned long _UNK_00638030;
extern "C" unsigned long _UNK_00638360;
extern "C" unsigned long _UNK_00638364;
extern "C" unsigned long _UNK_00638368;
extern "C" unsigned long _UNK_0063836c;
extern "C" unsigned long _UNK_00638370;
extern "C" unsigned long _UNK_00638374;
extern "C" unsigned long _UNK_00638378;
extern "C" unsigned long _UNK_0063837c;
extern "C" unsigned long _UNK_00638380;
extern "C" unsigned long _UNK_00638758;
extern "C" unsigned long _UNK_0063875c;
extern "C" unsigned long _UNK_00638760;
extern "C" unsigned long _UNK_00638764;
extern "C" unsigned long _UNK_00638768;
extern "C" unsigned long _UNK_00638b40;
extern "C" unsigned long _UNK_00638b44;
extern "C" unsigned long _UNK_00638b48;
extern "C" unsigned long _UNK_00638b4c;
extern "C" unsigned long _UNK_00638b50;
extern "C" unsigned long _UNK_00638d70;
extern "C" unsigned long _UNK_00638d74;
extern "C" unsigned long _UNK_00638d78;
extern "C" unsigned long _UNK_00638d7c;
extern "C" unsigned long _UNK_00638d80;
extern "C" unsigned long _UNK_00638d84;
extern "C" unsigned long _UNK_00638d88;
extern "C" unsigned long _UNK_00638e84;
extern "C" unsigned long _UNK_00638e88;
extern "C" unsigned long _UNK_00638e8c;
extern "C" unsigned long g_00637130;
extern "C" unsigned long g_00637166;
extern "C" unsigned long g_00637198;
extern "C" unsigned long g_0063719c;
extern "C" unsigned long g_006371ac;
extern "C" unsigned long g_006371b0;
extern "C" unsigned long g_006371d4;
extern "C" unsigned long g_006371d8;
extern "C" unsigned long g_00637236;
extern "C" unsigned long g_00637238;
extern "C" unsigned long g_0063731e;
extern "C" unsigned long g_00637324;
extern "C" unsigned long g_00637328;
extern "C" unsigned long g_0063732c;
extern "C" unsigned long g_00637348;
extern "C" unsigned long g_0063737a;
extern "C" unsigned long g_006373b0;
extern "C" unsigned long g_006373b2;
extern "C" unsigned long g_006373cc;
extern "C" unsigned long g_006373ce;
extern "C" unsigned long g_006373f6;
extern "C" unsigned long g_0063740e;
extern "C" unsigned long g_00637430;
extern "C" unsigned long g_00637434;
extern "C" unsigned long g_00637438;
extern "C" unsigned long g_0063743c;
extern "C" unsigned long g_00637440;
extern "C" unsigned long g_00637444;
extern "C" unsigned long g_00637448;
extern "C" unsigned long g_0063744c;
extern "C" unsigned long g_00637466;
extern "C" unsigned long g_0063746a;
extern "C" unsigned long g_00637498;
extern "C" unsigned long g_006374b8;
extern "C" unsigned long g_00637508;
extern "C" unsigned long g_00637584;
extern "C" unsigned long g_00637598;
extern "C" unsigned long g_006375d0;
extern "C" unsigned long g_00637622;
extern "C" unsigned long g_0063769e;
extern "C" unsigned long g_006376ac;
extern "C" unsigned long g_006376d0;
extern "C" unsigned long g_006376d4;
extern "C" unsigned long g_006376d8;
extern "C" unsigned long g_006376dc;
extern "C" unsigned long g_006376e0;
extern "C" unsigned long g_006376e4;
extern "C" unsigned long g_006376e8;
extern "C" unsigned long g_006376ec;
extern "C" unsigned long g_006376f0;
extern "C" unsigned long g_006376f4;
extern "C" unsigned long g_006376f8;
extern "C" unsigned long g_006376fc;
extern "C" unsigned long g_0063770e;
extern "C" unsigned long g_0063773c;
extern "C" unsigned long g_0063776c;
extern "C" unsigned long g_00637770;
extern "C" unsigned long g_00637788;
extern "C" unsigned long g_0063778a;
extern "C" unsigned long g_00637794;
extern "C" unsigned long g_00637798;
extern "C" unsigned long g_006377be;
extern "C" unsigned long g_006377cc;
extern "C" unsigned long g_006377da;
extern "C" unsigned long g_006377e0;
extern "C" unsigned long g_006377e4;
extern "C" unsigned long g_006377e8;
extern "C" unsigned long g_00637834;
extern "C" unsigned long g_0063785e;
extern "C" unsigned long g_00637902;
extern "C" unsigned long g_00637924;
extern "C" unsigned long g_00637928;
extern "C" unsigned long g_0063792c;
extern "C" unsigned long g_00637930;
extern "C" unsigned long g_00637934;
extern "C" unsigned long g_0063794a;
extern "C" unsigned long g_006379c8;
extern "C" unsigned long g_006379d8;
extern "C" unsigned long g_006379f8;
extern "C" unsigned long g_00637ac8;
extern "C" unsigned long g_00637afc;
extern "C" unsigned long g_00637ba8;
extern "C" unsigned long g_00637bfc;
extern "C" unsigned long g_00637c00;
extern "C" unsigned long g_00637c04;
extern "C" unsigned long g_00637c08;
extern "C" unsigned long g_00637c0c;
extern "C" unsigned long g_00637c10;
extern "C" unsigned long g_00637c14;
extern "C" unsigned long g_00637c94;
extern "C" unsigned long g_00637cdc;
extern "C" unsigned long g_00637d34;
extern "C" unsigned long g_00637d64;
extern "C" unsigned long g_00637dbe;
extern "C" unsigned long g_00637e20;
extern "C" unsigned long g_00637e76;
extern "C" unsigned long g_00637eca;
extern "C" unsigned long g_00637f04;
extern "C" unsigned long g_00637f30;
extern "C" unsigned long g_00637f5e;
extern "C" unsigned long g_00637f88;
extern "C" unsigned long g_00637fb4;
extern "C" unsigned long g_00637fce;
extern "C" unsigned long g_00637ff4;
extern "C" unsigned long g_00637ff8;
extern "C" unsigned long g_00637ffc;
extern "C" unsigned long g_00638000;
extern "C" unsigned long g_00638004;
extern "C" unsigned long g_00638008;
extern "C" unsigned long g_0063800c;
extern "C" unsigned long g_00638010;
extern "C" unsigned long g_00638014;
extern "C" unsigned long g_00638018;
extern "C" unsigned long g_0063801c;
extern "C" unsigned long g_00638020;
extern "C" unsigned long g_00638024;
extern "C" unsigned long g_00638028;
extern "C" unsigned long g_0063802c;
extern "C" unsigned long g_00638030;
extern "C" unsigned long g_0063803c;
extern "C" unsigned long g_00638068;
extern "C" unsigned long g_00638094;
extern "C" unsigned long g_006380c0;
extern "C" unsigned long g_006380e0;
extern "C" unsigned long g_006380fe;
extern "C" unsigned long g_00638264;
extern "C" unsigned long g_00638360;
extern "C" unsigned long g_00638364;
extern "C" unsigned long g_00638368;
extern "C" unsigned long g_0063836c;
extern "C" unsigned long g_00638370;
extern "C" unsigned long g_00638374;
extern "C" unsigned long g_00638378;
extern "C" unsigned long g_0063837c;
extern "C" unsigned long g_00638380;
extern "C" unsigned long g_00638440;
extern "C" unsigned long g_006384fe;
extern "C" unsigned long g_0063853e;
extern "C" unsigned long g_00638596;
extern "C" unsigned long g_006385d6;
extern "C" unsigned long g_00638758;
extern "C" unsigned long g_0063875c;
extern "C" unsigned long g_00638760;
extern "C" unsigned long g_00638764;
extern "C" unsigned long g_00638768;
extern "C" unsigned long g_0063882e;
extern "C" unsigned long g_006388e4;
extern "C" unsigned long g_00638922;
extern "C" unsigned long g_00638976;
extern "C" unsigned long g_006389b4;
extern "C" unsigned long g_00638b40;
extern "C" unsigned long g_00638b44;
extern "C" unsigned long g_00638b48;
extern "C" unsigned long g_00638b4c;
extern "C" unsigned long g_00638b50;
extern "C" unsigned long g_00638b9a;
extern "C" unsigned long g_00638bdc;
extern "C" unsigned long g_00638c28;
extern "C" unsigned long g_00638c68;
extern "C" unsigned long g_00638cae;
extern "C" unsigned long g_00638cee;
extern "C" unsigned long g_00638d34;
extern "C" unsigned long g_00638d70;
extern "C" unsigned long g_00638d74;
extern "C" unsigned long g_00638d78;
extern "C" unsigned long g_00638d7c;
extern "C" unsigned long g_00638d80;
extern "C" unsigned long g_00638d84;
extern "C" unsigned long g_00638d88;
extern "C" unsigned long g_00638dec;
extern "C" unsigned long g_00638e20;
extern "C" unsigned long g_00638e38;
extern "C" unsigned long g_00638e84;
extern "C" unsigned long g_00638e88;
extern "C" unsigned long g_00638e8c;
bool BLPracticeHeroItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLPracticeHeroItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeHeroItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLPracticeHeroItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

RoleData* BLPracticeHeroItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

RoleInfoItemData* BLPracticeHeroItemPresenter::getRoleInfoData() const
{
  return (RoleInfoItemData*)(*(undefined4 *)(((int)this) + 0x20));
}

void BLPracticeHeroItemPresenter::tick(float p1)
{
  return;
}

BLPracticeHeroItemPresenter::~BLPracticeHeroItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_00637130 + g_00637198);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(5)) = iVar2 + 0x4c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_00637166 + g_0063719c,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLPracticeHeroItemPresenter::setRoleInfoData(RoleInfoItemData* p1)
{
  if (*(int *)(((int)this) + 0x20) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x20) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x20) = (undefined4)(intptr_t)p1;
  }
  return;
}

void BLPracticeHeroItemPresenter::setRoleData(RoleData* p1)
{
  if (*(int *)(((int)this) + 0x1c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x1c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  }
  return;
}




BLPracticeHeroItemPresenter::BLPracticeHeroItemPresenter()
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
  iVar3 = *(int *)(&g_0063770e + g_0063776c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0063773c + g_00637770,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}


void BLPracticeHeroItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_006377be + g_006377e0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_006377cc + g_006377e4);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_006377da + g_006377e8);
  return;
}

undefined4 BLPracticeHeroItemPresenter::create(BLPracticeHeroItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

// ===== 修复: 补回被误删的函数占位 (11) =====
void BLPracticeHeroItemPresenter::onBuyYiComplete(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iStack_1c;
  undefined4 uStack_18;
  
  iStack_1c = (undefined4)(intptr_t)p1;
  if (((int)(intptr_t)p1 != 0) &&
     (uStack_18 = p3,
     iVar2 = func_0079e55c(p1,*(undefined4 *)(&g_00637236 + g_00637328),
                             *(undefined4 *)(&g_00637238 + g_00637324),0), iVar2 != 0)) {
    (**(code **)(**(int **)(((int)this) + 0x1c) + 0x18))(&iStack_1c);
    bVar6 = false;
    if (*(int *)(*(int *)(iVar2 + 0x14) + -0xc) == *(int *)(iStack_1c + -0xc)) {
      iVar2 = func_0079e60c();
      bVar6 = iVar2 == 0;
    }
    func_0079e2bc(&iStack_1c);
    if (bVar6) {
      piVar3 = (int *)((BLPracticeHeroItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprQuestion()
      ;
      (**(code **)(*piVar3 + 0x90))(piVar3,0);
      piVar3 = (int *)((BLPracticeHeroItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabUnLock();
      pcVar5 = *(code **)(*piVar3 + 0x90);
      bVar1 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))();
      (*pcVar5)(piVar3,bVar1 ^ 1);
      piVar3 = (int *)((BLPracticeHeroItemView *)*(undefined4 *)(((int)this) + 0x18))->getLabDiamond();
      pcVar5 = *(code **)(*piVar3 + 0x90);
      bVar1 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))();
      (*pcVar5)(piVar3,bVar1 ^ 1);
      piVar3 = (int *)((BLPracticeHeroItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprDiamondIcon();
      pcVar5 = *(code **)(*piVar3 + 0x90);
      bVar1 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))();
      (*pcVar5)(piVar3,bVar1 ^ 1);
      piVar3 = (int *)((BLPracticeHeroItemView *)*(undefined4 *)(((int)this) + 0x18))->getSprUnLockBG()
      ;
      pcVar5 = *(code **)(*piVar3 + 0x90);
      bVar1 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))();
      (*pcVar5)(piVar3,bVar1 ^ 1);
      uVar4 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)uVar4)->postNotification((char const*)&g_0063731e + g_0063732c);
    }
  }
  return;
}

undefined8 BLPracticeHeroItemPresenter::onShowBuyYi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLPracticeHeroItemPresenter::onBuyRoleClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroItemPresenter::initWithView(BLPracticeHeroItemView* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  piVar1 = (int *)((BLPracticeHeroItemView *)(p1))->getBtnRole();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_00637834 + (intptr_t)(g_00637924))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLPracticeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  uVar2 = (undefined4)(((BLPracticeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDiamond());
  puVar6 = (unsigned char *)((char *)&g_0063785e + (intptr_t)(g_00637928));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLPracticeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnLock());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  piVar1 = (int *)((BLPracticeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_28);
  piVar1 = (int *)((BLPracticeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 100);
  piVar3 = (int *)((BLPracticeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((BLPracticeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))());
  uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar5));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_0063792c));
  (*pcVar7)(piVar1,uVar2);
  piVar1 = (int *)((BLPracticeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  (**(code **)(*(int *)(piVar1) + (0x40)))(piVar1,g_00637930);
  piVar1 = (int *)((BLPracticeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_00637902 + (intptr_t)(g_00637934)),auStack_2c);
  (*pcVar7)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void BLPracticeHeroItemPresenter::onBuyDiamondComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroItemPresenter::buyRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroItemPresenter::initWithPlayerData(PlayerData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroItemPresenter::initWithRoleData(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroItemPresenter::selectRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLPracticeHeroItemPresenter::onRole(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
