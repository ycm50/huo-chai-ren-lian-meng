#pragma once
// PairingDownPngGet
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PairingDownPngGet {
public:
    ~PairingDownPngGet();
    void create(std::string);
    void onGetDownPngData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
