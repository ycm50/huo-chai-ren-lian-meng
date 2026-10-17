#pragma once
// GemDrawViewUI
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class GemDrawViewUI {
public:
    int * create();
    ~GemDrawViewUI();
    void tick(float);
};
