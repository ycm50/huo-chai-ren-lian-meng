#pragma once
// BlackBackLayer
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BlackBackLayer {
public:
    ~BlackBackLayer();
    void onExit();
    undefined8 updateFadeOut(float);
    void onEnter();
    bool init();
    undefined8 updateFadeIn(float);
    int * create();
    undefined8 disappear();
};
