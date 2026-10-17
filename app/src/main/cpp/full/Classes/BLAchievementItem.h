#pragma once
// BLAchievementItem
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLAchievementItem {
public:
    long getValue() const;
    void setValue(long);
    void setID(std::string);
    ~BLAchievementItem();
    std::string getID() const;
    int * create();
};
