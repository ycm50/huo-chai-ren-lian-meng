#pragma once
// JiTanDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class JiTanDataGet {
public:
    ~JiTanDataGet();
    bool init(URL_JT);
    void onGetHeroDrawInfo(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
