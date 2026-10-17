#include "BLMission.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "CCNotificationCenter.h"
#include "CCTouchDelegateProtocol.h"
#include "CCTouchDispatcher.h"
#include "CCLayer.h"
#include "CCObject.h"
#include "CCTouch.h"
#include "CCLabelTTF.h"
#include "CCDirector.h"
#include "CCGeometry.h"
#include "UIObject.h"
#include "BLMissionPlayerInfoView.h"
#include "BLBlueMissionManager.h"
#include "BLGameScene.h"
#include "BLHero.h"
#include "BLLeakUtils.h"
#include "BLMap.h"
#include "BLMapData.h"
#include "BLMapScene.h"
#include "BLMissionCountDownPresenter.h"
#include "BLMissionData.h"
#include "BLMissionManager.h"
#include "BLMissionPlayerInfoPresenter.h"
#include "BLMonsterData.h"
#include "BLResultManager.h"
#include "BLRole.h"
#include "BLRoleAttribute.h"
#include "BLRoleData.h"
#include "BLVideoPlayer.h"
#include "BluetoothHelper.h"
#include "ChallengeHttpUtil.h"
#include "ChallengePlayerData.h"
#include "DataCacheManager.h"
#include "DataManager.h"
#include "DragonCanyonData.h"
#include "FightControlLayer.h"
#include "GuideManager.h"
#include "LoadingLayer.h"
#include "MissionSelectHeroData.h"
#include "PKOnlineManager.h"
#include "PetUserData.h"
#include "TreasureDataManager.h"
#include "TreasureMissionData.h"
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
static inline undefined4 hw_fbits(float f) { undefined4 r; __builtin_memcpy(&r, &f, 4); return r; }
// 兜底声明
extern "C" long long software_udf(...);
extern "C" unsigned long LAB_0043e848;

extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4dc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e57c(...);
extern "C" long long func_0079e59c(...);
extern "C" long long func_0079e5bc(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e68c(...);
extern "C" long long func_0079e854(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long DAT_0043c194;
extern "C" unsigned long _DAT_0043c190;
extern "C" unsigned long _DAT_0043c194;
extern "C" unsigned long _DAT_0043c198;
extern "C" unsigned long _DAT_0043c300;
extern "C" unsigned long _DAT_0043c4e0;
extern "C" unsigned long _DAT_0043c4e4;
extern "C" unsigned long _DAT_0043c4e8;
extern "C" unsigned long _DAT_0043c530;
extern "C" unsigned long _DAT_0043c5e4;
extern "C" unsigned long _DAT_0043c5e8;
extern "C" unsigned long _DAT_0043c688;
extern "C" unsigned long _DAT_0043c68c;
extern "C" unsigned long _DAT_0043c7bc;
extern "C" unsigned long _DAT_0043c7c0;
extern "C" unsigned long _DAT_0043c860;
extern "C" unsigned long _DAT_0043c864;
extern "C" unsigned long _DAT_0043cc48;
extern "C" unsigned long _DAT_0043cc4c;
extern "C" unsigned long _DAT_0043cf08;
extern "C" unsigned long _DAT_0043cf0c;
extern "C" unsigned long _DAT_0043d0f8;
extern "C" unsigned long _DAT_0043d0fc;
extern "C" unsigned long _DAT_0043d100;
extern "C" unsigned long _DAT_0043d104;
extern "C" unsigned long _DAT_0043d108;
extern "C" unsigned long _DAT_0043d10c;
extern "C" unsigned long _DAT_0043d8d8;
extern "C" unsigned long _DAT_0043d8dc;
extern "C" unsigned long _DAT_0043d8e0;
extern "C" unsigned long _DAT_0043d8e4;
extern "C" unsigned long _DAT_0043d8e8;
extern "C" unsigned long _DAT_0043db10;
extern "C" unsigned long _DAT_0043db14;
extern "C" unsigned long _DAT_0043db18;
extern "C" unsigned long _DAT_0043db1c;
extern "C" unsigned long _DAT_0043db20;
extern "C" unsigned long _DAT_0043db24;
extern "C" unsigned long _DAT_0043de74;
extern "C" unsigned long _DAT_0043de78;
extern "C" unsigned long _DAT_0043de7c;
extern "C" unsigned long _DAT_0043de80;
extern "C" unsigned long _DAT_0043e1d0;
extern "C" unsigned long _DAT_0043e1d4;
extern "C" unsigned long _DAT_0043e1d8;
extern "C" unsigned long _DAT_0043e1dc;
extern "C" unsigned long _DAT_0043e504;
extern "C" unsigned long _DAT_0043e508;
extern "C" unsigned long _DAT_0043e50c;
extern "C" unsigned long _DAT_0043e84c;
extern "C" unsigned long _DAT_0043e850;
extern "C" unsigned long _DAT_0043e854;
extern "C" unsigned long _DAT_0043e858;
extern "C" unsigned long _DAT_0043e85c;
extern "C" unsigned long _DAT_0043e990;
extern "C" unsigned long _DAT_0043eabc;
extern "C" unsigned long _DAT_0043ee00;
extern "C" unsigned long _DAT_0043ee04;
extern "C" unsigned long _DAT_0043ee08;
extern "C" unsigned long _DAT_0043ee0c;
extern "C" unsigned long _DAT_0043ee10;
extern "C" unsigned long _DAT_0043ee14;
extern "C" unsigned long _DAT_0043ee18;
extern "C" unsigned long _DAT_0043ee1c;
extern "C" unsigned long _DAT_0043ee20;
extern "C" unsigned long _DAT_0043ee24;
extern "C" unsigned long _DAT_0043ee28;
extern "C" unsigned long _DAT_0043ee2c;
extern "C" unsigned long _DAT_0043ee30;
extern "C" unsigned long _DAT_0043ee34;
extern "C" unsigned long _DAT_0043ee38;
extern "C" unsigned long _DAT_0043ee3c;
extern "C" unsigned long _DAT_0043ee40;
extern "C" unsigned long _DAT_0043ee44;
extern "C" unsigned long _DAT_0043ee48;
extern "C" unsigned long _DAT_0043ee4c;
extern "C" unsigned long _DAT_0043ee50;
extern "C" unsigned long _DAT_0043ee54;
extern "C" unsigned long _DAT_0043ee58;
extern "C" unsigned long _DAT_0043ee5c;
extern "C" unsigned long _DAT_0043ee60;
extern "C" unsigned long _DAT_0043ee64;
extern "C" unsigned long _DAT_0043f03c;
extern "C" unsigned long _DAT_0043f040;
extern "C" unsigned long _DAT_0043f044;
extern "C" unsigned long _DAT_0043f048;
extern "C" unsigned long _DAT_0043f04c;
extern "C" unsigned long _DAT_0043f050;
extern "C" unsigned long _DAT_0043f118;
extern "C" unsigned long _DAT_0043f4cc;
extern "C" unsigned long _DAT_0043f4d0;
extern "C" unsigned long _DAT_0043f4d4;
extern "C" unsigned long _DAT_0043f4d8;
extern "C" unsigned long _DAT_0043f6e4;
extern "C" unsigned long _DAT_0043f6e8;
extern "C" unsigned long _DAT_0043f6ec;
extern "C" unsigned long _DAT_0043f6f0;
extern "C" unsigned long _DAT_0043f8a4;
extern "C" unsigned long _DAT_0043f8a8;
extern "C" unsigned long _DAT_0043f8ac;
extern "C" unsigned long _DAT_0043f8b0;
extern "C" unsigned long _DAT_0043f8b4;
extern "C" unsigned long _DAT_0043f8b8;
extern "C" unsigned long _DAT_0043f8bc;
extern "C" unsigned long _DAT_0043f8c0;
extern "C" unsigned long _DAT_0043f8c4;
extern "C" unsigned long _DAT_0043f9c0;
extern "C" unsigned long _DAT_0043f9c4;
extern "C" unsigned long _DAT_0043f9c8;
extern "C" unsigned long _DAT_0043f9cc;
extern "C" unsigned long _DAT_0043f9d0;
extern "C" unsigned long _DAT_0043f9d4;
extern "C" unsigned long _DAT_0043f9d8;
extern "C" unsigned long _DAT_0043fe24;
extern "C" unsigned long _DAT_0043fe28;
extern "C" unsigned long _DAT_0043fe2c;
extern "C" unsigned long _DAT_0043fe30;
extern "C" unsigned long _DAT_0043fe34;
extern "C" unsigned long _DAT_0043fe38;
extern "C" unsigned long _DAT_0043ff50;
extern "C" unsigned long _DAT_0043ff54;
extern "C" unsigned long _DAT_0043ff58;
extern "C" unsigned long _DAT_0043ff5c;
extern "C" unsigned long _DAT_0044024c;
extern "C" unsigned long _DAT_00440250;
extern "C" unsigned long _DAT_00440254;
extern "C" unsigned long _DAT_00440258;
extern "C" unsigned long _DAT_004405c8;
extern "C" unsigned long _DAT_004405cc;
extern "C" unsigned long _DAT_004405d0;
extern "C" unsigned long _DAT_004405d4;
extern "C" unsigned long _DAT_004405d8;
extern "C" unsigned long _DAT_004405dc;
extern "C" unsigned long _DAT_004405e0;
extern "C" unsigned long _DAT_004405e4;
extern "C" unsigned long _DAT_00440688;
extern "C" unsigned long _DAT_0044068c;
extern "C" unsigned long _DAT_00440690;
extern "C" unsigned long _DAT_00440694;
extern "C" unsigned long _DAT_00440740;
extern "C" unsigned long _DAT_00440744;
extern "C" unsigned long _DAT_00440748;
extern "C" unsigned long _DAT_0044074c;
extern "C" unsigned long _DAT_00440750;
extern "C" unsigned long _UNK_0043bfc4;
extern "C" unsigned long _UNK_0043bfdc;
extern "C" unsigned long _UNK_0043bff4;
extern "C" unsigned long _UNK_0043c00c;
extern "C" unsigned long _UNK_0043c1ac;
extern "C" unsigned long _UNK_0043c1d4;
extern "C" unsigned long _UNK_0043c3e4;
extern "C" unsigned long extraout_r2;
extern "C" unsigned long g_0043bfc4;
extern "C" unsigned long g_0043bfdc;
extern "C" unsigned long g_0043bff4;
extern "C" unsigned long g_0043c00c;
extern "C" unsigned long g_0043c190;
extern "C" unsigned long g_0043c194;
extern "C" unsigned long g_0043c198;
extern "C" unsigned long g_0043c1ac;
extern "C" unsigned long g_0043c1d4;
extern "C" unsigned long g_0043c300;
extern "C" unsigned long g_0043c3e4;
extern "C" unsigned long g_0043c4e0;
extern "C" unsigned long g_0043c4e4;
extern "C" unsigned long g_0043c4e8;
extern "C" unsigned long g_0043c530;
extern "C" unsigned long g_0043c5e4;
extern "C" unsigned long g_0043c5e8;
extern "C" unsigned long g_0043c688;
extern "C" unsigned long g_0043c68c;
extern "C" unsigned long g_0043c7bc;
extern "C" unsigned long g_0043c7c0;
extern "C" unsigned long g_0043c860;
extern "C" unsigned long g_0043c864;
extern "C" unsigned long g_0043cc48;
extern "C" unsigned long g_0043cc4c;
extern "C" unsigned long g_0043cf08;
extern "C" unsigned long g_0043cf0c;
extern "C" unsigned long g_0043d0f8;
extern "C" unsigned long g_0043d0fc;
extern "C" unsigned long g_0043d100;
extern "C" unsigned long g_0043d104;
extern "C" unsigned long g_0043d108;
extern "C" unsigned long g_0043d10c;
extern "C" unsigned long g_0043d8d8;
extern "C" unsigned long g_0043d8dc;
extern "C" unsigned long g_0043d8e0;
extern "C" unsigned long g_0043d8e4;
extern "C" unsigned long g_0043d8e8;
extern "C" unsigned long g_0043db10;
extern "C" unsigned long g_0043db14;
extern "C" unsigned long g_0043db18;
extern "C" unsigned long g_0043db1c;
extern "C" unsigned long g_0043db20;
extern "C" unsigned long g_0043db24;
extern "C" unsigned long g_0043de74;
extern "C" unsigned long g_0043de78;
extern "C" unsigned long g_0043de7c;
extern "C" unsigned long g_0043de80;
extern "C" unsigned long g_0043e1d0;
extern "C" unsigned long g_0043e1d4;
extern "C" unsigned long g_0043e1d8;
extern "C" unsigned long g_0043e1dc;
extern "C" unsigned long g_0043e504;
extern "C" unsigned long g_0043e508;
extern "C" unsigned long g_0043e50c;
extern "C" unsigned long g_0043e84c;
extern "C" unsigned long g_0043e850;
extern "C" unsigned long g_0043e854;
extern "C" unsigned long g_0043e858;
extern "C" unsigned long g_0043e85c;
extern "C" unsigned long g_0043e990;
extern "C" unsigned long g_0043eabc;
extern "C" unsigned long g_0043ee00;
extern "C" unsigned long g_0043ee04;
extern "C" unsigned long g_0043ee08;
extern "C" unsigned long g_0043ee0c;
extern "C" unsigned long g_0043ee10;
extern "C" unsigned long g_0043ee14;
extern "C" unsigned long g_0043ee18;
extern "C" unsigned long g_0043ee1c;
extern "C" unsigned long g_0043ee20;
extern "C" unsigned long g_0043ee24;
extern "C" unsigned long g_0043ee28;
extern "C" unsigned long g_0043ee2c;
extern "C" unsigned long g_0043ee30;
extern "C" unsigned long g_0043ee34;
extern "C" unsigned long g_0043ee38;
extern "C" unsigned long g_0043ee3c;
extern "C" unsigned long g_0043ee40;
extern "C" unsigned long g_0043ee44;
extern "C" unsigned long g_0043ee48;
extern "C" unsigned long g_0043ee4c;
extern "C" unsigned long g_0043ee50;
extern "C" unsigned long g_0043ee54;
extern "C" unsigned long g_0043ee58;
extern "C" unsigned long g_0043ee5c;
extern "C" unsigned long g_0043ee60;
extern "C" unsigned long g_0043ee64;
extern "C" unsigned long g_0043f03c;
extern "C" unsigned long g_0043f040;
extern "C" unsigned long g_0043f044;
extern "C" unsigned long g_0043f048;
extern "C" unsigned long g_0043f04c;
extern "C" unsigned long g_0043f050;
extern "C" unsigned long g_0043f118;
extern "C" unsigned long g_0043f4cc;
extern "C" unsigned long g_0043f4d0;
extern "C" unsigned long g_0043f4d4;
extern "C" unsigned long g_0043f4d8;
extern "C" unsigned long g_0043f6e4;
extern "C" unsigned long g_0043f6e8;
extern "C" unsigned long g_0043f6ec;
extern "C" unsigned long g_0043f6f0;
extern "C" unsigned long g_0043f8a4;
extern "C" unsigned long g_0043f8a8;
extern "C" unsigned long g_0043f8ac;
extern "C" unsigned long g_0043f8b0;
extern "C" unsigned long g_0043f8b4;
extern "C" unsigned long g_0043f8b8;
extern "C" unsigned long g_0043f8bc;
extern "C" unsigned long g_0043f8c0;
extern "C" unsigned long g_0043f8c4;
extern "C" unsigned long g_0043f9c0;
extern "C" unsigned long g_0043f9c4;
extern "C" unsigned long g_0043f9c8;
extern "C" unsigned long g_0043f9cc;
extern "C" unsigned long g_0043f9d0;
extern "C" unsigned long g_0043f9d4;
extern "C" unsigned long g_0043f9d8;
extern "C" unsigned long g_0043fe24;
extern "C" unsigned long g_0043fe28;
extern "C" unsigned long g_0043fe2c;
extern "C" unsigned long g_0043fe30;
extern "C" unsigned long g_0043fe34;
extern "C" unsigned long g_0043fe38;
extern "C" unsigned long g_0043ff50;
extern "C" unsigned long g_0043ff54;
extern "C" unsigned long g_0043ff58;
extern "C" unsigned long g_0043ff5c;
extern "C" unsigned long g_0044024c;
extern "C" unsigned long g_00440250;
extern "C" unsigned long g_00440254;
extern "C" unsigned long g_00440258;
extern "C" unsigned long g_004405c8;
extern "C" unsigned long g_004405cc;
extern "C" unsigned long g_004405d0;
extern "C" unsigned long g_004405d4;
extern "C" unsigned long g_004405d8;
extern "C" unsigned long g_004405dc;
extern "C" unsigned long g_004405e0;
extern "C" unsigned long g_004405e4;
extern "C" unsigned long g_00440688;
extern "C" unsigned long g_0044068c;
extern "C" unsigned long g_00440690;
extern "C" unsigned long g_00440694;
extern "C" unsigned long g_00440740;
extern "C" unsigned long g_00440744;
extern "C" unsigned long g_00440748;
extern "C" unsigned long g_0044074c;
extern "C" unsigned long g_00440750;
bool BLMission::getStopGame() const
{
  return *(undefined1 *)(((int)this) + 0x108);
}

void BLMission::setStopGame(bool p1)
{
  *(undefined1 *)(((int)this) + 0x108) = p1;
  return;
}

BLMissionManager* BLMission::getMissionManager() const
{
  return (BLMissionManager*)(*(undefined4 *)(((int)this) + 0x110));
}

BLMissionPlayerInfoView* BLMission::getPlayerInfoView() const
{
  return (BLMissionPlayerInfoView*)(*(undefined4 *)(((int)this) + 0x114));
}

void BLMission::setPlayerInfoView(BLMissionPlayerInfoView* p1)
{
  *(undefined4 *)(((int)this) + 0x114) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCLabelTTF* BLMission::getLabTime() const
{
  return (cocos2d::CCLabelTTF*)(*(undefined4 *)(((int)this) + 0x118));
}

void BLMission::setLabTime(cocos2d::CCLabelTTF* p1)
{
  *(undefined4 *)(((int)this) + 0x118) = (undefined4)(intptr_t)p1;
  return;
}

float BLMission::getTime() const
{
  return *(undefined4 *)(((int)this) + 0x11c);
}

void BLMission::setTime(float p1)
{
  *(undefined4 *)(((int)this) + 0x11c) = p1;
  return;
}

bool BLMission::getNeedUpdateTime() const
{
  return *(undefined1 *)(((int)this) + 0x120);
}

void BLMission::setNeedUpdateTime(bool p1)
{
  *(undefined1 *)(((int)this) + 0x120) = p1;
  return;
}

bool BLMission::ccTouchBegan(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return 1;
}

void BLMission::ccTouchMoved(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMission::ccTouchEnded(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMission::ccTouchCancelled(cocos2d::CCTouch* p1, cocos2d::CCEvent* p2)
{
  return;
}

void BLMission::onCountDownEnd()
{
  *(undefined1 *)(((int)this) + 0x121) = 1;
  return;
}

void BLMission::setMissionID(std::string * p1)
{
  func_0079e52c(((int)this) + 0x10c);
  return;
}

void BLMission::setMissionManager(BLMissionManager* p1)
{
  if (*(int *)(((int)this) + 0x110) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x110) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x110) = (undefined4)(intptr_t)p1;
  }
  return;
}

BLMission::~BLMission()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uVar1;
  int iVar2;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(g_0043c190 + 0x43c100);
  *(int *)this = iVar2 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar2 + 0x240;
  *(int *)((int)this + 4*(0x3a)) = iVar2 + 0x270;
  *(int *)((int)this + 4*(0x3b)) = iVar2 + 0x27c;
  piStack_20 = (int *)((int)this);
  uStack_1c = (undefined4)(p2);
  uStack_18 = (undefined4)(p3);
  if (*(int *)((int)this + 4*(0x44)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x44)) = 0;
  }
  uVar1 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_1c,((intptr_t)"BLMission"),&piStack_20);
  ((BLLeakUtils *)uVar1)->removeClass((std::string)(char*)uStack_1c);
  func_0079e2bc(&uStack_1c);
  *(undefined4 *)(&g_0043c194 + g_0043c198) = 0;
  func_0079e2bc(((int)this) + 0x43);
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCLayer(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}

std::string BLMission::getMissionID() const
{ return *(std::string *)(((int)this) + 0x10c); }

undefined4 BLMission::currentMission()
{
  return *(undefined4 *)("4.3");
}

void BLMission::keyBackClicked()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)((GuideManager *)this)->shareManager();
  iVar2 = (**(code **)(*piVar1 + 0x80))();
  if (iVar2 == 0) {
    ((BluetoothHelper *)this)->share();
    iVar2 = ((BluetoothHelper *)this)->isBlueFight();
    if (iVar2 != 0) {
      piVar1 = (int *)((BluetoothHelper *)this)->share();
      iVar2 = (**(code **)(*piVar1 + 0x88))();
      if (iVar2 != 0) {
        return;
      }
      ((BluetoothHelper *)this)->share();
      ((BluetoothHelper *)this)->bluetoothDisconnect();
    }
    piVar1 = (int *)((BLGameScene *)this)->shareGameScene();
    iVar2 = (**(code **)(*piVar1 + 0x208))();
    if (iVar2 == 6) {
      ((BLVideoPlayer *)this)->share();
      ((BLVideoPlayer *)this)->stopPlay();
      ((BLResultManager *)this)->shareManager();
      ((BLResultManager *)this)->returnMainCity();
      uVar3 = (undefined4)(((UIManager *)this)->shareManager());
      uVar3 = (undefined4)(((UIManager *)uVar3)->createUi(0x7a));
      uVar4 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)uVar4)->pushUi((UIObject*)uVar3);
      uVar3 = (undefined4)(((UIManager *)this)->shareManager());
      uVar3 = (undefined4)(((UIManager *)uVar3)->createUi(0x7b));
      uVar4 = (undefined4)(((UIManager *)this)->shareManager());
      ((UIManager *)uVar4)->pushUi((UIObject*)uVar3);
    }
    else {
      piVar1 = (int *)BLMission::currentMission();
      piVar1 = (int *)(**(code **)(*piVar1 + 0x208))();
      iVar2 = (**(code **)(*piVar1 + 0x98))();
      ((BLRoleAttribute *)iVar2 + 0x1c4)->ResetHeroProperty();
      ((BLResultManager *)this)->shareManager();
      ((BLResultManager *)this)->returnMainCity();
      ((PKOnlineManager *)this)->exitLobby();
      ((BluetoothHelper *)this)->share();
      iVar2 = ((BluetoothHelper *)this)->isBlueFight();
      if (iVar2 != 0) {
        ((BluetoothHelper *)this)->share();
        iVar2 = ((BluetoothHelper *)this)->isHost();
        if (iVar2 != 0) {
          ((BluetoothHelper *)this)->share();
          ((BluetoothHelper *)this)->enterMainCity();
        }
      }
    }
  }
  return;
}

