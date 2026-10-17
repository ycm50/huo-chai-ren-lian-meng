#pragma once
// BLBaseSprite
// 基类: cocos2d::CCSprite
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLBaseSprite : public cocos2d::CCSprite {
public:
    ~BLBaseSprite();
    BLBaseSprite();
    bool init();
    void onEnter();
    void onExit();
};
