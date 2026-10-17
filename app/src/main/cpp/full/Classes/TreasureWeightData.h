#pragma once
// TreasureWeightData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TreasureWeightData {
public:
    ~TreasureWeightData();
    void getDatas();
    undefined4 getBuildWeightCount();
    int getTypeByFixedPos(int);
    void deleteData();
    undefined4 getItemData(TreasureType);
    undefined4 getTriggerWeightByType(TreasureType);
    undefined4 getNumLimitByType(TreasureType);
    void getTriggerDisposableByType(TreasureType);
    void getTriggerSkippableByType(TreasureType);
    int * getFixedPosByType(TreasureType);
    bool init();
    TreasureWeightData();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
