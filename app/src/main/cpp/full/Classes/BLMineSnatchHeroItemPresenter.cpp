#include "BLMineSnatchHeroItemPresenter.h"
#include "CCDictionary.h"
#include "CCLabelTTF.h"
#include "CCNotificationCenter.h"
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
#include "BLMineSnatchBuyHeroPresenter.h"
#include "BLMineSnatchBuyHeroView.h"
#include "BLMineSnatchHeroItemView.h"
#include "BLPageControl.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "GiftData.h"
#include "PlayerData.h"
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
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e45c(...);
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
extern "C" unsigned long UNK_005a6b98;
extern "C" unsigned long UNK_005a6bce;
extern "C" unsigned long UNK_005a6c14;
extern "C" unsigned long UNK_005a6c3c;
extern "C" unsigned long UNK_005a6ca4;
extern "C" unsigned long UNK_005a6cd6;
extern "C" unsigned long UNK_005a6d0c;
extern "C" unsigned long UNK_005a6d0e;
extern "C" unsigned long UNK_005a6d28;
extern "C" unsigned long UNK_005a6d2a;
extern "C" unsigned long UNK_005a6d52;
extern "C" unsigned long UNK_005a6d6a;
extern "C" unsigned long UNK_005a6dc2;
extern "C" unsigned long UNK_005a6dc6;
extern "C" unsigned long UNK_005a6df4;
extern "C" unsigned long UNK_005a6e14;
extern "C" unsigned long UNK_005a6e64;
extern "C" unsigned long UNK_005a6ee0;
extern "C" unsigned long UNK_005a6ef4;
extern "C" unsigned long UNK_005a6f2c;
extern "C" unsigned long UNK_005a6f7e;
extern "C" unsigned long UNK_005a6ffa;
extern "C" unsigned long UNK_005a7008;
extern "C" unsigned long UNK_005a706a;
extern "C" unsigned long UNK_005a7098;
extern "C" unsigned long UNK_005a70e4;
extern "C" unsigned long UNK_005a70e6;
extern "C" unsigned long UNK_005a711a;
extern "C" unsigned long UNK_005a7128;
extern "C" unsigned long UNK_005a7136;
extern "C" unsigned long UNK_005a7190;
extern "C" unsigned long UNK_005a71ba;
extern "C" unsigned long UNK_005a725e;
extern "C" unsigned long UNK_005a72a6;
extern "C" unsigned long UNK_005a737c;
extern "C" unsigned long UNK_005a73aa;
extern "C" unsigned long UNK_005a73e8;
extern "C" unsigned long UNK_005a7480;
extern "C" unsigned long UNK_005a74be;
extern "C" unsigned long UNK_005a7502;
extern "C" unsigned long UNK_005a7540;
extern "C" unsigned long UNK_005a7584;
extern "C" unsigned long UNK_005a7612;
extern "C" unsigned long UNK_005a762a;
extern "C" unsigned long UNK_005a767c;
extern "C" unsigned long UNK_005a7698;
extern "C" unsigned long UNK_005a776c;
extern "C" unsigned long UNK_005a77a2;
extern "C" unsigned long UNK_005a784c;
extern "C" unsigned long UNK_005a78fa;
extern "C" unsigned long UNK_005a7940;
extern "C" unsigned long UNK_005a79ae;
extern "C" unsigned long UNK_005a7a40;
extern "C" unsigned long UNK_005a7a88;
extern "C" unsigned long UNK_005a7b8c;
extern "C" unsigned long UNK_005a7bce;
extern "C" unsigned long UNK_005a7c1a;
extern "C" unsigned long UNK_005a7c5c;
extern "C" unsigned long UNK_005a7cb6;
extern "C" unsigned long UNK_005a7cf6;
extern "C" unsigned long UNK_005a7e8c;
extern "C" unsigned long UNK_005a7e96;
extern "C" unsigned long UNK_005a7ebc;
extern "C" unsigned long UNK_005a80a6;
extern "C" unsigned long UNK_005a80a8;
extern "C" unsigned long UNK_005a8132;
extern "C" unsigned long _UNK_005a6c00;
extern "C" unsigned long _UNK_005a6c04;
extern "C" unsigned long _UNK_005a6c18;
extern "C" unsigned long _UNK_005a6c40;
extern "C" unsigned long _UNK_005a6d8c;
extern "C" unsigned long _UNK_005a6d90;
extern "C" unsigned long _UNK_005a6d94;
extern "C" unsigned long _UNK_005a6d98;
extern "C" unsigned long _UNK_005a6d9c;
extern "C" unsigned long _UNK_005a6da0;
extern "C" unsigned long _UNK_005a6da4;
extern "C" unsigned long _UNK_005a6da8;
extern "C" unsigned long _UNK_005a702c;
extern "C" unsigned long _UNK_005a7030;
extern "C" unsigned long _UNK_005a7034;
extern "C" unsigned long _UNK_005a7038;
extern "C" unsigned long _UNK_005a703c;
extern "C" unsigned long _UNK_005a7040;
extern "C" unsigned long _UNK_005a7044;
extern "C" unsigned long _UNK_005a7048;
extern "C" unsigned long _UNK_005a704c;
extern "C" unsigned long _UNK_005a7050;
extern "C" unsigned long _UNK_005a7054;
extern "C" unsigned long _UNK_005a7058;
extern "C" unsigned long _UNK_005a70c8;
extern "C" unsigned long _UNK_005a70cc;
extern "C" unsigned long _UNK_005a70f0;
extern "C" unsigned long _UNK_005a70f4;
extern "C" unsigned long _UNK_005a713c;
extern "C" unsigned long _UNK_005a7140;
extern "C" unsigned long _UNK_005a7144;
extern "C" unsigned long _UNK_005a7280;
extern "C" unsigned long _UNK_005a7284;
extern "C" unsigned long _UNK_005a7288;
extern "C" unsigned long _UNK_005a728c;
extern "C" unsigned long _UNK_005a7290;
extern "C" unsigned long _UNK_005a7324;
extern "C" unsigned long _UNK_005a75cc;
extern "C" unsigned long _UNK_005a75d0;
extern "C" unsigned long _UNK_005a75d4;
extern "C" unsigned long _UNK_005a75d8;
extern "C" unsigned long _UNK_005a75dc;
extern "C" unsigned long _UNK_005a75e0;
extern "C" unsigned long _UNK_005a75e4;
extern "C" unsigned long _UNK_005a75e8;
extern "C" unsigned long _UNK_005a7668;
extern "C" unsigned long _UNK_005a766c;
extern "C" unsigned long _UNK_005a79fc;
extern "C" unsigned long _UNK_005a7a00;
extern "C" unsigned long _UNK_005a7a04;
extern "C" unsigned long _UNK_005a7a08;
extern "C" unsigned long _UNK_005a7a0c;
extern "C" unsigned long _UNK_005a7a10;
extern "C" unsigned long _UNK_005a7a14;
extern "C" unsigned long _UNK_005a7a18;
extern "C" unsigned long _UNK_005a7a1c;
extern "C" unsigned long _UNK_005a7a20;
extern "C" unsigned long _UNK_005a7a24;
extern "C" unsigned long _UNK_005a7a28;
extern "C" unsigned long _UNK_005a7a2c;
extern "C" unsigned long _UNK_005a7df8;
extern "C" unsigned long _UNK_005a7dfc;
extern "C" unsigned long _UNK_005a7e00;
extern "C" unsigned long _UNK_005a7e04;
extern "C" unsigned long _UNK_005a7e08;
extern "C" unsigned long _UNK_005a7e0c;
extern "C" unsigned long _UNK_005a7e10;
extern "C" unsigned long _UNK_005a7e14;
extern "C" unsigned long _UNK_005a7fe0;
extern "C" unsigned long _UNK_005a7fe4;
extern "C" unsigned long _UNK_005a7fe8;
extern "C" unsigned long _UNK_005a7fec;
extern "C" unsigned long _UNK_005a7ff0;
extern "C" unsigned long _UNK_005a8138;
extern "C" unsigned long _UNK_005a813c;
extern "C" unsigned long _UNK_005a8140;
extern "C" unsigned long g_005a6b98;
extern "C" unsigned long g_005a6bce;
extern "C" unsigned long g_005a6c00;
extern "C" unsigned long g_005a6c04;
extern "C" unsigned long g_005a6c14;
extern "C" unsigned long g_005a6c18;
extern "C" unsigned long g_005a6c3c;
extern "C" unsigned long g_005a6c40;
extern "C" unsigned long g_005a6ca4;
extern "C" unsigned long g_005a6cd6;
extern "C" unsigned long g_005a6d0c;
extern "C" unsigned long g_005a6d0e;
extern "C" unsigned long g_005a6d28;
extern "C" unsigned long g_005a6d2a;
extern "C" unsigned long g_005a6d52;
extern "C" unsigned long g_005a6d6a;
extern "C" unsigned long g_005a6d8c;
extern "C" unsigned long g_005a6d90;
extern "C" unsigned long g_005a6d94;
extern "C" unsigned long g_005a6d98;
extern "C" unsigned long g_005a6d9c;
extern "C" unsigned long g_005a6da0;
extern "C" unsigned long g_005a6da4;
extern "C" unsigned long g_005a6da8;
extern "C" unsigned long g_005a6dc2;
extern "C" unsigned long g_005a6dc6;
extern "C" unsigned long g_005a6df4;
extern "C" unsigned long g_005a6e14;
extern "C" unsigned long g_005a6e64;
extern "C" unsigned long g_005a6ee0;
extern "C" unsigned long g_005a6ef4;
extern "C" unsigned long g_005a6f2c;
extern "C" unsigned long g_005a6f7e;
extern "C" unsigned long g_005a6ffa;
extern "C" unsigned long g_005a7008;
extern "C" unsigned long g_005a702c;
extern "C" unsigned long g_005a7030;
extern "C" unsigned long g_005a7034;
extern "C" unsigned long g_005a7038;
extern "C" unsigned long g_005a703c;
extern "C" unsigned long g_005a7040;
extern "C" unsigned long g_005a7044;
extern "C" unsigned long g_005a7048;
extern "C" unsigned long g_005a704c;
extern "C" unsigned long g_005a7050;
extern "C" unsigned long g_005a7054;
extern "C" unsigned long g_005a7058;
extern "C" unsigned long g_005a706a;
extern "C" unsigned long g_005a7098;
extern "C" unsigned long g_005a70c8;
extern "C" unsigned long g_005a70cc;
extern "C" unsigned long g_005a70e4;
extern "C" unsigned long g_005a70e6;
extern "C" unsigned long g_005a70f0;
extern "C" unsigned long g_005a70f4;
extern "C" unsigned long g_005a711a;
extern "C" unsigned long g_005a7128;
extern "C" unsigned long g_005a7136;
extern "C" unsigned long g_005a713c;
extern "C" unsigned long g_005a7140;
extern "C" unsigned long g_005a7144;
extern "C" unsigned long g_005a7190;
extern "C" unsigned long g_005a71ba;
extern "C" unsigned long g_005a725e;
extern "C" unsigned long g_005a7280;
extern "C" unsigned long g_005a7284;
extern "C" unsigned long g_005a7288;
extern "C" unsigned long g_005a728c;
extern "C" unsigned long g_005a7290;
extern "C" unsigned long g_005a72a6;
extern "C" unsigned long g_005a7324;
extern "C" unsigned long g_005a737c;
extern "C" unsigned long g_005a73aa;
extern "C" unsigned long g_005a73e8;
extern "C" unsigned long g_005a7480;
extern "C" unsigned long g_005a74be;
extern "C" unsigned long g_005a7502;
extern "C" unsigned long g_005a7540;
extern "C" unsigned long g_005a7584;
extern "C" unsigned long g_005a75cc;
extern "C" unsigned long g_005a75d0;
extern "C" unsigned long g_005a75d4;
extern "C" unsigned long g_005a75d8;
extern "C" unsigned long g_005a75dc;
extern "C" unsigned long g_005a75e0;
extern "C" unsigned long g_005a75e4;
extern "C" unsigned long g_005a75e8;
extern "C" unsigned long g_005a7612;
extern "C" unsigned long g_005a762a;
extern "C" unsigned long g_005a7668;
extern "C" unsigned long g_005a766c;
extern "C" unsigned long g_005a767c;
extern "C" unsigned long g_005a7698;
extern "C" unsigned long g_005a776c;
extern "C" unsigned long g_005a77a2;
extern "C" unsigned long g_005a784c;
extern "C" unsigned long g_005a78fa;
extern "C" unsigned long g_005a7940;
extern "C" unsigned long g_005a79ae;
extern "C" unsigned long g_005a79fc;
extern "C" unsigned long g_005a7a00;
extern "C" unsigned long g_005a7a04;
extern "C" unsigned long g_005a7a08;
extern "C" unsigned long g_005a7a0c;
extern "C" unsigned long g_005a7a10;
extern "C" unsigned long g_005a7a14;
extern "C" unsigned long g_005a7a18;
extern "C" unsigned long g_005a7a1c;
extern "C" unsigned long g_005a7a20;
extern "C" unsigned long g_005a7a24;
extern "C" unsigned long g_005a7a28;
extern "C" unsigned long g_005a7a2c;
extern "C" unsigned long g_005a7a40;
extern "C" unsigned long g_005a7a88;
extern "C" unsigned long g_005a7b8c;
extern "C" unsigned long g_005a7bce;
extern "C" unsigned long g_005a7c1a;
extern "C" unsigned long g_005a7c5c;
extern "C" unsigned long g_005a7cb6;
extern "C" unsigned long g_005a7cf6;
extern "C" unsigned long g_005a7df8;
extern "C" unsigned long g_005a7dfc;
extern "C" unsigned long g_005a7e00;
extern "C" unsigned long g_005a7e04;
extern "C" unsigned long g_005a7e08;
extern "C" unsigned long g_005a7e0c;
extern "C" unsigned long g_005a7e10;
extern "C" unsigned long g_005a7e14;
extern "C" unsigned long g_005a7e8c;
extern "C" unsigned long g_005a7e96;
extern "C" unsigned long g_005a7ebc;
extern "C" unsigned long g_005a7fe0;
extern "C" unsigned long g_005a7fe4;
extern "C" unsigned long g_005a7fe8;
extern "C" unsigned long g_005a7fec;
extern "C" unsigned long g_005a7ff0;
extern "C" unsigned long g_005a80a6;
extern "C" unsigned long g_005a80a8;
extern "C" unsigned long g_005a8132;
extern "C" unsigned long g_005a8138;
extern "C" unsigned long g_005a813c;
extern "C" unsigned long g_005a8140;
bool BLMineSnatchHeroItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineSnatchHeroItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchHeroItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineSnatchHeroItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

RoleData* BLMineSnatchHeroItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

RoleInfoItemData* BLMineSnatchHeroItemPresenter::getRoleInfoData() const
{
  return (RoleInfoItemData*)(*(undefined4 *)(((int)this) + 0x20));
}

void BLMineSnatchHeroItemPresenter::tick(float p1)
{
  return;
}

BLMineSnatchHeroItemPresenter::~BLMineSnatchHeroItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a6b98 + g_005a6c00);
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
  func_0079e45c(&uStack_14,&g_005a6bce + g_005a6c04,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMineSnatchHeroItemPresenter::setRoleInfoData(RoleInfoItemData* p1)
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

void BLMineSnatchHeroItemPresenter::setRoleData(RoleData* p1)
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



BLMineSnatchHeroItemPresenter::BLMineSnatchHeroItemPresenter()
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
  iVar3 = *(int *)(&g_005a706a + g_005a70c8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a7098 + g_005a70cc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}


void BLMineSnatchHeroItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a711a + g_005a713c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a7128 + g_005a7140);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a7136 + g_005a7144);
  return;
}

undefined4 BLMineSnatchHeroItemPresenter::create(BLMineSnatchHeroItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}







void BLMineSnatchHeroItemPresenter::initWithPlayerData(PlayerData* p1)
{
  BLMineSnatchHeroItemPresenter::updateData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (11) =====
undefined8 BLMineSnatchHeroItemPresenter::onShowBuyYi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMineSnatchHeroItemPresenter::onBuyRoleClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchHeroItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchHeroItemPresenter::initWithView(BLMineSnatchHeroItemView* p1)
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
  piVar1 = (int *)((BLMineSnatchHeroItemView *)(p1))->getBtnRole();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005a7190 + (intptr_t)(g_005a7280))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLMineSnatchHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  uVar2 = (undefined4)(((BLMineSnatchHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDiamond());
  puVar6 = (unsigned char *)((char *)&g_005a71ba + (intptr_t)(g_005a7284));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLMineSnatchHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnLock());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  piVar1 = (int *)((BLMineSnatchHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_28);
  piVar1 = (int *)((BLMineSnatchHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 100);
  piVar3 = (int *)((BLMineSnatchHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((BLMineSnatchHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))());
  uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar5));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_005a7288));
  (*pcVar7)(piVar1,uVar2);
  piVar1 = (int *)((BLMineSnatchHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  (**(code **)(*(int *)(piVar1) + (0x40)))(piVar1,g_005a728c);
  piVar1 = (int *)((BLMineSnatchHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_005a725e + (intptr_t)(g_005a7290)),auStack_2c);
  (*pcVar7)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void BLMineSnatchHeroItemPresenter::onBuyDiamondComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchHeroItemPresenter::selectRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchHeroItemPresenter::onRole(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchHeroItemPresenter::buyRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchHeroItemPresenter::updateData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchHeroItemPresenter::initWithRoleData(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineSnatchHeroItemPresenter::onBuyYiComplete(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iStack_14;
  
  iStack_14 = (undefined4)(intptr_t)p1;
  if (((int)(intptr_t)p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_005a80a6 + (intptr_t)(g_005a813c))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005a80a8 + (intptr_t)(g_005a8138))),0), iVar1 != 0)) {
    (**(code **)(**(int **)(((int)this) + 0x1c) + 0x18))(&iStack_14);
    bVar7 = (undefined4)(intptr_t)(false);
    if (*(int *)(*(int *)(iVar1 + 0x14) + -0xc) == *(int *)(iStack_14 + -0xc)) {
      iVar1 = (undefined4)(intptr_t)(func_0079e60c());
      bVar7 = (undefined4)(intptr_t)(iVar1 == 0);
    }
    func_0079e2bc(&iStack_14);
    if (bVar7) {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*piVar2 + 0x40))();
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)((DataManager *)this)->shareDataManager();
        piVar3 = (int *)(**(code **)(*piVar3 + 0x38))();
        uVar4 = (undefined4)((**(code **)(*piVar3 + 0xa8))());
        (**(code **)(*piVar2 + 0x28))(piVar2);
        uVar5 = (undefined4)(((cocos2d::CCDictionary *)this)->count());
        if (uVar5 < uVar4) {
          BLMineSnatchHeroItemPresenter::selectRole();
        }
      }
      BLMineSnatchHeroItemPresenter::updateData();
      uVar6 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)uVar6)->postNotification((char const*)(unsigned char *)((char *)&g_005a8132 + (intptr_t)(g_005a8140)));
    }
  }
  return;
}
