#include "DataCacheManager.h"
#include "CCString.h"
#include "CCObject.h"
#include "CCArray.h"
#include "CCDictionary.h"
#include "ZhanCheDBData.h"
#include "BLBeAttackData.h"
#include "BLHit.h"
#include "BLHitLevelData.h"
#include "BLShakeData.h"
#include "ChallengeData.h"
#include "ChestData.h"
#include "DataManager.h"
#include "DebrisComposeData.h"
#include "EquipBaseData.h"
#include "ExpData.h"
#include "GuideData.h"
#include "GuideStep.h"
#include "ImmortalsInfoData.h"
#include "ItemData.h"
#include "LivenessData.h"
#include "LoadingAlertData.h"
#include "MirrorMissionData.h"
#include "MirrorShopData.h"
#include "MissionStarRewardData.h"
#include "PetData.h"
#include "PetSkillData.h"
#include "RenascenceBaseData.h"
#include "RoleRenascenceData.h"
#include "SuitEquipBuffData.h"
#include "SuitEquipData.h"
#include "SuitEquipEquipData.h"
#include "SuitEquipUpGraceData.h"
#include "TalentData.h"
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
extern "C" long long func_0079e2bc(...);
extern "C" long long func_0079e2cc(...);
extern "C" long long func_0079e2dc(...);
extern "C" long long func_0079e2fc(...);
extern "C" long long func_0079e45c(...);
extern "C" long long func_0079e55c(...);
extern "C" long long func_0079e69c(...);
extern "C" long long ghidra_CONCAT44(...);
extern "C" unsigned long DAT_0045c0e8;
extern "C" unsigned long UNK_0045bf02;
extern "C" unsigned long _DAT_0045af30;
extern "C" unsigned long _DAT_0045b0f0;
extern "C" unsigned long _DAT_0045b164;
extern "C" unsigned long _DAT_0045b168;
extern "C" unsigned long _DAT_0045b25c;
extern "C" unsigned long _DAT_0045b260;
extern "C" unsigned long _DAT_0045b264;
extern "C" unsigned long _DAT_0045b358;
extern "C" unsigned long _DAT_0045b35c;
extern "C" unsigned long _DAT_0045b360;
extern "C" unsigned long _DAT_0045b454;
extern "C" unsigned long _DAT_0045b458;
extern "C" unsigned long _DAT_0045b45c;
extern "C" unsigned long _DAT_0045b5b0;
extern "C" unsigned long _DAT_0045b5b4;
extern "C" unsigned long _DAT_0045b5b8;
extern "C" unsigned long _DAT_0045b5bc;
extern "C" unsigned long _DAT_0045b5c0;
extern "C" unsigned long _DAT_0045b5c4;
extern "C" unsigned long _DAT_0045b5c8;
extern "C" unsigned long _DAT_0045b8ac;
extern "C" unsigned long _DAT_0045b8b0;
extern "C" unsigned long _DAT_0045b8b4;
extern "C" unsigned long _DAT_0045b9b8;
extern "C" unsigned long _DAT_0045b9bc;
extern "C" unsigned long _DAT_0045b9c0;
extern "C" unsigned long _DAT_0045bb24;
extern "C" unsigned long _DAT_0045bb28;
extern "C" unsigned long _DAT_0045bb2c;
extern "C" unsigned long _DAT_0045bb30;
extern "C" unsigned long _DAT_0045bb34;
extern "C" unsigned long _DAT_0045bc38;
extern "C" unsigned long _DAT_0045bc3c;
extern "C" unsigned long _DAT_0045bc40;
extern "C" unsigned long _DAT_0045bd2c;
extern "C" unsigned long _DAT_0045bd30;
extern "C" unsigned long _DAT_0045be2c;
extern "C" unsigned long _DAT_0045be30;
extern "C" unsigned long _DAT_0045be34;
extern "C" unsigned long _DAT_0045bfb8;
extern "C" unsigned long _DAT_0045bfbc;
extern "C" unsigned long _DAT_0045bfc0;
extern "C" unsigned long _DAT_0045bfc4;
extern "C" unsigned long _DAT_0045bfc8;
extern "C" unsigned long _DAT_0045bfcc;
extern "C" unsigned long _DAT_0045bfd0;
extern "C" unsigned long _DAT_0045c0bc;
extern "C" unsigned long _DAT_0045c0c0;
extern "C" unsigned long _DAT_0045c0c4;
extern "C" unsigned long _DAT_0045c0e8;
extern "C" unsigned long _DAT_0045c0ec;
extern "C" unsigned long _DAT_0045c110;
extern "C" unsigned long _DAT_0045c114;
extern "C" unsigned long _DAT_0045c210;
extern "C" unsigned long _DAT_0045c214;
extern "C" unsigned long _DAT_0045c218;
extern "C" unsigned long _DAT_0045c21c;
extern "C" unsigned long g_0045af30;
extern "C" unsigned long g_0045b0f0;
extern "C" unsigned long g_0045b164;
extern "C" unsigned long g_0045b168;
extern "C" unsigned long g_0045b25c;
extern "C" unsigned long g_0045b260;
extern "C" unsigned long g_0045b264;
extern "C" unsigned long g_0045b358;
extern "C" unsigned long g_0045b35c;
extern "C" unsigned long g_0045b360;
extern "C" unsigned long g_0045b454;
extern "C" unsigned long g_0045b458;
extern "C" unsigned long g_0045b45c;
extern "C" unsigned long g_0045b5b0;
extern "C" unsigned long g_0045b5b4;
extern "C" unsigned long g_0045b5b8;
extern "C" unsigned long g_0045b5bc;
extern "C" unsigned long g_0045b5c0;
extern "C" unsigned long g_0045b5c4;
extern "C" unsigned long g_0045b5c8;
extern "C" unsigned long g_0045b8ac;
extern "C" unsigned long g_0045b8b0;
extern "C" unsigned long g_0045b8b4;
extern "C" unsigned long g_0045b9b8;
extern "C" unsigned long g_0045b9bc;
extern "C" unsigned long g_0045b9c0;
extern "C" unsigned long g_0045bb24;
extern "C" unsigned long g_0045bb28;
extern "C" unsigned long g_0045bb2c;
extern "C" unsigned long g_0045bb30;
extern "C" unsigned long g_0045bb34;
extern "C" unsigned long g_0045bc38;
extern "C" unsigned long g_0045bc3c;
extern "C" unsigned long g_0045bc40;
extern "C" unsigned long g_0045bd2c;
extern "C" unsigned long g_0045bd30;
extern "C" unsigned long g_0045be2c;
extern "C" unsigned long g_0045be30;
extern "C" unsigned long g_0045be34;
extern "C" unsigned long g_0045bf02;
extern "C" unsigned long g_0045bfb8;
extern "C" unsigned long g_0045bfbc;
extern "C" unsigned long g_0045bfc0;
extern "C" unsigned long g_0045bfc4;
extern "C" unsigned long g_0045bfc8;
extern "C" unsigned long g_0045bfcc;
extern "C" unsigned long g_0045bfd0;
extern "C" unsigned long g_0045c0bc;
extern "C" unsigned long g_0045c0c0;
extern "C" unsigned long g_0045c0c4;
extern "C" unsigned long g_0045c0e8;
extern "C" unsigned long g_0045c0ec;
extern "C" unsigned long g_0045c110;
extern "C" unsigned long g_0045c114;
extern "C" unsigned long g_0045c210;
extern "C" unsigned long g_0045c214;
extern "C" unsigned long g_0045c218;
extern "C" unsigned long g_0045c21c;
cocos2d::CCDictionary* DataCacheManager::getDicHitLvDataCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x14));
}

