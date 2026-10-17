#pragma once
// ZhancheDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ZhancheDataGet {
public:
    ~ZhancheDataGet();
    bool GetPostTemplate();
    bool init(URL_ZC);
    void onGetChariotInfo(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetSearchInfo(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetchariotFight(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
