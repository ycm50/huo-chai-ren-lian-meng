#include "DataManager.h"
#include "CCNotificationCenter.h"
#include "CCObject.h"
#include "BackPackItemData.h"
#include "CCDictionary.h"
#include "CCArray.h"
#include "CCUserDefault.h"
#include "CCString.h"
#include "MissionSelectHeroData.h"
#include "BLMissionData.h"
#include "BLDebug.h"
#include "BLLanguage.h"
#include "BLPopOtherPayView.h"
#include "ChallengePlayerData.h"
#include "DataCacheManager.h"
#include "DebugLocalSys.h"
#include "EquipData.h"
#include "ItemData.h"
#include "MaterialData.h"
#include "PlatformHelp.h"
#include "ReChargeData.h"
#include "SuitEquipUserData.h"
#include "Toast.h"
#include "UIManager.h"
#include "UserData.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "DBUtil.h"   /* IMPL_FIX(R146): initDBData ??? DBUtil::openDB ?????? */
using namespace cocos2d;
// 兜底声明
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
extern "C" unsigned long g_0045c928;
extern "C" unsigned long g_0045c92c;
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
extern "C" unsigned long LAB_0045cd18;

struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
struct sqlite3;
extern "C" {
  int  sqlite3_open(...);
  int  sqlite3_close(...);
  int  sqlite3_get_table(...);
  void sqlite3_free_table(...);
  int  sqlite3_rekey(...);
  long long sqlite3_last_insert_rowid(...);
}
extern "C" long long func_0042f3fc(...);
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2ec(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e34c(...);
extern "C" long long func_0079e41c(...);
extern "C" long long func_0079e42c(...);
extern "C" long long func_0079e43c(...);
extern "C" long long func_0079e44c(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e46c(...);
extern "C" long long func_0079e47c(...);
extern "C" long long func_0079e4bc(...);
extern "C" long long func_0079e4fc(...);
extern "C" long long func_0079e52c(...);
extern "C" long long func_0079e53c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e5fc(...);
extern "C" long long func_0079e60c(...);
extern "C" long long func_0079e62c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long func_0079e6c0(...);
extern "C" long long func_0079e724(...);
extern "C" long long func_0079e734(...);
extern "C" long long func_0079e744(...);
extern "C" long long func_0079e784(...);
extern "C" long long func_0079e864(...);
extern "C" long long func_0079e874(...);
extern "C" long long func_0079e8c4(...);
extern "C" long long func_0079e8d4(...);
extern "C" long long func_0079e954(...);
extern "C" long long func_0079e964(...);
extern "C" long long func_0079ea14(...);
extern "C" long long func_0079ea24(...);
extern "C" long long func_0079ea34(...);
extern "C" long long func_0079ea44(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long UNK_0045ce66;
extern "C" unsigned long UNK_0045ce6a;
extern "C" unsigned long UNK_0045ce6e;
extern "C" unsigned long UNK_0045ce72;
extern "C" unsigned long _DAT_0045c5a8;
extern "C" unsigned long _DAT_0045c5c4;
extern "C" unsigned long _DAT_0045c730;
extern "C" unsigned long _DAT_0045c734;
extern "C" unsigned long _DAT_0045c738;
extern "C" unsigned long _DAT_0045c754;
extern "C" unsigned long _DAT_0045c794;
extern "C" unsigned long _DAT_0045c7d4;
extern "C" unsigned long _DAT_0045c8ac;
extern "C" unsigned long _DAT_0045c8b0;
extern "C" unsigned long _DAT_0045c8b4;
extern "C" unsigned long _DAT_0045c98c;
extern "C" unsigned long _DAT_0045c990;
extern "C" unsigned long _DAT_0045c9c0;
extern "C" unsigned long _DAT_0045c9c4;
extern "C" unsigned long _DAT_0045c9f4;
extern "C" unsigned long _DAT_0045c9f8;
extern "C" unsigned long _DAT_0045ca28;
extern "C" unsigned long _DAT_0045ca2c;
extern "C" unsigned long _DAT_0045cac4;
extern "C" unsigned long _DAT_0045cac8;
extern "C" unsigned long _DAT_0045cb40;
extern "C" unsigned long _DAT_0045cb44;
extern "C" unsigned long _DAT_0045cc40;
extern "C" unsigned long _DAT_0045cc44;
extern "C" unsigned long _DAT_0045cc48;
extern "C" unsigned long _DAT_0045cc4c;
extern "C" unsigned long _DAT_0045ccb8;
extern "C" unsigned long _DAT_0045ccbc;
extern "C" unsigned long _DAT_0045ccc0;
extern "C" unsigned long _DAT_0045ccc4;
extern "C" unsigned long _DAT_0045ccc8;
extern "C" unsigned long _DAT_0045cccc;
extern "C" unsigned long _DAT_0045ccd0;
extern "C" unsigned long _DAT_0045ccd4;
extern "C" unsigned long _DAT_0045cd34;
extern "C" unsigned long _DAT_0045cd38;
extern "C" unsigned long _DAT_0045cd3c;
extern "C" unsigned long _DAT_0045cd40;
extern "C" unsigned long _DAT_0045cd44;
extern "C" unsigned long _DAT_0045cd48;
extern "C" unsigned long _DAT_0045cd4c;
extern "C" unsigned long _DAT_0045cd50;
extern "C" unsigned long _DAT_0045cd70;
extern "C" unsigned long _DAT_0045cd84;
extern "C" unsigned long _DAT_0045ce68;
extern "C" unsigned long _DAT_0045ce6c;
extern "C" unsigned long _DAT_0045ce70;
extern "C" unsigned long _DAT_0045cf8c;
extern "C" unsigned long _DAT_0045cf90;
extern "C" unsigned long _DAT_0045cf94;
extern "C" unsigned long _DAT_0045cf98;
extern "C" unsigned long _DAT_0045d198;
extern "C" unsigned long _DAT_0045d1dc;
extern "C" unsigned long _DAT_0045d540;
extern "C" unsigned long _DAT_0045d544;
extern "C" unsigned long _DAT_0045d548;
extern "C" unsigned long _DAT_0045d54c;
extern "C" unsigned long _DAT_0045d550;
extern "C" unsigned long _DAT_0045d554;
extern "C" unsigned long _DAT_0045d558;
extern "C" unsigned long _DAT_0045d55c;
extern "C" unsigned long _DAT_0045d560;
extern "C" unsigned long _DAT_0045d564;
extern "C" unsigned long _DAT_0045d568;
extern "C" unsigned long _DAT_0045d56c;
extern "C" unsigned long _DAT_0045d570;
extern "C" unsigned long _DAT_0045d574;
extern "C" unsigned long _DAT_0045d578;
extern "C" unsigned long _DAT_0045d744;
extern "C" unsigned long _DAT_0045d748;
extern "C" unsigned long _DAT_0045d74c;
extern "C" unsigned long _DAT_0045d750;
extern "C" unsigned long _DAT_0045d754;
extern "C" unsigned long _DAT_0045d758;
extern "C" unsigned long _DAT_0045d75c;
extern "C" unsigned long _DAT_0045d760;
extern "C" unsigned long _DAT_0045d764;
extern "C" unsigned long _DAT_0045d768;
extern "C" unsigned long _DAT_0045da88;
extern "C" unsigned long _DAT_0045da8c;
extern "C" unsigned long _DAT_0045da90;
extern "C" unsigned long _DAT_0045da94;
extern "C" unsigned long _DAT_0045da98;
extern "C" unsigned long _DAT_0045da9c;
extern "C" unsigned long _DAT_0045daa0;
extern "C" unsigned long _DAT_0045daa4;
extern "C" unsigned long _DAT_0045daa8;
extern "C" unsigned long _DAT_0045daac;
extern "C" unsigned long _DAT_0045dab0;
extern "C" unsigned long _DAT_0045dab4;
extern "C" unsigned long _DAT_0045dc98;
extern "C" unsigned long _DAT_0045dc9c;
extern "C" unsigned long _DAT_0045dca0;
extern "C" unsigned long _DAT_0045dca4;
extern "C" unsigned long _DAT_0045dce4;
extern "C" unsigned long _DAT_0045dce8;
extern "C" unsigned long _DAT_0045dcec;
extern "C" unsigned long _DAT_0045dea8;
extern "C" unsigned long _DAT_0045deac;
extern "C" unsigned long _DAT_0045deb0;
extern "C" unsigned long _DAT_0045deb4;
extern "C" unsigned long _DAT_0045deb8;
extern "C" unsigned long _DAT_0045debc;
extern "C" unsigned long _DAT_0045dec0;
extern "C" unsigned long _DAT_0045dec4;
extern "C" unsigned long _DAT_0045dec8;
extern "C" unsigned long _DAT_0045e02c;
extern "C" unsigned long _DAT_0045e030;
extern "C" unsigned long _DAT_0045e034;
extern "C" unsigned long _DAT_0045e038;
extern "C" unsigned long _DAT_0045e03c;
extern "C" unsigned long _DAT_0045e040;
extern "C" unsigned long _DAT_0045e044;
extern "C" unsigned long _DAT_0045e048;
extern "C" unsigned long _DAT_0045e130;
extern "C" unsigned long _DAT_0045e134;
extern "C" unsigned long _DAT_0045e138;
extern "C" unsigned long _DAT_0045e13c;
extern "C" unsigned long _DAT_0045e140;
extern "C" unsigned long _DAT_0045e4b4;
extern "C" unsigned long _DAT_0045e4b8;
extern "C" unsigned long _DAT_0045e4bc;
extern "C" unsigned long _DAT_0045e4c0;
extern "C" unsigned long _DAT_0045e4c4;
extern "C" unsigned long _DAT_0045e4c8;
extern "C" unsigned long _DAT_0045e4cc;
extern "C" unsigned long _DAT_0045e4d0;
extern "C" unsigned long _DAT_0045e4d4;
extern "C" unsigned long _DAT_0045e4d8;
extern "C" unsigned long _DAT_0045e754;
extern "C" unsigned long _DAT_0045e758;
extern "C" unsigned long _DAT_0045e75c;
extern "C" unsigned long _DAT_0045e760;
extern "C" unsigned long _DAT_0045e764;
extern "C" unsigned long _DAT_0045e768;
extern "C" unsigned long extraout_r1;
extern "C" unsigned long extraout_r1_00;
extern "C" unsigned long g_0045c5a8;
extern "C" unsigned long g_0045c5c4;
extern "C" unsigned long g_0045c730;
extern "C" unsigned long g_0045c734;
extern "C" unsigned long g_0045c738;
extern "C" unsigned long g_0045c754;
extern "C" unsigned long g_0045c794;
extern "C" unsigned long g_0045c7d4;
extern "C" unsigned long g_0045c8ac;
extern "C" unsigned long g_0045c8b0;
extern "C" unsigned long g_0045c8b4;
extern "C" unsigned long g_0045c98c;
extern "C" unsigned long g_0045c990;
extern "C" unsigned long g_0045c9c0;
extern "C" unsigned long g_0045c9c4;
extern "C" unsigned long g_0045c9f4;
extern "C" unsigned long g_0045c9f8;
extern "C" unsigned long g_0045ca28;
extern "C" unsigned long g_0045ca2c;
extern "C" unsigned long g_0045cac4;
extern "C" unsigned long g_0045cac8;
extern "C" unsigned long g_0045cb40;
extern "C" unsigned long g_0045cb44;
extern "C" unsigned long g_0045cc40;
extern "C" unsigned long g_0045cc44;
extern "C" unsigned long g_0045cc48;
extern "C" unsigned long g_0045cc4c;
extern "C" unsigned long g_0045ccb8;
extern "C" unsigned long g_0045ccbc;
extern "C" unsigned long g_0045ccc0;
extern "C" unsigned long g_0045ccc4;
extern "C" unsigned long g_0045ccc8;
extern "C" unsigned long g_0045cccc;
extern "C" unsigned long g_0045ccd0;
extern "C" unsigned long g_0045ccd4;
extern "C" unsigned long g_0045cd34;
extern "C" unsigned long g_0045cd38;
extern "C" unsigned long g_0045cd3c;
extern "C" unsigned long g_0045cd40;
extern "C" unsigned long g_0045cd44;
extern "C" unsigned long g_0045cd48;
extern "C" unsigned long g_0045cd4c;
extern "C" unsigned long g_0045cd50;
extern "C" unsigned long g_0045cd70;
extern "C" unsigned long g_0045cd84;
extern "C" unsigned long g_0045ce66;
extern "C" unsigned long g_0045ce68;
extern "C" unsigned long g_0045ce6a;
extern "C" unsigned long g_0045ce6c;
extern "C" unsigned long g_0045ce6e;
extern "C" unsigned long g_0045ce70;
extern "C" unsigned long g_0045ce72;
extern "C" unsigned long g_0045cf8c;
extern "C" unsigned long g_0045cf90;
extern "C" unsigned long g_0045cf94;
extern "C" unsigned long g_0045cf98;
extern "C" unsigned long g_0045d198;
extern "C" unsigned long g_0045d1dc;
extern "C" unsigned long g_0045d540;
extern "C" unsigned long g_0045d544;
extern "C" unsigned long g_0045d548;
extern "C" unsigned long g_0045d54c;
extern "C" unsigned long g_0045d550;
extern "C" unsigned long g_0045d554;
extern "C" unsigned long g_0045d558;
extern "C" unsigned long g_0045d55c;
extern "C" unsigned long g_0045d560;
extern "C" unsigned long g_0045d564;
extern "C" unsigned long g_0045d568;
extern "C" unsigned long g_0045d56c;
extern "C" unsigned long g_0045d570;
extern "C" unsigned long g_0045d574;
extern "C" unsigned long g_0045d578;
extern "C" unsigned long g_0045d744;
extern "C" unsigned long g_0045d748;
extern "C" unsigned long g_0045d74c;
extern "C" unsigned long g_0045d750;
extern "C" unsigned long g_0045d754;
extern "C" unsigned long g_0045d758;
extern "C" unsigned long g_0045d75c;
extern "C" unsigned long g_0045d760;
extern "C" unsigned long g_0045d764;
extern "C" unsigned long g_0045d768;
extern "C" unsigned long g_0045da88;
extern "C" unsigned long g_0045da8c;
extern "C" unsigned long g_0045da90;
extern "C" unsigned long g_0045da94;
extern "C" unsigned long g_0045da98;
extern "C" unsigned long g_0045da9c;
extern "C" unsigned long g_0045daa0;
extern "C" unsigned long g_0045daa4;
extern "C" unsigned long g_0045daa8;
extern "C" unsigned long g_0045daac;
extern "C" unsigned long g_0045dab0;
extern "C" unsigned long g_0045dab4;
extern "C" unsigned long g_0045dc98;
extern "C" unsigned long g_0045dc9c;
extern "C" unsigned long g_0045dca0;
extern "C" unsigned long g_0045dca4;
extern "C" unsigned long g_0045dce4;
extern "C" unsigned long g_0045dce8;
extern "C" unsigned long g_0045dcec;
extern "C" unsigned long g_0045dea8;
extern "C" unsigned long g_0045deac;
extern "C" unsigned long g_0045deb0;
extern "C" unsigned long g_0045deb4;
extern "C" unsigned long g_0045deb8;
extern "C" unsigned long g_0045debc;
extern "C" unsigned long g_0045dec0;
extern "C" unsigned long g_0045dec4;
extern "C" unsigned long g_0045dec8;
extern "C" unsigned long g_0045e02c;
extern "C" unsigned long g_0045e030;
extern "C" unsigned long g_0045e034;
extern "C" unsigned long g_0045e038;
extern "C" unsigned long g_0045e03c;
extern "C" unsigned long g_0045e040;
extern "C" unsigned long g_0045e044;
extern "C" unsigned long g_0045e048;
extern "C" unsigned long g_0045e130;
extern "C" unsigned long g_0045e134;
extern "C" unsigned long g_0045e138;
extern "C" unsigned long g_0045e13c;
extern "C" unsigned long g_0045e140;
extern "C" unsigned long g_0045e4b4;
extern "C" unsigned long g_0045e4b8;
extern "C" unsigned long g_0045e4bc;
extern "C" unsigned long g_0045e4c0;
extern "C" unsigned long g_0045e4c4;
extern "C" unsigned long g_0045e4c8;
extern "C" unsigned long g_0045e4cc;
extern "C" unsigned long g_0045e4d0;
extern "C" unsigned long g_0045e4d4;
extern "C" unsigned long g_0045e4d8;
extern "C" unsigned long g_0045e754;
extern "C" unsigned long g_0045e758;
extern "C" unsigned long g_0045e75c;
extern "C" unsigned long g_0045e760;
extern "C" unsigned long g_0045e764;
extern "C" unsigned long g_0045e768;
sqlite3* DataManager::getGameInfoDB() const
{
  return (sqlite3*)(*(undefined4 *)(((int)this) + 0x14));
}

void DataManager::setGameInfoDB(sqlite3* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t)p1;
  return;
}

float DataManager::getAnimationInterval() const
{
  return *(undefined4 *)(((int)this) + 0x18);
}

void DataManager::setAnimationInterval(float p1)
{
  *(undefined4 *)(((int)this) + 0x18) = p1;
  return;
}

UserData* DataManager::getUserData() const
{
  return (UserData*)(*(undefined4 *)(((int)this) + 0x1c));
}

void DataManager::setUserData(UserData* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t)p1;
  return;
}

BLMissionData* DataManager::getCurrentMissionData() const
{
  return (BLMissionData*)(*(undefined4 *)(((int)this) + 0x2c));
}

MissionSelectHeroData* DataManager::getMissionSelectHeroData() const
{
  return (MissionSelectHeroData*)(*(undefined4 *)(((int)this) + 0x30));
}

bool DataManager::getISTestHero() const
{
  return *(undefined1 *)(((int)this) + 0x38);
}

void DataManager::setISTestHero(bool p1)
{
  *(undefined1 *)(((int)this) + 0x38) = p1;
  return;
}

int DataManager::getTestHeroView() const
{
  return *(undefined4 *)(((int)this) + 0x3c);
}

void DataManager::setTestHeroView(int p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = p1;
  return;
}

int DataManager::getCurrentRoleIndex() const
{
  return *(undefined4 *)(((int)this) + 0x40);
}

void DataManager::setCurrentRoleIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x40) = p1;
  return;
}

