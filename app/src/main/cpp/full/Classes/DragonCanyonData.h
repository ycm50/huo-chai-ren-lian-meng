#pragma once
// DragonCanyonData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DragonCanyonData {
public:
    void setReward(std::string);
    void setMissionName(std::string);
    void setMissionID(std::string);
    std::string getReward() const;
    std::string getMissionName() const;
    std::string getMissionID() const;
    ~DragonCanyonData();
    void initWith(char**, int&);
    void initWith(std::string);
    void setbossherolist(DragonCanyonItem);
    void getRewardIDandNum(std::string);
};
