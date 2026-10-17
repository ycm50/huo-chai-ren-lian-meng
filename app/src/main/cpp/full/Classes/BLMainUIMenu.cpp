#include "BLMainUIMenu.h"
#include "GiftData.h"
#include "CCScheduler.h"
#include "OnSaleData.h"
#include "CardData.h"
#include "SiteData.h"
#include "SignInData.h"
#include "GuideManager.h"
#include "DailySignData.h"
#include "BLRoleAttribute.h"
#include "GiftItemData.h"
#include "BLEquipGiftPresenter.h"
#include "BLEquipGiftView.h"
#include "GateStatusData.h"
#include "CCLabelTTF.h"
#include "CCGeometry.h"
#include "SignedData.h"
#include "CampaignData.h"
#include "CCScale9Sprite.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCNode.h"
#include "CCNotificationCenter.h"
#include "BLLanguage.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCControlButton.h"
#include "CCLayer.h"
#include "CCArray.h"
#include "CCDirector.h"
#include "CCUserDefault.h"
#include "UserData.h"
#include "sir_builtin.h"

using namespace cocos2d;
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
#include "BLForwards.h"
#include "MonthlyContractData.h"
#include "BLGameScene.h"
#include "BluetoothHelper.h"
#include "UIManager.h"
#include "BLMainAboutView.h"
#include "PlatformHelp.h"
#include "DataManager.h"
#include "BLLeakUtils.h"
#include "MainMenuData.h"
// 兜底声明
extern "C" unsigned long g_004d1974;
extern "C" unsigned long g_004d1b00;
extern "C" unsigned long g_004d1996;
extern "C" unsigned long g_004d1b04;
extern "C" unsigned long g_004d19b2;
extern "C" unsigned long g_004d1b08;
extern "C" unsigned long g_004d19ce;
extern "C" unsigned long g_004d1b0c;
extern "C" unsigned long g_004d19ea;
extern "C" unsigned long g_004d1b10;
extern "C" unsigned long g_004d1a06;
extern "C" unsigned long g_004d1b14;
extern "C" unsigned long g_004d1aa2;
extern "C" unsigned long g_004d1b18;
extern "C" unsigned long g_004d1aa4;
extern "C" unsigned long g_004d1b1c;
extern "C" unsigned long g_004d1abe;
extern "C" unsigned long g_004d1b20;
extern "C" unsigned long g_004d1ac0;
extern "C" unsigned long g_004d1b24;
extern "C" unsigned long g_004d77a2;
extern "C" unsigned long g_004d77b0;
extern "C" unsigned long g_004d4394;
extern "C" unsigned long g_004d43f8;
extern "C" unsigned long g_004d4320;
extern "C" unsigned long g_004d4384;
extern "C" unsigned long g_004d4350;
extern "C" unsigned long g_004d4388;
extern "C" unsigned long g_004d42b8;
extern "C" unsigned long g_004d4310;
extern "C" unsigned long g_004d42e8;
extern "C" unsigned long g_004d4314;
extern "C" long long func_0079e41c(...);
extern "C" unsigned long g_004d424c;
extern "C" unsigned long g_004d42a8;
extern "C" unsigned long g_004d427c;
extern "C" unsigned long g_004d42ac;
extern "C" unsigned long g_004cf4bc;
extern "C" unsigned long g_004cf750;
extern "C" unsigned long g_004cf4fe;
extern "C" unsigned long g_004cf754;
extern "C" unsigned long g_004cf758;
extern "C" unsigned long g_004cf75c;
extern "C" unsigned long g_004cf580;
extern "C" unsigned long g_004cf760;
extern "C" unsigned long g_004cf582;
extern "C" unsigned long g_004cf764;
extern "C" unsigned long g_004cf768;
extern "C" unsigned long g_004cf76c;
extern "C" unsigned long g_004cf5d4;
extern "C" unsigned long g_004cf770;
extern "C" unsigned long g_004cf774;
extern "C" unsigned long g_004cf606;
extern "C" unsigned long g_004cf778;
extern "C" unsigned long g_004cf6be;
extern "C" unsigned long g_004cf77c;
extern "C" unsigned long g_004cf6c0;
extern "C" unsigned long g_004cf780;
extern "C" unsigned long g_004cf72c;
extern "C" unsigned long g_004cf78c;
extern "C" long long func_0079e4ec(...);
extern "C" unsigned long g_004d396c;
extern "C" unsigned long g_004d38d4;
extern "C" unsigned long g_004d3970;
extern "C" unsigned long g_004d3974;
extern "C" long long func_00442068(...);
extern "C" long long func_0079e804(...);
extern "C" long long func_0079eb94(...);
extern "C" unsigned long g_004d1208;
extern "C" unsigned long g_004d127c;
extern "C" unsigned long g_004d1214;
extern "C" unsigned long g_004d1280;
extern "C" unsigned long g_004d124c;
extern "C" unsigned long g_004d1284;
extern "C" unsigned long g_004d125c;
extern "C" unsigned long g_004d1288;
extern "C" long long func_0079e4dc(...);
extern "C" unsigned long g_004d0064;
extern "C" unsigned long g_004d02cc;
extern "C" unsigned long g_004d00a4;
extern "C" unsigned long g_004d02d0;
extern "C" unsigned long g_004d02d4;
extern "C" unsigned long g_004d0144;
extern "C" unsigned long g_004d02d8;
extern "C" unsigned long g_004d02dc;
extern "C" unsigned long g_004d016c;
extern "C" unsigned long g_004d02e0;
extern "C" unsigned long g_004d02ec;
extern "C" unsigned long g_004d02f0;
extern "C" unsigned long g_004d0250;
extern "C" unsigned long g_004d02f4;
extern "C" unsigned long g_004d0266;
extern "C" unsigned long g_004d02f8;
extern "C" unsigned long g_004d02fc;
extern "C" unsigned long g_004cec7e;
extern "C" unsigned long g_004cec70;
extern "C" long long func_0079e4bc(...);
extern "C" unsigned long g_004ce69c;
extern "C" unsigned long g_004ce5b6;
extern "C" unsigned long g_004ce6a0;
extern "C" unsigned long g_004ce6a4;
extern "C" unsigned long g_004ce6a8;
extern "C" unsigned long g_004ce61e;
extern "C" unsigned long g_004ce6ac;
extern "C" unsigned long g_004ce6b0;
extern "C" unsigned long g_004ce6b4;
extern "C" unsigned long g_004ce6b8;
extern "C" unsigned long g_004ce6bc;
extern "C" unsigned long g_004ce40c;
extern "C" unsigned long g_004ce428;
extern "C" unsigned long g_004ce3e4;
extern "C" unsigned long g_004ce33c;
extern "C" unsigned long g_004ce3e8;
extern "C" unsigned long g_004ce3ec;
extern "C" unsigned long g_004ce3f0;
extern "C" unsigned long g_004ce3f4;
extern "C" unsigned long g_004ce3f8;
extern "C" unsigned long g_004ce3fc;
extern "C" unsigned long g_004ce400;
extern "C" unsigned long g_004d2cbc;
extern "C" unsigned long g_004d2e50;
extern "C" unsigned long g_004d2cfc;
extern "C" unsigned long g_004d2e54;
extern "C" unsigned long g_004d2e58;
extern "C" unsigned long g_004d2d8c;
extern "C" unsigned long g_004d2e5c;
extern "C" unsigned long g_004d2d8e;
extern "C" unsigned long g_004d2e60;
extern "C" unsigned long g_004d2e64;
extern "C" unsigned long g_004d2e68;
extern "C" unsigned long g_004d2de6;
extern "C" unsigned long g_004d2e6c;
extern "C" long long func_0079e59c(...);
extern "C" unsigned long g_004d1b46;
extern "C" unsigned long g_004d1dac;
extern "C" unsigned long g_004d1b86;
extern "C" unsigned long g_004d1db0;
extern "C" unsigned long g_004d1db4;
extern "C" unsigned long g_004d1c14;
extern "C" unsigned long g_004d1db8;
extern "C" unsigned long g_004d1c2c;
extern "C" unsigned long g_004d1dbc;
extern "C" unsigned long g_004d1dc0;
extern "C" unsigned long g_004d1dc4;
extern "C" unsigned long g_004d1c8a;
extern "C" unsigned long g_004d1dc8;
extern "C" unsigned long g_004d1c98;
extern "C" unsigned long g_004d1dcc;
extern "C" unsigned long g_004d1ce4;
extern "C" unsigned long g_004d1dd8;
extern "C" unsigned long g_004d1cfa;
extern "C" unsigned long g_004d1ddc;
extern "C" unsigned long g_004d1de0;
extern "C" unsigned long g_004d1d88;
extern "C" unsigned long g_004d1de4;
extern "C" long long func_0079e854(...);
extern "C" long long func_0079e874(...);
extern "C" unsigned long g_004d0d92;
extern "C" unsigned long g_004d0e48;
extern "C" unsigned long g_004d0d94;
extern "C" unsigned long g_004d0e4c;
extern "C" unsigned long g_004d0dba;
extern "C" unsigned long g_004d0e50;
extern "C" unsigned long g_004d0ddc;
extern "C" unsigned long g_004d0e54;
template <class T, class... A> std::string ConvertToString(A...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e57c(...);
extern "C" unsigned long g_004cf02a;
extern "C" unsigned long g_004cf1a0;
extern "C" unsigned long g_004cf06a;
extern "C" unsigned long g_004cf1a4;
extern "C" unsigned long g_004cf1a8;
extern "C" unsigned long g_004cf1ac;
extern "C" unsigned long g_004cf10c;
extern "C" unsigned long g_004cf1b0;
extern "C" unsigned long g_004cf124;
extern "C" unsigned long g_004cf1b4;
extern "C" unsigned long g_004cf1b8;
extern "C" unsigned long g_004cf1bc;
extern "C" unsigned long g_004cf17e;
extern "C" unsigned long g_004cf1c0;
extern "C" unsigned long g_004ce55a;
extern "C" unsigned long g_004ce59c;
extern "C" unsigned long g_004ce55c;
extern "C" unsigned long g_004ce598;
extern "C" unsigned long g_004ce5a0;
extern "C" unsigned long g_004cd84a;
extern "C" unsigned long g_004cd8c8;
extern "C" unsigned long g_004cd88c;
extern "C" unsigned long g_004cd8cc;
extern "C" unsigned long g_004cd79e;
extern "C" unsigned long g_004cd81c;
extern "C" unsigned long g_004cd7e0;
extern "C" unsigned long g_004cd820;
extern "C" long long software_udf(...);

extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e2cc(...);
extern "C" unsigned long g_004d422c;
extern "C" unsigned long g_004d416e;
extern "C" unsigned long g_004d4230;
extern "C" unsigned long g_004d4172;
extern "C" unsigned long g_004d4234;
extern "C" unsigned long g_004d4190;
extern "C" unsigned long g_004d4238;
extern "C" unsigned long g_004d423c;
extern "C" unsigned long g_004d4240;
extern "C" long long ghidra_CONCAT44(...);

extern "C" unsigned long g_004ce48a;
extern "C" unsigned long g_004ce4fc;
extern "C" unsigned long g_004ce48c;
extern "C" unsigned long g_004ce4f8;
extern "C" unsigned long g_004ce4ac;
extern "C" unsigned long g_004ce500;
extern "C" unsigned long g_004ce4f0;
extern "C" unsigned long g_004ce4f4;
extern "C" unsigned long g_004d3a18;
extern "C" unsigned long g_004d3a1c;
extern "C" unsigned long g_004d39a4;
extern "C" long long func_0079e53c(...);
extern "C" unsigned long g_004ce800;
extern "C" unsigned long g_004ce804;
extern "C" unsigned long g_004ce470;
extern "C" unsigned long g_004ce474;
extern "C" unsigned long g_004cd964;
extern "C" unsigned long g_004cd614;
extern "C" unsigned long g_004cd698;
extern "C" unsigned long g_004cd666;
extern "C" unsigned long g_004cd69c;
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e2bc(...);
extern "C" unsigned long g_004ce8dc;
extern "C" unsigned long g_004ce830;
extern "C" unsigned long g_004ce8e0;
extern "C" unsigned long g_004ce87e;
extern "C" unsigned long g_004ce8e4;
extern "C" unsigned long g_004ce8b6;
extern "C" unsigned long g_004ce8ec;
extern "C" long long func_0079e55c(...);
extern "C" unsigned long g_004ce51a;
extern "C" unsigned long g_004ce540;
extern "C" unsigned long g_004ce51c;
extern "C" unsigned long g_004ce53c;
extern "C" unsigned long g_004ce538;
extern "C" unsigned long g_004ce544;
extern "C" unsigned long g_004ce170;
extern "C" unsigned long g_004ce18c;
extern "C" unsigned long g_004ce190;
extern "C" unsigned long g_004ce14e;
extern "C" unsigned long g_004ce15c;
extern "C" unsigned long g_004ce110;
extern "C" unsigned long g_004ce114;

// R14: 重置为纯占位形态(原恢复体存在编译错误, 待后续逐函数修复)

MainMenuData* BLMainUIMenu::getMainMenuData() const
{
  return (MainMenuData*)(*(undefined4 *)(((int)this) + 0x10c));
}

void BLMainUIMenu::changeFoucsBtn()
{
  *(undefined1 *)(((int)this) + 0x109) = 0;
  return;
}

bool BLMainUIMenu::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMainUIMenu::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainUIMenu::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainUIMenu::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMainUIMenu::setMainMenuData(MainMenuData* p1)
{
  if (*(int *)(((int)this) + 0x10c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x10c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x10c) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLMainUIMenu::~BLMainUIMenu()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  iVar2 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004cd614 + (intptr_t)(g_004cd698))));
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x24c;
  piStack_18 = (int *)((int)this);
  uStack_14 = (undefined4)(p2);
  if (*(int *)((int)this + 4*(0x46)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x46)) = 0;
  }
  if (*(int *)((int)this + 4*(0x43)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x43)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,(unsigned char *)((char *)&g_004cd666 + (intptr_t)(g_004cd69c)),&piStack_18);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

