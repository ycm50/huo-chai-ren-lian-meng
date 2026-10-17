#pragma once
// LuckyDrawData
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class LuckyDrawData {
public:
    undefined4 parseInfo(char const*);
    undefined4 parseResult(char const*);
    ~LuckyDrawData();
};
