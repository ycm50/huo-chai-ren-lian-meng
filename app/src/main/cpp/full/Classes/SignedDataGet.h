#pragma once
// SignedDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SignedDataGet {
public:
    ~SignedDataGet();
    bool init();
    void onPutSignedData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetSignedData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
