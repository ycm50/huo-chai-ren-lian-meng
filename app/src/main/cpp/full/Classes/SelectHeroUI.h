#pragma once
// SelectHeroUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SelectHeroUI {
public:
    int * create();
    ~SelectHeroUI();
    void tick(float);
};
