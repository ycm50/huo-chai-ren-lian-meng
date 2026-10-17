#pragma once
// DailyGiftData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DailyGiftData {
public:
    int getDialyTime() const;
    void setDialyTime(int);
    int getWeekTime() const;
    void setWeekTime(int);
    ~DailyGiftData();
    void GetDataFromNet(bool, int);
};