cocos2d::CCDictionary* DataCacheManager::getDicBeAttackCacheData() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x18));
}

cocos2d::CCDictionary* DataCacheManager::getDicAnimateDataCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x1c));
}

cocos2d::CCDictionary* DataCacheManager::getDicRoleDataCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x20));
}

cocos2d::CCDictionary* DataCacheManager::getDicAttackDataCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x24));
}

cocos2d::CCDictionary* DataCacheManager::getDicHitCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x28));
}

void DataCacheManager::setDicHitCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x28) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* DataCacheManager::getDicShakeCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x2c));
}

cocos2d::CCDictionary* DataCacheManager::getDicExpDataCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x30));
}

cocos2d::CCDictionary* DataCacheManager::getDicMonsterDataCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x34));
}

cocos2d::CCDictionary* DataCacheManager::getDicItemDataCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x38));
}

cocos2d::CCDictionary* DataCacheManager::getDicEquipBaseDataCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x3c));
}

cocos2d::CCDictionary* DataCacheManager::getDicDebrisDataCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x40));
}

cocos2d::CCDictionary* DataCacheManager::getDicTalentDataCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x44));
}

cocos2d::CCArray* DataCacheManager::getArrayChestData() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x48));
}

void DataCacheManager::setArrayChestData(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x48) = (undefined4)(intptr_t)p1;
  return;
}

LoadingAlertData* DataCacheManager::getLoadingAlertData() const
{
  return (LoadingAlertData*)(*(undefined4 *)(((int)this) + 0x4c));
}

