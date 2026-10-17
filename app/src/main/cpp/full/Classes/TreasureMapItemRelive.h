#pragma once
// TreasureMapItemRelive
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemRelive : public TreasureMapItemBase {
public:
    void onTrigger();
    void reset();
    void toString();
    void beforeTrigger();
    void triggerEnd();
    ~TreasureMapItemRelive();
    TreasureMapItemRelive();
    undefined4 getHeroName();
    void initWithData(std::string);
};
