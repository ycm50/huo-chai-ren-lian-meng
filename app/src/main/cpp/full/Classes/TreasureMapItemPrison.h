#pragma once
// TreasureMapItemPrison
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemPrison : public TreasureMapItemBase {
public:
    void reset();
    void toString();
    void onTrigger();
    void beforeTrigger();
    void triggerEnd();
    ~TreasureMapItemPrison();
    TreasureMapItemPrison();
    undefined4 getHeroName();
    void initWithData(std::string);
};
