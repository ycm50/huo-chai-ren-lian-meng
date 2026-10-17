#pragma once
// ChestFestivalData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChestFestivalData {
public:
    undefined4 getintTypeID() const;
    void setintTypeID(int);
    ~ChestFestivalData();
    void PrintChestFestivalinfo(std::vector<ChestFestIvailInfo, std::allocator<ChestFestIvailInfo>> *) const;
    void getItemBigType(ChestFestIvailInfo *);
    void clearData();
    int getRewardType();
    void setChestFestivalData(ChestFestIvailInfo *);
    void GetDataFromNet(int, int, bool);
};