BLMission::BLMission()
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
  iVar3 = *(int *)(g_0043c4e0 + 0x43c3f8);
  *(int *)this = iVar3 + 8;
  *(int *)((int)this + 4*(0x39)) = iVar3 + 0x240;
  *(int *)((int)this + 4*(0x3a)) = iVar3 + 0x270;
  *(int *)((int)this + 4*(0x3b)) = iVar3 + 0x27c;
  *(int *)((int)this + 4*(0x43)) = *(int *)(g_0043c4e4 + 0x43c426) + 0xc;
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->addTargetedDelegate((cocos2d::CCTouchDelegate*)((int)this) + 0x39, 1, 0);
  ((BluetoothHelper *)this)->share();
  iVar3 = ((BluetoothHelper *)this)->isBlueFight();
  if (iVar3 != 0) {
    ((BluetoothHelper *)this)->share();
    iVar3 = ((BluetoothHelper *)this)->isHost();
    if (iVar3 == 0) {
      iVar3 = ((BLBlueMissionManager *)this)->create();
      goto LAB_0043c478;
    }
  }
  iVar3 = ((BLMissionManager *)this)->create();
LAB_0043c478:
  *(int *)((int)this + 4*(0x44)) = iVar3;
  if (*(int *)((int)this + 4*(0x44)) != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(undefined1 *)(((int)this) + 0x42) = 0;
  *(undefined1 *)((int)((int)this) + 0x121) = 0;
  *(int *)((int)this + 4*(0x47)) = 0;
  *(int *)((int)this + 4*(0x45)) = 0;
  *(int *)((int)this + 4*(0x46)) = 0;
  *(undefined1 *)(((int)this) + 0x48) = 0;
  uVar2 = (undefined4)(((BLLeakUtils *)this)->share());
  func_0079e45c(&uStack_14,((intptr_t)"BLMission"),&piStack_18);
  ((BLLeakUtils *)uVar2)->addClass((std::string)(char*)uStack_14);
  func_0079e2bc(&uStack_14);
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  (**(code **)(*piVar1 + 0x174))(piVar1,0);
  return;
}