void BLMainUIMenu::updateVipLight(cocos2d::CCObject* p1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(((int)this) + 0x178);
  if (piVar1 != 0) {
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x100))());
    if (iVar2 != 0) {
      piVar1 = (int *)((DataManager *)this)->shareDataManager();
      iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0x108))());
      if (iVar2 == 0) {
        (**(code **)(**(int **)(((int)this) + 0x178) + 0x90))(*(int **)(((int)this) + 0x178),1);
      }
    }
  }
  return;
}

void BLMainUIMenu::updatebackCount()
{
  int *piVar1;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x124))(piVar1,0);
  *(undefined4 *)(((int)this) + 0x160) = 0;
  return;
}

void BLMainUIMenu::onBluetoothConnected(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar3 = *(int **)(((int)this) + 0x11c);
  pcVar2 = *(code **)(*piVar3 + 0x234);
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004cd79e + (intptr_t)(g_004cd81c)),auStack_24);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
  (*pcVar2)(piVar3,auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  piVar3 = *(int **)(((int)this) + 0x120);
  pcVar2 = *(code **)(*piVar3 + 0x234);
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004cd7e0 + (intptr_t)(g_004cd820)),auStack_24);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
  (*pcVar2)(piVar3,auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}

void BLMainUIMenu::onBluetoothDisConnected(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  code *pcVar2;
  int *piVar3;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [2];
  
  piVar3 = *(int **)(((int)this) + 0x11c);
  pcVar2 = *(code **)(*piVar3 + 0x234);
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004cd84a + (intptr_t)(g_004cd8c8)),auStack_24);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
  (*pcVar2)(piVar3,auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  piVar3 = *(int **)(((int)this) + 0x120);
  pcVar2 = *(code **)(*piVar3 + 0x234);
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004cd88c + (intptr_t)(g_004cd8cc)),auStack_24);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
  (*pcVar2)(piVar3,auStack_1c[0]);
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  return;
}

void BLMainUIMenu::clickMore(cocos2d::CCObject* p1, unsigned int p2)
{
  ((PlatformHelp *)this)->getMore();
  return;
}

void BLMainUIMenu::clickAbout(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((BLMainAboutView *)this)->create());
  (**(code **)(*(int *)this + 0xcc))(((int)this),uVar1,4);
  return;
}

void BLMainUIMenu::showYuanZheng()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x2a8);
  return;
}

void BLMainUIMenu::onGoToActivity()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x7e);
  return;
}

void BLMainUIMenu::onOpenPractice()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xe6);
  return;
}

void BLMainUIMenu::onOpenGM(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xa4);
  return;
}

void BLMainUIMenu::onOpenFreeReward(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x88);
  return;
}

void BLMainUIMenu::onMainDuiHuan()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x67);
  return;
}

void BLMainUIMenu::onFestival(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xf8);
  return;
}

void BLMainUIMenu::onGiftManager(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(g_004cd964);
  return;
}

void BLMainUIMenu::onPack4399(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x294);
  return;
}

void BLMainUIMenu::onQQCoin(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x192);
  return;
}

void BLMainUIMenu::onOneGift(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x91);
  return;
}

void BLMainUIMenu::onUpdatePublish()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x87);
  return;
}

void BLMainUIMenu::doBtnMenuEnd()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onUpdateVirtualItemData(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onGotoRating(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onArenaOnlineHost(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  piVar1 = (int *)((BluetoothHelper *)this)->share();
  (**(code **)(*piVar1 + 100))(piVar1,2,extraout_r2,*(code **)(*piVar1 + 100),in_r3);
  piVar1 = (int *)((BluetoothHelper *)this)->share();
  (**(code **)(*piVar1 + 0x8c))(piVar1,0);
  ((BluetoothHelper *)this)->share();
  iVar2 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isBlueFight());
  if (iVar2 == 0) {
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar3)->showUIById(0x6e);
  }
  else {
    ((BluetoothHelper *)this)->share();
    ((BluetoothHelper *)this)->bluetoothDisconnect();
  }
  return;
}

