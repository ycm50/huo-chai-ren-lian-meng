#pragma once
// ExpDanUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ExpDanUI {
public:
    int * create();
    ~ExpDanUI();
    void tick(float);
};