int * BLMission::create()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x124)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    *(int **)("4.3") = piVar1;
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  return (int *)(piVar1);
}



undefined8 BLMission::startBleutoothMission()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLMap *)this)->create());
  (**(code **)(*(int *)this + 200))(((int)this),uVar1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xac))((int *)*(int *)((int)this + 4*(0x44)),uVar1);
  piVar2 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x30))());
  ((BLMap *)uVar1)->initWith(uVar3);
  uVar1 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  piVar2 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  (**(code **)(*piVar2 + 0x48))(&uStack_14,piVar2);
  ((CocosDenshion::SimpleAudioEngine *)uVar1)->playBackgroundMusic((char const*)uStack_14, 1);
  func_0079e2bc(&uStack_14);
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0);
  *(undefined1 *)(((int)this) + 0x48) = 0;
  *(undefined1 *)((int)((int)this) + 0x121) = 1;
  return ghidra_CONCAT44(uStack_14,((int)this));
}




void BLMission::initChallengePlayerInfoView()
{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [12];
  
  piVar1 = (int *)((long long)::operator new((size_t)(0x13c)));
  0 /* ctorZero */;
  iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x45)) = (int)piVar1;
  uVar3 = (undefined4)(cocos2d::CCDirector::sharedDirector());
  { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar3)->getWinSize(); uStack_28 = hw_fbits(_ws.width); uStack_24 = hw_fbits(_ws.height); }
  piVar1 = (int *)*(int *)((int)this + 4*(0x45));
  pcVar5 = *(code **)(*piVar1 + 0x4c);
  uVar3 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x3f000000)))));
  uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(0x3f000000)))));
  0 /* ctorZero */;
  (*pcVar5)(piVar1,auStack_20);
  (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x45)),10);
  return;
}










