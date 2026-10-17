#pragma once
// CircusHttpUpZip
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusHttpUpZip {
public:
    ~CircusHttpUpZip();
    undefined4 GetUpZipTemplate();
    bool init(std::string *);
    void onGetUpZipData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
