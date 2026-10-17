#pragma once
// TreasureDataManager
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TreasureDataManager {
public:
    int getInstance();
    undefined1 getbClickCLose() const;
    void setbClickCLose(bool);
    int getMapItemDatas();
    undefined4 getCurrentItemData();
    void move(int);
    void moveTo(int);
    undefined4 getNextStep();
    int getCurChapterId();
    int getCurCardType();
    int getBossId();
    undefined4 getCurFateType();
    void getReward(std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>&);
    void badThief();
    void collectCard(TreasureCardType *);
    void heroOutPrision();
    void collectFreeDice(int);
    void initWeightData();
    int getDeliverPosByCurPos(int);
    void initHeroData();
    void initRewardData();
    void initBossData();
    void initCurData();
    void readMapData();
    undefined8 updateMapData();
    void deleteMapData();
    void readInfoData();
    void updateInfoData();
    void saveData();
    void resetInfoData();
    void lockHeroData();
    void deleteHeroData();
    void initRecordData();
    void deleteRecordData();
    void deleteData();
    void addRewardToBag();
    void addRewardToBagOnGetReward();
    void getCurDeliverPos();
    undefined8 insertCardType();
    void initFateData();
    ~TreasureDataManager();
    undefined8 initChapterData();
    void initCardData();
    void insertDeliverPos(int);
    void initDeliverData();
    void checkMapData();
    void initData();
    TreasureDataManager();
    void heroDie();
    void heroRelive();
    undefined8 heroDropInPrison();
    void refreshtData();
    undefined4 * getCurReward();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x84?132 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[132];
};
