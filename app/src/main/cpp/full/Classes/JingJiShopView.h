#pragma once
// JingJiShopView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class JingJiShopView : public cocos2d::CCLayer {
public:
    ~JingJiShopView();
    JingJiShopView();
    undefined4 getListButton();
    undefined4 getGridViewItem();
    undefined4 getGridViewNum();
    undefined4 getScrollView();
    undefined4 getBtnClose();
    undefined4 getSpriteLeft();
    undefined4 getSpriteRight();
    undefined4 getLabJifen();
    void onEnter();
    void onExit();
    bool init();
};
