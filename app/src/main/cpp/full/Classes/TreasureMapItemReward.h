#pragma once
// TreasureMapItemReward
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemReward : public TreasureMapItemBase {
public:
    void onTrigger();
    void reset();
    undefined4 toString();
    void beforeTrigger();
    void triggerEnd();
    ~TreasureMapItemReward();
    TreasureMapItemReward();
    void initWithData(std::string);
};
