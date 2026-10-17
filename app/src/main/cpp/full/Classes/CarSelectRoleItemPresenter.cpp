#include "CarSelectRoleItemPresenter.h"
#include "CCLabelTTF.h"
#include "CCDictionary.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCDirector.h"
#include "RoleInfoItemData.h"
#include "RoleData.h"
#include "ADManager.h"
#include "BLBuyRoleAlertPresenter.h"
#include "BLBuyRoleAlertView.h"
#include "BLEquipGiftPresenter.h"
#include "BLEquipGiftView.h"
#include "BLLanguage.h"
#include "BLLeakUtils.h"
#include "BLPageControl.h"
#include "CarHttpUtil.h"
#include "CarSelectRoleItemView.h"
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
extern "C" long long mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_(...);

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
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5dc(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e904(...);
extern "C" long long func_0079e914(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_006bc54c;
extern "C" unsigned long UNK_006bc582;
extern "C" unsigned long UNK_006bc5c8;
extern "C" unsigned long UNK_006bc5f0;
extern "C" unsigned long UNK_006bc658;
extern "C" unsigned long UNK_006bc68a;
extern "C" unsigned long UNK_006bc6c0;
extern "C" unsigned long UNK_006bc6c2;
extern "C" unsigned long UNK_006bc6dc;
extern "C" unsigned long UNK_006bc6de;
extern "C" unsigned long UNK_006bc706;
extern "C" unsigned long UNK_006bc71e;
extern "C" unsigned long UNK_006bc776;
extern "C" unsigned long UNK_006bc77a;
extern "C" unsigned long UNK_006bc7c2;
extern "C" unsigned long UNK_006bc83e;
extern "C" unsigned long UNK_006bc852;
extern "C" unsigned long UNK_006bc86c;
extern "C" unsigned long UNK_006bc87a;
extern "C" unsigned long UNK_006bc886;
extern "C" unsigned long UNK_006bc8a0;
extern "C" unsigned long UNK_006bc8c0;
extern "C" unsigned long UNK_006bc920;
extern "C" unsigned long UNK_006bc99c;
extern "C" unsigned long UNK_006bc9ba;
extern "C" unsigned long UNK_006bc9d8;
extern "C" unsigned long UNK_006bc9ee;
extern "C" unsigned long UNK_006bca28;
extern "C" unsigned long UNK_006bca84;
extern "C" unsigned long UNK_006bcafa;
extern "C" unsigned long UNK_006bcb28;
extern "C" unsigned long UNK_006bcba6;
extern "C" unsigned long UNK_006bcbb4;
extern "C" unsigned long UNK_006bcbc2;
extern "C" unsigned long UNK_006bcbe8;
extern "C" unsigned long UNK_006bcbea;
extern "C" unsigned long UNK_006bcc20;
extern "C" unsigned long UNK_006bcc4a;
extern "C" unsigned long UNK_006bccee;
extern "C" unsigned long UNK_006bcd38;
extern "C" unsigned long UNK_006bcd6c;
extern "C" unsigned long UNK_006bce34;
extern "C" unsigned long UNK_006bce36;
extern "C" unsigned long UNK_006bcf00;
extern "C" unsigned long UNK_006bcf42;
extern "C" unsigned long UNK_006bcf84;
extern "C" unsigned long UNK_006bd030;
extern "C" unsigned long UNK_006bd072;
extern "C" unsigned long UNK_006bd0b4;
extern "C" unsigned long UNK_006bd180;
extern "C" unsigned long UNK_006bd1c2;
extern "C" unsigned long UNK_006bd204;
extern "C" unsigned long UNK_006bd2ae;
extern "C" unsigned long UNK_006bd2f0;
extern "C" unsigned long UNK_006bd332;
extern "C" unsigned long UNK_006bd390;
extern "C" unsigned long UNK_006bd3d0;
extern "C" unsigned long UNK_006bd4a4;
extern "C" unsigned long UNK_006bd4f4;
extern "C" unsigned long UNK_006bd532;
extern "C" unsigned long UNK_006bd5d4;
extern "C" unsigned long UNK_006bd612;
extern "C" unsigned long UNK_006bd770;
extern "C" unsigned long UNK_006bd79c;
extern "C" unsigned long UNK_006bd7c2;
extern "C" unsigned long UNK_006bd876;
extern "C" unsigned long UNK_006bd8f8;
extern "C" unsigned long UNK_006bd914;
extern "C" unsigned long UNK_006bd9e8;
extern "C" unsigned long UNK_006bda1e;
extern "C" unsigned long UNK_006bdac8;
extern "C" unsigned long UNK_006bdbb6;
extern "C" unsigned long UNK_006bdbfa;
extern "C" unsigned long UNK_006bdc56;
extern "C" unsigned long UNK_006bdc88;
extern "C" unsigned long UNK_006bdcdc;
extern "C" unsigned long UNK_006bdd3e;
extern "C" unsigned long UNK_006bdd96;
extern "C" unsigned long UNK_006bdde8;
extern "C" unsigned long UNK_006bde54;
extern "C" unsigned long UNK_006bde94;
extern "C" unsigned long UNK_006bdf20;
extern "C" unsigned long UNK_006bdf8a;
extern "C" unsigned long UNK_006be0c2;
extern "C" unsigned long UNK_006be734;
extern "C" unsigned long UNK_006be750;
extern "C" unsigned long UNK_006be784;
extern "C" unsigned long UNK_006be7ba;
extern "C" unsigned long UNK_006be7bc;
extern "C" unsigned long UNK_006be85e;
extern "C" unsigned long _UNK_006bc5b4;
extern "C" unsigned long _UNK_006bc5b8;
extern "C" unsigned long _UNK_006bc5cc;
extern "C" unsigned long _UNK_006bc5f4;
extern "C" unsigned long _UNK_006bc740;
extern "C" unsigned long _UNK_006bc744;
extern "C" unsigned long _UNK_006bc748;
extern "C" unsigned long _UNK_006bc74c;
extern "C" unsigned long _UNK_006bc750;
extern "C" unsigned long _UNK_006bc754;
extern "C" unsigned long _UNK_006bc758;
extern "C" unsigned long _UNK_006bc75c;
extern "C" unsigned long _UNK_006bcaa4;
extern "C" unsigned long _UNK_006bcaa8;
extern "C" unsigned long _UNK_006bcaac;
extern "C" unsigned long _UNK_006bcab0;
extern "C" unsigned long _UNK_006bcab4;
extern "C" unsigned long _UNK_006bcab8;
extern "C" unsigned long _UNK_006bcabc;
extern "C" unsigned long _UNK_006bcac0;
extern "C" unsigned long _UNK_006bcac4;
extern "C" unsigned long _UNK_006bcac8;
extern "C" unsigned long _UNK_006bcacc;
extern "C" unsigned long _UNK_006bcad0;
extern "C" unsigned long _UNK_006bcad4;
extern "C" unsigned long _UNK_006bcad8;
extern "C" unsigned long _UNK_006bcadc;
extern "C" unsigned long _UNK_006bcae0;
extern "C" unsigned long _UNK_006bcae4;
extern "C" unsigned long _UNK_006bcae8;
extern "C" unsigned long _UNK_006bcb58;
extern "C" unsigned long _UNK_006bcb5c;
extern "C" unsigned long _UNK_006bcbc8;
extern "C" unsigned long _UNK_006bcbcc;
extern "C" unsigned long _UNK_006bcbd0;
extern "C" unsigned long _UNK_006bcbf4;
extern "C" unsigned long _UNK_006bcbf8;
extern "C" unsigned long _UNK_006bcd10;
extern "C" unsigned long _UNK_006bcd14;
extern "C" unsigned long _UNK_006bcd18;
extern "C" unsigned long _UNK_006bcd1c;
extern "C" unsigned long _UNK_006bcd20;
extern "C" unsigned long _UNK_006bcdf0;
extern "C" unsigned long _UNK_006bcdf4;
extern "C" unsigned long _UNK_006bd0e8;
extern "C" unsigned long _UNK_006bd0ec;
extern "C" unsigned long _UNK_006bd0f0;
extern "C" unsigned long _UNK_006bd0f4;
extern "C" unsigned long _UNK_006bd0f8;
extern "C" unsigned long _UNK_006bd0fc;
extern "C" unsigned long _UNK_006bd100;
extern "C" unsigned long _UNK_006bd104;
extern "C" unsigned long _UNK_006bd47c;
extern "C" unsigned long _UNK_006bd480;
extern "C" unsigned long _UNK_006bd484;
extern "C" unsigned long _UNK_006bd488;
extern "C" unsigned long _UNK_006bd48c;
extern "C" unsigned long _UNK_006bd490;
extern "C" unsigned long _UNK_006bd494;
extern "C" unsigned long _UNK_006bd498;
extern "C" unsigned long _UNK_006bd774;
extern "C" unsigned long _UNK_006bd778;
extern "C" unsigned long _UNK_006bd77c;
extern "C" unsigned long _UNK_006bd780;
extern "C" unsigned long _UNK_006bd784;
extern "C" unsigned long _UNK_006bd788;
extern "C" unsigned long _UNK_006bd78c;
extern "C" unsigned long _UNK_006bd790;
extern "C" unsigned long _UNK_006bd8e0;
extern "C" unsigned long _UNK_006bd8e4;
extern "C" unsigned long _UNK_006bd8e8;
extern "C" unsigned long _UNK_006bdb1c;
extern "C" unsigned long _UNK_006bdb20;
extern "C" unsigned long _UNK_006bdb24;
extern "C" unsigned long _UNK_006bdb28;
extern "C" unsigned long _UNK_006bdb2c;
extern "C" unsigned long _UNK_006bdb30;
extern "C" unsigned long _UNK_006bdb34;
extern "C" unsigned long _UNK_006bde00;
extern "C" unsigned long _UNK_006bde04;
extern "C" unsigned long _UNK_006bde08;
extern "C" unsigned long _UNK_006bde0c;
extern "C" unsigned long _UNK_006bde10;
extern "C" unsigned long _UNK_006bde14;
extern "C" unsigned long _UNK_006bde18;
extern "C" unsigned long _UNK_006bde1c;
extern "C" unsigned long _UNK_006bde20;
extern "C" unsigned long _UNK_006bde24;
extern "C" unsigned long _UNK_006be164;
extern "C" unsigned long _UNK_006be168;
extern "C" unsigned long _UNK_006be16c;
extern "C" unsigned long _UNK_006be170;
extern "C" unsigned long _UNK_006be174;
extern "C" unsigned long _UNK_006be178;
extern "C" unsigned long _UNK_006be17c;
extern "C" unsigned long _UNK_006be79c;
extern "C" unsigned long _UNK_006be7a0;
extern "C" unsigned long _UNK_006be7a4;
extern "C" unsigned long _UNK_006be864;
extern "C" unsigned long _UNK_006be868;
extern "C" unsigned long _UNK_006be86c;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long extraout_r3;
extern "C" unsigned long g_006bc54c;
extern "C" unsigned long g_006bc582;
extern "C" unsigned long g_006bc5b4;
extern "C" unsigned long g_006bc5b8;
extern "C" unsigned long g_006bc5c8;
extern "C" unsigned long g_006bc5cc;
extern "C" unsigned long g_006bc5f0;
extern "C" unsigned long g_006bc5f4;
extern "C" unsigned long g_006bc658;
extern "C" unsigned long g_006bc68a;
extern "C" unsigned long g_006bc6c0;
extern "C" unsigned long g_006bc6c2;
extern "C" unsigned long g_006bc6dc;
extern "C" unsigned long g_006bc6de;
extern "C" unsigned long g_006bc706;
extern "C" unsigned long g_006bc71e;
extern "C" unsigned long g_006bc740;
extern "C" unsigned long g_006bc744;
extern "C" unsigned long g_006bc748;
extern "C" unsigned long g_006bc74c;
extern "C" unsigned long g_006bc750;
extern "C" unsigned long g_006bc754;
extern "C" unsigned long g_006bc758;
extern "C" unsigned long g_006bc75c;
extern "C" unsigned long g_006bc776;
extern "C" unsigned long g_006bc77a;
extern "C" unsigned long g_006bc7c2;
extern "C" unsigned long g_006bc83e;
extern "C" unsigned long g_006bc852;
extern "C" unsigned long g_006bc86c;
extern "C" unsigned long g_006bc87a;
extern "C" unsigned long g_006bc886;
extern "C" unsigned long g_006bc8a0;
extern "C" unsigned long g_006bc8c0;
extern "C" unsigned long g_006bc920;
extern "C" unsigned long g_006bc99c;
extern "C" unsigned long g_006bc9ba;
extern "C" unsigned long g_006bc9d8;
extern "C" unsigned long g_006bc9ee;
extern "C" unsigned long g_006bca28;
extern "C" unsigned long g_006bca84;
extern "C" unsigned long g_006bcaa4;
extern "C" unsigned long g_006bcaa8;
extern "C" unsigned long g_006bcaac;
extern "C" unsigned long g_006bcab0;
extern "C" unsigned long g_006bcab4;
extern "C" unsigned long g_006bcab8;
extern "C" unsigned long g_006bcabc;
extern "C" unsigned long g_006bcac0;
extern "C" unsigned long g_006bcac4;
extern "C" unsigned long g_006bcac8;
extern "C" unsigned long g_006bcacc;
extern "C" unsigned long g_006bcad0;
extern "C" unsigned long g_006bcad4;
extern "C" unsigned long g_006bcad8;
extern "C" unsigned long g_006bcadc;
extern "C" unsigned long g_006bcae0;
extern "C" unsigned long g_006bcae4;
extern "C" unsigned long g_006bcae8;
extern "C" unsigned long g_006bcafa;
extern "C" unsigned long g_006bcb28;
extern "C" unsigned long g_006bcb58;
extern "C" unsigned long g_006bcb5c;
extern "C" unsigned long g_006bcba6;
extern "C" unsigned long g_006bcbb4;
extern "C" unsigned long g_006bcbc2;
extern "C" unsigned long g_006bcbc8;
extern "C" unsigned long g_006bcbcc;
extern "C" unsigned long g_006bcbd0;
extern "C" unsigned long g_006bcbe8;
extern "C" unsigned long g_006bcbea;
extern "C" unsigned long g_006bcbf4;
extern "C" unsigned long g_006bcbf8;
extern "C" unsigned long g_006bcc20;
extern "C" unsigned long g_006bcc4a;
extern "C" unsigned long g_006bccee;
extern "C" unsigned long g_006bcd10;
extern "C" unsigned long g_006bcd14;
extern "C" unsigned long g_006bcd18;
extern "C" unsigned long g_006bcd1c;
extern "C" unsigned long g_006bcd20;
extern "C" unsigned long g_006bcd38;
extern "C" unsigned long g_006bcd6c;
extern "C" unsigned long g_006bcdf0;
extern "C" unsigned long g_006bcdf4;
extern "C" unsigned long g_006bce34;
extern "C" unsigned long g_006bce36;
extern "C" unsigned long g_006bcf00;
extern "C" unsigned long g_006bcf42;
extern "C" unsigned long g_006bcf84;
extern "C" unsigned long g_006bd030;
extern "C" unsigned long g_006bd072;
extern "C" unsigned long g_006bd0b4;
extern "C" unsigned long g_006bd0e8;
extern "C" unsigned long g_006bd0ec;
extern "C" unsigned long g_006bd0f0;
extern "C" unsigned long g_006bd0f4;
extern "C" unsigned long g_006bd0f8;
extern "C" unsigned long g_006bd0fc;
extern "C" unsigned long g_006bd100;
extern "C" unsigned long g_006bd104;
extern "C" unsigned long g_006bd180;
extern "C" unsigned long g_006bd1c2;
extern "C" unsigned long g_006bd204;
extern "C" unsigned long g_006bd2ae;
extern "C" unsigned long g_006bd2f0;
extern "C" unsigned long g_006bd332;
extern "C" unsigned long g_006bd390;
extern "C" unsigned long g_006bd3d0;
extern "C" unsigned long g_006bd47c;
extern "C" unsigned long g_006bd480;
extern "C" unsigned long g_006bd484;
extern "C" unsigned long g_006bd488;
extern "C" unsigned long g_006bd48c;
extern "C" unsigned long g_006bd490;
extern "C" unsigned long g_006bd494;
extern "C" unsigned long g_006bd498;
extern "C" unsigned long g_006bd4a4;
extern "C" unsigned long g_006bd4f4;
extern "C" unsigned long g_006bd532;
extern "C" unsigned long g_006bd5d4;
extern "C" unsigned long g_006bd612;
extern "C" unsigned long g_006bd770;
extern "C" unsigned long g_006bd774;
extern "C" unsigned long g_006bd778;
extern "C" unsigned long g_006bd77c;
extern "C" unsigned long g_006bd780;
extern "C" unsigned long g_006bd784;
extern "C" unsigned long g_006bd788;
extern "C" unsigned long g_006bd78c;
extern "C" unsigned long g_006bd790;
extern "C" unsigned long g_006bd79c;
extern "C" unsigned long g_006bd7c2;
extern "C" unsigned long g_006bd876;
extern "C" unsigned long g_006bd8e0;
extern "C" unsigned long g_006bd8e4;
extern "C" unsigned long g_006bd8e8;
extern "C" unsigned long g_006bd8f8;
extern "C" unsigned long g_006bd914;
extern "C" unsigned long g_006bd9e8;
extern "C" unsigned long g_006bda1e;
extern "C" unsigned long g_006bdac8;
extern "C" unsigned long g_006bdb1c;
extern "C" unsigned long g_006bdb20;
extern "C" unsigned long g_006bdb24;
extern "C" unsigned long g_006bdb28;
extern "C" unsigned long g_006bdb2c;
extern "C" unsigned long g_006bdb30;
extern "C" unsigned long g_006bdb34;
extern "C" unsigned long g_006bdbb6;
extern "C" unsigned long g_006bdbfa;
extern "C" unsigned long g_006bdc56;
extern "C" unsigned long g_006bdc88;
extern "C" unsigned long g_006bdcdc;
extern "C" unsigned long g_006bdd3e;
extern "C" unsigned long g_006bdd96;
extern "C" unsigned long g_006bdde8;
extern "C" unsigned long g_006bde00;
extern "C" unsigned long g_006bde04;
extern "C" unsigned long g_006bde08;
extern "C" unsigned long g_006bde0c;
extern "C" unsigned long g_006bde10;
extern "C" unsigned long g_006bde14;
extern "C" unsigned long g_006bde18;
extern "C" unsigned long g_006bde1c;
extern "C" unsigned long g_006bde20;
extern "C" unsigned long g_006bde24;
extern "C" unsigned long g_006bde54;
extern "C" unsigned long g_006bde94;
extern "C" unsigned long g_006bdf20;
extern "C" unsigned long g_006bdf8a;
extern "C" unsigned long g_006be0c2;
extern "C" unsigned long g_006be164;
extern "C" unsigned long g_006be168;
extern "C" unsigned long g_006be16c;
extern "C" unsigned long g_006be170;
extern "C" unsigned long g_006be174;
extern "C" unsigned long g_006be178;
extern "C" unsigned long g_006be17c;
extern "C" unsigned long g_006be734;
extern "C" unsigned long g_006be750;
extern "C" unsigned long g_006be784;
extern "C" unsigned long g_006be79c;
extern "C" unsigned long g_006be7a0;
extern "C" unsigned long g_006be7a4;
extern "C" unsigned long g_006be7ba;
extern "C" unsigned long g_006be7bc;
extern "C" unsigned long g_006be85e;
extern "C" unsigned long g_006be864;
extern "C" unsigned long g_006be868;
extern "C" unsigned long g_006be86c;
RoleData* CarSelectRoleItemPresenter::getRoleData() const
{
  return (RoleData*)(*(undefined4 *)(((int)this) + 0x1c));
}

RoleInfoItemData* CarSelectRoleItemPresenter::getRoleInfoData() const
{
  return (RoleInfoItemData*)(*(undefined4 *)(((int)this) + 0x20));
}

bool CarSelectRoleItemPresenter::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void CarSelectRoleItemPresenter::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void CarSelectRoleItemPresenter::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void CarSelectRoleItemPresenter::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void CarSelectRoleItemPresenter::tick(float p1)
{
  return;
}

CarSelectRoleItemPresenter::~CarSelectRoleItemPresenter()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(&g_006bc54c + g_006bc5b4);
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
  func_0079e45c(&uStack_14,&g_006bc582 + g_006bc5b8,&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void CarSelectRoleItemPresenter::setRoleInfoData(RoleInfoItemData* p1)
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

void CarSelectRoleItemPresenter::setRoleData(RoleData* p1)
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



CarSelectRoleItemPresenter::CarSelectRoleItemPresenter()
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
  iVar3 = *(int *)(&g_006bcafa + g_006bcb58);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(5)) = iVar3 + 0x4c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 5, 1, 0);
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,&g_006bcb28 + g_006bcb5c,&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  *(int *)((int)this + 4*(7)) = 0;
  *(int *)((int)this + 4*(8)) = 0;
  return;
}

