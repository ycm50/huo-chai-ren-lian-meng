#pragma once
// BLFurnaceEquipLayer
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFurnaceEquipLayer {
public:
    ~BLFurnaceEquipLayer();
    int * create();
    void updateScroll(cocos2d::CCSize const&);
    bool init();
};
