#pragma once
// PKHeroRankUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKHeroRankUI {
public:
    int * create();
    ~PKHeroRankUI();
    void tick(float);
};
