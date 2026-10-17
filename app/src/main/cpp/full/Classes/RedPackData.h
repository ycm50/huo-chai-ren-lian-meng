#pragma once
// RedPackData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class RedPackData {
public:
    ~RedPackData();
    void PrintRedPackWardifo(RedPackReward *) const;
    void GetDataFromNet(URL_REDPACK *, int, long long, bool);
    void PrintRedPackDatainfo(RedPackInfo *) const;
};