void BLMainUIMenu::onVip(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->postNotification((char const*)(unsigned char *)((char *)&g_004ce110 + (intptr_t)(g_004ce114)));
  return;
}

void BLMainUIMenu::quiteGame()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::shezhiQuite()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x55)),(intptr_t)0);
  if (iVar2 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->removeUIByID(0x55);
  }
  return;
}

void BLMainUIMenu::onMonthlyItemsGet()
{
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_004ce14e + (intptr_t)(g_004ce15c)));
  *(undefined1 *)(((int)this) + 0x188) = 1;
  return;
}

void BLMainUIMenu::onMainHideSheZhiTip()
{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)uVar1)->setBoolForKey((char const*)(unsigned char *)((char *)&g_004ce170 + (intptr_t)(g_004ce18c)), 1);
  piVar2 = (int *)(**(code **)(*(int *)this + 0xd4))(((int)this),g_004ce190);
  (**(code **)(*piVar2 + 0xec))(piVar2,1);
  return;
}

void BLMainUIMenu::onHideSMHCH()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onLiveness(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((BLGameScene *)this)->shareGameScene());
  ((BLGameScene *)uVar1)->checkLivenessTime(1);
  return;
}

void BLMainUIMenu::onOpenGemDraw()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xaa)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0xaa);
  }
  return;
}

void BLMainUIMenu::onGetOnSales()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xab)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0xab);
  }
  return;
}

void BLMainUIMenu::onShowCardView(cocos2d::CCObject* p1)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(199)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(199);
  }
  return;
}

void BLMainUIMenu::onOpenRedPacket()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xac)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0xac);
  }
  return;
}

void BLMainUIMenu::onHost(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  piVar1 = (int *)((BluetoothHelper *)this)->share();
  (**(code **)(*piVar1 + 100))(piVar1,1,extraout_r2,*(code **)(*piVar1 + 100),in_r3);
  ((BluetoothHelper *)this)->share();
  iVar2 = (undefined4)(intptr_t)(((BluetoothHelper *)this)->isBlueFight());
  if (iVar2 == 0) {
    uVar3 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar3)->showUIById(0x6e);
  }
  else {
    ((BluetoothHelper *)this)->share();
    ((BluetoothHelper *)this)->bluetoothDisconnect();
  }
  return;
}

undefined8 BLMainUIMenu::onDailyPack(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar5 = (undefined4)(intptr_t)(g_004ce3e4);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x7a)),(intptr_t)0);
  uStack_18 = (undefined4)((int *)((int)this));
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x7b)),(intptr_t)0);
    if ((iVar2 == 0) && ((int)(intptr_t)(int)(intptr_t)p1 != 0)) {
      uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce33c + (intptr_t)(g_004ce3e8)) + iVar5));
      iStack_14 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004ce33c + (intptr_t)(g_004ce3ec)) + iVar5));
      piVar3 = (int *)func_0079e55c(p1,uStack_18,iStack_14,0);
      if ((piVar3 != 0) && (iVar2 = (**(code **)(*(int *)(piVar3) + (0x128)))(), iVar2 != 0)) {
        iStack_14 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004ce33c + (intptr_t)(g_004ce3f0)) + iVar5));
        iVar2 = (undefined4)(intptr_t)(func_0079e55c(iVar2,uStack_18,iStack_14,0));
        if (iVar2 != 0) {
          uVar1 = (undefined4)(((UIManager *)this)->shareManager());
          iVar4 = (undefined4)(intptr_t)(((UIManager *)(uVar1))->showUIById(100));
          if (iVar4 != 0) {
            uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce33c + (intptr_t)(g_004ce3f4)) + iVar5));
            iStack_14 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004ce33c + (intptr_t)(g_004ce3f8)) + iVar5));
            iVar4 = (undefined4)(intptr_t)(func_0079e55c(iVar4,uStack_18,iStack_14,0));
            if ((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != 0)) {
              uStack_18 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce33c + (intptr_t)(g_004ce3fc)) + iVar5));
              iStack_14 = (undefined4)(intptr_t)(*(int *)((unsigned char *)((char *)&g_004ce33c + (intptr_t)(g_004ce400)) + iVar5));
              iVar5 = (undefined4)(intptr_t)(func_0079e55c(*(int *)(iVar4 + 0x24),uStack_18,iStack_14,0));
              if (iVar5 != 0) {
                uVar1 = (undefined4)(((BLEquipGiftView *)this)->getPresenter());
                ((BLEquipGiftPresenter *)(uVar1))->initWithData((GiftItemData*)iVar2);
              }
            }
          }
        }
      }
    }
  }
  return ghidra_CONCAT44(iStack_14,uStack_18);
}

void BLMainUIMenu::showSigned()
{
  undefined4 uVar1;
  int iVar2;
  
  cocos2d::CCLog((char const*)(unsigned char *)((char *)&g_004ce40c + (intptr_t)(g_004ce428)));
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0xb2)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(0xb2);
  }
  return;
}

void BLMainUIMenu::updateCardView()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x28))();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*piVar1 + 0xc0))());
  if (iVar2 != 0) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0xd4))(((int)this),g_004ce470);
    piVar1 = (int *)(**(code **)(*piVar1 + 0xd4))(piVar1,g_004ce474);
    (**(code **)(*piVar1 + 0x90))(piVar1,0);
    ((cocos2d::CCNode *)piVar1)->stopAllActions();
  }
  return;
}

undefined8 BLMainUIMenu::onSure(cocos2d::CCObject* p1)
{
  undefined4 p3 = 0;

  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = (undefined4)(intptr_t)((int *)((int)this));
  if ((((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
      (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_004ce48a + (intptr_t)(g_004ce4fc))),
                               *(undefined4 *)((unsigned char *)((char *)&g_004ce48c + (intptr_t)(g_004ce4f8))),0,((int)this),p1,
                               p3), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x14), iVar1 == 1)) {
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    ((cocos2d::CCNotificationCenter *)uVar2)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)(unsigned char *)((char *)&g_004ce4ac + (intptr_t)(g_004ce500)));
    piVar3 = (int *)((DataManager *)this)->shareDataManager();
    piVar3 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))();
    (**(code **)(*(int *)(piVar3) + (0x84)))(piVar3,1);
    ((PlatformHelp *)this)->gotoAppstoreRating();
    (**(code **)(**(int **)(((int)this) + 0x158) + 0x104))(*(int **)(((int)this) + 0x158),1);
    piVar3 = (int *)((DataManager *)this)->shareDataManager();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x28)))());
    ((UserData *)uVar2)->addVirNumber(2, g_004ce4f0, g_004ce4f4);
    iVar4 = (undefined4)(intptr_t)(iVar1);
  }
  return ghidra_CONCAT44(p1,iVar4);
}

void BLMainUIMenu::onInitSMHCHCallback(cocos2d::CCObject* p1)
{
  int iVar1;
  undefined4 uVar2;
  
  if ((((int)(intptr_t)p1 != 0) &&
      (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_004ce51a + (intptr_t)(g_004ce540))),
                               *(undefined4 *)((unsigned char *)((char *)&g_004ce51c + (intptr_t)(g_004ce53c))),0), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x14) == 1)) {
    uVar2 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
    ((cocos2d::CCUserDefault *)uVar2)->setBoolForKey((char const*)(unsigned char *)((char *)&g_004ce538 + (intptr_t)(g_004ce544)), 1);
  }
  return;
}

void BLMainUIMenu::onSMHCHTimeError(cocos2d::CCObject* p1)
{
  undefined4 p4 = 0;

  int iVar1;
  int *piVar2;
  
  if (((((int)(intptr_t)(int)(intptr_t)p1 != 0) &&
       (iVar1 = func_0079e55c(p1,*(undefined4 *)((unsigned char *)((char *)&g_004ce55a + (intptr_t)(g_004ce59c))),
                                *(undefined4 *)((unsigned char *)((char *)&g_004ce55c + (intptr_t)(g_004ce598))),0,p4),
       iVar1 != 0)) && (*(int *)(iVar1 + 0x14) == 0)) &&
     (iVar1 = (**(code **)(*(int *)this + 0xd4))(((int)this),g_004ce5a0), iVar1 != 0)) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0xd4))(((int)this),g_004ce5a0);
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  }
  return;
}