int DataManager::getCurrentSuitRoleIndex() const
{
  return *(undefined4 *)(((int)this) + 0x44);
}

void DataManager::setCurrentSuitRoleIndex(int p1)
{
  *(undefined4 *)(((int)this) + 0x44) = p1;
  return;
}

int DataManager::getCurrentEquipPage() const
{
  return *(undefined4 *)(((int)this) + 0x48);
}

void DataManager::setCurrentEquipPage(int p1)
{
  *(undefined4 *)(((int)this) + 0x48) = p1;
  return;
}

int DataManager::getEquipUIType() const
{
  return *(undefined4 *)(((int)this) + 0x4c);
}

void DataManager::setEquipUIType(int p1)
{
  *(undefined4 *)(((int)this) + 0x4c) = p1;
  return;
}

bool DataManager::getISShowFreeDiamond() const
{
  return *(undefined1 *)(((int)this) + 0x50);
}

void DataManager::setISShowFreeDiamond(bool p1)
{
  *(undefined1 *)(((int)this) + 0x50) = p1;
  return;
}

bool DataManager::getISBGMusic() const
{
  return *(undefined1 *)(((int)this) + 0x51);
}

void DataManager::setISBGMusic(bool p1)
{
  *(undefined1 *)(((int)this) + 0x51) = p1;
  return;
}

