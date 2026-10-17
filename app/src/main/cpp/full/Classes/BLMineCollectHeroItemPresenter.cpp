#include "BLMineCollectHeroItemPresenter.h"
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
#include "BLMineCollectBuyHeroPresenter.h"
#include "BLMineCollectBuyHeroView.h"
#include "BLMineCollectHeroItemView.h"
#include "BLPageControl.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "GiftData.h"
#include "MineDealData.h"
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
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_005a3388;
extern "C" unsigned long UNK_005a33be;
extern "C" unsigned long UNK_005a3404;
extern "C" unsigned long UNK_005a342c;
extern "C" unsigned long UNK_005a3494;
extern "C" unsigned long UNK_005a34c6;
extern "C" unsigned long UNK_005a34fc;
extern "C" unsigned long UNK_005a34fe;
extern "C" unsigned long UNK_005a3518;
extern "C" unsigned long UNK_005a351a;
extern "C" unsigned long UNK_005a3542;
extern "C" unsigned long UNK_005a355a;
extern "C" unsigned long UNK_005a35b2;
extern "C" unsigned long UNK_005a35b6;
extern "C" unsigned long UNK_005a35e4;
extern "C" unsigned long UNK_005a3604;
extern "C" unsigned long UNK_005a3654;
extern "C" unsigned long UNK_005a36d0;
extern "C" unsigned long UNK_005a36e4;
extern "C" unsigned long UNK_005a371c;
extern "C" unsigned long UNK_005a376e;
extern "C" unsigned long UNK_005a37ea;
extern "C" unsigned long UNK_005a37f8;
extern "C" unsigned long UNK_005a385a;
extern "C" unsigned long UNK_005a3888;
extern "C" unsigned long UNK_005a38d4;
extern "C" unsigned long UNK_005a38d6;
extern "C" unsigned long UNK_005a390a;
extern "C" unsigned long UNK_005a3918;
extern "C" unsigned long UNK_005a3926;
extern "C" unsigned long UNK_005a3980;
extern "C" unsigned long UNK_005a39aa;
extern "C" unsigned long UNK_005a3a4e;
extern "C" unsigned long UNK_005a3a96;
extern "C" unsigned long UNK_005a3b24;
extern "C" unsigned long UNK_005a3b40;
extern "C" unsigned long UNK_005a3c14;
extern "C" unsigned long UNK_005a3c4a;
extern "C" unsigned long UNK_005a3cf4;
extern "C" unsigned long UNK_005a3da2;
extern "C" unsigned long UNK_005a3de8;
extern "C" unsigned long UNK_005a3e56;
extern "C" unsigned long UNK_005a3f92;
extern "C" unsigned long UNK_005a3fc4;
extern "C" unsigned long UNK_005a4004;
extern "C" unsigned long UNK_005a405a;
extern "C" unsigned long UNK_005a40c2;
extern "C" unsigned long UNK_005a4100;
extern "C" unsigned long UNK_005a4146;
extern "C" unsigned long UNK_005a41b2;
extern "C" unsigned long UNK_005a423e;
extern "C" unsigned long UNK_005a4256;
extern "C" unsigned long UNK_005a42a8;
extern "C" unsigned long UNK_005a42f0;
extern "C" unsigned long UNK_005a43b0;
extern "C" unsigned long UNK_005a43ee;
extern "C" unsigned long UNK_005a44ee;
extern "C" unsigned long UNK_005a452c;
extern "C" unsigned long UNK_005a45f6;
extern "C" unsigned long UNK_005a4634;
extern "C" unsigned long UNK_005a469c;
extern "C" unsigned long UNK_005a46de;
extern "C" unsigned long UNK_005a4920;
extern "C" unsigned long UNK_005a4948;
extern "C" unsigned long UNK_005a4ad2;
extern "C" unsigned long UNK_005a4ad4;
extern "C" unsigned long UNK_005a4b4c;
extern "C" unsigned long _UNK_005a33f0;
extern "C" unsigned long _UNK_005a33f4;
extern "C" unsigned long _UNK_005a3408;
extern "C" unsigned long _UNK_005a3430;
extern "C" unsigned long _UNK_005a357c;
extern "C" unsigned long _UNK_005a3580;
extern "C" unsigned long _UNK_005a3584;
extern "C" unsigned long _UNK_005a3588;
extern "C" unsigned long _UNK_005a358c;
extern "C" unsigned long _UNK_005a3590;
extern "C" unsigned long _UNK_005a3594;
extern "C" unsigned long _UNK_005a3598;
extern "C" unsigned long _UNK_005a381c;
extern "C" unsigned long _UNK_005a3820;
extern "C" unsigned long _UNK_005a3824;
extern "C" unsigned long _UNK_005a3828;
extern "C" unsigned long _UNK_005a382c;
extern "C" unsigned long _UNK_005a3830;
extern "C" unsigned long _UNK_005a3834;
extern "C" unsigned long _UNK_005a3838;
extern "C" unsigned long _UNK_005a383c;
extern "C" unsigned long _UNK_005a3840;
extern "C" unsigned long _UNK_005a3844;
extern "C" unsigned long _UNK_005a3848;
extern "C" unsigned long _UNK_005a38b8;
extern "C" unsigned long _UNK_005a38bc;
extern "C" unsigned long _UNK_005a38e0;
extern "C" unsigned long _UNK_005a38e4;
extern "C" unsigned long _UNK_005a392c;
extern "C" unsigned long _UNK_005a3930;
extern "C" unsigned long _UNK_005a3934;
extern "C" unsigned long _UNK_005a3a70;
extern "C" unsigned long _UNK_005a3a74;
extern "C" unsigned long _UNK_005a3a78;
extern "C" unsigned long _UNK_005a3a7c;
extern "C" unsigned long _UNK_005a3a80;
extern "C" unsigned long _UNK_005a3b14;
extern "C" unsigned long _UNK_005a3ea4;
extern "C" unsigned long _UNK_005a3ea8;
extern "C" unsigned long _UNK_005a3eac;
extern "C" unsigned long _UNK_005a3eb0;
extern "C" unsigned long _UNK_005a3eb4;
extern "C" unsigned long _UNK_005a3eb8;
extern "C" unsigned long _UNK_005a3ebc;
extern "C" unsigned long _UNK_005a3ec0;
extern "C" unsigned long _UNK_005a3ec4;
extern "C" unsigned long _UNK_005a3ec8;
extern "C" unsigned long _UNK_005a3ecc;
extern "C" unsigned long _UNK_005a3ed0;
extern "C" unsigned long _UNK_005a3ed4;
extern "C" unsigned long _UNK_005a41f8;
extern "C" unsigned long _UNK_005a41fc;
extern "C" unsigned long _UNK_005a4200;
extern "C" unsigned long _UNK_005a4204;
extern "C" unsigned long _UNK_005a4208;
extern "C" unsigned long _UNK_005a420c;
extern "C" unsigned long _UNK_005a4210;
extern "C" unsigned long _UNK_005a4214;
extern "C" unsigned long _UNK_005a4294;
extern "C" unsigned long _UNK_005a4298;
extern "C" unsigned long _UNK_005a456c;
extern "C" unsigned long _UNK_005a4570;
extern "C" unsigned long _UNK_005a4574;
extern "C" unsigned long _UNK_005a4578;
extern "C" unsigned long _UNK_005a457c;
extern "C" unsigned long _UNK_005a4580;
extern "C" unsigned long _UNK_005a4924;
extern "C" unsigned long _UNK_005a4928;
extern "C" unsigned long _UNK_005a492c;
extern "C" unsigned long _UNK_005a4930;
extern "C" unsigned long _UNK_005a4934;
extern "C" unsigned long _UNK_005a4938;
extern "C" unsigned long _UNK_005a493c;
extern "C" unsigned long _UNK_005a4a1c;
extern "C" unsigned long _UNK_005a4b50;
extern "C" unsigned long _UNK_005a4b54;
extern "C" unsigned long _UNK_005a4b58;
extern "C" unsigned long g_005a3388;
extern "C" unsigned long g_005a33be;
extern "C" unsigned long g_005a33f0;
extern "C" unsigned long g_005a33f4;
extern "C" unsigned long g_005a3404;
extern "C" unsigned long g_005a3408;
extern "C" unsigned long g_005a342c;
extern "C" unsigned long g_005a3430;
extern "C" unsigned long g_005a3494;
extern "C" unsigned long g_005a34c6;
extern "C" unsigned long g_005a34fc;
extern "C" unsigned long g_005a34fe;
extern "C" unsigned long g_005a3518;
extern "C" unsigned long g_005a351a;
extern "C" unsigned long g_005a3542;
extern "C" unsigned long g_005a355a;
extern "C" unsigned long g_005a357c;
extern "C" unsigned long g_005a3580;
extern "C" unsigned long g_005a3584;
extern "C" unsigned long g_005a3588;
extern "C" unsigned long g_005a358c;
extern "C" unsigned long g_005a3590;
extern "C" unsigned long g_005a3594;
extern "C" unsigned long g_005a3598;
extern "C" unsigned long g_005a35b2;
extern "C" unsigned long g_005a35b6;
extern "C" unsigned long g_005a35e4;
extern "C" unsigned long g_005a3604;
extern "C" unsigned long g_005a3654;
extern "C" unsigned long g_005a36d0;
extern "C" unsigned long g_005a36e4;
extern "C" unsigned long g_005a371c;
extern "C" unsigned long g_005a376e;
extern "C" unsigned long g_005a37ea;
extern "C" unsigned long g_005a37f8;
extern "C" unsigned long g_005a381c;
extern "C" unsigned long g_005a3820;
extern "C" unsigned long g_005a3824;
extern "C" unsigned long g_005a3828;
extern "C" unsigned long g_005a382c;
extern "C" unsigned long g_005a3830;
extern "C" unsigned long g_005a3834;
extern "C" unsigned long g_005a3838;
extern "C" unsigned long g_005a383c;
extern "C" unsigned long g_005a3840;
extern "C" unsigned long g_005a3844;
extern "C" unsigned long g_005a3848;
extern "C" unsigned long g_005a385a;
extern "C" unsigned long g_005a3888;
extern "C" unsigned long g_005a38b8;
extern "C" unsigned long g_005a38bc;
extern "C" unsigned long g_005a38d4;
extern "C" unsigned long g_005a38d6;
extern "C" unsigned long g_005a38e0;
extern "C" unsigned long g_005a38e4;
extern "C" unsigned long g_005a390a;
extern "C" unsigned long g_005a3918;
extern "C" unsigned long g_005a3926;
extern "C" unsigned long g_005a392c;
extern "C" unsigned long g_005a3930;
extern "C" unsigned long g_005a3934;
extern "C" unsigned long g_005a3980;
extern "C" unsigned long g_005a39aa;
extern "C" unsigned long g_005a3a4e;
extern "C" unsigned long g_005a3a70;
extern "C" unsigned long g_005a3a74;
extern "C" unsigned long g_005a3a78;
extern "C" unsigned long g_005a3a7c;
extern "C" unsigned long g_005a3a80;
extern "C" unsigned long g_005a3a96;
extern "C" unsigned long g_005a3b14;
extern "C" unsigned long g_005a3b24;
extern "C" unsigned long g_005a3b40;
extern "C" unsigned long g_005a3c14;
extern "C" unsigned long g_005a3c4a;
extern "C" unsigned long g_005a3cf4;
extern "C" unsigned long g_005a3da2;
extern "C" unsigned long g_005a3de8;
extern "C" unsigned long g_005a3e56;
extern "C" unsigned long g_005a3ea4;
extern "C" unsigned long g_005a3ea8;
extern "C" unsigned long g_005a3eac;
extern "C" unsigned long g_005a3eb0;
extern "C" unsigned long g_005a3eb4;
extern "C" unsigned long g_005a3eb8;
extern "C" unsigned long g_005a3ebc;
extern "C" unsigned long g_005a3ec0;
extern "C" unsigned long g_005a3ec4;
extern "C" unsigned long g_005a3ec8;
extern "C" unsigned long g_005a3ecc;
extern "C" unsigned long g_005a3ed0;
extern "C" unsigned long g_005a3ed4;
extern "C" unsigned long g_005a3f92;
extern "C" unsigned long g_005a3fc4;
extern "C" unsigned long g_005a4004;
extern "C" unsigned long g_005a405a;
extern "C" unsigned long g_005a40c2;
extern "C" unsigned long g_005a4100;
extern "C" unsigned long g_005a4146;
extern "C" unsigned long g_005a41b2;
extern "C" unsigned long g_005a41f8;
extern "C" unsigned long g_005a41fc;
extern "C" unsigned long g_005a4200;
extern "C" unsigned long g_005a4204;
extern "C" unsigned long g_005a4208;
extern "C" unsigned long g_005a420c;
extern "C" unsigned long g_005a4210;
extern "C" unsigned long g_005a4214;
extern "C" unsigned long g_005a423e;
extern "C" unsigned long g_005a4256;
extern "C" unsigned long g_005a4294;
extern "C" unsigned long g_005a4298;
extern "C" unsigned long g_005a42a8;
extern "C" unsigned long g_005a42f0;
extern "C" unsigned long g_005a43b0;
extern "C" unsigned long g_005a43ee;
extern "C" unsigned long g_005a44ee;
extern "C" unsigned long g_005a452c;
extern "C" unsigned long g_005a456c;
extern "C" unsigned long g_005a4570;
extern "C" unsigned long g_005a4574;
extern "C" unsigned long g_005a4578;
extern "C" unsigned long g_005a457c;
extern "C" unsigned long g_005a4580;
extern "C" unsigned long g_005a45f6;
extern "C" unsigned long g_005a4634;
extern "C" unsigned long g_005a469c;
extern "C" unsigned long g_005a46de;
extern "C" unsigned long g_005a4920;
extern "C" unsigned long g_005a4924;
extern "C" unsigned long g_005a4928;
extern "C" unsigned long g_005a492c;
extern "C" unsigned long g_005a4930;
extern "C" unsigned long g_005a4934;
extern "C" unsigned long g_005a4938;
extern "C" unsigned long g_005a493c;
extern "C" unsigned long g_005a4948;
extern "C" unsigned long g_005a4a1c;
extern "C" unsigned long g_005a4ad2;
extern "C" unsigned long g_005a4ad4;
extern "C" unsigned long g_005a4b4c;
extern "C" unsigned long g_005a4b50;
extern "C" unsigned long g_005a4b54;
extern "C" unsigned long g_005a4b58;
bool BLMineCollectHeroItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMineCollectHeroItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectHeroItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMineCollectHeroItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

