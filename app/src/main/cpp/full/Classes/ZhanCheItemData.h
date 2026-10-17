#pragma once
// ZhanCheItemData
// 基类: ZhanCheRewardItemData
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "ZhanCheRewardItemData.h"


class ZhanCheItemData : public ZhanCheRewardItemData {
public:
    ZhanCheItemData();
    void getTotalPercent(std::vector<ZhanCheRewardItemData*, std::allocator<ZhanCheRewardItemData*>> *);
    ~ZhanCheItemData();
    void getIndexByPercent(std::vector<ZhanCheRewardItemData*, std::allocator<ZhanCheRewardItemData*>> *, int);
    void initWithData(char**, int&);
    void initWithData(ZhanCheItemData*);
    int getRandomReward();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x38?56 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[56];
};
