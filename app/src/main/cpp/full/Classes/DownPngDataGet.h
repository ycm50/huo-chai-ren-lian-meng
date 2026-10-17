#pragma once
// DownPngDataGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DownPngDataGet {
public:
    ~DownPngDataGet();
    void onGetDownPngData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    undefined8 create(std::string, int, bool);
};
