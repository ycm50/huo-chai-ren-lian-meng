#pragma once
// TreasureRecordItemData
// 基类: cocos2d::CCSize
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class TreasureRecordItemData : public cocos2d::CCSize {
public:
    // 补齐 .cpp 中已有但头文件缺的声明
    TreasureRecordItemData();
    TreasureRecordItemData(cocos2d::CCArray*);
    ~TreasureRecordItemData();
};
