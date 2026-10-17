#pragma once
// TreasureInfoDynamicData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TreasureInfoDynamicData {
public:
    void updateGotRewardData();
    void updateCollectCardData();
    undefined4 collectKey(int);
    void useRestart();
    void updateCurPosData();
    undefined4 move(int);
    undefined4 moveTo(int);
    void movePos(int);
    void updateRefreshTimeData();
    void updateCollectKeyData();
    int useMaxKey(int);
    void updateFreeDiceData();
    void collectFreeDice(int);
    void useFreeDice();
    void updateRefreshMaxData();
    void updateSpecialDicePriceData();
    void updateNormalDicePriceData();
    void updateNormalPriceAddData();
    void updateNormalPriceMaxData();
    void updateGameOverData();
    void updateData();
    void addRewardToBag();
    void buildInfoData();
    void collectCard(TreasureCardType);
    void insertInfoData();
    void clearCacheData();
    void resetInfoData();
    void refreshData();
    void clearRewardData();
    ~TreasureInfoDynamicData();
    void getReward(std::vector<TreasureRewardInfo, std::allocator<TreasureRewardInfo>>&);
    undefined4 badThief();
    void additemlists();
    undefined4 * initData();
    TreasureInfoDynamicData();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x44?68 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[68];
};
