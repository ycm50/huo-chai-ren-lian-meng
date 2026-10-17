#pragma once
// CircusRankingTime
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusRankingTime : public cocos2d::CCObject {
public:
    ~CircusRankingTime();
    void onTimer(float);
    CircusRankingTime();
    void onTimeUpdated();
};
