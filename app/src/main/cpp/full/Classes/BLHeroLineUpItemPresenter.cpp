#include "BLHeroLineUpItemPresenter.h"
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
#include "BLArenaBuyAlertPresenter.h"
#include "BLArenaBuyAlertView.h"
#include "BLEquipGiftPresenter.h"
#include "BLEquipGiftView.h"
#include "BLHeroLineUpItemView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "CircusData.h"
#include "CircusPlayerinfo.h"
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
extern "C" long long func_0079e49c(...);
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
extern "C" unsigned long UNK_004c0918;
extern "C" unsigned long UNK_004c094e;
extern "C" unsigned long UNK_004c0994;
extern "C" unsigned long UNK_004c09bc;
extern "C" unsigned long UNK_004c0a24;
extern "C" unsigned long UNK_004c0a56;
extern "C" unsigned long UNK_004c0a8c;
extern "C" unsigned long UNK_004c0a8e;
extern "C" unsigned long UNK_004c0aa8;
extern "C" unsigned long UNK_004c0aaa;
extern "C" unsigned long UNK_004c0ad2;
extern "C" unsigned long UNK_004c0aea;
extern "C" unsigned long UNK_004c0b42;
extern "C" unsigned long UNK_004c0b46;
extern "C" unsigned long UNK_004c0b74;
extern "C" unsigned long UNK_004c0b94;
extern "C" unsigned long UNK_004c0be4;
extern "C" unsigned long UNK_004c0c60;
extern "C" unsigned long UNK_004c0c74;
extern "C" unsigned long UNK_004c0cac;
extern "C" unsigned long UNK_004c0cfe;
extern "C" unsigned long UNK_004c0d7a;
extern "C" unsigned long UNK_004c0d88;
extern "C" unsigned long UNK_004c0dea;
extern "C" unsigned long UNK_004c0e18;
extern "C" unsigned long UNK_004c0e64;
extern "C" unsigned long UNK_004c0e66;
extern "C" unsigned long UNK_004c0e9a;
extern "C" unsigned long UNK_004c0ea8;
extern "C" unsigned long UNK_004c0eb6;
extern "C" unsigned long UNK_004c0f10;
extern "C" unsigned long UNK_004c0f3a;
extern "C" unsigned long UNK_004c0fde;
extern "C" unsigned long UNK_004c102a;
extern "C" unsigned long UNK_004c10b8;
extern "C" unsigned long UNK_004c10d4;
extern "C" unsigned long UNK_004c11a8;
extern "C" unsigned long UNK_004c11de;
extern "C" unsigned long UNK_004c1288;
extern "C" unsigned long UNK_004c1332;
extern "C" unsigned long UNK_004c1378;
extern "C" unsigned long UNK_004c13e6;
extern "C" unsigned long UNK_004c1478;
extern "C" unsigned long UNK_004c14c0;
extern "C" unsigned long UNK_004c1576;
extern "C" unsigned long UNK_004c15da;
extern "C" unsigned long UNK_004c1618;
extern "C" unsigned long UNK_004c1672;
extern "C" unsigned long UNK_004c16b0;
extern "C" unsigned long UNK_004c1714;
extern "C" unsigned long UNK_004c1754;
extern "C" unsigned long UNK_004c1916;
extern "C" unsigned long UNK_004c1920;
extern "C" unsigned long UNK_004c1946;
extern "C" unsigned long UNK_004c1b7a;
extern "C" unsigned long UNK_004c1bd2;
extern "C" unsigned long UNK_004c1bdc;
extern "C" unsigned long UNK_004c1c4c;
extern "C" unsigned long UNK_004c1cc2;
extern "C" unsigned long UNK_004c1cde;
extern "C" unsigned long UNK_004c1d04;
extern "C" unsigned long UNK_004c1d60;
extern "C" unsigned long UNK_004c1ec0;
extern "C" unsigned long UNK_004c1efc;
extern "C" unsigned long UNK_004c1f52;
extern "C" unsigned long UNK_004c1f8e;
extern "C" unsigned long UNK_004c1fd2;
extern "C" unsigned long UNK_004c208e;
extern "C" unsigned long UNK_004c20aa;
extern "C" unsigned long UNK_004c20da;
extern "C" unsigned long UNK_004c20f2;
extern "C" unsigned long UNK_004c2156;
extern "C" unsigned long UNK_004c2158;
extern "C" unsigned long UNK_004c21e2;
extern "C" unsigned long _UNK_004c0980;
extern "C" unsigned long _UNK_004c0984;
extern "C" unsigned long _UNK_004c0998;
extern "C" unsigned long _UNK_004c09c0;
extern "C" unsigned long _UNK_004c0b0c;
extern "C" unsigned long _UNK_004c0b10;
extern "C" unsigned long _UNK_004c0b14;
extern "C" unsigned long _UNK_004c0b18;
extern "C" unsigned long _UNK_004c0b1c;
extern "C" unsigned long _UNK_004c0b20;
extern "C" unsigned long _UNK_004c0b24;
extern "C" unsigned long _UNK_004c0b28;
extern "C" unsigned long _UNK_004c0dac;
extern "C" unsigned long _UNK_004c0db0;
extern "C" unsigned long _UNK_004c0db4;
extern "C" unsigned long _UNK_004c0db8;
extern "C" unsigned long _UNK_004c0dbc;
extern "C" unsigned long _UNK_004c0dc0;
extern "C" unsigned long _UNK_004c0dc4;
extern "C" unsigned long _UNK_004c0dc8;
extern "C" unsigned long _UNK_004c0dcc;
extern "C" unsigned long _UNK_004c0dd0;
extern "C" unsigned long _UNK_004c0dd4;
extern "C" unsigned long _UNK_004c0dd8;
extern "C" unsigned long _UNK_004c0e48;
extern "C" unsigned long _UNK_004c0e4c;
extern "C" unsigned long _UNK_004c0e70;
extern "C" unsigned long _UNK_004c0e74;
extern "C" unsigned long _UNK_004c0ebc;
extern "C" unsigned long _UNK_004c0ec0;
extern "C" unsigned long _UNK_004c0ec4;
extern "C" unsigned long _UNK_004c1000;
extern "C" unsigned long _UNK_004c1004;
extern "C" unsigned long _UNK_004c1008;
extern "C" unsigned long _UNK_004c100c;
extern "C" unsigned long _UNK_004c1010;
extern "C" unsigned long _UNK_004c10a8;
extern "C" unsigned long _UNK_004c1438;
extern "C" unsigned long _UNK_004c143c;
extern "C" unsigned long _UNK_004c1440;
extern "C" unsigned long _UNK_004c1444;
extern "C" unsigned long _UNK_004c1448;
extern "C" unsigned long _UNK_004c144c;
extern "C" unsigned long _UNK_004c1450;
extern "C" unsigned long _UNK_004c1454;
extern "C" unsigned long _UNK_004c1458;
extern "C" unsigned long _UNK_004c145c;
extern "C" unsigned long _UNK_004c1460;
extern "C" unsigned long _UNK_004c1464;
extern "C" unsigned long _UNK_004c1468;
extern "C" unsigned long _UNK_004c182c;
extern "C" unsigned long _UNK_004c1830;
extern "C" unsigned long _UNK_004c1834;
extern "C" unsigned long _UNK_004c1838;
extern "C" unsigned long _UNK_004c183c;
extern "C" unsigned long _UNK_004c1840;
extern "C" unsigned long _UNK_004c1844;
extern "C" unsigned long _UNK_004c1848;
extern "C" unsigned long _UNK_004c184c;
extern "C" unsigned long _UNK_004c1a6c;
extern "C" unsigned long _UNK_004c1a70;
extern "C" unsigned long _UNK_004c1a74;
extern "C" unsigned long _UNK_004c1a78;
extern "C" unsigned long _UNK_004c1a7c;
extern "C" unsigned long _UNK_004c1e40;
extern "C" unsigned long _UNK_004c1e44;
extern "C" unsigned long _UNK_004c1e48;
extern "C" unsigned long _UNK_004c1e4c;
extern "C" unsigned long _UNK_004c1e50;
extern "C" unsigned long _UNK_004c1e54;
extern "C" unsigned long _UNK_004c1e58;
extern "C" unsigned long _UNK_004c1e5c;
extern "C" unsigned long _UNK_004c1e60;
extern "C" unsigned long _UNK_004c1e64;
extern "C" unsigned long _UNK_004c2060;
extern "C" unsigned long _UNK_004c2064;
extern "C" unsigned long _UNK_004c2068;
extern "C" unsigned long _UNK_004c206c;
extern "C" unsigned long _UNK_004c2070;
extern "C" unsigned long _UNK_004c2134;
extern "C" unsigned long _UNK_004c2138;
extern "C" unsigned long _UNK_004c213c;
extern "C" unsigned long _UNK_004c2140;
extern "C" unsigned long _UNK_004c21e8;
extern "C" unsigned long _UNK_004c21ec;
extern "C" unsigned long _UNK_004c21f0;
extern "C" unsigned long g_004c0918;
extern "C" unsigned long g_004c094e;
extern "C" unsigned long g_004c0980;
extern "C" unsigned long g_004c0984;
extern "C" unsigned long g_004c0994;
extern "C" unsigned long g_004c0998;
extern "C" unsigned long g_004c09bc;
extern "C" unsigned long g_004c09c0;
extern "C" unsigned long g_004c0a24;
extern "C" unsigned long g_004c0a56;
extern "C" unsigned long g_004c0a8c;
extern "C" unsigned long g_004c0a8e;
extern "C" unsigned long g_004c0aa8;
extern "C" unsigned long g_004c0aaa;
extern "C" unsigned long g_004c0ad2;
extern "C" unsigned long g_004c0aea;
extern "C" unsigned long g_004c0b0c;
extern "C" unsigned long g_004c0b10;
extern "C" unsigned long g_004c0b14;
extern "C" unsigned long g_004c0b18;
extern "C" unsigned long g_004c0b1c;
extern "C" unsigned long g_004c0b20;
extern "C" unsigned long g_004c0b24;
extern "C" unsigned long g_004c0b28;
extern "C" unsigned long g_004c0b42;
extern "C" unsigned long g_004c0b46;
extern "C" unsigned long g_004c0b74;
extern "C" unsigned long g_004c0b94;
extern "C" unsigned long g_004c0be4;
extern "C" unsigned long g_004c0c60;
extern "C" unsigned long g_004c0c74;
extern "C" unsigned long g_004c0cac;
extern "C" unsigned long g_004c0cfe;
extern "C" unsigned long g_004c0d7a;
extern "C" unsigned long g_004c0d88;
extern "C" unsigned long g_004c0dac;
extern "C" unsigned long g_004c0db0;
extern "C" unsigned long g_004c0db4;
extern "C" unsigned long g_004c0db8;
extern "C" unsigned long g_004c0dbc;
extern "C" unsigned long g_004c0dc0;
extern "C" unsigned long g_004c0dc4;
extern "C" unsigned long g_004c0dc8;
extern "C" unsigned long g_004c0dcc;
extern "C" unsigned long g_004c0dd0;
extern "C" unsigned long g_004c0dd4;
extern "C" unsigned long g_004c0dd8;
extern "C" unsigned long g_004c0dea;
extern "C" unsigned long g_004c0e18;
extern "C" unsigned long g_004c0e48;
extern "C" unsigned long g_004c0e4c;
extern "C" unsigned long g_004c0e64;
extern "C" unsigned long g_004c0e66;
extern "C" unsigned long g_004c0e70;
extern "C" unsigned long g_004c0e74;
extern "C" unsigned long g_004c0e9a;
extern "C" unsigned long g_004c0ea8;
extern "C" unsigned long g_004c0eb6;
extern "C" unsigned long g_004c0ebc;
extern "C" unsigned long g_004c0ec0;
extern "C" unsigned long g_004c0ec4;
extern "C" unsigned long g_004c0f10;
extern "C" unsigned long g_004c0f3a;
extern "C" unsigned long g_004c0fde;
extern "C" unsigned long g_004c1000;
extern "C" unsigned long g_004c1004;
extern "C" unsigned long g_004c1008;
extern "C" unsigned long g_004c100c;
extern "C" unsigned long g_004c1010;
extern "C" unsigned long g_004c102a;
extern "C" unsigned long g_004c10a8;
extern "C" unsigned long g_004c10b8;
extern "C" unsigned long g_004c10d4;
extern "C" unsigned long g_004c11a8;
extern "C" unsigned long g_004c11de;
extern "C" unsigned long g_004c1288;
extern "C" unsigned long g_004c1332;
extern "C" unsigned long g_004c1378;
extern "C" unsigned long g_004c13e6;
extern "C" unsigned long g_004c1438;
extern "C" unsigned long g_004c143c;
extern "C" unsigned long g_004c1440;
extern "C" unsigned long g_004c1444;
extern "C" unsigned long g_004c1448;
extern "C" unsigned long g_004c144c;
extern "C" unsigned long g_004c1450;
extern "C" unsigned long g_004c1454;
extern "C" unsigned long g_004c1458;
extern "C" unsigned long g_004c145c;
extern "C" unsigned long g_004c1460;
extern "C" unsigned long g_004c1464;
extern "C" unsigned long g_004c1468;
extern "C" unsigned long g_004c1478;
extern "C" unsigned long g_004c14c0;
extern "C" unsigned long g_004c1576;
extern "C" unsigned long g_004c15da;
extern "C" unsigned long g_004c1618;
extern "C" unsigned long g_004c1672;
extern "C" unsigned long g_004c16b0;
extern "C" unsigned long g_004c1714;
extern "C" unsigned long g_004c1754;
extern "C" unsigned long g_004c182c;
extern "C" unsigned long g_004c1830;
extern "C" unsigned long g_004c1834;
extern "C" unsigned long g_004c1838;
extern "C" unsigned long g_004c183c;
extern "C" unsigned long g_004c1840;
extern "C" unsigned long g_004c1844;
extern "C" unsigned long g_004c1848;
extern "C" unsigned long g_004c184c;
extern "C" unsigned long g_004c1916;
extern "C" unsigned long g_004c1920;
extern "C" unsigned long g_004c1946;
extern "C" unsigned long g_004c1a6c;
extern "C" unsigned long g_004c1a70;
extern "C" unsigned long g_004c1a74;
extern "C" unsigned long g_004c1a78;
extern "C" unsigned long g_004c1a7c;
extern "C" unsigned long g_004c1b7a;
extern "C" unsigned long g_004c1bd2;
extern "C" unsigned long g_004c1bdc;
extern "C" unsigned long g_004c1c4c;
extern "C" unsigned long g_004c1cc2;
extern "C" unsigned long g_004c1cde;
extern "C" unsigned long g_004c1d04;
extern "C" unsigned long g_004c1d60;
extern "C" unsigned long g_004c1e40;
extern "C" unsigned long g_004c1e44;
extern "C" unsigned long g_004c1e48;
extern "C" unsigned long g_004c1e4c;
extern "C" unsigned long g_004c1e50;
extern "C" unsigned long g_004c1e54;
extern "C" unsigned long g_004c1e58;
extern "C" unsigned long g_004c1e5c;
extern "C" unsigned long g_004c1e60;
extern "C" unsigned long g_004c1e64;
extern "C" unsigned long g_004c1ec0;
extern "C" unsigned long g_004c1efc;
extern "C" unsigned long g_004c1f52;
extern "C" unsigned long g_004c1f8e;
extern "C" unsigned long g_004c1fd2;
extern "C" unsigned long g_004c2060;
extern "C" unsigned long g_004c2064;
extern "C" unsigned long g_004c2068;
extern "C" unsigned long g_004c206c;
extern "C" unsigned long g_004c2070;
extern "C" unsigned long g_004c208e;
extern "C" unsigned long g_004c20aa;
extern "C" unsigned long g_004c20da;
extern "C" unsigned long g_004c20f2;
extern "C" unsigned long g_004c2134;
extern "C" unsigned long g_004c2138;
extern "C" unsigned long g_004c213c;
extern "C" unsigned long g_004c2140;
extern "C" unsigned long g_004c2156;
extern "C" unsigned long g_004c2158;
extern "C" unsigned long g_004c21e2;
extern "C" unsigned long g_004c21e8;
extern "C" unsigned long g_004c21ec;
extern "C" unsigned long g_004c21f0;
RoleData* BLHeroLineUpItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

