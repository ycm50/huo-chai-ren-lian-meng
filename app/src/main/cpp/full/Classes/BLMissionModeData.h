#pragma once
// BLMissionModeData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionModeData : public cocos2d::CCObject {
public:
    int getID() const;
    void setID(int);
    int getType() const;
    void setType(int);
    ~BLMissionModeData();
    void setName(std::string);
    std::string getName() const;
    BLMissionModeData();
    bool init();
    int getChapters() const;
    void setChapters(std::vector<int, std::allocator<int>>);
};