undefined8 BLMission::startOnlineArenaMission()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p2);
  uVar1 = (undefined4)(((BLMap *)this)->create());
  (**(code **)(*(int *)this + 200))(((int)this),uVar1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xac))((int *)*(int *)((int)this + 4*(0x44)),uVar1);
  piVar2 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x30))());
  ((BLMap *)uVar1)->initWith(uVar3);
  uVar1 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  piVar2 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  (**(code **)(*piVar2 + 0x48))(&uStack_14,piVar2);
  ((CocosDenshion::SimpleAudioEngine *)uVar1)->playBackgroundMusic((char const*)uStack_14, 1);
  func_0079e2bc(&uStack_14);
  BLMission::addArenaOnline();
  BLMission::addObstacles();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0);
  *(undefined1 *)(((int)this) + 0x48) = 0;
  *(undefined1 *)((int)((int)this) + 0x121) = 1;
  return ghidra_CONCAT44(uStack_14,((int)this));
}

undefined8 BLMission::startArena()
{
  undefined4 p2 = 0;

  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p2);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xfc))((int *)*(int *)((int)this + 4*(0x44)),1);
  piVar1 = (int *)((BluetoothHelper *)this)->share();
  (**(code **)(*piVar1 + 0x74))(piVar1,0);
  uVar2 = (undefined4)(((BLMap *)this)->create());
  (**(code **)(*(int *)this + 200))(((int)this),uVar2);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xac))((int *)*(int *)((int)this + 4*(0x44)),uVar2);
  piVar1 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  uVar3 = (undefined4)((**(code **)(*piVar1 + 0x30))());
  ((BLMap *)uVar2)->initWith(uVar3);
  uVar2 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  piVar1 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  (**(code **)(*piVar1 + 0x48))(&uStack_14,piVar1);
  ((CocosDenshion::SimpleAudioEngine *)uVar2)->playBackgroundMusic((char const*)uStack_14, 1);
  func_0079e2bc(&uStack_14);
  BLMission::addArenaplayers();
  BLMission::addObstacles();
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->showUIById(0);
  *(undefined1 *)(((int)this) + 0x48) = 0;
  *(undefined1 *)((int)((int)this) + 0x121) = 1;
  return ghidra_CONCAT44(uStack_14,((int)this));
}

