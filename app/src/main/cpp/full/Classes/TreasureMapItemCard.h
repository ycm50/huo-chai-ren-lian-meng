#pragma once
// TreasureMapItemCard
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemCard : public TreasureMapItemBase {
public:
    void beforeTrigger();
    void reset();
    undefined4 toString();
    void onTrigger();
    void triggerEnd();
    ~TreasureMapItemCard();
    TreasureMapItemCard();
    undefined4 getHeroName();
    void initWithData(std::string);
};
