#pragma once
// DataCacheManager
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DataCacheManager : public cocos2d::CCObject {
public:
    cocos2d::CCDictionary* getDicHitLvDataCache() const;
    void setDicHitLvDataCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicBeAttackCacheData() const;
    void setDicBeAttackCacheData(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicAnimateDataCache() const;
    void setDicAnimateDataCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicRoleDataCache() const;
    void setDicRoleDataCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicAttackDataCache() const;
    void setDicAttackDataCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicHitCache() const;
    void setDicHitCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicShakeCache() const;
    void setDicShakeCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicExpDataCache() const;
    void setDicExpDataCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicMonsterDataCache() const;
    void setDicMonsterDataCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicItemDataCache() const;
    void setDicItemDataCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicEquipBaseDataCache() const;
    void setDicEquipBaseDataCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicDebrisDataCache() const;
    void setDicDebrisDataCache(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicTalentDataCache() const;
    void setDicTalentDataCache(cocos2d::CCDictionary*);
    cocos2d::CCArray* getArrayChestData() const;
    void setArrayChestData(cocos2d::CCArray*);
    LoadingAlertData* getLoadingAlertData() const;
    void setLoadingAlertData(LoadingAlertData*);
    cocos2d::CCArray* getArrayGuide() const;
    void setArrayGuide(cocos2d::CCArray*);
    cocos2d::CCDictionary* getDicGuideStep() const;
    void setDicGuideStep(cocos2d::CCDictionary*);
    cocos2d::CCDictionary* getDicSoundCache() const;
    void setDicSoundCache(cocos2d::CCDictionary*);
    SuitEquipData* getSuitEquipData() const;
    void setSuitEquipData(SuitEquipData*);
    SuitEquipEquipData* getSuitEquipEquipData() const;
    void setSuitEquipEquipData(SuitEquipEquipData*);
    SuitEquipBuffData* getSuitEquipBuffData() const;
    void setSuitEquipBuffData(SuitEquipBuffData*);
    SuitEquipUpGraceData* getSuitEquipUpGraceData() const;
    void setSuitEquipUpGraceData(SuitEquipUpGraceData*);
    LivenessData* getLivenessData() const;
    void setLivenessData(LivenessData*);
    RenascenceBaseData* getRenascenceBaseData() const;
    void setRenascenceBaseData(RenascenceBaseData*);
    RoleRenascenceData* getRoleRenascenceData() const;
    void setRoleRenascenceData(RoleRenascenceData*);
    MirrorMissionData* getMirrorMissionData() const;
    void setMirrorMissionData(MirrorMissionData*);
    MirrorShopData* getMirrorShopData() const;
    void setMirrorShopData(MirrorShopData*);
    ImmortalsInfoData* getImmortalsInfoData() const;
    void setImmortalsInfoData(ImmortalsInfoData*);
    PetData* getPetData() const;
    void setPetData(PetData*);
    PetSkillData* getPetSkillData() const;
    void setPetSkillData(PetSkillData*);
    ChallengeData* getChallengData() const;
    void setChallengData(ChallengeData*);
    MissionStarRewardData* getStarRewardData() const;
    void setStarRewardData(MissionStarRewardData*);
    ZhanCheDBData* getMyZhanCheDBData() const;
    void setMyZhanCheDBData(ZhanCheDBData*);
    ~DataCacheManager();
    DataCacheManager();
    void cleanDataCache();
    void initItems();
    void initEquipBase();
    void initDebris();
    void initTalent();
    void initSuitEquip();
    void initSuitEquipEquip();
    void initSuitEquipBuff();
    void initSuitEquipUpGrace();
    void initLivenessData();
    void initRenascenceBaseData();
    void initRoleRenascenceData();
    void initMirrorMissionData();
    void initMirrorShopData();
    void initImmortalsInfoData();
    void initPetData();
    void initPetSkillData();
    void initChallengeRewardData();
    void initZhanCheDBData();
    void initMissionStarRewardData();
    void initHitLvCacheData();
    void initBeAttackCacheData();
    void initHitCacheData();
    void initShakeCacheData();
    void initExpDataCacheData();
    void initGuide();
    void initGuideStep();
    bool init();
    undefined4 shareManager();
    void getItemDataByID(int);
    void getTalentDataById(int);
    void addAnimateData(std::string *);
    undefined4 * getTalentIDs();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x98?152 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[152];
};
