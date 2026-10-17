#include "BLSweepHeroItemPresenter.h"
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
#include "BLPageControl.h"
#include "BLSweepBuyHeroPresenter.h"
#include "BLSweepBuyHeroView.h"
#include "BLSweepHeroItemView.h"
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
using namespace CocosDenshion;

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
extern "C" unsigned long UNK_005d4ff8;
extern "C" unsigned long UNK_005d502e;
extern "C" unsigned long UNK_005d5074;
extern "C" unsigned long UNK_005d509c;
extern "C" unsigned long UNK_005d5104;
extern "C" unsigned long UNK_005d5136;
extern "C" unsigned long UNK_005d516c;
extern "C" unsigned long UNK_005d516e;
extern "C" unsigned long UNK_005d5188;
extern "C" unsigned long UNK_005d518a;
extern "C" unsigned long UNK_005d51b2;
extern "C" unsigned long UNK_005d51ca;
extern "C" unsigned long UNK_005d5222;
extern "C" unsigned long UNK_005d5226;
extern "C" unsigned long UNK_005d5254;
extern "C" unsigned long UNK_005d5274;
extern "C" unsigned long UNK_005d52c4;
extern "C" unsigned long UNK_005d5340;
extern "C" unsigned long UNK_005d5354;
extern "C" unsigned long UNK_005d538c;
extern "C" unsigned long UNK_005d53de;
extern "C" unsigned long UNK_005d545a;
extern "C" unsigned long UNK_005d5468;
extern "C" unsigned long UNK_005d54ca;
extern "C" unsigned long UNK_005d54f8;
extern "C" unsigned long UNK_005d5544;
extern "C" unsigned long UNK_005d5546;
extern "C" unsigned long UNK_005d557a;
extern "C" unsigned long UNK_005d5588;
extern "C" unsigned long UNK_005d5596;
extern "C" unsigned long UNK_005d55f0;
extern "C" unsigned long UNK_005d561a;
extern "C" unsigned long UNK_005d56be;
extern "C" unsigned long UNK_005d5706;
extern "C" unsigned long UNK_005d57dc;
extern "C" unsigned long UNK_005d580a;
extern "C" unsigned long UNK_005d5848;
extern "C" unsigned long UNK_005d58e0;
extern "C" unsigned long UNK_005d591e;
extern "C" unsigned long UNK_005d5962;
extern "C" unsigned long UNK_005d59a0;
extern "C" unsigned long UNK_005d59e4;
extern "C" unsigned long UNK_005d5a70;
extern "C" unsigned long UNK_005d5a84;
extern "C" unsigned long UNK_005d5aa0;
extern "C" unsigned long UNK_005d5b74;
extern "C" unsigned long UNK_005d5baa;
extern "C" unsigned long UNK_005d5c54;
extern "C" unsigned long UNK_005d5cfe;
extern "C" unsigned long UNK_005d5d44;
extern "C" unsigned long UNK_005d5db2;
extern "C" unsigned long UNK_005d5e44;
extern "C" unsigned long UNK_005d5e8c;
extern "C" unsigned long UNK_005d5f90;
extern "C" unsigned long UNK_005d5fd2;
extern "C" unsigned long UNK_005d601e;
extern "C" unsigned long UNK_005d6060;
extern "C" unsigned long UNK_005d60ba;
extern "C" unsigned long UNK_005d60fa;
extern "C" unsigned long UNK_005d6290;
extern "C" unsigned long UNK_005d629a;
extern "C" unsigned long UNK_005d62c0;
extern "C" unsigned long UNK_005d64aa;
extern "C" unsigned long UNK_005d64ac;
extern "C" unsigned long UNK_005d6536;
extern "C" unsigned long _UNK_005d5060;
extern "C" unsigned long _UNK_005d5064;
extern "C" unsigned long _UNK_005d5078;
extern "C" unsigned long _UNK_005d50a0;
extern "C" unsigned long _UNK_005d51ec;
extern "C" unsigned long _UNK_005d51f0;
extern "C" unsigned long _UNK_005d51f4;
extern "C" unsigned long _UNK_005d51f8;
extern "C" unsigned long _UNK_005d51fc;
extern "C" unsigned long _UNK_005d5200;
extern "C" unsigned long _UNK_005d5204;
extern "C" unsigned long _UNK_005d5208;
extern "C" unsigned long _UNK_005d548c;
extern "C" unsigned long _UNK_005d5490;
extern "C" unsigned long _UNK_005d5494;
extern "C" unsigned long _UNK_005d5498;
extern "C" unsigned long _UNK_005d549c;
extern "C" unsigned long _UNK_005d54a0;
extern "C" unsigned long _UNK_005d54a4;
extern "C" unsigned long _UNK_005d54a8;
extern "C" unsigned long _UNK_005d54ac;
extern "C" unsigned long _UNK_005d54b0;
extern "C" unsigned long _UNK_005d54b4;
extern "C" unsigned long _UNK_005d54b8;
extern "C" unsigned long _UNK_005d5528;
extern "C" unsigned long _UNK_005d552c;
extern "C" unsigned long _UNK_005d5550;
extern "C" unsigned long _UNK_005d5554;
extern "C" unsigned long _UNK_005d559c;
extern "C" unsigned long _UNK_005d55a0;
extern "C" unsigned long _UNK_005d55a4;
extern "C" unsigned long _UNK_005d56e0;
extern "C" unsigned long _UNK_005d56e4;
extern "C" unsigned long _UNK_005d56e8;
extern "C" unsigned long _UNK_005d56ec;
extern "C" unsigned long _UNK_005d56f0;
extern "C" unsigned long _UNK_005d5784;
extern "C" unsigned long _UNK_005d5a2c;
extern "C" unsigned long _UNK_005d5a30;
extern "C" unsigned long _UNK_005d5a34;
extern "C" unsigned long _UNK_005d5a38;
extern "C" unsigned long _UNK_005d5a3c;
extern "C" unsigned long _UNK_005d5a40;
extern "C" unsigned long _UNK_005d5a44;
extern "C" unsigned long _UNK_005d5a48;
extern "C" unsigned long _UNK_005d5a74;
extern "C" unsigned long _UNK_005d5e04;
extern "C" unsigned long _UNK_005d5e08;
extern "C" unsigned long _UNK_005d5e0c;
extern "C" unsigned long _UNK_005d5e10;
extern "C" unsigned long _UNK_005d5e14;
extern "C" unsigned long _UNK_005d5e18;
extern "C" unsigned long _UNK_005d5e1c;
extern "C" unsigned long _UNK_005d5e20;
extern "C" unsigned long _UNK_005d5e24;
extern "C" unsigned long _UNK_005d5e28;
extern "C" unsigned long _UNK_005d5e2c;
extern "C" unsigned long _UNK_005d5e30;
extern "C" unsigned long _UNK_005d5e34;
extern "C" unsigned long _UNK_005d61fc;
extern "C" unsigned long _UNK_005d6200;
extern "C" unsigned long _UNK_005d6204;
extern "C" unsigned long _UNK_005d6208;
extern "C" unsigned long _UNK_005d620c;
extern "C" unsigned long _UNK_005d6210;
extern "C" unsigned long _UNK_005d6214;
extern "C" unsigned long _UNK_005d6218;
extern "C" unsigned long _UNK_005d63e4;
extern "C" unsigned long _UNK_005d63e8;
extern "C" unsigned long _UNK_005d63ec;
extern "C" unsigned long _UNK_005d63f0;
extern "C" unsigned long _UNK_005d63f4;
extern "C" unsigned long _UNK_005d653c;
extern "C" unsigned long _UNK_005d6540;
extern "C" unsigned long _UNK_005d6544;
extern "C" unsigned long g_005d4ff8;
extern "C" unsigned long g_005d502e;
extern "C" unsigned long g_005d5060;
extern "C" unsigned long g_005d5064;
extern "C" unsigned long g_005d5074;
extern "C" unsigned long g_005d5078;
extern "C" unsigned long g_005d509c;
extern "C" unsigned long g_005d50a0;
extern "C" unsigned long g_005d5104;
extern "C" unsigned long g_005d5136;
extern "C" unsigned long g_005d516c;
extern "C" unsigned long g_005d516e;
extern "C" unsigned long g_005d5188;
extern "C" unsigned long g_005d518a;
extern "C" unsigned long g_005d51b2;
extern "C" unsigned long g_005d51ca;
extern "C" unsigned long g_005d51ec;
extern "C" unsigned long g_005d51f0;
extern "C" unsigned long g_005d51f4;
extern "C" unsigned long g_005d51f8;
extern "C" unsigned long g_005d51fc;
extern "C" unsigned long g_005d5200;
extern "C" unsigned long g_005d5204;
extern "C" unsigned long g_005d5208;
extern "C" unsigned long g_005d5222;
extern "C" unsigned long g_005d5226;
extern "C" unsigned long g_005d5254;
extern "C" unsigned long g_005d5274;
extern "C" unsigned long g_005d52c4;
extern "C" unsigned long g_005d5340;
extern "C" unsigned long g_005d5354;
extern "C" unsigned long g_005d538c;
extern "C" unsigned long g_005d53de;
extern "C" unsigned long g_005d545a;
extern "C" unsigned long g_005d5468;
extern "C" unsigned long g_005d548c;
extern "C" unsigned long g_005d5490;
extern "C" unsigned long g_005d5494;
extern "C" unsigned long g_005d5498;
extern "C" unsigned long g_005d549c;
extern "C" unsigned long g_005d54a0;
extern "C" unsigned long g_005d54a4;
extern "C" unsigned long g_005d54a8;
extern "C" unsigned long g_005d54ac;
extern "C" unsigned long g_005d54b0;
extern "C" unsigned long g_005d54b4;
extern "C" unsigned long g_005d54b8;
extern "C" unsigned long g_005d54ca;
extern "C" unsigned long g_005d54f8;
extern "C" unsigned long g_005d5528;
extern "C" unsigned long g_005d552c;
extern "C" unsigned long g_005d5544;
extern "C" unsigned long g_005d5546;
extern "C" unsigned long g_005d5550;
extern "C" unsigned long g_005d5554;
extern "C" unsigned long g_005d557a;
extern "C" unsigned long g_005d5588;
extern "C" unsigned long g_005d5596;
extern "C" unsigned long g_005d559c;
extern "C" unsigned long g_005d55a0;
extern "C" unsigned long g_005d55a4;
extern "C" unsigned long g_005d55f0;
extern "C" unsigned long g_005d561a;
extern "C" unsigned long g_005d56be;
extern "C" unsigned long g_005d56e0;
extern "C" unsigned long g_005d56e4;
extern "C" unsigned long g_005d56e8;
extern "C" unsigned long g_005d56ec;
extern "C" unsigned long g_005d56f0;
extern "C" unsigned long g_005d5706;
extern "C" unsigned long g_005d5784;
extern "C" unsigned long g_005d57dc;
extern "C" unsigned long g_005d580a;
extern "C" unsigned long g_005d5848;
extern "C" unsigned long g_005d58e0;
extern "C" unsigned long g_005d591e;
extern "C" unsigned long g_005d5962;
extern "C" unsigned long g_005d59a0;
extern "C" unsigned long g_005d59e4;
extern "C" unsigned long g_005d5a2c;
extern "C" unsigned long g_005d5a30;
extern "C" unsigned long g_005d5a34;
extern "C" unsigned long g_005d5a38;
extern "C" unsigned long g_005d5a3c;
extern "C" unsigned long g_005d5a40;
extern "C" unsigned long g_005d5a44;
extern "C" unsigned long g_005d5a48;
extern "C" unsigned long g_005d5a70;
extern "C" unsigned long g_005d5a74;
extern "C" unsigned long g_005d5a84;
extern "C" unsigned long g_005d5aa0;
extern "C" unsigned long g_005d5b74;
extern "C" unsigned long g_005d5baa;
extern "C" unsigned long g_005d5c54;
extern "C" unsigned long g_005d5cfe;
extern "C" unsigned long g_005d5d44;
extern "C" unsigned long g_005d5db2;
extern "C" unsigned long g_005d5e04;
extern "C" unsigned long g_005d5e08;
extern "C" unsigned long g_005d5e0c;
extern "C" unsigned long g_005d5e10;
extern "C" unsigned long g_005d5e14;
extern "C" unsigned long g_005d5e18;
extern "C" unsigned long g_005d5e1c;
extern "C" unsigned long g_005d5e20;
extern "C" unsigned long g_005d5e24;
extern "C" unsigned long g_005d5e28;
extern "C" unsigned long g_005d5e2c;
extern "C" unsigned long g_005d5e30;
extern "C" unsigned long g_005d5e34;
extern "C" unsigned long g_005d5e44;
extern "C" unsigned long g_005d5e8c;
extern "C" unsigned long g_005d5f90;
extern "C" unsigned long g_005d5fd2;
extern "C" unsigned long g_005d601e;
extern "C" unsigned long g_005d6060;
extern "C" unsigned long g_005d60ba;
extern "C" unsigned long g_005d60fa;
extern "C" unsigned long g_005d61fc;
extern "C" unsigned long g_005d6200;
extern "C" unsigned long g_005d6204;
extern "C" unsigned long g_005d6208;
extern "C" unsigned long g_005d620c;
extern "C" unsigned long g_005d6210;
extern "C" unsigned long g_005d6214;
extern "C" unsigned long g_005d6218;
extern "C" unsigned long g_005d6290;
extern "C" unsigned long g_005d629a;
extern "C" unsigned long g_005d62c0;
extern "C" unsigned long g_005d63e4;
extern "C" unsigned long g_005d63e8;
extern "C" unsigned long g_005d63ec;
extern "C" unsigned long g_005d63f0;
extern "C" unsigned long g_005d63f4;
extern "C" unsigned long g_005d64aa;
extern "C" unsigned long g_005d64ac;
extern "C" unsigned long g_005d6536;
extern "C" unsigned long g_005d653c;
extern "C" unsigned long g_005d6540;
extern "C" unsigned long g_005d6544;
bool BLSweepHeroItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLSweepHeroItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepHeroItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLSweepHeroItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

