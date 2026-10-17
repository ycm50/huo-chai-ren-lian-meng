#pragma once
// TreasureMapItemManager
// 基类: TreasureMapItemEmpty
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "TreasureMapItemEmpty.h"


class TreasureMapItemManager : public TreasureMapItemEmpty {
public:
    TreasureMapItemManager();
    ~TreasureMapItemManager();
    void createItemWithData(TreasureType, std::string);
    undefined4 createItem(TreasureType);
};
