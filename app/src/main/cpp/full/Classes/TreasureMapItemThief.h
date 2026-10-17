#pragma once
// TreasureMapItemThief
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemThief : public TreasureMapItemBase {
public:
    void beforeTrigger();
    void reset();
    void toString();
    void onTrigger();
    void triggerEnd();
    ~TreasureMapItemThief();
    TreasureMapItemThief();
    void initWithData(std::string);
};
