#pragma once
// BLFurnaceSelectView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFurnaceSelectView : public cocos2d::CCLayer {
public:
    ~BLFurnaceSelectView();
    BLFurnaceSelectView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 ItemInfoDown();
    undefined4 DebrisItemInfoDown();
    undefined4 OtherItemInfoDown();
    undefined4 ItemInfoUp();
    undefined4 getBtnUnequip();
    undefined4 getBtnObtain();
    undefined4 getLabUnequip();
    void onEnter();
    void onExit();
    bool init();
};