RoleInfoItemData* BLHeroLineUpItemPresenter::getRoleInfoData() const
{
  return (RoleInfoItemData*)(*(undefined4 *)(((int)this) + 0x20));
}

void BLHeroLineUpItemPresenter::tick(float p1)
{
  return;
}

bool BLHeroLineUpItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLHeroLineUpItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroLineUpItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLHeroLineUpItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

BLHeroLineUpItemPresenter::~BLHeroLineUpItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_004c0918 + g_004c0980);
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
  func_0079e45c(&uStack_14,&g_004c094e + g_004c0984,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLHeroLineUpItemPresenter::setRoleInfoData(RoleInfoItemData* p1)
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

void BLHeroLineUpItemPresenter::setRoleData(RoleData* p1)
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



BLHeroLineUpItemPresenter::BLHeroLineUpItemPresenter()
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
  iVar3 = *(int *)(&g_004c0dea + g_004c0e48);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_004c0e18 + g_004c0e4c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}


void BLHeroLineUpItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_004c0e9a + g_004c0ebc);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_004c0ea8 + g_004c0ec0);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_004c0eb6 + g_004c0ec4);
  return;
}

undefined4 BLHeroLineUpItemPresenter::create(BLHeroLineUpItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}


void BLHeroLineUpItemPresenter::on(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}




