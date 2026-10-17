#pragma once
// TimeHeroGiftUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TimeHeroGiftUI {
public:
    int * create();
    ~TimeHeroGiftUI();
    void tick(float);
};