RoleData* BLSweepHeroItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

RoleInfoItemData* BLSweepHeroItemPresenter::getRoleInfoData() const
{
  return (RoleInfoItemData*)(*(undefined4 *)(((int)this) + 0x20));
}

void BLSweepHeroItemPresenter::tick(float p1)
{
  return;
}

BLSweepHeroItemPresenter::~BLSweepHeroItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_005d4ff8 + g_005d5060);
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
  func_0079e45c(&uStack_14,&g_005d502e + g_005d5064,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLSweepHeroItemPresenter::setRoleInfoData(RoleInfoItemData* p1)
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

void BLSweepHeroItemPresenter::setRoleData(RoleData* p1)
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



BLSweepHeroItemPresenter::BLSweepHeroItemPresenter()
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
  iVar3 = *(int *)(&g_005d54ca + g_005d5528);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_005d54f8 + g_005d552c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}


void BLSweepHeroItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005d557a + g_005d559c);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005d5588 + g_005d55a0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_005d5596 + g_005d55a4);
  return;
}

undefined4 BLSweepHeroItemPresenter::create(BLSweepHeroItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}




void BLSweepHeroItemPresenter::onRole(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)(((int)this) + 0x1c) + 0x38))();
  if (iVar1 == 0) {
    uVar2 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
    ((CocosDenshion::SimpleAudioEngine *)uVar2)->playEffect((char const*)&g_005d5a70 + g_005d5a74, 0);
  }
  else {
    BLSweepHeroItemPresenter::selectRole();
  }
  return;
}



