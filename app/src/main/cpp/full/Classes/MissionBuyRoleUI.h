#pragma once
// MissionBuyRoleUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MissionBuyRoleUI {
public:
    int * create();
    ~MissionBuyRoleUI();
    void tick(float);
};