bool DataManager::getIsUniCom() const
{
  return *(undefined1 *)(((int)this) + 0x52);
}

void DataManager::setIsUniCom(bool p1)
{
  *(undefined1 *)(((int)this) + 0x52) = p1;
  return;
}

bool DataManager::getISSoundEffect() const
{
  return *(undefined1 *)(((int)this) + 0x53);
}

void DataManager::setISSoundEffect(bool p1)
{
  *(undefined1 *)(((int)this) + 0x53) = p1;
  return;
}

bool DataManager::getISShowGift() const
{
  return *(undefined1 *)(((int)this) + 0x68);
}

void DataManager::setISShowGift(bool p1)
{
  *(undefined1 *)(((int)this) + 0x68) = p1;
  return;
}

bool DataManager::getISReadyShow() const
{
  return *(undefined1 *)(((int)this) + 0x69);
}

void DataManager::setISReadyShow(bool p1)
{
  *(undefined1 *)(((int)this) + 0x69) = p1;
  return;
}

bool DataManager::getISMissionFailed() const
{
  return *(undefined1 *)(((int)this) + 0x6a);
}

void DataManager::setISMissionFailed(bool p1)
{
  *(undefined1 *)(((int)this) + 0x6a) = p1;
  return;
}

bool DataManager::getISMissionWin() const
{
  return *(undefined1 *)(((int)this) + 0x6b);
}

void DataManager::setISMissionWin(bool p1)
{
  *(undefined1 *)(((int)this) + 0x6b) = p1;
  return;
}

bool DataManager::getISShowSevenDay() const
{
  return *(undefined1 *)(((int)this) + 0x6c);
}

void DataManager::setISShowSevenDay(bool p1)
{
  *(undefined1 *)(((int)this) + 0x6c) = p1;
  return;
}

int DataManager::getBuyType() const
{
  return *(undefined4 *)(((int)this) + 0x88);
}

void DataManager::setBuyType(int p1)
{
  *(undefined4 *)(((int)this) + 0x88) = p1;
  return;
}

long DataManager::getBuyNum() const
{
  return *(undefined4 *)(((int)this) + 0x8c);
}

void DataManager::setBuyNum(long p1)
{
  *(undefined4 *)(((int)this) + 0x8c) = p1;
  return;
}

undefined1 DataManager::getisSignOk() const
{
  return *(undefined1 *)(((int)this) + 0x90);
}

void DataManager::setisSignOk(bool p1)
{
  *(undefined1 *)(((int)this) + 0x90) = p1;
  return;
}

bool DataManager::getISBuyVip() const
{
  return *(undefined1 *)(((int)this) + 0x91);
}

void DataManager::setISBuyVip(bool p1)
{
  *(undefined1 *)(((int)this) + 0x91) = p1;
  return;
}

bool DataManager::getISGetVipReward() const
{
  return *(undefined1 *)(((int)this) + 0x92);
}

void DataManager::setISGetVipReward(bool p1)
{
  *(undefined1 *)(((int)this) + 0x92) = p1;
  return;
}

bool DataManager::getISShowVipUI() const
{
  return *(undefined1 *)(((int)this) + 0x93);
}

void DataManager::setISShowVipUI(bool p1)
{
  *(undefined1 *)(((int)this) + 0x93) = p1;
  return;
}

int DataManager::getCurrentMissionType() const
{
  return *(undefined4 *)(((int)this) + 0x94);
}

void DataManager::setCurrentMissionType(int p1)
{
  *(undefined4 *)(((int)this) + 0x94) = p1;
  return;
}

bool DataManager::getIsQuiteGame() const
{
  return *(undefined1 *)(((int)this) + 0x98);
}

void DataManager::setIsQuiteGame(bool p1)
{
  *(undefined1 *)(((int)this) + 0x98) = p1;
  return;
}

bool DataManager::getIsFirstRunGame() const
{
  return *(undefined1 *)(((int)this) + 0x99);
}

void DataManager::setIsFirstRunGame(bool p1)
{
  *(undefined1 *)(((int)this) + 0x99) = p1;
  return;
}

