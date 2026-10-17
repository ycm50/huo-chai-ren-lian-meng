#pragma once
// CircusHttpRevenge
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusHttpRevenge {
public:
    ~CircusHttpRevenge();
    bool GetRevengeTemplate();
    bool init(std::string *);
    void onGetRevengeData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