void BLHeroLineUpItemPresenter::initWithPlayerData(PlayerData* p1)
{
  BLHeroLineUpItemPresenter::updateData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (11) =====
undefined8 BLHeroLineUpItemPresenter::onShowBuyYi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLHeroLineUpItemPresenter::onBuyRoleClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpItemPresenter::initWithView(BLHeroLineUpItemView* p1)
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
  piVar1 = (int *)((BLHeroLineUpItemView *)(p1))->getBtnRole();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004c0f10 + (intptr_t)(g_004c1000))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((BLHeroLineUpItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars();
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  uVar2 = (undefined4)(((BLHeroLineUpItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDiamond());
  puVar6 = (unsigned char *)((char *)&g_004c0f3a + (intptr_t)(g_004c1004));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  uVar2 = (undefined4)(((BLHeroLineUpItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnLock());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  piVar1 = (int *)((BLHeroLineUpItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_28);
  piVar1 = (int *)((BLHeroLineUpItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 100);
  piVar3 = (int *)((BLHeroLineUpItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((BLHeroLineUpItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))());
  uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar5));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_004c1008));
  (*pcVar7)(piVar1,uVar2);
  piVar1 = (int *)((BLHeroLineUpItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  (**(code **)(*(int *)(piVar1) + (0x40)))(piVar1,g_004c100c);
  piVar1 = (int *)((BLHeroLineUpItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_004c0fde + (intptr_t)(g_004c1010)),auStack_2c);
  (*pcVar7)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void BLHeroLineUpItemPresenter::onBuyDiamondComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpItemPresenter::buyRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpItemPresenter::updateData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpItemPresenter::initWithRoleData(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpItemPresenter::selectRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpItemPresenter::onRole(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLHeroLineUpItemPresenter::onBuyYiComplete(cocos2d::CCObject* p1)
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
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_004c2156 + (intptr_t)(g_004c21ec))),
                              *(undefined4 *)((unsigned char *)((char *)&g_004c2158 + (intptr_t)(g_004c21e8))),0), iVar1 != 0)) {
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
          BLHeroLineUpItemPresenter::selectRole();
        }
      }
      BLHeroLineUpItemPresenter::updateData();
      uVar6 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)uVar6)->postNotification((char const*)(unsigned char *)((char *)&g_004c21e2 + (intptr_t)(g_004c21f0)));
    }
  }
  return;
}