cocos2d::CCArray* DataManager::getArrayArenaPlayers() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0xd8));
}

void DataManager::setArrayArenaPlayers(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0xd8) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* DataManager::getArrayMinePlayers() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0xdc));
}

void DataManager::setArrayMinePlayers(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0xdc) = (undefined4)(intptr_t)p1;
  return;
}

int DataManager::getArenaRank() const
{
  return *(undefined4 *)(((int)this) + 0xec);
}

void DataManager::setArenaRank(int p1)
{
  *(undefined4 *)(((int)this) + 0xec) = p1;
  return;
}

int DataManager::getMoneyTreeLife() const
{
  return *(undefined4 *)(((int)this) + 0xf4);
}

void DataManager::setMoneyTreeLife(int p1)
{
  *(undefined4 *)(((int)this) + 0xf4) = p1;
  return;
}

int DataManager::getPayType() const
{
  return *(undefined4 *)(((int)this) + 0xf8);
}

void DataManager::setPayType(int p1)
{
  *(undefined4 *)(((int)this) + 0xf8) = p1;
  return;
}

undefined1 DataManager::getbShowShieldLayer() const
{
  return *(undefined1 *)(((int)this) + 0x100);
}

void DataManager::setbShowShieldLayer(bool p1)
{
  *(undefined1 *)(((int)this) + 0x100) = p1;
  return;
}

MaterialData* DataManager::getMaterialData() const
{
  return (MaterialData*)(*(undefined4 *)(((int)this) + 0x104));
}

void DataManager::setMaterialData(MaterialData* p1)
{
  *(undefined4 *)(((int)this) + 0x104) = (undefined4)(intptr_t)p1;
  return;
}

SuitEquipUserData* DataManager::getSuipUserData() const
{
  return (SuitEquipUserData*)(*(undefined4 *)(((int)this) + 0x108));
}

void DataManager::setSuipUserData(SuitEquipUserData* p1)
{
  *(undefined4 *)(((int)this) + 0x108) = (undefined4)(intptr_t)p1;
  return;
}

ChallengePlayerData* DataManager::getChallengePlayerData() const
{
  return (ChallengePlayerData*)(*(undefined4 *)(((int)this) + 0x10c));
}

void DataManager::setChallengePlayerData(ChallengePlayerData* p1)
{
  *(undefined4 *)(((int)this) + 0x10c) = (undefined4)(intptr_t)p1;
  return;
}

void DataManager::setstrGongGaoUrl(std::string * p1)
{
  func_0079e52c(((int)this) + 0xfc);
  return;
}

void DataManager::setLastName(std::string * p1)
{
  func_0079e52c(((int)this) + 0xf0);
  return;
}

void DataManager::setArenaUid(std::string * p1)
{
  func_0079e52c(((int)this) + 0xe8);
  return;
}

void DataManager::setArenaName(std::string * p1)
{
  func_0079e52c(((int)this) + 0xe4);
  return;
}

void DataManager::setUserName(std::string * p1)
{
  func_0079e52c(((int)this) + 0xe0);
  return;
}

void DataManager::setChargeID(std::string * p1)
{
  func_0079e52c(((int)this) + 100);
  return;
}

void DataManager::setBuyCompleteID(std::string * p1)
{
  func_0079e52c(((int)this) + 0x54);
  return;
}

void DataManager::setShowSaveKey(std::string * p1)
{
  func_0079e52c(((int)this) + 0x34);
  return;
}

undefined4 DataManager::getstrGongGaoUrl() const
{
  undefined4 p2 = 0;

  func_0079e53c(((int)this),p2 + 0xfc);
  return ((int)this);
}

std::string DataManager::getLastName() const
{ return *(std::string *)(((int)this) + 0xf0); }

std::string DataManager::getArenaUid() const
{ return *(std::string *)(((int)this) + 0xe8); }

std::string DataManager::getArenaName() const
{ return *(std::string *)(((int)this) + 0xe4); }

std::string DataManager::getUserName() const
{ return *(std::string *)(((int)this) + 0xe0); }

std::string DataManager::getChargeID() const
{ return *(std::string *)(((int)this) + 100); }

std::string DataManager::getBuyCompleteID() const
{ return *(std::string *)(((int)this) + 0x54); }

std::string DataManager::getShowSaveKey() const
{ return *(std::string *)(((int)this) + 0x34); }

void DataManager::setMissionSelectHeroData(MissionSelectHeroData* p1)
{
  if (*(int *)(((int)this) + 0x30) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x30) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x30) = (undefined4)(intptr_t)p1;
  }
  return;
}

void DataManager::setCurrentMissionData(BLMissionData* p1)
{
  if (*(int *)(((int)this) + 0x2c) != (int)(intptr_t)p1) {
    if ((int)(intptr_t)p1 != 0) {
      ((cocos2d::CCObject *)p1)->retain();
    }
    if (*(int *)(((int)this) + 0x2c) != 0) {
      ((cocos2d::CCObject *)this)->release();
    }
    *(int *)(((int)this) + 0x2c) = (undefined4)(intptr_t)p1;
  }
  return;
}

void DataManager::resetDataManager()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeObserver((cocos2d::CCObject*)((int)this), (char const*)((intptr_t)"EVENT_ALERTUI_SURE"));
  if (*(int *)(((int)this) + 0x2c) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(undefined4 *)(((int)this) + 0x2c) = 0;
  }
  if (*(int *)(((int)this) + 0x30) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(undefined4 *)(((int)this) + 0x30) = 0;
  }
  return;
}

/* STRGLOBAL_FIX (R73)：原生成器把 DataManager 的**静态单例指针**误渲染成字符串字面量
   `("NU) 4.4.3")`（该地址在原版 .so 里其实落在常量区 "GCC: (GNU) 4.4.3" 那段），
   于是被当作"全局变量"读写 -> 返回野指针 -> 真机 DataManager::getUserData()+6 崩溃
   （调用栈 BLGameScene::onEnter()+82）。
   本文件里 shareDataManager()（3 处）与 resetDataManagerNull()（2 处）引用的是**同一个**静态，
   故合并为一个真实静态（若各自建一个会把单例拆成两个）。*/
static DataManager *s_dataManagerInstance = 0;

void DataManager::resetDataManagerNull()
{
  /* 原为：`if (*(int**)("NU) 4.4.3") != 0) { (**(code**)(**(int**)("NU) 4.4.3") + 8))(); *(int*)(g_0045c5c4+0x45c5e0)=0; }`
     —— 同一声明 + 一个裸地址写（g_ 是 0 值桩）。改为真实语义：
     vtable[8]（idx2）= 删除析构 D0 -> 用 delete 表达；裸地址写按既有惯例略过。 */
  if (s_dataManagerInstance != 0) {
    delete s_dataManagerInstance;
    s_dataManagerInstance = 0;
  }
  return;
}

void DataManager::initMaterialData()
{
  int *piVar1;
  int iVar2;
  
  /* ALLOC_SIZE_FIX + CTOR_FIX (R104)：原版是 `operator new(0x2c)` + **MaterialData::MaterialData()** + init()；
     生成器丢了构造函数调用 → vptr=0 → `init()` 里任何虚调用/成员访问都会崩
     （真机实证：DataManager::initMaterialData+0x26，fault addr 0x65737369 = ASCII "iss" —— 把字符串当指针用了）。
     按 R93 模板：**按原版尺寸分配 + placement new 跑真构造**。*/
  MaterialData *pMaterialData = (MaterialData *)::operator new(0x2c);
  ::new (pMaterialData) MaterialData();
  iVar2 = (undefined4)(intptr_t)(pMaterialData->init());
  if (iVar2 == 0) {
    delete pMaterialData;
    pMaterialData = 0;
  }
  else {
    pMaterialData->autorelease();
  }
  *(MaterialData **)(((int)this) + 0x104) = pMaterialData;
  ((cocos2d::CCObject *)this)->retain();
  return;
}