void DataCacheManager::setLoadingAlertData(LoadingAlertData* p1)
{
  *(undefined4 *)(((int)this) + 0x4c) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCArray* DataCacheManager::getArrayGuide() const
{
  return (cocos2d::CCArray*)(*(undefined4 *)(((int)this) + 0x50));
}

void DataCacheManager::setArrayGuide(cocos2d::CCArray* p1)
{
  *(undefined4 *)(((int)this) + 0x50) = (undefined4)(intptr_t)p1;
  return;
}

cocos2d::CCDictionary* DataCacheManager::getDicGuideStep() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x54));
}

cocos2d::CCDictionary* DataCacheManager::getDicSoundCache() const
{
  return (cocos2d::CCDictionary*)(*(undefined4 *)(((int)this) + 0x58));
}

SuitEquipData* DataCacheManager::getSuitEquipData() const
{
  return (SuitEquipData*)(*(undefined4 *)(((int)this) + 0x5c));
}

void DataCacheManager::setSuitEquipData(SuitEquipData* p1)
{
  *(undefined4 *)(((int)this) + 0x5c) = (undefined4)(intptr_t)p1;
  return;
}

SuitEquipEquipData* DataCacheManager::getSuitEquipEquipData() const
{
  return (SuitEquipEquipData*)(*(undefined4 *)(((int)this) + 0x60));
}

SuitEquipBuffData* DataCacheManager::getSuitEquipBuffData() const
{
  return (SuitEquipBuffData*)(*(undefined4 *)(((int)this) + 100));
}

SuitEquipUpGraceData* DataCacheManager::getSuitEquipUpGraceData() const
{
  return (SuitEquipUpGraceData*)(*(undefined4 *)(((int)this) + 0x68));
}

LivenessData* DataCacheManager::getLivenessData() const
{
  return (LivenessData*)(*(undefined4 *)(((int)this) + 0x6c));
}

void DataCacheManager::setLivenessData(LivenessData* p1)
{
  *(undefined4 *)(((int)this) + 0x6c) = (undefined4)(intptr_t)p1;
  return;
}

RenascenceBaseData* DataCacheManager::getRenascenceBaseData() const
{
  return (RenascenceBaseData*)(*(undefined4 *)(((int)this) + 0x70));
}

RoleRenascenceData* DataCacheManager::getRoleRenascenceData() const
{
  return (RoleRenascenceData*)(*(undefined4 *)(((int)this) + 0x74));
}

MirrorMissionData* DataCacheManager::getMirrorMissionData() const
{
  return (MirrorMissionData*)(*(undefined4 *)(((int)this) + 0x78));
}

MirrorShopData* DataCacheManager::getMirrorShopData() const
{
  return (MirrorShopData*)(*(undefined4 *)(((int)this) + 0x7c));
}

void DataCacheManager::setMirrorShopData(MirrorShopData* p1)
{
  *(undefined4 *)(((int)this) + 0x7c) = (undefined4)(intptr_t)p1;
  return;
}

ImmortalsInfoData* DataCacheManager::getImmortalsInfoData() const
{
  return (ImmortalsInfoData*)(*(undefined4 *)(((int)this) + 0x80));
}

PetData* DataCacheManager::getPetData() const
{
  return (PetData*)(*(undefined4 *)(((int)this) + 0x84));
}

void DataCacheManager::setPetData(PetData* p1)
{
  *(undefined4 *)(((int)this) + 0x84) = (undefined4)(intptr_t)p1;
  return;
}

PetSkillData* DataCacheManager::getPetSkillData() const
{
  return (PetSkillData*)(*(undefined4 *)(((int)this) + 0x88));
}

void DataCacheManager::setPetSkillData(PetSkillData* p1)
{
  *(undefined4 *)(((int)this) + 0x88) = (undefined4)(intptr_t)p1;
  return;
}

ChallengeData* DataCacheManager::getChallengData() const
{
  return (ChallengeData*)(*(undefined4 *)(((int)this) + 0x8c));
}

void DataCacheManager::setChallengData(ChallengeData* p1)
{
  *(undefined4 *)(((int)this) + 0x8c) = (undefined4)(intptr_t)p1;
  return;
}

MissionStarRewardData* DataCacheManager::getStarRewardData() const
{
  return (MissionStarRewardData*)(*(undefined4 *)(((int)this) + 0x90));
}

ZhanCheDBData* DataCacheManager::getMyZhanCheDBData() const
{
  return (ZhanCheDBData*)(*(undefined4 *)(((int)this) + 0x94));
}

void DataCacheManager::setMyZhanCheDBData(ZhanCheDBData* p1)
{
  *(undefined4 *)(((int)this) + 0x94) = (undefined4)(intptr_t)p1;
  return;
}

