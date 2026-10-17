#pragma once
// MissionEndLessData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MissionEndLessData {
public:
    ~MissionEndLessData();
    void serachTimeDBData();
    undefined8 getendlessreward(int);
    void serachRewardDBData();
};
