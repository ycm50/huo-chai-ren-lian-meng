#pragma once
// CircusHttpName
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusHttpName {
public:
    ~CircusHttpName();
    bool GetNameTemplate();
    bool init(std::string *);
    void onGetUpNameData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
