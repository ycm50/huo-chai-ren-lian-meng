#pragma once
// BLRebirthChestUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRebirthChestUI {
public:
    int * create();
    ~BLRebirthChestUI();
    void tick(float);
};
