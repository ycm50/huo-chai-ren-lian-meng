#pragma once
// TreasureMissionData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TreasureMissionData {
public:
    ~TreasureMissionData();
    void randomFight();
    void serachDBData();
    void setbossherolist(treasbossheroitem *);
};