undefined8 BLMission::startMine()
{
  undefined4 p2 = 0;

  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p2);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xfc))((int *)*(int *)((int)this + 4*(0x44)),1);
  uVar1 = (undefined4)(((BLMap *)this)->create());
  (**(code **)(*(int *)this + 200))(((int)this),uVar1);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xac))((int *)*(int *)((int)this + 4*(0x44)),uVar1);
  piVar2 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  uVar3 = (undefined4)((**(code **)(*piVar2 + 0x30))());
  ((BLMap *)uVar1)->initWith(uVar3);
  uVar1 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  piVar2 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  (**(code **)(*piVar2 + 0x48))(&uStack_14,piVar2);
  ((CocosDenshion::SimpleAudioEngine *)uVar1)->playBackgroundMusic((char const*)uStack_14, 1);
  func_0079e2bc(&uStack_14);
  BLMission::addMineplayers();
  BLMission::addObstacles();
  uVar1 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar1)->showUIById(0);
  *(undefined1 *)(((int)this) + 0x48) = 0;
  *(undefined1 *)((int)((int)this) + 0x121) = 1;
  return ghidra_CONCAT44(uStack_14,((int)this));
}







void BLMission::startMission()
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  
  *(undefined1 *)(((int)this) + 0x48) = 0;
  uVar2 = (undefined4)(((BLMap *)this)->create());
  (**(code **)(*(int *)this + 200))(((int)this),uVar2);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xac))((int *)*(int *)((int)this + 4*(0x44)),uVar2);
  piVar3 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  uVar4 = (undefined4)((**(code **)(*piVar3 + 0x30))());
  ((BLMap *)uVar2)->initWith(uVar4);
  uVar2 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  piVar3 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  (**(code **)(*piVar3 + 0x48))(auStack_20,piVar3);
  ((CocosDenshion::SimpleAudioEngine *)uVar2)->playBackgroundMusic((char const*)auStack_20[0], 1);
  func_0079e2bc(auStack_20);
  BLMission::addPartners();
  BLMission::addPet();
  BLMission::addObstacles();
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)uVar2)->showUIById(0);
  *(int *)((int)this + 4*(0x47)) = 0;
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  iVar5 = (**(code **)(*piVar3 + 0x118))();
  uVar2 = (undefined4)(g_0043f8a8);
  iVar1 = g_0043f8a4;
  if (iVar5 == 1) {
    *(undefined1 *)(((int)this) + 0x48) = 1;
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)"耗时: 00秒", (char const*)iVar1 + 0x43f7a8, uVar2);
    *(int *)((int)this + 4*(0x46)) = (int)piVar3;
    (**(code **)(*piVar3 + 0x1b4))(piVar3,g_0043f8b0 + 0x43f7bc);
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar2)->getWinSize(); uStack_28 = hw_fbits(_ws.width); uStack_24 = hw_fbits(_ws.height); }
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x3f000000)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(g_0043f8b4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),10);
  }
  piVar3 = (int *)((DataManager *)this)->shareDataManager();
  iVar6 = (**(code **)(*piVar3 + 0x118))();
  iVar5 = g_0043f8bc;
  iVar1 = g_0043f8b8;
  if (iVar6 == 0xe) {
    *(undefined1 *)(((int)this) + 0x48) = 1;
    piVar3 = (int *)cocos2d::CCLabelTTF::create((char const*)iVar1 + 0x43f828, (char const*)iVar5 + 0x43f82a, g_0043f8a8);
    *(int *)((int)this + 4*(0x46)) = (int)piVar3;
    (**(code **)(*piVar3 + 0x1b4))(piVar3,g_0043f8c0 + 0x43f83e);
    uVar2 = (undefined4)(cocos2d::CCDirector::sharedDirector());
    { cocos2d::CCSize _ws = ((cocos2d::CCDirector *)uVar2)->getWinSize(); uStack_28 = hw_fbits(_ws.width); uStack_24 = hw_fbits(_ws.height); }
    piVar3 = (int *)*(int *)((int)this + 4*(0x46));
    pcVar7 = *(code **)(*piVar3 + 0x4c);
    uVar2 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x * _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_28),(int)(0x3f000000)))));
    uVar4 = (undefined4)(((long long)([](int _a,int _b){float _x,_y;__builtin_memcpy(&_x,&_a,4);__builtin_memcpy(&_y,&_b,4);float _r=(_x - _y);int _o;__builtin_memcpy(&_o,&_r,4);return _o;}((int)(uStack_24),(int)(g_0043f8b4)))));
    0 /* ctorZero */;
    (*pcVar7)(piVar3,auStack_20);
    (**(code **)(*(int *)this + 0xcc))(((int)this),*(int *)((int)this + 4*(0x46)),10);
    *(int *)((int)this + 4*(0x47)) = g_0043f8c4;
  }
  *(undefined1 *)((int)((int)this) + 0x121) = 1;
  return;
}





