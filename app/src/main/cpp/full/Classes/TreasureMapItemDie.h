#pragma once
// TreasureMapItemDie
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemDie : public TreasureMapItemBase {
public:
    void onTrigger();
    void reset();
    void toString();
    void beforeTrigger();
    void triggerEnd();
    ~TreasureMapItemDie();
    TreasureMapItemDie();
    undefined4 getHeroName();
    void initWithData(std::string);
};
