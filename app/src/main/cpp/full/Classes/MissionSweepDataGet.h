#pragma once
// MissionSweepDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MissionSweepDataGet {
public:
    ~MissionSweepDataGet();
    bool init();
    void onSweepData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
