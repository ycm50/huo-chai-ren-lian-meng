#pragma once
// RedPackDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class RedPackDataGet {
public:
    ~RedPackDataGet();
    void GetPutTemplate(int, long long);
    bool init(int, long);
    void onPutRedPackData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetRedPackData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
