#pragma once
// TreasureMapItemKey
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemKey : public TreasureMapItemBase {
public:
    void beforeTrigger();
    void reset();
    undefined4 toString();
    void onTrigger();
    void triggerEnd();
    ~TreasureMapItemKey();
    TreasureMapItemKey();
    void initWithData(std::string);
};