DataCacheManager::~DataCacheManager()
{
  int iVar1;
  
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  if (*(int *)((int)this + 4*(8)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(8)) = 0;
  }
  if (*(int *)((int)this + 4*(7)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(7)) = 0;
  }
  if (*(int *)((int)this + 4*(9)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(9)) = 0;
  }
  if (*(int *)((int)this + 4*(10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(10)) = 0;
  }
  if (*(int *)((int)this + 4*(6)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(6)) = 0;
  }
  if (*(int *)((int)this + 4*(5)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(5)) = 0;
  }
  if (*(int *)((int)this + 4*(0xe)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xe)) = 0;
  }
  if (*(int *)((int)this + 4*(0xf)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xf)) = 0;
  }
  if (*(int *)((int)this + 4*(0x10)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x10)) = 0;
  }
  if (*(int *)((int)this + 4*(0x11)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x11)) = 0;
  }
  if (*(int *)((int)this + 4*(0x12)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x12)) = 0;
  }
  if (*(int *)((int)this + 4*(0xb)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xb)) = 0;
  }
  if (*(int *)((int)this + 4*(0xc)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xc)) = 0;
  }
  if (*(int *)((int)this + 4*(0x13)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x13)) = 0;
  }
  if (*(int *)((int)this + 4*(0x14)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x14)) = 0;
  }
  if (*(int *)((int)this + 4*(0x15)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x15)) = 0;
  }
  if (*(int *)((int)this + 4*(0x16)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x16)) = 0;
  }
  if (*(int *)((int)this + 4*(0xd)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0xd)) = 0;
  }
  iVar1 = *(int *)((int)this + 4*(0x17));
  if (iVar1 != 0) {
    ((SuitEquipData *)iVar1)->~SuitEquipData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x19));
  if (iVar1 != 0) {
    ((SuitEquipBuffData *)iVar1)->~SuitEquipBuffData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x18));
  if (iVar1 != 0) {
    ((SuitEquipEquipData *)iVar1)->~SuitEquipEquipData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x1a));
  if (iVar1 != 0) {
    ((SuitEquipUpGraceData *)iVar1)->~SuitEquipUpGraceData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x1b));
  if (iVar1 != 0) {
    ((LivenessData *)iVar1)->~LivenessData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x1c));
  if (iVar1 != 0) {
    ((RenascenceBaseData *)iVar1)->~RenascenceBaseData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x1d));
  if (iVar1 != 0) {
    ((RoleRenascenceData *)iVar1)->~RoleRenascenceData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x1e));
  if (iVar1 != 0) {
    ((MirrorMissionData *)iVar1)->~MirrorMissionData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x20));
  if (iVar1 != 0) {
    ((ImmortalsInfoData *)iVar1)->~ImmortalsInfoData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x21));
  if (iVar1 != 0) {
    ((PetData *)iVar1)->~PetData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x22));
  if (iVar1 != 0) {
    ((PetSkillData *)iVar1)->~PetSkillData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x23));
  if (iVar1 != 0) {
    ((ChallengeData *)iVar1)->~ChallengeData();
    (void)(::operator delete((void *)(iVar1)));
  }
  iVar1 = *(int *)((int)this + 4*(0x24));
  if (iVar1 != 0) {
    ((MissionStarRewardData *)iVar1)->~MissionStarRewardData();
    (void)(::operator delete((void *)(iVar1)));
  }
  if (*(int *)((int)this + 4*(0x1f)) != 0) {
    ((cocos2d::CCObject *)this)->release();
    *(int *)((int)this + 4*(0x1f)) = 0;
  }
  /* DTOR_FIX(R92): ?? ((T*)((int)this))->~CCObject(); ?? ???????? T ????????**?????????** -> ????????? -> ??????????????????????????????????? */;
  return;
}


void DataCacheManager::cleanDataCache()
{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  ((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x20))->removeAllObjects();
  ((cocos2d::CCDictionary *)*(undefined4 *)(((int)this) + 0x24))->removeAllObjects();
  if (*(int *)(((int)this) + 0x58) != 0) {
    iVar3 = *(int *)(*(int *)(((int)this) + 0x58) + 0x14);
    iVar4 = iVar3;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x110);
    }
    while (iVar3 != 0) {
      if ((*(int *)(iVar3 + 0x104) != 0) &&
         (iVar3 = func_0079e55c(*(int *)(iVar3 + 0x104),*(undefined4 *)(g_0045b164 + 0x45b13e),
                                  *(undefined4 *)(g_0045b168 + 0x45b140),0), iVar3 != 0)) {
        uVar1 = (undefined4)(((CocosDenshion::SimpleAudioEngine *)this)->sharedEngine());
        uVar2 = (undefined4)(((cocos2d::CCString *)iVar3)->getCString());
        ((CocosDenshion::SimpleAudioEngine *)uVar1)->unloadEffect((char const*)uVar2);
      }
      iVar3 = iVar4;
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 0x110);
      }
    }
  }
  return;
}





void DataCacheManager::initSuitEquip()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x5c) = uVar1;
  return;
}

