#pragma once
// BLFurnaceBreakLayer
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFurnaceBreakLayer {
public:
    ~BLFurnaceBreakLayer();
    int * create();
    void updateEssenceObtainCount(int);
    void updateEssenceCount(int);
    void updateBreakCoinCount(int);
    void createOneBtnItem(float, float);
    undefined8 getItemNumInSlot(int, int);
    void getEmptySlotPositionScreen(BackPackItemData*);
    undefined4 addSlotItem(BLFurnaceItemInSlot*);
    void removeBreakItem(cocos2d::extension::CCControlButton*);
    undefined4 isAdded(int);
    undefined4 hasItem();
    void cleanSlotItems();
    void getSlotItems();
    bool init();
};
