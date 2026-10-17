#include "ChallengeHeroItemPresenter.h"
#include "CCLabelTTF.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "RoleInfoItemData.h"
#include "RoleData.h"
#include "BLEquipGiftPresenter.h"
#include "BLEquipGiftView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "ChallengeHeroItemView.h"
#include "DataManager.h"
#include "GiftData.h"
#include "PlayerData.h"
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
using namespace CocosDenshion;

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
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005072fc;
extern "C" unsigned long UNK_00507332;
extern "C" unsigned long UNK_00507378;
extern "C" unsigned long UNK_005073a0;
extern "C" unsigned long UNK_00507408;
extern "C" unsigned long UNK_0050743a;
extern "C" unsigned long UNK_00507470;
extern "C" unsigned long UNK_00507472;
extern "C" unsigned long UNK_0050748c;
extern "C" unsigned long UNK_0050748e;
extern "C" unsigned long UNK_005074b6;
extern "C" unsigned long UNK_005074ce;
extern "C" unsigned long UNK_0050751e;
extern "C" unsigned long UNK_0050754c;
extern "C" unsigned long UNK_005075e4;
extern "C" unsigned long UNK_0050760e;
extern "C" unsigned long UNK_005076b2;
extern "C" unsigned long UNK_00507702;
extern "C" unsigned long UNK_00507706;
extern "C" unsigned long UNK_00507734;
extern "C" unsigned long UNK_00507754;
extern "C" unsigned long UNK_005077a4;
extern "C" unsigned long UNK_00507820;
extern "C" unsigned long UNK_00507834;
extern "C" unsigned long UNK_0050786c;
extern "C" unsigned long UNK_005078be;
extern "C" unsigned long UNK_0050793a;
extern "C" unsigned long UNK_00507948;
extern "C" unsigned long UNK_005079b2;
extern "C" unsigned long UNK_00507a3c;
extern "C" unsigned long UNK_00507af6;
extern "C" unsigned long UNK_00507b1e;
extern "C" unsigned long UNK_00507c10;
extern "C" unsigned long UNK_00507c4c;
extern "C" unsigned long UNK_00507ca2;
extern "C" unsigned long UNK_00507cde;
extern "C" unsigned long UNK_00507d58;
extern "C" unsigned long UNK_00507d98;
extern "C" unsigned long UNK_00507e24;
extern "C" unsigned long UNK_00507f74;
extern "C" unsigned long UNK_00507f7e;
extern "C" unsigned long UNK_00507fa6;
extern "C" unsigned long UNK_0050805a;
extern "C" unsigned long UNK_00508204;
extern "C" unsigned long UNK_0050824e;
extern "C" unsigned long UNK_005082bc;
extern "C" unsigned long UNK_005082fc;
extern "C" unsigned long UNK_00508348;
extern "C" unsigned long UNK_00508388;
extern "C" unsigned long UNK_00508414;
extern "C" unsigned long UNK_00508494;
extern "C" unsigned long UNK_005084a0;
extern "C" unsigned long _UNK_00507364;
extern "C" unsigned long _UNK_00507368;
extern "C" unsigned long _UNK_0050737c;
extern "C" unsigned long _UNK_005073a4;
extern "C" unsigned long _UNK_005074f0;
extern "C" unsigned long _UNK_005074f4;
extern "C" unsigned long _UNK_005074f8;
extern "C" unsigned long _UNK_005074fc;
extern "C" unsigned long _UNK_00507500;
extern "C" unsigned long _UNK_00507504;
extern "C" unsigned long _UNK_00507508;
extern "C" unsigned long _UNK_0050750c;
extern "C" unsigned long _UNK_0050757c;
extern "C" unsigned long _UNK_00507580;
extern "C" unsigned long _UNK_005076d4;
extern "C" unsigned long _UNK_005076d8;
extern "C" unsigned long _UNK_005076dc;
extern "C" unsigned long _UNK_005076e0;
extern "C" unsigned long _UNK_005076e4;
extern "C" unsigned long _UNK_0050796c;
extern "C" unsigned long _UNK_00507970;
extern "C" unsigned long _UNK_00507974;
extern "C" unsigned long _UNK_00507978;
extern "C" unsigned long _UNK_0050797c;
extern "C" unsigned long _UNK_00507980;
extern "C" unsigned long _UNK_00507984;
extern "C" unsigned long _UNK_00507988;
extern "C" unsigned long _UNK_0050798c;
extern "C" unsigned long _UNK_00507990;
extern "C" unsigned long _UNK_00507994;
extern "C" unsigned long _UNK_00507998;
extern "C" unsigned long _UNK_00507a30;
extern "C" unsigned long _UNK_00507d18;
extern "C" unsigned long _UNK_00507d1c;
extern "C" unsigned long _UNK_00507d20;
extern "C" unsigned long _UNK_00507d24;
extern "C" unsigned long _UNK_00507d28;
extern "C" unsigned long _UNK_00507d2c;
extern "C" unsigned long _UNK_00507d30;
extern "C" unsigned long _UNK_00507d34;
extern "C" unsigned long _UNK_005080bc;
extern "C" unsigned long _UNK_005080c0;
extern "C" unsigned long _UNK_005080c4;
extern "C" unsigned long _UNK_005080c8;
extern "C" unsigned long _UNK_005080cc;
extern "C" unsigned long _UNK_005080d0;
extern "C" unsigned long _UNK_005080d4;
extern "C" unsigned long _UNK_005080d8;
extern "C" unsigned long _UNK_005080dc;
extern "C" unsigned long _UNK_00508454;
extern "C" unsigned long _UNK_00508458;
extern "C" unsigned long _UNK_0050845c;
extern "C" unsigned long _UNK_00508460;
extern "C" unsigned long _UNK_00508464;
extern "C" unsigned long _UNK_00508468;
extern "C" unsigned long _UNK_0050846c;
extern "C" unsigned long _UNK_005084a4;
extern "C" unsigned long _UNK_005084a8;
extern "C" unsigned long g_005072fc;
extern "C" unsigned long g_00507332;
extern "C" unsigned long g_00507364;
extern "C" unsigned long g_00507368;
extern "C" unsigned long g_00507378;
extern "C" unsigned long g_0050737c;
extern "C" unsigned long g_005073a0;
extern "C" unsigned long g_005073a4;
extern "C" unsigned long g_00507408;
extern "C" unsigned long g_0050743a;
extern "C" unsigned long g_00507470;
extern "C" unsigned long g_00507472;
extern "C" unsigned long g_0050748c;
extern "C" unsigned long g_0050748e;
extern "C" unsigned long g_005074b6;
extern "C" unsigned long g_005074ce;
extern "C" unsigned long g_005074f0;
extern "C" unsigned long g_005074f4;
extern "C" unsigned long g_005074f8;
extern "C" unsigned long g_005074fc;
extern "C" unsigned long g_00507500;
extern "C" unsigned long g_00507504;
extern "C" unsigned long g_00507508;
extern "C" unsigned long g_0050750c;
extern "C" unsigned long g_0050751e;
extern "C" unsigned long g_0050754c;
extern "C" unsigned long g_0050757c;
extern "C" unsigned long g_00507580;
extern "C" unsigned long g_005075e4;
extern "C" unsigned long g_0050760e;
extern "C" unsigned long g_005076b2;
extern "C" unsigned long g_005076d4;
extern "C" unsigned long g_005076d8;
extern "C" unsigned long g_005076dc;
extern "C" unsigned long g_005076e0;
extern "C" unsigned long g_005076e4;
extern "C" unsigned long g_00507702;
extern "C" unsigned long g_00507706;
extern "C" unsigned long g_00507734;
extern "C" unsigned long g_00507754;
extern "C" unsigned long g_005077a4;
extern "C" unsigned long g_00507820;
extern "C" unsigned long g_00507834;
extern "C" unsigned long g_0050786c;
extern "C" unsigned long g_005078be;
extern "C" unsigned long g_0050793a;
extern "C" unsigned long g_00507948;
extern "C" unsigned long g_0050796c;
extern "C" unsigned long g_00507970;
extern "C" unsigned long g_00507974;
extern "C" unsigned long g_00507978;
extern "C" unsigned long g_0050797c;
extern "C" unsigned long g_00507980;
extern "C" unsigned long g_00507984;
extern "C" unsigned long g_00507988;
extern "C" unsigned long g_0050798c;
extern "C" unsigned long g_00507990;
extern "C" unsigned long g_00507994;
extern "C" unsigned long g_00507998;
extern "C" unsigned long g_005079b2;
extern "C" unsigned long g_00507a30;
extern "C" unsigned long g_00507a3c;
extern "C" unsigned long g_00507af6;
extern "C" unsigned long g_00507b1e;
extern "C" unsigned long g_00507c10;
extern "C" unsigned long g_00507c4c;
extern "C" unsigned long g_00507ca2;
extern "C" unsigned long g_00507cde;
extern "C" unsigned long g_00507d18;
extern "C" unsigned long g_00507d1c;
extern "C" unsigned long g_00507d20;
extern "C" unsigned long g_00507d24;
extern "C" unsigned long g_00507d28;
extern "C" unsigned long g_00507d2c;
extern "C" unsigned long g_00507d30;
extern "C" unsigned long g_00507d34;
extern "C" unsigned long g_00507d58;
extern "C" unsigned long g_00507d98;
extern "C" unsigned long g_00507e24;
extern "C" unsigned long g_00507f74;
extern "C" unsigned long g_00507f7e;
extern "C" unsigned long g_00507fa6;
extern "C" unsigned long g_0050805a;
extern "C" unsigned long g_005080bc;
extern "C" unsigned long g_005080c0;
extern "C" unsigned long g_005080c4;
extern "C" unsigned long g_005080c8;
extern "C" unsigned long g_005080cc;
extern "C" unsigned long g_005080d0;
extern "C" unsigned long g_005080d4;
extern "C" unsigned long g_005080d8;
extern "C" unsigned long g_005080dc;
extern "C" unsigned long g_00508204;
extern "C" unsigned long g_0050824e;
extern "C" unsigned long g_005082bc;
extern "C" unsigned long g_005082fc;
extern "C" unsigned long g_00508348;
extern "C" unsigned long g_00508388;
extern "C" unsigned long g_00508414;
extern "C" unsigned long g_00508454;
extern "C" unsigned long g_00508458;
extern "C" unsigned long g_0050845c;
extern "C" unsigned long g_00508460;
extern "C" unsigned long g_00508464;
extern "C" unsigned long g_00508468;
extern "C" unsigned long g_0050846c;
extern "C" unsigned long g_00508494;
extern "C" unsigned long g_005084a0;
extern "C" unsigned long g_005084a4;
extern "C" unsigned long g_005084a8;
bool ChallengeHeroItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void ChallengeHeroItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void ChallengeHeroItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void ChallengeHeroItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

