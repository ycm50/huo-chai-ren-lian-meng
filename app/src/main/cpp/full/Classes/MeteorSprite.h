#pragma once
// MeteorSprite
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class MeteorSprite {
public:
    ~MeteorSprite();
    void update(float);
    bool init();
    int * create();
    void setNextNeedCount(int);
    void setNextPosition(cocos2d::CCPoint);
    void onEnter();
    void onExit();
};
