#pragma once
// PKRankRewardResultUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKRankRewardResultUI {
public:
    int * create();
    ~PKRankRewardResultUI();
    void tick(float);
};
