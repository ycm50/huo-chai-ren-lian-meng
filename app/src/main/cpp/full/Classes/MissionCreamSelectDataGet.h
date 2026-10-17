#pragma once
// MissionCreamSelectDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MissionCreamSelectDataGet {
public:
    ~MissionCreamSelectDataGet();
    bool init();
    void onCreamSelectData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
