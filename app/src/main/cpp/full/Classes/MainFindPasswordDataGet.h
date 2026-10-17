#pragma once
// MainFindPasswordDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MainFindPasswordDataGet {
public:
    ~MainFindPasswordDataGet();
    void onRePassword(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    bool init();
    void onGetCheckData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
