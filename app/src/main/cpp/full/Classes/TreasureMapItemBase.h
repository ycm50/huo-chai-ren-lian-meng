#pragma once
// TreasureMapItemBase
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TreasureMapItemBase {
public:
    void beforeTrigger();
    void triggerEnd();
    TreasureMapItemBase();
    ~TreasureMapItemBase();
    undefined8 disposeTips(std::string *);
    void checkTriggerable();
    void formatDesc(std::vector<std::string, std::allocator<std::string>>&, std::vector<cocos2d::_ccColor3B, std::allocator<cocos2d::_ccColor3B>>&);
    void eventDesc(TreasureType *, TreasureDescType, int);
};
