#pragma once
// BLFurnaceItemInSlot
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFurnaceItemInSlot {
public:
    BackPackItemData* getPackItem() const;
    void setPackItem(BackPackItemData*);
    undefined4 getTableIndex() const;
    ~BLFurnaceItemInSlot();
    void initWithData(BackPackItemData*, int);
    int * create(BackPackItemData*, int);
    void setCount(int);
    void showStar();
};