RoleData* BLMineCollectHeroItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

RoleInfoItemData* BLMineCollectHeroItemPresenter::getRoleInfoData() const
{
  return (RoleInfoItemData*)(*(undefined4 *)(((int)this) + 0x20));
}

void BLMineCollectHeroItemPresenter::tick(float p1)
{
  return;
}

BLMineCollectHeroItemPresenter::~BLMineCollectHeroItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005a3388 + g_005a33f0);
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
  func_0079e45c(&uStack_14,&g_005a33be + g_005a33f4,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMineCollectHeroItemPresenter::setRoleInfoData(RoleInfoItemData* p1)
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

void BLMineCollectHeroItemPresenter::setRoleData(RoleData* p1)
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



BLMineCollectHeroItemPresenter::BLMineCollectHeroItemPresenter()
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
  iVar3 = *(int *)(&g_005a385a + g_005a38b8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005a3888 + g_005a38bc,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}


void BLMineCollectHeroItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a390a + g_005a392c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a3918 + g_005a3930);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005a3926 + g_005a3934);
  return;
}

undefined4 BLMineCollectHeroItemPresenter::create(BLMineCollectHeroItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}







void BLMineCollectHeroItemPresenter::initWithPlayerData(PlayerData* p1)
{
  BLMineCollectHeroItemPresenter::updateData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (11) =====
undefined8 BLMineCollectHeroItemPresenter::onShowBuyYi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMineCollectHeroItemPresenter::onBuyRoleClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectHeroItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectHeroItemPresenter::initWithView(BLMineCollectHeroItemView* p1)
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
  piVar1 = (int *)((BLMineCollectHeroItemView *)(p1))->getBtnRole();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005a3980 + (intptr_t)(g_005a3a70))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLMineCollectHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  uVar2 = (undefined4)(((BLMineCollectHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDiamond());
  puVar6 = (unsigned char *)((char *)&g_005a39aa + (intptr_t)(g_005a3a74));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLMineCollectHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnLock());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  piVar1 = (int *)((BLMineCollectHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_28);
  piVar1 = (int *)((BLMineCollectHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 100);
  piVar3 = (int *)((BLMineCollectHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((BLMineCollectHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))());
  uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar5));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_005a3a78));
  (*pcVar7)(piVar1,uVar2);
  piVar1 = (int *)((BLMineCollectHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  (**(code **)(*(int *)(piVar1) + (0x40)))(piVar1,g_005a3a7c);
  piVar1 = (int *)((BLMineCollectHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_005a3a4e + (intptr_t)(g_005a3a80)),auStack_2c);
  (*pcVar7)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void BLMineCollectHeroItemPresenter::onBuyDiamondComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectHeroItemPresenter::buyRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectHeroItemPresenter::selectRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectHeroItemPresenter::onRole(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectHeroItemPresenter::updateData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectHeroItemPresenter::initWithRoleData(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMineCollectHeroItemPresenter::onBuyYiComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