void DataCacheManager::initSuitEquipEquip()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x30))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x60) = uVar1;
  return;
}

void DataCacheManager::initSuitEquipBuff()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 100) = uVar1;
  return;
}

void DataCacheManager::initSuitEquipUpGrace()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x68) = uVar1;
  return;
}

void DataCacheManager::initLivenessData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x28))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x6c) = uVar1;
  return;
}

void DataCacheManager::initRenascenceBaseData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x70) = uVar1;
  return;
}

void DataCacheManager::initRoleRenascenceData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x74) = uVar1;
  return;
}

void DataCacheManager::initMirrorMissionData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x78) = uVar1;
  return;
}

void DataCacheManager::initMirrorShopData()
{
  int *piVar1;
  int iVar2;
  
  /* CTOR_FIX (R73)：原为 `::operator new(0x20)` + 直接 init()（裸分配未跑构造函数 → vptr=NULL、
     且 CCObject 的 m_uReference/m_uAutoReleaseCount **未初始化**）→ 随后 autorelease() 把垃圾计数
     登记进池 -> 真机 CCObject::release()+34 fault 0x8（栈：DataCacheManager::initMirrorShopData+52）。*/
  MirrorShopData *pMirrorShopData = new MirrorShopData();
  iVar2 = (undefined4)(intptr_t)(pMirrorShopData->init());
  if (iVar2 == 0) {
    /* 原为 `(**(code **)(*piVar1 + 8))(piVar1);`（槽8=idx2=删除析构，且多一次解引用）*/
    delete pMirrorShopData;
    pMirrorShopData = 0;
  }
  else {
    ((cocos2d::CCObject *)pMirrorShopData)->autorelease();
  }
  *(MirrorShopData **)(((int)this) + 0x7c) = pMirrorShopData;
  ((cocos2d::CCObject *)this)->retain();
  return;
}

void DataCacheManager::initImmortalsInfoData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0xc))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x80) = uVar1;
  return;
}

void DataCacheManager::initPetData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x18))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x84) = uVar1;
  return;
}

void DataCacheManager::initPetSkillData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0x24))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x88) = uVar1;
  return;
}

void DataCacheManager::initChallengeRewardData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0xc))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x8c) = uVar1;
  return;
}

void DataCacheManager::initZhanCheDBData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0xc))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x94) = uVar1;
  return;
}

void DataCacheManager::initMissionStarRewardData()
{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(((long long)::operator new((size_t)(0xc))));
  0 /* ctorZero */;
  *(undefined4 *)(((int)this) + 0x90) = uVar1;
  return;
}








