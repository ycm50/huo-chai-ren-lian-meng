#pragma once
// BLTimeHeroView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTimeHeroView : public cocos2d::CCLayer {
public:
    ~BLTimeHeroView();
    BLTimeHeroView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getLabTimeTip();
    undefined4 getLabTitle();
    undefined4 getLabPrice();
    undefined4 getLabPay();
    undefined4 getLabPriceNow();
    undefined4 getBtnPay();
    undefined4 getScrollView();
    void onEnter();
    void onExit();
    bool init();
};