bool BLMission::init()
{
  undefined4 p4 = 0;

  int iVar1;
  code *pcVar2;
  
  iVar1 = ((cocos2d::CCLayer *)this)->init();
  if (iVar1 != 0) {
    pcVar2 = *(code **)(*(int *)this + 0x1ec);
    (*pcVar2)(((int)this),1,*(int *)this,pcVar2,p4);
  }
  return iVar1;
}


void BLMission::onExit()
{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)cocos2d::CCDirector::sharedDirector();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x40))());
  ((cocos2d::CCTouchDispatcher *)uVar2)->removeDelegate((cocos2d::CCTouchDelegate*)((int)this + 0xe4));
  ((BLMissionManager *)*(undefined4 *)(((int)this) + 0x110))->onExit();
  ((cocos2d::CCLayer *)((int)this))->onExit();
  uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar2)->removeAllObservers((cocos2d::CCObject*)((int)this));
  return;
}

// ===== 修复: 补回被误删的函数占位 (25) =====
void BLMission::tick(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::initArenaOnline()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x138)))());
  for (uVar7 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->count(), uVar7 < uVar3); uVar7 = uVar7 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar7));
    if ((iVar4 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_0043c688 + 0x43c620),
                                        *(undefined4 *)(g_0043c68c + 0x43c622),0),
       piVar1 != 0)) {
      (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_20);
      uVar5 = (undefined4)(((BLMonsterData *)this)->create());
      func_0079e53c(auStack_1c,auStack_20);
      ((BLMonsterData *)(uVar5))->initWith((std::string)(char*)auStack_1c, 1);
      func_0079e2bc(auStack_1c);
      piVar1 = (int *)((DataCacheManager *)this)->shareManager();
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x58)))());
      ((cocos2d::CCDictionary *)(uVar6))->setObject((cocos2d::CCObject*)uVar5, (char const *)auStack_20);
      func_0079e2bc(auStack_20);
    }
  }
  return;
}

void BLMission::initArenaPlayers()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x138)))());
  for (uVar7 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->count(), uVar7 < uVar3); uVar7 = uVar7 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar7));
    if ((iVar4 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_0043c7bc + 0x43c754),
                                        *(undefined4 *)(g_0043c7c0 + 0x43c756),0),
       piVar1 != 0)) {
      (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_20);
      uVar5 = (undefined4)(((BLMonsterData *)this)->create());
      func_0079e53c(auStack_1c,auStack_20);
      ((BLMonsterData *)(uVar5))->initWith((std::string)(char*)auStack_1c, 1);
      func_0079e2bc(auStack_1c);
      piVar1 = (int *)((DataCacheManager *)this)->shareManager();
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x58)))());
      ((cocos2d::CCDictionary *)(uVar6))->setObject((cocos2d::CCObject*)uVar5, (char const *)auStack_20);
      func_0079e2bc(auStack_20);
    }
  }
  return;
}

void BLMission::initMinePlayers()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x140)))());
  for (uVar7 = 0; uVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->count(), uVar7 < uVar3); uVar7 = uVar7 + 1) {
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar7));
    if ((iVar4 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(g_0043c860 + 0x43c7f8),
                                        *(undefined4 *)(g_0043c864 + 0x43c7fa),0),
       piVar1 != 0)) {
      (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_20);
      uVar5 = (undefined4)(((BLMonsterData *)this)->create());
      func_0079e53c(auStack_1c,auStack_20);
      ((BLMonsterData *)(uVar5))->initWith((std::string)(char*)auStack_1c, 1);
      func_0079e2bc(auStack_1c);
      piVar1 = (int *)((DataCacheManager *)this)->shareManager();
      uVar6 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x58)))());
      ((cocos2d::CCDictionary *)(uVar6))->setObject((cocos2d::CCObject*)uVar5, (char const *)auStack_20);
      func_0079e2bc(auStack_20);
    }
  }
  return;
}

