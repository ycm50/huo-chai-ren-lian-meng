#pragma once
// ChestFestivalDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChestFestivalDataGet {
public:
    ~ChestFestivalDataGet();
    bool init();
    void onCallBack(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
