#pragma once
// ItemDataInfoUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ItemDataInfoUI {
public:
    int * create();
    ~ItemDataInfoUI();
    void tick(float);
};
