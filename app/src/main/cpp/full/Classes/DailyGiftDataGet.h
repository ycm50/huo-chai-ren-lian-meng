#pragma once
// DailyGiftDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DailyGiftDataGet {
public:
    ~DailyGiftDataGet();
    bool init();
    void onDailyGiftData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
