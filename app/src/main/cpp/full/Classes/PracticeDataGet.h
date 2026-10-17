#pragma once
// PracticeDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PracticeDataGet {
public:
    ~PracticeDataGet();
    bool init();
    void onPracticeData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onPracticeTime(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
