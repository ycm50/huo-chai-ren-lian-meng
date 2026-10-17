#pragma once
// BLLuckyDrawResultUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLLuckyDrawResultUI {
public:
    void tick(float);
    ~BLLuckyDrawResultUI();
    int * create();
};