void BLMainUIMenu::onGiftPackage(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_1c [8];
  
  iVar4 = (undefined4)(intptr_t)(g_004ce69c);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x7a)),(intptr_t)0);
  if (iVar2 == 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    iVar2 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(0x7b)),(intptr_t)0);
    if ((iVar2 == 0) && ((int)(intptr_t)(int)(intptr_t)p1 != 0)) {
      uVar1 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce5b6 + (intptr_t)(g_004ce6a0)) + iVar4));
      uVar5 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce5b6 + (intptr_t)(g_004ce6a4)) + iVar4));
      piVar3 = (int *)func_0079e55c(p1,uVar1,uVar5,0,uVar1,uVar5);
      if ((piVar3 != 0) && (iVar2 = (**(code **)(*(int *)(piVar3) + (0x128)))(), iVar2 != 0)) {
        uVar5 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce5b6 + (intptr_t)(g_004ce6a8)) + iVar4));
        piVar3 = (int *)func_0079e55c(iVar2,uVar1,uVar5,0,uVar1,uVar5);
        if (piVar3 != 0) {
          (**(code **)(*(int *)(piVar3) + (0x30)))(auStack_1c,piVar3);
          iVar2 = (undefined4)(intptr_t)(func_0079e4bc(auStack_1c,(unsigned char *)((char *)&g_004ce61e + (intptr_t)(g_004ce6ac))));
          func_0079e2bc(auStack_1c);
          if (iVar2 == 0) {
            uVar1 = (undefined4)(((UIManager *)this)->shareManager());
            ((UIManager *)(uVar1))->showUIById(0xb8);
          }
          else {
            uVar1 = (undefined4)(((UIManager *)this)->shareManager());
            iVar2 = (undefined4)(intptr_t)(((UIManager *)(uVar1))->showUIById(100));
            if (iVar2 != 0) {
              uVar1 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce5b6 + (intptr_t)(g_004ce6b0)) + iVar4));
              uVar5 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce5b6 + (intptr_t)(g_004ce6b4)) + iVar4));
              iVar2 = (undefined4)(intptr_t)(func_0079e55c(iVar2,uVar1,uVar5,0,uVar1,uVar5));
              if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) {
                uVar1 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce5b6 + (intptr_t)(g_004ce6b8)) + iVar4));
                uVar5 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce5b6 + (intptr_t)(g_004ce6bc)) + iVar4));
                iVar4 = (undefined4)(intptr_t)(func_0079e55c(*(int *)(iVar2 + 0x24),uVar1,uVar5,0,uVar1,uVar5));
                if (iVar4 != 0) {
                  uVar1 = (undefined4)(((BLEquipGiftView *)this)->getPresenter());
                  ((BLEquipGiftPresenter *)(uVar1))->initWithData((GiftItemData*)piVar3);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

BLMainUIMenu::BLMainUIMenu()
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
  iVar3 = (undefined4)(intptr_t)(*(int *)(g_004ce800 + 0x4ce740));
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x210;
  *(int *)((int)this + 4*(0x3a)) = iVar3 + 0x240;
  *(int *)((int)this + 4*(0x3b)) = iVar3 + 0x24c;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x39, 1, 0);
  *(int *)((int)this + 4*(0x55)) = -1;
  *(int *)((int)this + 4*(0x44)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x43)) = 0;
  *(int *)((int)this + 4*(0x49)) = 0;
  *(int *)((int)this + 4*(0x56)) = 0;
  *(int *)((int)this + 4*(0x58)) = 0;
  *(int *)((int)this + 4*(0x59)) = 0;
  *(int *)((int)this + 4*(0x57)) = 0;
  *(int *)((int)this + 4*(0x4a)) = 0;
  *(int *)((int)this + 4*(0x4b)) = 0;
  *(int *)((int)this + 4*(0x5e)) = 0;
  *(int *)((int)this + 4*(0x4c)) = 0;
  *(int *)((int)this + 4*(0x4d)) = 0;
  *(int *)((int)this + 4*(0x5a)) = 0;
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x46)) = iVar3;
  *(undefined1 *)(((int)this) + 0x42) = 0;
  *(undefined1 *)((int)((int)this) + 0x109) = 0;
  *(undefined1 *)(((int)this) + 0x62) = 0;
  *(int *)((int)this + 4*(99)) = 0;
  if (iVar3 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMainUIMenu"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void BLMainUIMenu::initGM()
{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)cocos2d::CCLayer::create();
  (**(code **)(*(int *)this + 0xcc))(((int)this),piVar1,g_004ce8dc);
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004ce830 + (intptr_t)(g_004ce8e0)),auStack_24);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  piVar3 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar2);
  (**(code **)(*piVar3 + 0x7c))(piVar3,(unsigned char *)((char *)&g_004ce87e + (intptr_t)(g_004ce8e4)));
  (**(code **)(*piVar1 + 200))(piVar1,piVar3);
  pcVar4 = *(code **)(*piVar3 + 0x28c);
  (**(code **)(*piVar2 + 0x1cc))(&uStack_20,piVar2);
  (*pcVar4)(piVar3,&uStack_20);
  (**(code **)(*piVar3 + 0x1d4))(piVar3,1);
  pcVar4 = *(code **)(*piVar3 + 0x4c);
  0 /* ctorZero */;
  (*pcVar4)(piVar3,&uStack_20);
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004ce8b6 + (intptr_t)(g_004ce8ec))));
  (**(code **)(*piVar3 + 0x254))(piVar3,((int)this),uStack_20,0,0x20);
  (**(code **)(*piVar3 + 0x294))(piVar3,0);
  return;
}

void BLMainUIMenu::initFreeReward()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::buyNevicePackageOK()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onShowRank(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = (undefined4)((void)(((PlatformHelp *)this)->isCrack()),(intptr_t)0);
  if (iVar1 == 0) {
    piVar3 = (int *)((DataManager *)this)->shareDataManager();
    iVar1 = 0;
    do {
      uVar7 = (undefined4)(0);
      iVar8 = 0;
      while( true ) {
        piVar4 = (int *)(**(code **)(*(int *)(piVar3) + (0x28)))(piVar3);
        (**(code **)(*(int *)(piVar4) + (0x68)))();
        uVar5 = (undefined4)(((cocos2d::CCArray *)this)->count());
        if (uVar5 <= uVar7) break;
        piVar4 = ((void)((DataManager *)(piVar3))->getPlayerDataByIndex(uVar7),(int *)0);
        if (piVar4 != 0) {
          uVar2 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x40)))());
          iVar6 = (undefined4)(intptr_t)(((BLRoleAttribute *)(uVar2))->getAttrValueByType(iVar1));
          iVar8 = (undefined4)(intptr_t)(iVar8 + iVar6);
        }
        uVar7 = (undefined4)(uVar7 + 1);
      }
      iVar6 = (undefined4)(intptr_t)(iVar1 * 4);
      iVar1 = (undefined4)(intptr_t)(iVar1 + 1);
      ((PlatformHelp *)this)->reportScore(iVar8, (char const*)*(undefined4 *)(&g_004cec7e + iVar6 + g_004cec70));
    } while (iVar1 != 3);
    ((PlatformHelp *)this)->showGameRank();
  }
  else {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar2))->showUIById(0x53);
  }
  return;
}

void BLMainUIMenu::doBtnMenuAniamtion(bool p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::addVirtualItem()
{
  return;
}

void BLMainUIMenu::initRatingMenu()
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); uStack_30 = hw_fbits(_ws.width); uStack_2c = hw_fbits(_ws.height); }
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004cf02a + (intptr_t)(g_004cf1a0)),auStack_28);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  piVar3 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar2);
  (**(code **)(**(int **)(((int)this) + 0x158) + 200))(*(int **)(((int)this) + 0x158),piVar3);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004cf06a + (intptr_t)(g_004cf1a4))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar3) + (0x254)))(piVar3,((int)this),uStack_20,0,0x20);
  pcVar6 = *(code **)(*piVar3 + 0x28c);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(auStack_28,piVar2);
  (*pcVar6)(piVar3,auStack_28);
  pcVar6 = *(code **)(*piVar3 + 0x5c);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uStack_30,uVar1));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_004cf1a8));
  (*pcVar6)(piVar3,uVar1);
  pcVar6 = *(code **)(*piVar3 + 100);
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
  uVar1 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar5 + 4),0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uStack_2c,uVar1));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_004cf1a8));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_004cf1ac));
  (*pcVar6)(piVar3,uVar1);
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_34,(unsigned char *)((char *)&g_004cf10c + (intptr_t)(g_004cf1b0)),auStack_38);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_28);
  piVar2 = (int *)cocos2d::CCLabelTTF::create((char const*)auStack_28[0], (char const*)(unsigned char *)((char *)&g_004cf124 + (intptr_t)(g_004cf1b4)), g_004cf1b8);
  func_0079e2bc(auStack_28);
  func_0079e2bc(auStack_34);
  (**(code **)(*(int *)(piVar3) + (200)))(piVar3,piVar2);
  pcVar6 = *(code **)(*piVar2 + 0x5c);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  (*pcVar6)(piVar2,uVar1);
  (**(code **)(*(int *)(piVar2) + (100)))(piVar2,g_004cf1bc);
  if (*(int *)(((int)this) + 0x18c) == 0) {
    ((cocos2d::CCLabelTTF *)(piVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_004cf17e + (intptr_t)(g_004cf1c0)), 0x3f800000, 1);
  }
  return;
}

void BLMainUIMenu::initVip()
{
  return;
}