RoleData* ChallengeHeroItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

RoleInfoItemData* ChallengeHeroItemPresenter::getRoleInfoData() const
{
  return (RoleInfoItemData*)(*(undefined4 *)(((int)this) + 0x20));
}

void ChallengeHeroItemPresenter::tick(float p1)
{
  return;
}

ChallengeHeroItemPresenter::~ChallengeHeroItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005072fc + g_00507364);
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
  func_0079e45c(&uStack_14,&g_00507332 + g_00507368,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void ChallengeHeroItemPresenter::setRoleInfoData(RoleInfoItemData* p1)
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

void ChallengeHeroItemPresenter::setRoleData(RoleData* p1)
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


ChallengeHeroItemPresenter::ChallengeHeroItemPresenter()
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
  iVar3 = *(int *)(&g_0050751e + g_0050757c);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_0050754c + g_00507580,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

void ChallengeHeroItemPresenter::onEnter()
{
  return;
}

void ChallengeHeroItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  return;
}

undefined4 ChallengeHeroItemPresenter::create(ChallengeHeroItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void ChallengeHeroItemPresenter::buyRole()
{
  return;
}


void ChallengeHeroItemPresenter::onBuyYiComplete(cocos2d::CCObject* p1)
{
  return;
}



void ChallengeHeroItemPresenter::initWithPlayerData(PlayerData* p1)
{
  ChallengeHeroItemPresenter::updateData();
  return;
}



void ChallengeHeroItemPresenter::onRole(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))();
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
    ((CocosDenshion::SimpleAudioEngine *)uVar2)->playEffect((char const*)&g_00508494 + g_005084a4, 0);
    uVar2 = (undefined4)(((Toast *)this)->sharedToast());
    ((Toast *)uVar2)->showToast((char const*)&g_005084a0 + g_005084a8);
  }
  else {
    ChallengeHeroItemPresenter::selectRole();
  }
  return;
}