void BLMission::createPet(std::string * p1, cocos2d::CCPoint p2, int p3, int p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::addChallengeEnemy()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::addHero(std::string * p1, cocos2d::CCPoint p2, int p3, int p4)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::addChallengeHero()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::initChallengePlayer()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::addArenaOnline()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::initArenaVideoPlayers()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::addArenaplayers()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::addMineplayers()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::addObstacles()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLMission::startChallenge()
{
  undefined4 p2 = 0;

  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_14;
  
  uStack_14 = (undefined4)(p2);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xfc))((int *)*(int *)((int)this + 4*(0x44)),1);
  uVar2 = (undefined4)(((BLMap *)this)->create());
  (**(code **)(*(int *)this + 200))(((int)this),uVar2);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xac))((int *)*(int *)((int)this + 4*(0x44)),uVar2);
  (**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0x148))((int *)*(int *)((int)this + 4*(0x44)),1);
  piVar3 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  uVar4 = (undefined4)((**(code **)(*(int *)(piVar3) + (0x30)))());
  ((BLMap *)(uVar2))->initWith(uVar4);
  uVar2 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
  piVar3 = (int *)(**(code **)(*(int *)*(int *)((int)this + 4*(0x44)) + 0xb0))();
  (**(code **)(*(int *)(piVar3) + (0x48)))(&uStack_14,piVar3);
  ((CocosDenshion::SimpleAudioEngine *)(uVar2))->playBackgroundMusic((char const*)uStack_14, 1);
  func_0079e2bc(&uStack_14);
  ((BLMission *)(((int)this)))->addChallengeHero();
  ((BLMission *)(((int)this)))->addChallengeEnemy();
  ((BLMission *)(((int)this)))->addObstacles();
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  ((UIManager *)(uVar2))->showUIById(0);
  *(undefined1 *)(((int)this) + 0x48) = 0;
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar5 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(g_0043e84c)),(intptr_t)0);
  if (iVar5 == 0) {
    uVar2 = (undefined4)(((UIManager *)this)->shareManager());
    iVar5 = (undefined4)(intptr_t)(((UIManager *)(uVar2))->showUIById(g_0043e84c));
    if (iVar5 == 0) goto LAB_0043e848;
  }
  uVar4 = (undefined4)(*(undefined4 *)("Xԫ"));
  uVar2 = (undefined4)(*(undefined4 *)(g_0043e854 + 0x43e7d6));
  iVar6 = (undefined4)(intptr_t)(func_0079e55c(iVar5,uVar4,uVar2,0));
  if (iVar6 != 0) {
    piVar3 = *(int **)(iVar5 + 0x18);
    if (piVar3 != 0) {
      iVar6 = (undefined4)(intptr_t)(*(int *)(iVar5 + 0x1c) + -1);
      if (iVar6 < 1) {
        *(undefined4 *)(iVar5 + 0x1c) = 0;
        (**(code **)(*(int *)(piVar3) + (0x90)))(piVar3,1);
      }
      else {
        *(int *)(iVar5 + 0x1c) = iVar6;
      }
    }
    iVar5 = (undefined4)(intptr_t)(func_0079e55c(iVar5,uVar4,uVar2,0));
    if (*(int *)(iVar5 + 0x24) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x43e846);
      (*pcVar1)();
    }
    iVar5 = func_0079e55c(*(int *)(iVar5 + 0x24),*(undefined4 *)(g_0043e858 + 0x43e82e),
                            *(undefined4 *)(g_0043e85c + 0x43e830),0);
    ((BLMissionCountDownPresenter *)(*(undefined4 *)(iVar5 + 0x108)))->updateWithTime(3);
  }
LAB_0043e848:
  return ghidra_CONCAT44(uStack_14,((int)this));
}

void BLMission::initPet()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::addPet()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::preLoadRes()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined8 BLMission::initWithID(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void BLMission::addPartners()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::reLife()
{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 auStack_20 [3];
  
  iVar6 = (undefined4)(intptr_t)(g_0043f9c0);
  (**(code **)(**(int **)(((int)this) + 0x110) + 0x104))(*(int **)(((int)this) + 0x110),0);
  iVar6 = (undefined4)(intptr_t)(iVar6 + 0x43f8ec);
  (**(code **)(**(int **)(((int)this) + 0x110) + 0xfc))(*(int **)(((int)this) + 0x110),1);
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x110) + 0x98))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x50)))());
  0 /* ctorZero */;
  ((BLMission *)(((int)this)))->addPartners();
  uVar5 = (undefined4)(0);
  while( true ) {
    (**(code **)(**(int **)(((int)this) + 0x110) + 0x20))();
    uVar3 = (undefined4)(((cocos2d::CCArray *)this)->count());
    if (uVar3 <= uVar5) break;
    uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x110) + 0x20))());
    iVar4 = (undefined4)(intptr_t)(((cocos2d::CCArray *)(uVar2))->objectAtIndex((unsigned int)uVar5));
    piVar1 = (int *)0x0;
    if (iVar4 != 0) {
      piVar1 = (int *)func_0079e55c(iVar4,*(undefined4 *)(iVar6 + g_0043f9c4),
                                      *(undefined4 *)(iVar6 + g_0043f9c8),0);
    }
    ((BLHero *)(piVar1))->clearAttackCommob();
    if (piVar1 != (int *)0x0) {
      ((BLRole *)(piVar1))->reLife();
      (**(code **)(*(int *)(piVar1) + (0x5c)))(piVar1,auStack_20[0]);
    }
    uVar5 = (undefined4)(uVar5 + 1);
  }
  uVar2 = (undefined4)(((UIManager *)this)->shareManager());
  iVar4 = (undefined4)((void)(((UIManager *)(uVar2))->getUIObject(0)),(intptr_t)0);
  if (iVar4 != 0) {
    iVar4 = func_0079e55c(iVar4,*(undefined4 *)(iVar6 + g_0043f9cc),
                            *(undefined4 *)(iVar6 + g_0043f9d0),0);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x24) != 0)) {
      iVar6 = func_0079e55c(*(int *)(iVar4 + 0x24),*(undefined4 *)(iVar6 + g_0043f9d4),
                              *(undefined4 *)(iVar6 + g_0043f9d8),0);
      if (iVar6 != 0) {
        ((FightControlLayer *)this)->updateSkillInfo();
      }
    }
  }
  return;
}

void BLMission::reLifeInTreasure()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::initPartner()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::reLifeInDragonCanyon()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void BLMission::onEnter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