bool DataCacheManager::init()
{
  int iVar1;
  
  DataCacheManager::initItems();
  DataCacheManager::initEquipBase();
  DataCacheManager::initDebris();
  DataCacheManager::initTalent();
  DataCacheManager::initSuitEquip();
  DataCacheManager::initSuitEquipEquip();
  DataCacheManager::initSuitEquipBuff();
  DataCacheManager::initSuitEquipUpGrace();
  DataCacheManager::initLivenessData();
  DataCacheManager::initRenascenceBaseData();
  DataCacheManager::initRoleRenascenceData();
  DataCacheManager::initMirrorMissionData();
  DataCacheManager::initMirrorShopData();
  DataCacheManager::initImmortalsInfoData();
  DataCacheManager::initBeAttackCacheData();
  DataCacheManager::initHitLvCacheData();
  DataCacheManager::initHitCacheData();
  DataCacheManager::initShakeCacheData();
  DataCacheManager::initExpDataCacheData();
  DataCacheManager::initGuideStep();
  DataCacheManager::initGuide();
  DataCacheManager::initPetData();
  DataCacheManager::initPetSkillData();
  DataCacheManager::initChallengeRewardData();
  DataCacheManager::initMissionStarRewardData();
  DataCacheManager::initZhanCheDBData();
  iVar1 = ((ChestData *)this)->getChestDatas();
  *(int *)(((int)this) + 0x48) = iVar1;
  if (iVar1 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  return 1;
}

/* SINGLETON_FIX (R73)：原生成器把静态单例指针误渲染成字符串字面量 `": (GNU) 4.4.3"`
   （原版 .comment 的 GCC 版本串碎片；同族见 DataManager 的 "NU) 4.4.3"、ADManager 的 "|ɵ"），
   返回野指针 -> 调用方 `getItemDataByID` 在野 this 上做虚调用 ->
   真机 tombstone: DataCacheManager::getItemDataByID()+16 fault 0x47282072。
   改为真实文件级静态 + 真构造。 */
static DataCacheManager *s_shareManager = 0;

undefined4 DataCacheManager::shareManager()
{
  if (s_shareManager == 0) {
    s_shareManager = new DataCacheManager();
    s_shareManager->init();
  }
  return (undefined4)(intptr_t)s_shareManager;
}

// ===== 修复: 补回被误删的函数占位 (38) =====
void DataCacheManager::setDicHitLvDataCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x14) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicBeAttackCacheData(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x18) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicAnimateDataCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x1c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicRoleDataCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x20) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicAttackDataCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x24) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicShakeCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x2c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicExpDataCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x30) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicMonsterDataCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x34) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicItemDataCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x38) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicEquipBaseDataCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x3c) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicDebrisDataCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x40) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicTalentDataCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x44) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicGuideStep(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x54) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setDicSoundCache(cocos2d::CCDictionary* p1)
{
  *(undefined4 *)(((int)this) + 0x58) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setSuitEquipEquipData(SuitEquipEquipData* p1)
{
  *(undefined4 *)(((int)this) + 0x60) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setSuitEquipBuffData(SuitEquipBuffData* p1)
{
  *(undefined4 *)(((int)this) + 100) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setSuitEquipUpGraceData(SuitEquipUpGraceData* p1)
{
  *(undefined4 *)(((int)this) + 0x68) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setRenascenceBaseData(RenascenceBaseData* p1)
{
  *(undefined4 *)(((int)this) + 0x70) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setRoleRenascenceData(RoleRenascenceData* p1)
{
  *(undefined4 *)(((int)this) + 0x74) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setMirrorMissionData(MirrorMissionData* p1)
{
  *(undefined4 *)(((int)this) + 0x78) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setImmortalsInfoData(ImmortalsInfoData* p1)
{
  *(undefined4 *)(((int)this) + 0x80) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

void DataCacheManager::setStarRewardData(MissionStarRewardData* p1)
{
  *(undefined4 *)(((int)this) + 0x90) = (undefined4)(intptr_t) (undefined4)(intptr_t)p1;
  return;
}

DataCacheManager::DataCacheManager()
{
  int *piVar1;
  int iVar2;
  
  0 /* ctorZero */;
  /* VPTR_FIX: 原始为 *(int*)this = *(int*)(g_XXXX+0xYYYY)+8; 该 g_ 未解析会 segfault; 我们的类由编译器设 vptr, 故略过 */;
  *(int *)((int)this + 4*(0x12)) = 0;
  /* CTOR_FIX (R73)：原为 `::operator new(0x18)` + 直接 init()（裸分配未跑构造函数 → vptr=NULL；
     init 是虚函数 → 经 NULL vptr 取槽调用 → 落到非法指令）
     真机 tombstone: LoadingAlertData::init()+4 SIGILL(ILL_ILLOPC) ← DataCacheManager ctor+50。改用真构造。 */
  piVar1 = (int *)(intptr_t)(new LoadingAlertData());
  iVar2 = (undefined4)(intptr_t)(((LoadingAlertData *)piVar1)->init());
  if (iVar2 == 0) {
    /* 原为 `(**(code **)(*piVar1 + 8))(piVar1);` —— 槽 8 = idx2 = 删除析构 D0（且生成器多一次解引用）*/
    delete (LoadingAlertData *)piVar1;
    piVar1 = (int *)0x0;
  }
  else {
    ((cocos2d::CCObject *)piVar1)->autorelease();
  }
  *(int *)((int)this + 4*(0x13)) = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(7)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(8)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(9)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(10)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xe)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xf)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x10)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x11)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(5)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(6)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xb)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xc)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCArray::create());
  *(int *)((int)this + 4*(0x14)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x15)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0x16)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  iVar2 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
  *(int *)((int)this + 4*(0xd)) = iVar2;
  if (iVar2 != 0) {
    ((cocos2d::CCObject *)this)->retain();
  }
  *(int *)((int)this + 4*(0x1b)) = 0;
  *(int *)((int)this + 4*(0x20)) = 0;
  *(int *)((int)this + 4*(0x21)) = 0;
  *(int *)((int)this + 4*(0x22)) = 0;
  *(int *)((int)this + 4*(0x23)) = 0;
  *(int *)((int)this + 4*(0x24)) = 0;
  *(int *)((int)this + 4*(0x25)) = 0;
  return;
}

