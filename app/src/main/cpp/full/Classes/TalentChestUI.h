#pragma once
// TalentChestUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TalentChestUI {
public:
    int * create();
    ~TalentChestUI();
    void tick(float);
};
