#pragma once
// MineUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MineUI {
public:
    int * create();
    ~MineUI();
    void tick(float);
};
