#pragma once
// TreasureMapItemFate
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemFate : public TreasureMapItemBase {
public:
    void onTrigger();
    void reset();
    void toString();
    void beforeTrigger();
    void triggerEnd();
    ~TreasureMapItemFate();
    TreasureMapItemFate();
    void initWithData(std::string);
};