void DataCacheManager::initItems()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataCacheManager::initEquipBase()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataCacheManager::initDebris()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataCacheManager::initTalent()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataCacheManager::initHitLvCacheData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataCacheManager::initBeAttackCacheData()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_44;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined1 auStack_1c [8];
  
  func_0079e45c(auStack_34,g_0045b9b8 + 0x45b8c8,auStack_1c);
  uStack_30 = (undefined4)(0);
  /* RAW_SLOT_FIX (R73)：原为
       func_0079e45c(&uStack_24," select * from ",auStack_1c);   // gnustl 字符串槽
       func_0079e69c(&uStack_24,"beAttack");                     // 追加
       piVar1 = ((DataManager*)this)->shareDataManager();
       uVar2 = (**(code **)(*(int*)(piVar1) + 0x18))();          // 槽 0x18 = idx6，且多一次解引用 -> fault 0x18
       sqlite3_get_table(uVar2, uStack_24, ...);                 // uStack_24 是 GnuString rep 指针，不是 char*
     具名化 + 用真 std::string 拼 SQL（DataManager idx6 = getGameInfoDB()，原版 _ZTV11DataManager 反查确认）。 */
  std::string sqlBeAttackText = std::string(" select * from ") + "beAttack";
  DataManager *pDataManager = (DataManager *)(intptr_t)((DataManager *)this)->shareDataManager();
  sqlite3 *pGameInfoDB = pDataManager->getGameInfoDB();
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(pGameInfoDB,(char *)sqlBeAttackText.c_str(),&uStack_30,&iStack_2c,&iStack_28,0));
  if ((iVar3 == 0) && (iStack_20 = iStack_28 * 3, 2 < iStack_2c)) {
    iStack_44 = 0;
    while( true ) {
      if (iStack_2c + -2 <= iStack_44) break;
      piVar1 = (int *)::operator new(0x20);
      ::new ((void *)piVar1) BLBeAttackData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
      iVar3 = (undefined4)(intptr_t)(((BLBeAttackData *)(piVar1))->init());
      if (iVar3 == 0) {
        (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
        piVar1 = (int *)0x0;
      }
      else {
        ((cocos2d::CCObject *)(piVar1))->autorelease();
      }
      ((BLBeAttackData *)(piVar1))->initWith((char**)uStack_30, *(int*)&iStack_20);
      uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x18));
      (**(code **)(*(int *)(piVar1) + (0x18)))(auStack_1c,piVar1);
      ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)piVar1, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
      iStack_44 = (undefined4)(intptr_t)(iStack_44 + 1);
    }
  }
  sqlite3_free_table(uStack_30);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(auStack_34);
  return;
}

void DataCacheManager::initHitCacheData()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_48;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  func_0079e45c(auStack_3c,g_0045bb24 + 0x45b9d2,auStack_1c);
  uStack_38 = (undefined4)(0);
  func_0079e45c(&uStack_2c," select * from ",auStack_1c);
  func_0079e69c(&uStack_2c,"hit");
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((intptr_t)((DataManager *)(intptr_t)piVar1)->getGameInfoDB());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,uStack_2c,&uStack_38,&iStack_34,&iStack_30,0));
  if (iVar3 == 0) {
    iStack_28 = (undefined4)(intptr_t)(iStack_30 << 1);
    iStack_48 = 0;
    if (1 < iStack_34) {
      while( true ) {
        if (iStack_34 + -1 <= iStack_48) break;
        piVar1 = (int *)::operator new(0x48);
        ::new ((void *)piVar1) BLHit();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
        iVar3 = (undefined4)(intptr_t)(((BLHit *)(piVar1))->init());
        if (iVar3 == 0) {
          (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
          piVar1 = (int *)0x0;
        }
        else {
          ((cocos2d::CCObject *)(piVar1))->autorelease();
        }
        ((BLHit *)(piVar1))->initWith((char**)uStack_38, *(int*)&iStack_28);
        uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x28));
        (**(code **)(*(int *)(piVar1) + (0x38)))(auStack_24,piVar1);
        iVar4 = (undefined4)(intptr_t)(((cocos2d::CCDictionary *)(uVar2))->objectForKey((char const *)auStack_24));
        iVar3 = 0;
        if (iVar4 != 0) {
          iVar3 = func_0079e55c(iVar4,*(undefined4 *)(g_0045bb30 + 0x45baaa),
                                  *(undefined4 *)(g_0045bb34 + 0x45baac),0);
        }
        func_0079e2bc(auStack_24);
        if (iVar3 == 0) {
          iVar3 = (undefined4)(intptr_t)(cocos2d::CCDictionary::create());
          uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x28));
          (**(code **)(*(int *)(piVar1) + (0x38)))(auStack_20,piVar1);
          ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)iVar3, (char const *)auStack_20);
          func_0079e2bc(auStack_20);
        }
        (**(code **)(*(int *)(piVar1) + (0x20)))(auStack_1c,piVar1);
        ((cocos2d::CCDictionary *)(iVar3))->setObject((cocos2d::CCObject*)piVar1, (char const *)auStack_1c);
        func_0079e2bc(auStack_1c);
        iStack_48 = (undefined4)(intptr_t)(iStack_48 + 1);
      }
    }
  }
  sqlite3_free_table(uStack_38);
  func_0079e2bc(&uStack_2c);
  func_0079e2bc(auStack_3c);
  return;
}

