#pragma once
// TreasureMapItemBoss
// 基类: TreasureMapItemBase
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemBase.h"


class TreasureMapItemBoss : public TreasureMapItemBase {
public:
    void beforeTrigger();
    void onTrigger();
    void reset();
    undefined4 toString();
    void triggerEnd();
    ~TreasureMapItemBoss();
    TreasureMapItemBoss();
    void initWithData(std::string);
    undefined8 win();
};