// ===== 修复: 补回被误删的函数占位 (7) =====
undefined8 ChallengeHeroItemPresenter::onShowBuyYi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void ChallengeHeroItemPresenter::initWithView(ChallengeHeroItemView* p1)
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
  piVar1 = (int *)((ChallengeHeroItemView *)(p1))->getBtnRole();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005075e4 + (intptr_t)(g_005076d4))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((ChallengeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars()
  ;
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  uVar2 = (undefined4)(((ChallengeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDiamond());
  puVar6 = (unsigned char *)((char *)&g_0050760e + (intptr_t)(g_005076d8));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  uVar2 = (undefined4)(((ChallengeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnLock());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  piVar1 = (int *)((ChallengeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_28);
  piVar1 = (int *)((ChallengeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 100);
  piVar3 = (int *)((ChallengeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((ChallengeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))());
  uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar5));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_005076dc));
  (*pcVar7)(piVar1,uVar2);
  piVar1 = (int *)((ChallengeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  (**(code **)(*(int *)(piVar1) + (0x40)))(piVar1,g_005076e0);
  piVar1 = (int *)((ChallengeHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_005076b2 + (intptr_t)(g_005076e4)),auStack_2c);
  (*pcVar7)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void ChallengeHeroItemPresenter::onBuyRoleClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeHeroItemPresenter::onBuyDiamondComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeHeroItemPresenter::updateData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeHeroItemPresenter::initWithRoleData(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void ChallengeHeroItemPresenter::selectRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
