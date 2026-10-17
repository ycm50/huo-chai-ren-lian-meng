#pragma once
// BLLuckyDrawHelpUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLLuckyDrawHelpUI {
public:
    int * create();
    ~BLLuckyDrawHelpUI();
    void tick(float);
};