void BLSweepHeroItemPresenter::initWithPlayerData(PlayerData* p1)
{
  BLSweepHeroItemPresenter::updateData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (10) =====
undefined8 BLSweepHeroItemPresenter::onShowBuyYi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLSweepHeroItemPresenter::onBuyRoleClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepHeroItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepHeroItemPresenter::initWithView(BLSweepHeroItemView* p1)
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
  piVar1 = (int *)((BLSweepHeroItemView *)(p1))->getBtnRole();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_005d55f0 + (intptr_t)(g_005d56e0))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLSweepHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  uVar2 = (undefined4)(((BLSweepHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDiamond());
  puVar6 = (unsigned char *)((char *)&g_005d561a + (intptr_t)(g_005d56e4));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLSweepHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnLock());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  piVar1 = (int *)((BLSweepHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_28);
  piVar1 = (int *)((BLSweepHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 100);
  piVar3 = (int *)((BLSweepHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((BLSweepHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))());
  uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar5));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_005d56e8));
  (*pcVar7)(piVar1,uVar2);
  piVar1 = (int *)((BLSweepHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  (**(code **)(*(int *)(piVar1) + (0x40)))(piVar1,g_005d56ec);
  piVar1 = (int *)((BLSweepHeroItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_005d56be + (intptr_t)(g_005d56f0)),auStack_2c);
  (*pcVar7)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void BLSweepHeroItemPresenter::onBuyDiamondComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepHeroItemPresenter::selectRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepHeroItemPresenter::buyRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepHeroItemPresenter::updateData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepHeroItemPresenter::initWithRoleData(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLSweepHeroItemPresenter::onBuyYiComplete(cocos2d::CCObject* p1)
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
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_005d64aa + (intptr_t)(g_005d6540))),
                              *(undefined4 *)((unsigned char *)((char *)&g_005d64ac + (intptr_t)(g_005d653c))),0), iVar1 != 0)) {
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
          BLSweepHeroItemPresenter::selectRole();
        }
      }
      BLSweepHeroItemPresenter::updateData();
      uVar6 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)uVar6)->postNotification((char const*)(unsigned char *)((char *)&g_005d6536 + (intptr_t)(g_005d6544)));
    }
  }
  return;
}