void DataManager::initSuitUserData()
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)::operator new(0x44);
  ::new ((void *)piVar1) SuitEquipUserData();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 SuitEquipUserData 的构造函数 -> vptr 垃圾 */
  iVar2 = ((SuitEquipUserData *)piVar1)->init();
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int **)(((int)this) + 0x108) = piVar1;
  ((cocos2d::CCObject *)this)->retain();
  return;
}

void DataManager::initChallengePlayerData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(func_0079e2fc(0x28));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x10c) = uVar1;
  return;
}


void DataManager::initDailySign()
{
  return;
}

undefined8 DataManager::getDBKey()
{
  undefined4 p2 = 0;

  undefined4 uStack_c;
  
  uStack_c = (undefined4)(p2);
  func_0079e45c(((int)this),((intptr_t)"DiabloLOL_DBDefine_h"),&uStack_c);
  return ghidra_CONCAT44(((int)this),((int)this));
}

undefined8 DataManager::getMacDBKey()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  func_0079e45c(((int)this),((intptr_t)"DiabloLOL_DBDefine_h"),&uStack_14);
  ((PlatformHelp *)&uStack_14)->getMacID();
  func_0079e874(((int)this),&uStack_14);
  func_0079e2bc(&uStack_14);
  return ghidra_CONCAT44(((int)this),((int)this));
}








void DataManager::getRoleStar(std::string * p1)
{
  return;
}



undefined8 DataManager::saveDailySignStatue(int p1, int p2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)((int *)((int)this));
  uStack_14 = (undefined4)(p1);
  if (6 < p1 - 1U) {
    iVar4 = ((intptr_t)"dayId maybe error");
    iVar1 = 0 /* ctorZero */;
    if (iVar1 == 0) {
      cocos2d::CCLog((char const*)((intptr_t)"Assert failed: %s"), iVar4);
    }
    uStack_18 = (undefined4)(((intptr_t)"saveDailySignStatue"));
    uStack_14 = (undefined4)(g_0045cccc);
    func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),((intptr_t)"jni/../../Classes/data/DataManager.cpp"));
  }
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"DailySignKey_%d"), p1);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  uVar3 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)uVar3)->setIntegerForKey((char const*)uVar2, p2);
  cocos2d::CCUserDefault::sharedUserDefault();
  ((cocos2d::CCUserDefault *)this)->flush();
  return ghidra_CONCAT44(uStack_14,uStack_18);
}


void DataManager::setStartCount(int p1)
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)uVar1)->setIntegerForKey((char const*)((intptr_t)"StartCount"), p1);
  cocos2d::CCUserDefault::sharedUserDefault();
  ((cocos2d::CCUserDefault *)this)->flush();
  return;
}




void DataManager::UpdateSuitData()
{
  return;
}

void DataManager::checkSuitBuff(std::string * p1, std::string p2)
{
  return;
}

bool DataManager::checkIsPetMode()
{
  uint uVar1;
  bool bVar2;
  
  uVar1 = (undefined4)(*(uint *)(((int)this) + 0x94));
  bVar2 = true;
  if (((1 < uVar1 - 1) && (uVar1 != 6)) && ((uVar1 & 0xfffffffd) != 9)) {
    bVar2 = uVar1 == 0xc;
  }
  return bVar2;
}

DataManager::~DataManager()
{
  undefined4 uVar1;
  int iVar2;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  sqlite3_close(*(int *)((int)this + 4*(5)));
  *(int *)((int)this + 4*(5)) = 0;
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  if (*(int *)((int)this + 4*(0xb)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xb)) = 0;
  }
  if (*(int *)((int)this + 4*(0xc)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xc)) = 0;
  }
  if (*(int *)((int)this + 4*(0x36)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x36)) = 0;
  }
  if (*(int *)((int)this + 4*(0x37)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x37)) = 0;
  }
  if (*(int *)((int)this + 4*(0x41)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x41)) = 0;
  }
  if (*(int *)((int)this + 4*(0x42)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x42)) = 0;
  }
  uVar1 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
  ((cocos2d::CCNotificationCenter *)uVar1)->removeAllObservers((cocos2d::CCObject*)((int)this));
  iVar2 = (undefined4)(intptr_t)(*(int *)((int)this + 4*(0x43)));
  if (iVar2 != 0) {
    ((ChallengePlayerData *)iVar2)->~ChallengePlayerData();
    func_0079e2cc(iVar2);
  }
  *(int *)((int)this + 4*(0x43)) = 0;
  func_0079e2bc(((int)this) + 0x3f);
  func_0079e2bc(((int)this) + 0x3c);
  func_0079e2bc(((int)this) + 0x3a);
  func_0079e2bc(((int)this) + 0x39);
  func_0079e2bc(((int)this) + 0x38);
  ((std::map<int, std::string, std::less<int>, std::allocator<std::pair<int const, std::string>>> *)((int)this) + 0x30)->~map();
  ((std::map<int, std::string, std::less<int>, std::allocator<std::pair<int const, std::string>>> *)((int)this) + 0x2a)->~map();
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x27)->~vector();
  if (*(int *)((int)this + 4*(0x1f)) != 0) {
    func_0079e2cc();
  }
  func_0079e2bc(((int)this) + 0x19);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 0x16)->~vector();
  func_0079e2bc(((int)this) + 0x15);
  func_0079e2bc(((int)this) + 0xd);
  ((std::vector<std::string, std::allocator<std::string>> *)((int)this) + 8)->~vector();
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}










DataManager::DataManager()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}


undefined4 DataManager::shareDataManager()
{
  /* STRGLOBAL_FIX (R73)：原为 `if (*(int*)("NU) 4.4.3") == 0) { new; *("NU) 4.4.3") = p; p->init(); } return *("NU) 4.4.3");`
     —— 静态单例指针被误渲染成字符串字面量（见文件上方 s_dataManagerInstance 的说明）。*/
  if (s_dataManagerInstance == 0) {
    s_dataManagerInstance = (DataManager *)func_0079e2fc(0x110);   /* func_0079e2fc = _Znwj (operator new) */
    0 /* ctorZero */;
    s_dataManagerInstance->init();
  }
  return (undefined4)(intptr_t)s_dataManagerInstance;
}

// ===== 修复: 补回被误删的函数占位 (36) =====
void DataManager::postBuyComleID()
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  if (*(int *)(((int)this) + 0x5c) - *(int *)(((int)this) + 0x58) >> 2 != 0) {
    uVar4 = (undefined4)(*(undefined4 *)(g_0045c730 + 0x45c682));
    iVar1 = (undefined4)(intptr_t)(func_0079e41c(uVar4));
    if (*(int *)(((int)this) + 0x5c) - *(int *)(((int)this) + 0x58) >> 2 == 0) {
      func_0079e784("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",0);
    }
    func_0079e53c(&uStack_20);
    uVar2 = (undefined4)(((cocos2d::CCNotificationCenter *)this)->sharedNotificationCenter());
    func_0079e45c(auStack_1c,uStack_20,auStack_24);
    uVar3 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)auStack_1c));
    ((cocos2d::CCNotificationCenter *)(uVar2))->postNotification((char const*)"EVENT_IAP_CALLBACK", (cocos2d::CCObject*)uVar3);
    func_0079e2bc(auStack_1c);
    iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x58) + 4);
    if (iVar5 != *(int *)(((int)this) + 0x5c)) {
      iVar6 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x5c) - iVar5 >> 2);
      iVar5 = (undefined4)(intptr_t)(*(int *)(((int)this) + 0x58));
      for (; 0 < iVar6; iVar6 = iVar6 + -1) {
        func_0079e52c(iVar5,iVar5 + 4);
        iVar5 = (undefined4)(intptr_t)(iVar5 + 4);
      }
    }
    *(int *)(((int)this) + 0x5c) = *(int *)(((int)this) + 0x5c) + -4;
    func_0079e2bc();
    ((PlatformHelp *)this)->setBuyCompleteID((char const*)uStack_20);
    if (iVar1 == 0) {
      func_0079e42c(uVar4);
    }
    func_0079e2bc(&uStack_20);
  }
  return;
}

