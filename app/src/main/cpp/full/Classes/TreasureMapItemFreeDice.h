#pragma once
// TreasureMapItemFreeDice
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemFreeDice : public TreasureMapItemBase {
public:
    void beforeTrigger();
    void reset();
    void toString();
    void onTrigger();
    void triggerEnd();
    ~TreasureMapItemFreeDice();
    TreasureMapItemFreeDice();
    void initWithData(std::string);
};
