#pragma once
// CardDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CardDataGet {
public:
    ~CardDataGet();
    bool GetPutTemplate();
    bool init(URL_CARD);
    void onPutCardData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetCardData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
