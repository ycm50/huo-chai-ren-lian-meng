#pragma once
// BLFurnaceExchangeLayer
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFurnaceExchangeLayer {
public:
    ~BLFurnaceExchangeLayer();
    int * create();
    undefined4 getItemButton(int);
    void updateEssenceCount(int);
    void updateRefreshCost(int, bool);
    void initExchangeItemsButtons();
    bool init();
};