void DataManager::getAndroidBKey()
{
  undefined4 p2 = 0;
  undefined4 p3 = 0;

  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = (undefined4)(p2);
  uStack_10 = (undefined4)(p3);
  func_0079e45c(((int)this),((intptr_t)"DiabloLOL_DBDefine_h"),&uStack_14);
  ((PlatformHelp *)&uStack_14)->getDeviceID();
  func_0079e874(((int)this),&uStack_14);
  func_0079e2bc(&uStack_14);
  return;
}

void DataManager::createItemData(int p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)((DataCacheManager *)this)->shareManager();
  uVar2 = (undefined4)((**(code **)(*piVar1 + 0x60))());
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar2)->objectForKey(((int)this)));
  if (iVar3 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    uVar2 = (undefined4)(*(undefined4 *)(g_0045c8ac + 0x45c7fa));
    piVar4 = (int *)func_0079e55c(iVar3,uVar2,*(undefined4 *)(g_0045c8b0 + 0x45c7fe),0,p4)
    ;
    if (piVar4 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar4 + 0x30))());
      if (iVar3 == 1) {
        piVar1 = (int *)::operator new(0x7c);
        ::new ((void *)piVar1) ItemData();   /* ALLOC+CTOR_FIX(R115): 原为裸 new + ctorZero 占位；生成器丢了 ItemData 的构造函数 -> vptr 垃圾 */
        iVar3 = (undefined4)(intptr_t)(((ItemData *)piVar1)->init());
        if (iVar3 == 0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          piVar1 = (int *)0x0;
        }
        else {
          ((cocos2d::CCObject *)piVar1)->autorelease();
        }
        ((ItemData *)piVar1)->initWith((ItemData*)piVar4);
      }
      else if (iVar3 == 2) {
        piVar1 = (int *)((EquipData *)this)->create();
        ((ItemData *)piVar1)->initWith((ItemData*)piVar4);
        piVar5 = (int *)((DataCacheManager *)this)->shareManager();
        uVar6 = (undefined4)((**(code **)(*piVar5 + 0x68))());
        uVar7 = (undefined4)((**(code **)(*piVar4 + 0x18))(piVar4));
        iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar6)->objectForKey(uVar7));
        uVar6 = (undefined4)(0);
        if (iVar3 != 0) {
          uVar6 = (undefined4)(func_0079e55c(iVar3,uVar2,*(undefined4 *)(g_0045c8b4 + 0x45c87c),0));
        }
        (**(code **)(*piVar1 + 0xc4))(piVar1,uVar6);
      }
      else {
        piVar1 = (int *)0x0;
      }
    }
  }
  return;
}

void DataManager::getBackPackItemNum(int p1)
{
  undefined4 p4 = 0;

  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(**(code **)(**(int **)(((int)this) + 0x1c) + 0x50))();
  iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x18)))());
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar2 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x14));
    iVar3 = (undefined4)(intptr_t)(iVar2);
    if (iVar2 != 0) {
      iVar3 = (undefined4)(intptr_t)(*(int *)(iVar2 + 0x110));
    }
    iVar4 = 0;
    while (iVar2 != 0) {
      if (((*(int *)(iVar2 + 0x104) != 0) &&
          (piVar1 = (int *)func_0079e55c(*(int *)(iVar2 + 0x104),
                                           *(undefined4 *)(g_0045c928 + 0x45c8f2),
                                           *(undefined4 *)(g_0045c92c + 0x45c8f4),0,p4),
          piVar1 != (int *)0x0)) && (iVar2 = (**(code **)(*(int *)(piVar1) + (0x20)))(), iVar2 == p1)) {
        iVar2 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x28)))(piVar1));
        iVar4 = (undefined4)(intptr_t)(iVar4 + iVar2);
      }
      iVar2 = (undefined4)(intptr_t)(iVar3);
      if (iVar3 != 0) {
        iVar3 = (undefined4)(intptr_t)(*(int *)(iVar3 + 0x110));
      }
    }
  }
  return;
}

void DataManager::sortItems(cocos2d::CCDictionary* p1)
{
  undefined4 p4 = 0;

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (undefined4)(cocos2d::CCArray::create());
  if ((int)(intptr_t)p1 != 0) {
    iVar2 = *(int *)(p1 + 0x14);
    iVar3 = iVar2;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x110);
    }
    while (iVar2 != 0) {
      if ((*(int *)(iVar2 + 0x104) != 0) &&
         (iVar2 = func_0079e55c(*(int *)(iVar2 + 0x104),*(undefined4 *)(g_0045c98c + 0x45c972),
                                  *(undefined4 *)(g_0045c990 + 0x45c974),0,p4), iVar2 != 0))
      {
        ((cocos2d::CCArray *)this)->addObject((cocos2d::CCObject*)uVar1);
      }
      iVar2 = iVar3;
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 0x110);
      }
    }
  }
  return;
}

void DataManager::getCurrentPlayer()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x68))());
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x40)));
  if (iVar2 != 0) {
    func_0079e55c(iVar2,*(undefined4 *)(g_0045c9c0 + 0x45c9b4),
                    *(undefined4 *)(g_0045c9c4 + 0x45c9b6),0);
  }
  return;
}

void DataManager::getCurrentSuitPlayer()
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x68))());
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)*(undefined4 *)(((int)this) + 0x44)));
  if (iVar2 != 0) {
    func_0079e55c(iVar2,*(undefined4 *)(g_0045c9f4 + 0x45c9e8),
                    *(undefined4 *)(g_0045c9f8 + 0x45c9ea),0);
  }
  return;
}

void DataManager::getPlayerDataByIndex(int p1)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x68))());
  iVar2 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar1)->objectAtIndex((unsigned int)p1));
  if (iVar2 != 0) {
    func_0079e55c(iVar2,*(undefined4 *)(g_0045ca28 + 0x45ca1c),
                    *(undefined4 *)(g_0045ca2c + 0x45ca1e),0);
  }
  return;
}

int * DataManager::getPlayerDataByID(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}

int DataManager::getMaxPlayerLv()
{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (undefined4)(0);
  iVar7 = 1;
  do {
    (**(code **)(**(int **)(((int)this) + 0x1c) + 0x68))();
    uVar1 = (undefined4)(((cocos2d::CCArray *)this)->count());
    if (uVar1 <= uVar6) {
      return iVar7;
    }
    uVar2 = (undefined4)((**(code **)(**(int **)(((int)this) + 0x1c) + 0x68))());
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCArray *)uVar2)->objectAtIndex((unsigned int)uVar6));
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)func_0079e55c(iVar3,*(undefined4 *)(g_0045cb40 + 0x45cb04),
                                      *(undefined4 *)(g_0045cb44 + 0x45cb06),0);
    }
    if (uVar6 == 0) {
LAB_0045cb28:
      piVar4 = (int *)(**(code **)(*piVar4 + 0x18))(piVar4);
      iVar7 = (undefined4)(intptr_t)((**(code **)(*piVar4 + 0x20))());
    }
    else {
      piVar5 = (int *)(**(code **)(*piVar4 + 0x18))(piVar4);
      iVar3 = (undefined4)(intptr_t)((**(code **)(*piVar5 + 0x20))());
      if (iVar7 < iVar3) goto LAB_0045cb28;
    }
    uVar6 = (undefined4)(uVar6 + 1);
  } while( true );
}

