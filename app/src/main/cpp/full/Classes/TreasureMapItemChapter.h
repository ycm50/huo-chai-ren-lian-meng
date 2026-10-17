#pragma once
// TreasureMapItemChapter
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemChapter : public TreasureMapItemBase {
public:
    void onTrigger();
    void reset();
    undefined4 toString();
    void triggerEnd();
    undefined8 beforeTrigger();
    ~TreasureMapItemChapter();
    TreasureMapItemChapter();
    undefined4 getHeroName();
    void passWithPay();
    undefined8 win();
    undefined8 lose();
    void initWithData(std::string);
};