void BLMainUIMenu::initOnSaleShop()
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); uStack_38 = hw_fbits(_ws.width); uStack_34 = hw_fbits(_ws.height); }
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004cf4bc + (intptr_t)(g_004cf750)),&uStack_28);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  piVar3 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar2);
  (**(code **)(*(int *)this + 0xcc))(((int)this),piVar3,1);
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004cf4fe + (intptr_t)(g_004cf754))));
  (**(code **)(*(int *)(piVar3) + (0x254)))(piVar3,((int)this),uStack_20,0,0x20);
  pcVar7 = *(code **)(*piVar3 + 0x28c);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(&uStack_28,piVar2);
  (*pcVar7)(piVar3,&uStack_28);
  pcVar7 = *(code **)(*piVar3 + 0x5c);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uStack_38,uVar1));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_004cf758));
  (*pcVar7)(piVar3,uVar1);
  pcVar7 = *(code **)(*piVar3 + 100);
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
  uVar1 = (undefined4)(func_0079e57c(uStack_34,*(undefined4 *)(iVar5 + 4)));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_004cf75c));
  (*pcVar7)(piVar3,uVar1);
  piVar2 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004cf580 + (intptr_t)(g_004cf760)), (char const*)(unsigned char *)((char *)&g_004cf582 + (intptr_t)(g_004cf764)), g_004cf768);
  (**(code **)(*(int *)(piVar3) + (200)))(piVar3,piVar2);
  pcVar7 = *(code **)(*piVar2 + 0x5c);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  (*pcVar7)(piVar2,uVar1);
  (**(code **)(*(int *)(piVar2) + (100)))(piVar2,g_004cf76c);
  if (*(int *)((int)this + 4*(99)) == 0) {
    ((cocos2d::CCLabelTTF *)(piVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_004cf5d4 + (intptr_t)(g_004cf770)), 0x3f800000, 1);
  }
  piVar2 = (int *)cocos2d::CCLayer::create();
  (**(code **)(*(int *)(piVar2) + (0x11c)))(piVar2,g_004cf774);
  (**(code **)(*(int *)this + 0xcc))(((int)this),piVar2,1);
  func_0079e45c(&uStack_28,(unsigned char *)((char *)&g_004cf606 + (intptr_t)(g_004cf778)),auStack_30);
  piVar6 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_28);
  pcVar7 = *(code **)(*piVar6 + 0x1d4);
  (**(code **)(*(int *)(piVar6) + (0x1cc)))(&uStack_28,piVar6);
  (*pcVar7)(piVar6,&uStack_28);
  pcVar7 = *(code **)(*piVar6 + 0x4c);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x50)))(piVar3);
  uVar8 = (undefined4)(*puVar4);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar8,uVar1));
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar6) + (0x8c)))(piVar6);
  uVar8 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uVar1,uVar8));
  uVar1 = (undefined4)(func_0079e57c(uVar1,0x40000000));
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x50)))(piVar3));
  uVar8 = (undefined4)(func_0079e59c(*(undefined4 *)(iVar5 + 4),g_004cf758));
  0 /* ctorZero */;
  (*pcVar7)(piVar6,&uStack_28);
  (**(code **)(*(int *)(piVar2) + (0xcc)))(piVar2,piVar6,1);
  piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004cf6be + (intptr_t)(g_004cf77c)), (char const*)(unsigned char *)((char *)&g_004cf6c0 + (intptr_t)(g_004cf780)), g_004cf768);
  pcVar7 = *(code **)(*piVar3 + 0x4c);
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar6) + (0x50)))(piVar6));
  0 /* ctorZero */;
  ((cocos2d::CCPoint *)(uVar1))->operator+(*(const CCPoint *)(void *)auStack_30);
  (*pcVar7)(piVar3,&uStack_28);
  (**(code **)(*(int *)(piVar2) + (0xcc)))(piVar2,piVar3,1);
  uStack_28 = 0xff;
  uStack_27 = 0xff;
  uStack_26 = 0;
  (**(code **)(*(int *)(piVar3) + (0x1b4)))(piVar3);
  if (*(int *)((int)this + 4*(99)) == 0) {
    ((cocos2d::CCLabelTTF *)(piVar3))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_004cf72c + (intptr_t)(g_004cf78c)), 0x3f800000, 1);
  }
  (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
  return;
}

void BLMainUIMenu::onAchievement(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0x78);
  return;
}

void BLMainUIMenu::initMonthlyContract()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initPack4399()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initQQcoinEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initOneGift()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initWeekGift()
{
  return;
}

void BLMainUIMenu::initSheZhi()
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [2];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); uStack_40 = hw_fbits(_ws.width); uStack_3c = hw_fbits(_ws.height); }
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004d0064 + (intptr_t)(g_004d02cc)),&uStack_28);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  piVar3 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar2);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  uStack_1c = (undefined4)(0);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004d00a4 + (intptr_t)(g_004d02d0))));
  (**(code **)(*(int *)(piVar3) + (0x254)))(piVar3,((int)this),uStack_20,0,0x20);
  pcVar7 = *(code **)(*piVar3 + 0x28c);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(&uStack_28,piVar2);
  (*pcVar7)(piVar3,&uStack_28);
  pcVar7 = *(code **)(*piVar3 + 0x5c);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(&uStack_28,piVar2);
  uVar1 = (undefined4)(func_0079e4fc(uStack_28,0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uStack_40,uVar1));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_004d02d4));
  (*pcVar7)(piVar3,uVar1);
  pcVar7 = *(code **)(*piVar3 + 100);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(&uStack_28,piVar2);
  uVar1 = (undefined4)(func_0079e4fc(uStack_24,0x3f000000));
  uVar1 = (undefined4)(func_0079e57c(uStack_3c,uVar1));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_004d02d4));
  (*pcVar7)(piVar3,uVar1);
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  iVar4 = (undefined4)(intptr_t)(((cocos2d::CCUserDefault *)(uVar1))->getBoolForKey((char const*)(unsigned char *)((char *)&g_004d0144 + (intptr_t)(g_004d02d8)), 0));
  if (iVar4 == 0) {
    piVar2 = (int *)cocos2d::CCLayer::create();
    (**(code **)(*(int *)this + 0xd0))(((int)this),piVar2,10,g_004d02dc);
    func_0079e45c(&uStack_28,(unsigned char *)((char *)&g_004d016c + (intptr_t)(g_004d02e0)),auStack_30);
    piVar5 = (int *)0 /* ctorZero */;
    func_0079e2bc(&uStack_28);
    pcVar7 = *(code **)(*piVar5 + 0x88);
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar1 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar1 = (undefined4)(func_0079e4dc(auStack_38[0],uVar1));
    0 /* ctorZero */;
    cocos2d::CCDirector::sharedDirector();
    uVar6 = (undefined4)(((cocos2d::CCDirector *)this)->getContentScaleFactor());
    uVar6 = (undefined4)(func_0079e4dc(uStack_2c,uVar6));
    0 /* ctorZero */;
    (*pcVar7)(piVar5,&uStack_28);
    pcVar7 = *(code **)(*piVar5 + 0x5c);
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x60)))(piVar3));
    uVar1 = (undefined4)(func_0079e57c(uVar1,g_004d02ec));
    (*pcVar7)(piVar5,uVar1);
    pcVar7 = *(code **)(*piVar5 + 100);
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x68)))(piVar3));
    (**(code **)(*(int *)(piVar3) + (0x288)))(&uStack_28,piVar3);
    uVar6 = (undefined4)(func_0079e4fc(uStack_24,0x3f000000));
    uVar1 = (undefined4)(func_0079e57c(uVar1,uVar6));
    uVar1 = (undefined4)(func_0079e57c(uVar1,g_004d02f0));
    (*pcVar7)(piVar5,uVar1);
    (**(code **)(*(int *)(piVar2) + (0xcc)))(piVar2,piVar5,1);
    uVar1 = (undefined4)(((BLLanguage *)this)->share());
    func_0079e45c(auStack_30,(unsigned char *)((char *)&g_004d0250 + (intptr_t)(g_004d02f4)),auStack_38);
    ((BLLanguage *)this)->getString(*(std::string *)(void *)&uStack_28);
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)uStack_28, (char const*)(unsigned char *)((char *)&g_004d0266 + (intptr_t)(g_004d02f8)), g_004d02fc);
    func_0079e2bc(&uStack_28);
    func_0079e2bc(auStack_30);
    pcVar7 = *(code **)(*piVar3 + 0x5c);
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x60)))(piVar5));
    (*pcVar7)(piVar3,uVar1);
    pcVar7 = *(code **)(*piVar3 + 100);
    uVar1 = (undefined4)((**(code **)(*(int *)(piVar5) + (0x68)))(piVar5));
    (*pcVar7)(piVar3,uVar1);
    (**(code **)(*(int *)(piVar2) + (0xcc)))(piVar2,piVar3,1);
  }
  return;
}

undefined8 BLMainUIMenu::getSignTip()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMainUIMenu::initotherGift()
{
  return;
}

void BLMainUIMenu::initCard()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::setBtnQQCoinVisible(bool p1)
{
  (**(code **)(**(int **)(((int)this) + 0x14c) + 0x90))();
  return;
}

void BLMainUIMenu::initDialyPack()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initSMHCH()
{
  return;
}

void BLMainUIMenu::initLiveness()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onShowSMHCH(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onWeekGift(cocos2d::CCObject* p1, unsigned int p2)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0xf7);
  return;
}