void DataManager::getSellPrice(BackPackItemData* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  piVar1 = (int *)((EquipData *)this)->create();
  uVar2 = (undefined4)((**(code **)(*(int *)(p1) + (0x20)))(p1));
  ((EquipData *)piVar1)->initWithID(uVar2);
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x78)))(piVar1));
  iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0xc0)))(piVar1));
  if ((iVar3 == 0) || (iVar3 = (**(code **)(*(int *)(p1) + (0x30)))(p1), iVar3 < 2)) {
    uVar8 = (undefined4)(0);
  }
  else {
    iVar3 = (undefined4)(intptr_t)((**(code **)(*(int *)(p1) + (0x30)))(p1));
    piVar4 = (int *)(**(code **)(*(int *)(piVar1) + (0xc0)))(piVar1);
    iVar5 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar4) + (0x58)))());
    piVar4 = (int *)(**(code **)(*(int *)(piVar1) + (0xc0)))(piVar1);
    uVar8 = (undefined4)((**(code **)(*(int *)(piVar4) + (0x50)))());
    piVar1 = (int *)(**(code **)(*(int *)(piVar1) + (0xc0)))(piVar1);
    iVar6 = (undefined4)(intptr_t)((**(code **)(*(int *)(piVar1) + (0x58)))());
    uVar7 = (undefined4)(func_0079e2ec(iVar5 * (iVar3 + -1)));
    func_0079e4fc(uVar7,uVar8);
    func_0079e5fc();
    uVar9 = (undefined4)(intptr_t)(func_0079e734());
    uVar10 = (undefined4)(intptr_t)(func_0079e734(iVar3 * iVar6 * (iVar3 + -1)));
    uVar10 = func_0079e724((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),g_0045cc40,
                             g_0045cc44);
    func_0079e744((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                    (int)((ulonglong)uVar10 >> 0x20));
    uVar8 = (undefined4)(func_0079e8c4());
  }
  uVar9 = (undefined4)(intptr_t)(func_0079e734(uVar2));
  uVar10 = (undefined4)(intptr_t)(func_0079e734(uVar8));
  uVar10 = (undefined4)(intptr_t)(func_0079e724((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),g_0045cc48,g_0045cc4c));
  func_0079e744((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                  (int)((ulonglong)uVar10 >> 0x20));
  func_0079e8c4();
  return;
}

void DataManager::getDailySignWeek(int p1)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (6 < p1 - 1U) {
    iVar4 = (undefined4)(intptr_t)(((intptr_t)"dayId maybe error"));
    iVar1 = (undefined4)(intptr_t)(0 /* ctorZero */);
    if (iVar1 == 0) {
      cocos2d::CCLog((char const*)((intptr_t)"Assert failed: %s"), iVar4);
    }
    func_0079e864(6,((intptr_t)"cocos2d-x assert"),((intptr_t)"%s function:%s line:%d"),((intptr_t)"jni/../../Classes/data/DataManager.cpp"),
                    &LAB_0045cd18 + g_0045cd3c,g_0045cd48);
  }
  cocos2d::CCString::createWithFormat((char const*)((intptr_t)"DailySignKey_%d"), p1);
  uVar2 = (undefined4)(((cocos2d::CCString *)this)->getCString());
  uVar3 = (undefined4)(cocos2d::CCUserDefault::sharedUserDefault());
  ((cocos2d::CCUserDefault *)uVar3)->getIntegerForKey((char const*)uVar2);
  return;
}

int DataManager::getStartCount()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int DataManager::copperOfEliteMission(BLMissionData* p1)
{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iStack_34;
  undefined4 uStack_30;
  int aiStack_2c [4];
  undefined4 uStack_1c;
  
  (**(code **)(*(int *)(p1) + (0x18)))(&uStack_30);
  uVar1 = (undefined4)(func_0079e6c0(uStack_30));
  func_0079e964(uVar1,10);
  iStack_34 = 5;
  if (extraout_r1 < 6) {
    (**(code **)(*(int *)(p1) + (0x18)))(aiStack_2c,p1);
    uVar1 = (undefined4)(func_0079e6c0(aiStack_2c[0]));
    func_0079e964(uVar1,10);
    func_0079e2bc(aiStack_2c);
    iStack_34 = (undefined4)(intptr_t)(extraout_r1_00);
  }
  func_0079e2bc(&uStack_30);
  piVar2 = (int *)(**(code **)(*(int *)this + 0x28))(((int)this));
  uVar1 = (undefined4)((**(code **)(*(int *)(piVar2) + (0x138)))());
  (**(code **)(*(int *)(p1) + (0x18)))(aiStack_2c,p1);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)uVar1)->objectForKey((char const *)aiStack_2c));
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = func_0079e55c(iVar3,*(undefined4 *)(g_0045ce68 + 0x45ce06),
                            *(undefined4 *)(g_0045ce6c + 0x45ce08),0);
  }
  func_0079e2bc(aiStack_2c);
  if (iVar4 == 0) {
LAB_0045ce1a:
    iVar4 = 0;
  }
  else {
    ((cocos2d::CCString *)iVar4)->getCString();
    iVar4 = (undefined4)(intptr_t)(func_0079e6c0());
    if (iVar4 < 0xb) {
      if (iVar4 < 1) goto LAB_0045ce1a;
    }
    else {
      iVar4 = 10;
    }
    aiStack_2c[0] = *(int *)((unsigned char *)((char *)&g_0045ce66 + (intptr_t)(g_0045ce70)));
    aiStack_2c[1] = *(undefined4 *)((unsigned char *)((char *)&g_0045ce6a + (intptr_t)(g_0045ce70)));
    aiStack_2c[2] = *(undefined4 *)((unsigned char *)((char *)&g_0045ce6e + (intptr_t)(g_0045ce70)));
    aiStack_2c[3] = *(undefined4 *)((unsigned char *)((char *)&g_0045ce72 + (intptr_t)(g_0045ce70)));
    uStack_1c = (undefined4)(*(undefined4 *)("p\u0017"));
    iVar4 = (undefined4)(intptr_t)(aiStack_2c[iStack_34 + -1] * iVar4);
  }
  return iVar4;
}

undefined4 DataManager::beforeEnterEliteMission(BLMissionData* p1)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iStack_30;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0x28))();
  uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x138)))());
  (**(code **)(*(int *)(p1) + (0x18)))(auStack_1c,p1);
  iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey((char const *)auStack_1c));
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = func_0079e55c(iVar3,*(undefined4 *)(g_0045cf8c + 0x45ceae),
                            *(undefined4 *)(g_0045cf90 + 0x45ceb0),0);
  }
  func_0079e2bc(auStack_1c);
  if (iVar4 == 0) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x28))(((int)this));
    puVar6 = auStack_20;
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x138)))());
    func_0079e45c(puVar6,g_0045cf98 + 0x45cf36,auStack_24);
    uVar5 = (undefined4)(cocos2d::CCString::create(*(const std::string *)(void *)puVar6));
    (**(code **)(*(int *)(p1) + (0x18)))(auStack_1c,p1);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar5, (char const *)auStack_1c);
    func_0079e2bc(auStack_1c);
  }
  else {
    ((cocos2d::CCString *)(iVar4))->getCString();
    iVar3 = (undefined4)(intptr_t)(func_0079e6c0());
    iStack_30 = 10;
    if (iVar3 < 10) {
      ((cocos2d::CCString *)(iVar4))->getCString();
      iStack_30 = (undefined4)(intptr_t)(func_0079e6c0());
      iStack_30 = (undefined4)(intptr_t)(iStack_30 + 1);
    }
    piVar1 = (int *)(**(code **)(*(int *)this + 0x28))(((int)this));
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x138)))());
    uVar5 = (undefined4)(cocos2d::CCString::createWithFormat((char const*)"%d", iStack_30));
    (**(code **)(*(int *)(p1) + (0x18)))(auStack_1c,p1);
    ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)uVar5, (char const *)auStack_1c);
    puVar6 = auStack_1c;
  }
  func_0079e2bc(puVar6);
  (**(code **)(*(int *)this + 0x28))(((int)this));
  ((UserData *)this)->updateRewardMissionTimesToDB();
  return 1;
}

