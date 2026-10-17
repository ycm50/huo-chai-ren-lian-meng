#pragma once
// ChestItemInfoUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChestItemInfoUI {
public:
    int * create();
    ~ChestItemInfoUI();
    void tick(float);
};
