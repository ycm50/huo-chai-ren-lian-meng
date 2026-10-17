#pragma once
// BLTreasureRoleItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureRoleItemView : public cocos2d::CCLayer {
public:
    ~BLTreasureRoleItemView();
    BLTreasureRoleItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getLabName();
    undefined4 getPageControlStars();
    undefined4 getBtnRole();
    undefined4 getLabCombat();
    undefined4 getSprSprCombat();
    void onEnter();
    void onExit();
    bool init();
};