void BLMainUIMenu::onUpdateCombat(cocos2d::CCObject* p1)
{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  uVar5 = (undefined4)(0);
  iVar6 = 0;
  while( true ) {
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
    (**(code **)(*(int *)(piVar1) + (0x68)))();
    uVar2 = (undefined4)(((cocos2d::CCArray *)this)->count());
    if (uVar2 <= uVar5) break;
    piVar1 = (int *)((DataManager *)this)->shareDataManager();
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0x28)))();
    uVar3 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x68)))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar3))->objectAtIndex((unsigned int)uVar5));
    if ((iVar4 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)((unsigned char *)((char *)&g_004d0d92 + (intptr_t)(g_004d0e48))),
                                        *(undefined4 *)((unsigned char *)((char *)&g_004d0d94 + (intptr_t)(g_004d0e4c))),0),
       piVar1 != 0)) {
      iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x58)))());
      iVar6 = (undefined4)(intptr_t)(iVar6 + iVar4);
    }
    uVar5 = (undefined4)(uVar5 + 1);
  }
  uVar3 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_20,(unsigned char *)((char *)&g_004d0dba + (intptr_t)(g_004d0e50)),auStack_28);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_1c);
  func_0079e53c(&uStack_24,auStack_1c);
  func_0079e854(&uStack_24,(unsigned char *)((char *)&g_004d0ddc + (intptr_t)(g_004d0e54)));
  func_0079e2bc(auStack_1c);
  func_0079e2bc(auStack_20);
  ConvertToString<int>(auStack_1c, iVar6, 0);
  func_0079e874(&uStack_24,auStack_1c);
  func_0079e2bc(auStack_1c);
  (**(code **)(**(int **)(((int)this) + 0x124) + 0x234))(*(int **)(((int)this) + 0x124),uStack_24);
  func_0079e2bc(&uStack_24);
  return;
}

void BLMainUIMenu::addItem(std::vector<int, std::allocator<int>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::updateHeroJie()
{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  uint auStack_30 [3];
  undefined1 auStack_24 [16];
  
  uVar1 = (undefined4)(((DailySignData *)this)->create());
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar2) + (0xe0)))(auStack_30,piVar2);
  uVar5 = (undefined4)(auStack_30[0] & -((uint)(auStack_30[0] < 7) - ((int)auStack_30[0] >> 0x1f)));
  uVar3 = (undefined4)(((DataManager *)this)->shareDataManager());
  iVar6 = (undefined4)(intptr_t)(uVar5 + 1);
  iVar4 = (undefined4)((void)(((DataManager *)(uVar3))->getDailySignWeek(iVar6)),(intptr_t)0);
  if (iVar4 != 0) {
    iVar6 = (undefined4)(intptr_t)(uVar5 + 8);
  }
  piVar2 = (int *)((DailySignData *)(uVar1))->getDailySignItemData(iVar6);
  (**(code **)(*(int *)(piVar2) + (0x40)))(auStack_38,piVar2);
  func_00442068(&uStack_34,(unsigned char *)((char *)&g_004d1208 + (intptr_t)(g_004d127c)),auStack_38);
  iVar4 = (undefined4)(intptr_t)(func_0079e804(&uStack_34,(unsigned char *)((char *)&g_004d1214 + (intptr_t)(g_004d1280)),0));
  if (iVar4 != -1) {
    uVar1 = (undefined4)(func_0079e804(&uStack_34,(unsigned char *)((char *)&g_004d124c + (intptr_t)(g_004d1284)),0));
    func_0079eb94(&uStack_34,uVar1,2,(unsigned char *)((char *)&g_004d125c + (intptr_t)(g_004d1288)));
  }
  (**(code **)(**(int **)(((int)this) + 0x170) + 0x234))(*(int **)(((int)this) + 0x170),uStack_34);
  func_0079e2bc(&uStack_34);
  func_0079e2bc(auStack_38);
  ((std::vector<int, std::allocator<int>> *)(auStack_24))->~vector();
  return;
}

void BLMainUIMenu::onUpdateSignLight(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::updateSignlight()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::zhuceJiangli()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onHideOneGift()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onZSGift(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 BLMainUIMenu::getUnLock(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMainUIMenu::initFailGift()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initCampaignAndNotice()
{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); __builtin_memcpy(&auStack_30, &_ws.width, 4); uStack_2c = hw_fbits(_ws.height); }
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004d1b46 + (intptr_t)(g_004d1dac)),auStack_28);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  piVar3 = (int *)cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar2);
  (**(code **)(*(int *)this + 200))(((int)this),piVar3);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004d1b86 + (intptr_t)(g_004d1db0))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)(piVar3) + (0x254)))(piVar3,((int)this),uStack_20,0,0x20);
  pcVar6 = *(code **)(*piVar3 + 0x28c);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(auStack_28,piVar2);
  (*pcVar6)(piVar3,auStack_28);
  pcVar6 = *(code **)(*piVar3 + 0x5c);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,0x41800000));
  (*pcVar6)(piVar3,uVar1);
  pcVar6 = *(code **)(*piVar3 + 100);
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3));
  uVar1 = (undefined4)(func_0079e57c(uStack_2c,*(undefined4 *)(iVar5 + 4)));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_004d1db4));
  (*pcVar6)(piVar3,uVar1);
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_34,(unsigned char *)((char *)&g_004d1c14 + (intptr_t)(g_004d1db8)),auStack_38);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_28);
  piVar2 = (int *)cocos2d::CCLabelTTF::create((char const*)auStack_28[0], (char const*)(unsigned char *)((char *)&g_004d1c2c + (intptr_t)(g_004d1dbc)), g_004d1dc0);
  func_0079e2bc(auStack_28);
  func_0079e2bc(auStack_34);
  (**(code **)(*(int *)(piVar3) + (200)))(piVar3,piVar2);
  pcVar6 = *(code **)(*piVar2 + 0x5c);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar3) + (0x8c)))(piVar3);
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  (*pcVar6)(piVar2,uVar1);
  (**(code **)(*(int *)(piVar2) + (100)))(piVar2,g_004d1dc4);
  if (*(int *)((int)this + 4*(99)) == 0) {
    ((cocos2d::CCLabelTTF *)(piVar2))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_004d1c8a + (intptr_t)(g_004d1dc8)), 0x3f800000, 1);
  }
  func_0079e45c(auStack_28,(unsigned char *)((char *)&g_004d1c98 + (intptr_t)(g_004d1dcc)),auStack_34);
  iVar5 = (undefined4)(intptr_t)(0 /* ctorZero */);
  *(int *)((int)this + 4*(0x4c)) = iVar5;
  func_0079e2bc(auStack_28);
  (**(code **)(*(int *)(piVar3) + (200)))(piVar3,*(int *)((int)this + 4*(0x4c)));
  piVar2 = (int *)*(int *)((int)this + 4*(0x4c));
  pcVar6 = *(code **)(*piVar2 + 0x4c);
  0 /* ctorZero */;
  (*pcVar6)(piVar2,auStack_28);
  uVar1 = (undefined4)(((BLLanguage *)this)->share());
  func_0079e45c(auStack_34,(unsigned char *)((char *)&g_004d1ce4 + (intptr_t)(g_004d1dd8)),auStack_38);
  (((BLLanguage *)this))->getString(*(std::string *)auStack_28);
  iVar5 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)auStack_28[0], (char const*)(unsigned char *)((char *)&g_004d1cfa + (intptr_t)(g_004d1ddc)), g_004d1de0));
  *(int *)((int)this + 4*(0x4d)) = iVar5;
  func_0079e2bc(auStack_28);
  func_0079e2bc(auStack_34);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 200))((int *)*(int *)((int)this + 4*(0x4c)),*(int *)((int)this + 4*(0x4d)));
  piVar2 = (int *)*(int *)((int)this + 4*(0x4d));
  pcVar6 = *(code **)(*piVar2 + 0x5c);
  puVar4 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 0x8c))();
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  (*pcVar6)(piVar2,uVar1);
  piVar2 = (int *)*(int *)((int)this + 4*(0x4d));
  pcVar6 = *(code **)(*piVar2 + 100);
  iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 0x8c))());
  uVar1 = (undefined4)(func_0079e4fc(*(undefined4 *)(iVar5 + 4),0x3f000000));
  (*pcVar6)(piVar2,uVar1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 0x90))((int *)*(int *)((int)this + 4*(0x4c)),0);
  iVar5 = (undefined4)(intptr_t)(((sir::singleton<CampaignData, 0> *)this)->instance());
  if (*(char *)(iVar5 + 0x4c) != '\0') {
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4c)) + 0x90))((int *)*(int *)((int)this + 4*(0x4c)),1);
    (**(code **)(*(int *)*(int *)((int)this + 4*(0x4d)) + 0x234))((int *)*(int *)((int)this + 4*(0x4d)),(unsigned char *)((char *)&g_004d1d88 + (intptr_t)(g_004d1de4)))
    ;
  }
  return;
}

