#pragma once
// SuitItemDataInfoUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class SuitItemDataInfoUI {
public:
    int * create();
    ~SuitItemDataInfoUI();
    void tick(float);
};
