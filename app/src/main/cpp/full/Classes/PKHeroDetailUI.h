#pragma once
// PKHeroDetailUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKHeroDetailUI {
public:
    int * create();
    ~PKHeroDetailUI();
    void tick(float);
};
