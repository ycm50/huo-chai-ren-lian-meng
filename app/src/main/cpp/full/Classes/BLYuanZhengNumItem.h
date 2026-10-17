#pragma once
// BLYuanZhengNumItem
// 基类: cocos2d::CCNode
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLYuanZhengNumItem : public cocos2d::CCNode {
public:
    ~BLYuanZhengNumItem();
    BLYuanZhengNumItem();
    void setIndex(int);
    void updateData(int);
    bool init();
    void onEnter();
    void onExit();
};
