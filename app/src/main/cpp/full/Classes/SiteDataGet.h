#pragma once
// SiteDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SiteDataGet {
public:
    ~SiteDataGet();
    void onZhuCeXinxiCallBack(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    bool init();
};