void DataCacheManager::initShakeCacheData()
{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_44;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined1 auStack_1c [8];
  
  func_0079e45c(auStack_34,g_0045bc38 + 0x45bb48,auStack_1c);
  uStack_30 = (undefined4)(0);
  func_0079e45c(&uStack_24," select * from ",auStack_1c);
  func_0079e69c(&uStack_24,"shake");
  piVar1 = (int *)((DataManager *)this)->shareDataManager();
  uVar2 = (undefined4)((intptr_t)((DataManager *)(intptr_t)piVar1)->getGameInfoDB());
  iVar3 = (undefined4)(intptr_t)(sqlite3_get_table(uVar2,uStack_24,&uStack_30,&iStack_2c,&iStack_28,0));
  if ((iVar3 == 0) && (iStack_20 = iStack_28 * 3, 2 < iStack_2c)) {
    iStack_44 = 0;
    while( true ) {
      if (iStack_2c + -2 <= iStack_44) break;
      piVar1 = (int *)::operator new(0x20);
      ::new ((void *)piVar1) BLShakeData();   /* ALLOC+CTOR_FIX(R123): 类名由 llvm-cxxfilt 反修饰 + (函数,尺寸) 对齐 取得 */
      iVar3 = (undefined4)(intptr_t)(((BLShakeData *)(piVar1))->init());
      if (iVar3 == 0) {
        (**(code **)(*(int *)(piVar1) + (8)))(piVar1);
        piVar1 = (int *)0x0;
      }
      else {
        ((cocos2d::CCObject *)(piVar1))->autorelease();
      }
      ((BLShakeData *)(piVar1))->initWith((char**)uStack_30, *(int*)&iStack_20);
      uVar2 = (undefined4)(*(undefined4 *)(((int)this) + 0x2c));
      (**(code **)(*(int *)(piVar1) + (0x20)))(auStack_1c,piVar1);
      ((cocos2d::CCDictionary *)(uVar2))->setObject((cocos2d::CCObject*)piVar1, (char const *)auStack_1c);
      func_0079e2bc(auStack_1c);
      iStack_44 = (undefined4)(intptr_t)(iStack_44 + 1);
    }
  }
  sqlite3_free_table(uStack_30);
  func_0079e2bc(&uStack_24);
  func_0079e2bc(auStack_34);
  return;
}

void DataCacheManager::initExpDataCacheData()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataCacheManager::initGuide()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataCacheManager::initGuideStep()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

void DataCacheManager::getItemDataByID(int p1)
{
  undefined4 p4 = 0;

  int iVar1;
  
  /* RAW_SLOT_FIX (R73)：原版 0x44c0c8 反汇编实证：
       push {r3,lr}
       ldr  r0, [r0, #0x38]                    ; 字典是**成员** this+0x38（不是 this 本身）
       bl   CCDictionary::objectForKey(int)    ; 键是**入参 p1**（不是 *(this+0x38)）
     生成器写成 `((CCDictionary*)this)->objectForKey(*(int*)(this+0x38))` —— **接收者与键都错**，
     于是拿 DataCacheManager 对象当字典用 -> 真机 CCDictionary::objectForKey(int)+822 崩
     （栈：DataCacheManager::getItemDataByID+18 ← BLAchievementManager::updateItemNum+46）。*/
  cocos2d::CCDictionary *pItemDict = *(cocos2d::CCDictionary **)(((int)this) + 0x38);
  iVar1 = (undefined4)(intptr_t)(pItemDict->objectForKey(p1));
  if (iVar1 != 0) {
    func_0079e55c(iVar1,*(undefined4 *)(g_0045c0e8 + 0x45c0de),
                    *(undefined4 *)(g_0045c0ec + 0x45c0e0),0,p4);
  }
  return;
}

void DataCacheManager::getTalentDataById(int p1)
{
  undefined4 p4 = 0;

  int iVar1;
  
  /* RAW_SLOT_FIX (R73)：与 getItemDataByID 同族 —— 字典是**成员** this+0x44，键是**入参 p1**；
     生成器写成 `((CCDictionary*)this)->objectForKey(*(int*)(this+0x44))`（接收者与键都错）。*/
  cocos2d::CCDictionary *pTalentDict = *(cocos2d::CCDictionary **)(((int)this) + 0x44);
  iVar1 = (undefined4)(intptr_t)(pTalentDict->objectForKey(p1));
  if (iVar1 != 0) {
    func_0079e55c(iVar1,*(undefined4 *)(g_0045c110 + 0x45c106),
                    *(undefined4 *)(g_0045c114 + 0x45c108),0,p4);
  }
  return;
}

void DataCacheManager::addAnimateData(std::string * p1)
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
}

undefined4 * DataCacheManager::getTalentIDs()
{
  /* TODO(逆向占位): 反编译体未能自动转换 */
  return nullptr;
}