undefined8 BLMainUIMenu::showHuoDong()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMainUIMenu::onCampaign(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::reflashActivityUI(cocos2d::CCObject* p1)
{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  code *pcVar4;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<CampaignData, 0> *)this)->instance());
  piVar2 = *(int **)(((int)this) + 0x130);
  if (*(char *)(iVar1 + 0x4c) == '\0') {
    if (piVar2 == 0) {
      return;
    }
    pcVar4 = *(code **)(*piVar2 + 0x90);
    uVar3 = 0;
  }
  else {
    if (piVar2 == 0) {
      return;
    }
    uVar3 = 1;
    pcVar4 = *(code **)(*piVar2 + 0x90);
  }
  (*pcVar4)(piVar2,uVar3);
  return;
}

void BLMainUIMenu::onHuaWei(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [8];
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<CampaignData, 0> *)this)->instance());
  uStack_18 = (undefined4)(*(undefined4 *)(iVar1 + 0x50));
  func_0079e53c(auStack_14,iVar1 + 0x54);
  func_0079e53c(&uStack_1c,auStack_14);
  func_0079e2bc(auStack_14);
  ((PlatformHelp *)this)->openHuaWeiShop((char const*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  return;
}

void BLMainUIMenu::initBluetooth()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initGiftZhuanShu()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::huaweishop()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initGemDraw()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initRedPack()
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)(uVar1))->getWinSize(); __builtin_memcpy(&auStack_30, &_ws.width, 4); uStack_2c = hw_fbits(_ws.height); }
  func_0079e45c(&uStack_20,(unsigned char *)((char *)&g_004d2cbc + (intptr_t)(g_004d2e50)),auStack_28);
  piVar2 = (int *)0 /* ctorZero */;
  func_0079e2bc(&uStack_20);
  iVar3 = (undefined4)(intptr_t)(cocos2d::extension::CCControlButton::create((cocos2d::extension::CCScale9Sprite*)piVar2));
  *(int *)((int)this + 4*(0x5f)) = iVar3;
  (**(code **)(*(int *)this + 200))(((int)this),iVar3);
  uStack_20 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004d2cfc + (intptr_t)(g_004d2e54))));
  uStack_1c = (undefined4)(0);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x5f)) + 0x254))((int *)*(int *)((int)this + 4*(0x5f)),((int)this),uStack_20,0,0x20);
  piVar6 = (int *)*(int *)((int)this + 4*(0x5f));
  pcVar5 = *(code **)(*piVar6 + 0x28c);
  (**(code **)(*(int *)(piVar2) + (0x1cc)))(auStack_28,piVar2);
  (*pcVar5)(piVar6,auStack_28);
  piVar6 = (int *)*(int *)((int)this + 4*(0x5f));
  pcVar5 = *(code **)(*piVar6 + 0x5c);
  puVar4 = (undefined4 *)(**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2);
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  uVar1 = (undefined4)(func_0079e59c(uVar1,0x41800000));
  (*pcVar5)(piVar6,uVar1);
  piVar2 = (int *)*(int *)((int)this + 4*(0x5f));
  pcVar5 = *(code **)(*piVar2 + 100);
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x8c)))(piVar2));
  uVar1 = (undefined4)(func_0079e57c(uStack_2c,*(undefined4 *)(iVar3 + 4)));
  uVar1 = (undefined4)(func_0079e57c(uVar1,g_004d2e58));
  (*pcVar5)(piVar2,uVar1);
  iVar3 = (undefined4)(intptr_t)(cocos2d::CCLabelTTF::create((char const*)(unsigned char *)((char *)&g_004d2d8c + (intptr_t)(g_004d2e5c)), (char const*)(unsigned char *)((char *)&g_004d2d8e + (intptr_t)(g_004d2e60)), g_004d2e64));
  *(int *)((int)this + 4*(0x60)) = iVar3;
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x5f)) + 200))((int *)*(int *)((int)this + 4*(0x5f)),iVar3);
  piVar2 = (int *)*(int *)((int)this + 4*(0x60));
  pcVar5 = *(code **)(*piVar2 + 0x5c);
  puVar4 = (undefined4 *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x5f)) + 0x8c))();
  uVar1 = (undefined4)(func_0079e4fc(*puVar4,0x3f000000));
  (*pcVar5)(piVar2,uVar1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x60)) + 100))((int *)*(int *)((int)this + 4*(0x60)),g_004d2e68);
  if (*(int *)((int)this + 4*(99)) == 0) {
    ((cocos2d::CCLabelTTF *)(*(int *)((int)this + 4*(0x60))))->enableStroke(*(cocos2d::_ccColor3B const*)(unsigned char *)((char *)&g_004d2de6 + (intptr_t)(g_004d2e6c)), 0x3f800000, 1);
  }
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x5f)) + 0x90))((int *)*(int *)((int)this + 4*(0x5f)),0);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x60)) + 0x90))((int *)*(int *)((int)this + 4*(0x60)),0);
  iVar3 = (undefined4)(intptr_t)(((sir::singleton<GateStatusData, 0> *)this)->instance());
  piVar2 = (int *)*(int *)((int)this + 4*(0x5f));
  bVar7 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x18) != -1);
  if (bVar7) {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,1);
    piVar2 = (int *)*(int *)((int)this + 4*(0x60));
    pcVar5 = *(code **)(*piVar2 + 0x90);
  }
  else {
    (**(code **)(*(int *)(piVar2) + (0x90)))(piVar2,0);
    piVar2 = (int *)*(int *)((int)this + 4*(0x60));
    pcVar5 = *(code **)(*piVar2 + 0x90);
  }
  (*pcVar5)(piVar2,bVar7);
  return;
}

void BLMainUIMenu::keyBackClicked()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initFestival()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onUpdateMainBtnNum()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLMainUIMenu::tick(float p1)
{
  undefined4 p3 = 0;

  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_1c = (undefined4)(p1);
  uStack_18 = (undefined4)(p3);
  if (*(char *)(((int)this) + 0x188) != '\0') {
    ((sir::singleton<MonthlyContractData, 0> *)this)->instance();
    ((MonthlyContractData *)this)->buySuccessed();
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)(uVar1))->showUIById(g_004d396c);
    *(undefined1 *)(((int)this) + 0x188) = 0;
  }
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*(int *)(piVar2) + (0xa0)))(&uStack_1c,piVar2);
  iVar3 = (undefined4)(intptr_t)(func_0079e4bc(&uStack_1c,(unsigned char *)((char *)&g_004d38d4 + (intptr_t)(g_004d3970))));
  func_0079e2bc(&uStack_1c);
  if (iVar3 != 0) {
    ((BLMainUIMenu *)(((int)this)))->addVirtualItem();
  }
  if (*(int *)(((int)this) + 0x160) != 0) {
    uVar1 = (undefined4)(func_0079e59c(p1,*(undefined4 *)(((int)this) + 0x164)));
    iVar3 = (undefined4)(intptr_t)(func_0079e4ec(uVar1,g_004d3974));
    if (iVar3 == 0) {
      *(undefined4 *)(((int)this) + 0x164) = uVar1;
    }
    else {
      *(undefined4 *)(((int)this) + 0x164) = 0;
      *(undefined4 *)(((int)this) + 0x160) = 0;
    }
  }
  piVar2 = (int *)((GuideManager *)this)->shareManager();
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x80)))());
  piVar2 = (int *)((DataManager *)this)->shareDataManager();
  iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (200)))());
  if (iVar4 != 0) {
    uVar1 = (undefined4)(((UIManager *)this)->shareManager());
    iVar4 = (undefined4)((void)(((UIManager *)(uVar1))->getUIObject(100)),(intptr_t)0);
    if (iVar4 == 0) {
      piVar2 = (int *)((DataManager *)this)->shareDataManager();
      iVar4 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0x118)))());
      if ((iVar4 != 9) && (iVar3 == 0)) {
        piVar2 = (int *)((DataManager *)this)->shareDataManager();
        (**(code **)(*(int *)(piVar2) + (0xcc)))(piVar2,0);
      }
    }
  }
  return ghidra_CONCAT44(uStack_1c,((int)this));
}

void BLMainUIMenu::onMonthlyContract(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<MonthlyContractData, 0> *)this)->instance());
  if ((*(int *)(iVar1 + 0x24) < 1) &&
     ((*(int *)(iVar1 + 0x24) != 0 || (*(int *)(iVar1 + 0x20) == 0)))) {
    ((sir::singleton<MonthlyContractData, 0> *)this)->instance();
    ((MonthlyContractData *)this)->getDataFromServer();
  }
  else {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    ((UIManager *)uVar2)->showUIById(g_004d39a4);
  }
  return;
}