undefined4 CarSelectRoleItemPresenter::create(CarSelectRoleItemView* p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  ((cocos2d::CCObject *)uVar1)->autorelease();
  return uVar1;
}

void CarSelectRoleItemPresenter::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x14);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_006bcba6 + g_006bcbc8);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_006bcbb4 + g_006bcbcc);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)&g_006bcbc2 + g_006bcbd0);
  return;
}



void CarSelectRoleItemPresenter::on(cocos2d::CCObject* p1, unsigned int p2)
{
  return;
}

void CarSelectRoleItemPresenter::selectBuyRole()
{
  return;
}





void CarSelectRoleItemPresenter::initWithPlayerData(PlayerData* p1)
{
  CarSelectRoleItemPresenter::updateData();
  return;
}

// ===== 修复: 补回被误删的函数占位 (13) =====
undefined8 CarSelectRoleItemPresenter::onShowBuyYi()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void CarSelectRoleItemPresenter::onBuyRoleClick(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSelectRoleItemPresenter::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSelectRoleItemPresenter::initWithView(CarSelectRoleItemView* p1)
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
  piVar1 = (int *)((CarSelectRoleItemView *)(p1))->getBtnRole();
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_006bcc20 + (intptr_t)(g_006bcd10))));
  (**(code **)(*(int *)(piVar1) + (0x254)))(piVar1,((int)this),uStack_20,0,0x20);
  piVar1 = (int *)((CarSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getPageControlStars()
  ;
  (**(code **)(*(int *)(piVar1) + (0x21c)))(piVar1,1);
  uVar2 = (undefined4)(((CarSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabDiamond());
  puVar6 = (unsigned char *)((char *)&g_006bcc4a + (intptr_t)(g_006bcd14));
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  uVar2 = (undefined4)(((CarSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getLabUnLock());
  ((cocos2d::CCLabelTTF *)(uVar2))->enableStroke(*(const ccColor3B *)(void *)puVar6, 0x3f800000, 1);
  piVar1 = (int *)((CarSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x7c);
  0 /* ctorZero */;
  (*pcVar7)(piVar1,auStack_28);
  piVar1 = (int *)((CarSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 100);
  piVar3 = (int *)((CarSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))());
  piVar3 = (int *)((CarSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))());
  uVar5 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar4 + 4),0x3f000000));
  uVar2 = (undefined4)(func_0079e57c(uVar2,uVar5));
  uVar2 = (undefined4)(func_0079e57c(uVar2,g_006bcd18));
  (*pcVar7)(piVar1,uVar2);
  piVar1 = (int *)((CarSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  (**(code **)(*(int *)(piVar1) + (0x40)))(piVar1,g_006bcd1c);
  piVar1 = (int *)((CarSelectRoleItemView *)(*(undefined4 *)(((int)this) + 0x18)))->getBtnRole();
  pcVar7 = *(code **)(*piVar1 + 0x26c);
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_006bccee + (intptr_t)(g_006bcd20)),auStack_2c);
  (*pcVar7)(piVar1,auStack_28);
  func_0079e2bc(auStack_28);
  return;
}

void CarSelectRoleItemPresenter::onBuyDiamondComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSelectRoleItemPresenter::updateSelect()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSelectRoleItemPresenter::updateData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSelectRoleItemPresenter::buyRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSelectRoleItemPresenter::initWithRoleData(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSelectRoleItemPresenter::initWithMoneyTreePlayerDate(RoleData* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSelectRoleItemPresenter::selectRole()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSelectRoleItemPresenter::onRole(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void CarSelectRoleItemPresenter::onBuyYiComplete(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iStack_14;
  
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  if (((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
     (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_006be7ba + (intptr_t)(g_006be868))),
                              *(undefined4 *)((unsigned char *)((char *)&g_006be7bc + (intptr_t)(g_006be864))),0), iVar1 != 0)) {
    (**(code **)(**(int **)(((int)this) + 0x1c) + 0x18))(&iStack_14);
    iVar1 = mz_SteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_
                      (iVar1 + 0x14,&iStack_14);
    func_0079e2bc(&iStack_14);
    if (iVar1 != 0) {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      piVar2 = (int *)(**(code **)(*(int *)(piVar2) + (0x40)))();
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)((DataManager *)this)->shareDataManager();
        iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x118)))());
        if (iVar1 == 6) {
          CarSelectRoleItemPresenter::selectBuyRole();
        }
        else {
          piVar3 = (int *)((DataManager *)this)->shareDataManager();
          piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x38)))();
          uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0xa8)))());
          piVar3 = (int *)((DataManager *)this)->shareDataManager();
          iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x118)))());
          if (iVar1 == 0xc) {
            uVar4 = (undefined4)(3);
          }
          (**(code **)(*(int *)(piVar2) + (0x28)))(piVar2);
          uVar5 = (undefined4)(((cocos2d::CCDictionary *)this)->count());
          if (uVar5 < uVar4) {
            CarSelectRoleItemPresenter::selectRole();
          }
        }
      }
      CarSelectRoleItemPresenter::updateData();
      uVar6 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
      ((cocos2d::CCNotificationCenter *)uVar6)->postNotification((char const*)(unsigned char *)((char *)&g_006be85e + (intptr_t)(g_006be86c)));
    }
  }
  return;
}
