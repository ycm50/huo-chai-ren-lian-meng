#pragma once
// SweepHeroUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SweepHeroUI {
public:
    int * create();
    ~SweepHeroUI();
    void tick(float);
};