void BLMainUIMenu::onMonthlyRefreshUI()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xd4))(((int)this),1000);
  if (piVar1 != 0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0xd4))(piVar1,g_004d3a18);
    if (piVar1 != 0) {
      ((cocos2d::CCNode *)this)->stopAllActions();
      (**(code **)(*piVar1 + 0x90))(piVar1,0);
    }
    iVar2 = (undefined4)(intptr_t)(((sir::singleton<MonthlyContractData, 0> *)this)->instance());
    iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 4));
    if (iVar2 == 0) {
      uVar3 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)uVar3)->showUIById(g_004d3a1c);
    }
    else {
      ((sir::singleton<MonthlyContractData, 0> *)this)->instance();
      iVar4 = (undefined4)(intptr_t)(((MonthlyContractData *)this)->isTodayGet());
      if (iVar4 == 0) {
        if (iVar2 == 2) {
          uVar3 = (undefined4)(0x12);
        }
        else if (iVar2 == 3) {
          uVar3 = (undefined4)(0x19);
        }
        else {
          uVar3 = (undefined4)(10);
          if (iVar2 != 1) {
            return;
          }
        }
        ((PlatformHelp *)this)->purchaseMonthlyContract(uVar3);
      }
    }
  }
  return;
}

void BLMainUIMenu::onNotice(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLMainUIMenu::onGemDraw(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMainUIMenu::onRedPack(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::updateDailyPack()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initSigned()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onSigned(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onUPdateSignedLight()
{
  undefined4 p3 = 0;
  undefined4 p4 = 0;

  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar1 = (**(code **)(*(int *)this + 0xd4))
                    (((int)this),g_004d422c,p3,*(code **)(*(int *)this + 0xd4),p4);
  if (iVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)software_udf(0xff,0x4d4228);
    (*pcVar8)();
  }
  uVar9 = (undefined4)(*(undefined4 *)((unsigned char *)((char *)&g_004d416e + (intptr_t)(g_004d4230))));
  piVar2 = (int *)func_0079e55c(iVar1,uVar9,*(undefined4 *)((unsigned char *)((char *)&g_004d4172 + (intptr_t)(g_004d4234))),0);
  iVar1 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar2) + (0xd4)))(piVar2,1000));
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)func_0079e55c(iVar1,uVar9,*(undefined4 *)((unsigned char *)((char *)&g_004d4190 + (intptr_t)(g_004d4238))),0);
  }
  iVar1 = (undefined4)(intptr_t)(((sir::singleton<SignedData, 0> *)this)->instance());
  iVar10 = (undefined4)(intptr_t)(*(int *)(iVar1 + 8));
  uVar5 = (undefined4)((*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2) * g_004d423c);
  if (uVar5 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (g_004d4240 <= uVar5 && uVar5 - g_004d4240 != 0) {
      func_0079e5bc();
    }
    puVar3 = (undefined4 *)func_0079e2fc();
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x10);
  puVar6 = puVar3;
  for (puVar7 = *(undefined4 **)(iVar1 + 0xc); puVar7 != puVar4; puVar7 = puVar7 + 3) {
    if (puVar6 != 0) {
      *puVar6 = (int)*(int *)&(*puVar7);
      puVar6[1] = puVar7[1];
      puVar6[2] = puVar7[2];
    }
    puVar6 = puVar6 + 3;
  }
  if (iVar10 == 1) {
    if (piVar2 == 0) goto code_r0x004d41ee;
    pcVar8 = *(code **)(*piVar2 + 0x90);
    uVar9 = (undefined4)(1);
  }
  else {
    if (piVar2 == 0) goto code_r0x004d41ee;
    uVar9 = (undefined4)(0);
    pcVar8 = *(code **)(*piVar2 + 0x90);
  }
  (*pcVar8)(piVar2,uVar9);
code_r0x004d41ee:
  if (puVar3 != 0) {
    func_0079e2cc(puVar3);
  }
  return;
}

void BLMainUIMenu::onSevenDayGift(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_14;
  undefined4 uStack_10;
  
  piVar3 = *(int **)((unsigned char *)((char *)&g_004d424c + (intptr_t)(g_004d42a8)));
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_10 = (undefined4)(p2);
  if (*piVar3 == 0) {
    iStack_14 = (undefined4)(intptr_t)(((sir::singleton_container *)this)->instance());
    iStack_14 = (undefined4)(intptr_t)(iStack_14 + 0x18);
    func_0079e41c();
    if (*piVar3 == 0) {
      piVar1 = (int *)func_0079e2fc(4);
      *piVar1 = *(int *)((unsigned char *)((char *)&g_004d427c + (intptr_t)(g_004d42ac))) + 8;
      *piVar3 = (int)piVar1;
      uVar2 = (undefined4)(((sir::singleton_container *)this)->instance());
      ((sir::singleton_container *)(uVar2))->add_singleton((sir::singleton_base*)*piVar3, 0);
    }
    ((sir::autolocker *)(&iStack_14))->~autolocker();
  }
  ((SignInData *)(*piVar3))->GetDataFromNet(2, 1);
  return;
}

void BLMainUIMenu::onMainSheZhi(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_14;
  undefined4 uStack_10;
  
  piVar3 = *(int **)((unsigned char *)((char *)&g_004d42b8 + (intptr_t)(g_004d4310)));
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_10 = (undefined4)(p2);
  if (*piVar3 == 0) {
    iStack_14 = (undefined4)(intptr_t)(((sir::singleton_container *)this)->instance());
    iStack_14 = (undefined4)(intptr_t)(iStack_14 + 0x18);
    func_0079e41c();
    if (*piVar3 == 0) {
      piVar1 = (int *)func_0079e2fc(4);
      *piVar1 = *(int *)((unsigned char *)((char *)&g_004d42e8 + (intptr_t)(g_004d4314))) + 8;
      *piVar3 = (int)piVar1;
      uVar2 = (undefined4)(((sir::singleton_container *)this)->instance());
      ((sir::singleton_container *)(uVar2))->add_singleton((sir::singleton_base*)*piVar3, 0);
    }
    ((sir::autolocker *)(&iStack_14))->~autolocker();
  }
  ((SiteData *)(*piVar3))->GetDataFromNet(1);
  return;
}

void BLMainUIMenu::onCard(cocos2d::CCObject* p1, unsigned int p2)
{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_14;
  undefined4 uStack_10;
  
  piVar3 = *(int **)((unsigned char *)((char *)&g_004d4320 + (intptr_t)(g_004d4384)));
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  uStack_10 = (undefined4)(p2);
  if (*piVar3 == 0) {
    iStack_14 = (undefined4)(intptr_t)(((sir::singleton_container *)this)->instance());
    iStack_14 = (undefined4)(intptr_t)(iStack_14 + 0x18);
    func_0079e41c();
    if (*piVar3 == 0) {
      piVar1 = (int *)func_0079e2fc(0x10);
      *piVar1 = *(int *)((unsigned char *)((char *)&g_004d4350 + (intptr_t)(g_004d4388))) + 8;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      *piVar3 = (int)piVar1;
      uVar2 = (undefined4)(((sir::singleton_container *)this)->instance());
      ((sir::singleton_container *)(uVar2))->add_singleton((sir::singleton_base*)*piVar3, 0);
    }
    ((sir::autolocker *)(&iStack_14))->~autolocker();
  }
  ((CardData *)(*piVar3))->GetDataFromNet(0, 1);
  return;
}

undefined8 BLMainUIMenu::onOpenOnSale(cocos2d::CCObject* p1, unsigned int p2)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_14;
  
  piVar3 = *(int **)((unsigned char *)((char *)&g_004d4394 + (intptr_t)(g_004d43f8)));
  iStack_14 = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  if (*piVar3 == 0) {
    iStack_14 = (undefined4)(intptr_t)(((sir::singleton_container *)this)->instance());
    iStack_14 = (undefined4)(intptr_t)(iStack_14 + 0x18);
    func_0079e41c();
    if (*piVar3 == 0) {
      iVar1 = (undefined4)(intptr_t)(func_0079e2fc(0x34));
      0 /* ctorZero */;
      *piVar3 = iVar1;
      uVar2 = (undefined4)(((sir::singleton_container *)this)->instance());
      iVar1 = (int)*(int *)&(*piVar3);
      if (iVar1 != 0) {
        iVar1 = (undefined4)(intptr_t)(iVar1 + 0x14);
      }
      ((sir::singleton_container *)(uVar2))->add_singleton((sir::singleton_base*)iVar1, 0);
    }
    ((sir::autolocker *)(&iStack_14))->~autolocker();
  }
  ((OnSaleData *)(*piVar3))->getAllDataFromNet();
  return ghidra_CONCAT44(iStack_14,((int)this));
}

void BLMainUIMenu::onUpdateAchievement(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initMainMenus()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onBtnClick(cocos2d::CCObject* p1, unsigned int p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initGifts(bool p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onBuyGift(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::showInitGifts()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initGiftManager()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onUpdateTip(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::initDailyGift()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onUpdateLivenessTips(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

bool BLMainUIMenu::init()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMainUIMenu::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMainUIMenu::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x40)))());
  ((cocos2d::CCTouchDispatcher *)(uVar2))->removeDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0xe4);
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)(uVar2))->removeAllObservers((cocos2d::CCObject*)((int)this));
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x30)))());
  ((cocos2d::CCScheduler *)(*(undefined4 *)((unsigned char *)((char *)&g_004d77a2 + (intptr_t)(g_004d77b0)))))->unscheduleSelector(0, (cocos2d::CCObject*)((int)this));
  ((cocos2d::CCLayer *)(((int)this)))->onExit();
  return;
}