void DataManager::addBuyCompleID(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataManager::setIsPassMirrorMision(std::vector<std::string, std::allocator<std::string>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataManager::setBuyCompleteIDs(std::vector<std::string, std::allocator<std::string>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataManager::setSelectRoles(std::vector<std::string, std::allocator<std::string>> * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int DataManager::getIsPassMirrorMision() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int DataManager::getBuyCompleteIDs() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

int DataManager::getSelectRoles() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

void DataManager::virtualNumNotEnough(int p1, long p2)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataManager::popBuyUI(float p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataManager::setDailySignState(DailySignState * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

int DataManager::getDailySignState() const
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return 0;
}

bool DataManager::init()
{
  /* IMPL_FIX (R73)：原为 TODO 占位。原版 dump（_ZN11DataManager4initEv）实证顺序：
       CCFileUtils::sharedFileUtils()->getWritablePath() + CCLog(...)      —— 仅一行日志
       DataManager::initDBData(this);
       p = UserData::create();  *(this + 0x1c) = p;                        —— **getUserData() 读的就是 +0x1c**
       p->init();  if (*(this+0x1c) != 0) p->retain();
       DataManager::initMaterialData(this);
       *(this + 0x94) = 1;
       std::map<int,std::string>::operator[](this + 0xa8, 1) = ...         —— 本工程 map 成员布局未验证，暂略
     不实现它 -> getUserData() 永远返回 0 -> 真机 UserData::getLivenessUserData()+6 崩在 fault 0x000000fc。*/
  cocos2d::CCFileUtils::sharedFileUtils()->getWritablePath();
  this->initDBData();
  UserData *pUserData = new UserData();   /* 原版为 UserData::create()（本工程该声明非 static，故直接真构造，语义等价）*/
  *(UserData **)((intptr_t)this + 0x1c) = pUserData;
  if (pUserData != 0) {
    pUserData->init();
    pUserData->retain();
  }
  this->initMaterialData();
  *(undefined4 *)((intptr_t)this + 0x94) = 1;
  return true;
}

void DataManager::updateDBByAppVersion()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataManager::initDBData()
{
  /* IMPL_FIX (R146)：原为 TODO 占位 —— 这正是"游戏信息库句柄为空"的根源。
     真机链：`sqlite3SafetyCheckOk+0x1e`(fault 0x48) ← `sqlite3_exec` ← `sqlite3_get_table`
     ← `DataCacheManager::initBeAttackCacheData` ← `DataCacheManager::init` ← `shareManager`
     ← `BLAchievementManager::updateItemNum` ← `UserData::addAchievementItemData`。
     关键点：`DataManager::getGameInfoDB()` 读的是 **DataManager 的 this+0x14**
     （`return *(sqlite3**)(((int)this) + 0x14);`），所以句柄必须写到**同一个对象**的这个偏移上；
     先前 R126 的修复把它写进了 `UserData::init` 的 this+0x14（**不同对象** ✗）⇒ getGameInfoDB() 恒为垃圾。*/
  std::string hwDbPath("lol.plist");
  /* ???DBUtil::openDB ??????**???**???DBUtil.h:21????? UserData::init ??????
     ???????????? DBUtil::openDB(...)????"??????????"??????*/
  ((DBUtil *)this)->openDB((sqlite3 **)((int)this + 0x14), &hwDbPath);
  cocos2d::CCLog("DIAG_R146 DataManager::initDBData this=%p getGameInfoDB=%p", (void *)this,
                 (void *)(*(int *)((int)this + 0x14)));
}

void DataManager::onSureBuyDiamond(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataManager::onBuyComplete(cocos2d::CCObject* p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

uint DataManager::isEnoughVirNumber(int p1, long p2, bool p3)
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uStack_50;
  undefined1 auStack_34 [4];
  int iStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar6 = (undefined4)(intptr_t)(g_0045e754 + 0x45e4ee);
  if (p1 < 0x65) {
    piVar1 = (int *)DataManager::shareDataManager();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
    uVar7 = (undefined4)(intptr_t)(func_0079e734(p2));
    uVar5 = (undefined4)((undefined4)((ulonglong)uVar7 >> 0x20));
    iVar3 = (undefined4)((void)(((UserData *)this)->hasVirNumber(uVar2, p1)),(intptr_t)0);
    if (iVar3 == 0) {
      uStack_50 = (undefined4)(0);
      if (p3 == 0) {
        return 0;
      }
      piVar1 = (int *)((DataCacheManager *)this)->shareManager();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
      iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(p1));
      if (iVar3 == 0) {
        return 0;
      }
      piVar1 = (int *)func_0079e55c(iVar3,*(undefined4 *)(iVar6 + g_0045e758),
                                      *(undefined4 *)(iVar6 + g_0045e75c),0);
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iStack_30 = (undefined4)(intptr_t)(*(int *)(iVar6 + g_0045e760) + 0xc);
      uVar2 = (undefined4)(((BLLanguage *)this)->share());
      (**(code **)(*(int *)(piVar1) + (0x20)))(auStack_2c,piVar1);
      (((BLLanguage *)this))->getString(*(std::string *)auStack_28);
      uVar2 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(auStack_24,"不足",auStack_34);
      (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
      func_0042f3fc(auStack_1c,auStack_28,auStack_20);
      func_0079e52c(&iStack_30,auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      func_0079e2bc(auStack_24);
      func_0079e2bc(auStack_28);
      func_0079e2bc(auStack_2c);
      *(int *)(((int)this) + 0x88) = p1;
      piVar1 = (int *)DataManager::shareDataManager();
      uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x28)))());
      uVar8 = (undefined4)(intptr_t)(((UserData *)(uVar2))->getVirNumber(p1));
      func_0079e8d4((int)uVar7,uVar5,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      uVar2 = (undefined4)(func_0079e8c4());
      *(undefined4 *)(((int)this) + 0x8c) = uVar2;
      ((DataManager *)(((int)this)))->popBuyUI(0);
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar2))->showToast((char const*)iStack_30);
      goto LAB_0045e6e8;
    }
  }
  else {
    piVar1 = (int *)((DataCacheManager *)this)->shareManager();
    uVar2 = (undefined4)((**(code **)(*(int *)(piVar1) + (0x60)))());
    iVar3 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey(p1));
    if ((iVar3 != 0) &&
       (piVar1 = (int *)func_0079e55c(iVar3,*(undefined4 *)(iVar6 + g_0045e758),
                                        *(undefined4 *)(iVar6 + g_0045e75c),0),
       piVar1 != (int *)0x0)) {
      uVar4 = ((void)(((DataManager *)(((int)this)))->getBackPackItemNum(p1)),(undefined4)0);
      uStack_50 = (undefined4)((((int)uVar4 >> 0x1f) - ((int)p2 >> 0x1f)) + (uint)(p2 <= uVar4) & 0xff);
      iStack_30 = (undefined4)(intptr_t)(*(int *)(iVar6 + g_0045e760) + 0xc);
      uVar2 = (undefined4)(((BLLanguage *)this)->share());
      (**(code **)(*(int *)(piVar1) + (0x20)))(auStack_2c,piVar1);
      (((BLLanguage *)this))->getString(*(std::string *)auStack_28);
      uVar2 = (undefined4)(((BLLanguage *)this)->share());
      func_0079e45c(auStack_24,"不足",auStack_34);
      (((BLLanguage *)this))->getString(*(std::string *)auStack_20);
      func_0042f3fc(auStack_1c,auStack_28,auStack_20);
      func_0079e52c(&iStack_30,auStack_1c);
      func_0079e2bc(auStack_1c);
      func_0079e2bc(auStack_20);
      func_0079e2bc(auStack_24);
      func_0079e2bc(auStack_28);
      func_0079e2bc(auStack_2c);
      uVar2 = (undefined4)(((Toast *)this)->sharedToast());
      ((Toast *)(uVar2))->showToast((char const*)iStack_30);
LAB_0045e6e8:
      func_0079e2bc(&iStack_30);
      return uStack_50;
    }
  }
  return 1;
}

std::string DataManager::getCurrentMission()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return {};
}

void DataManager::setCurrentMission(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

std::string DataManager::getCurrentChapter()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return {};
}

void DataManager::setCurrentChapter(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}
