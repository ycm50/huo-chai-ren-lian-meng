#pragma once
// CircusHttpRanking
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CircusHttpRanking {
public:
    ~CircusHttpRanking();
    bool GetRankingTemplate();
    bool init(std::string *);
    void onGetRankingData(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
};
