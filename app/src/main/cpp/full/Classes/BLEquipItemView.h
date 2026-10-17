#pragma once
// BLEquipItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEquipItemView : public cocos2d::CCLayer {
public:
    ~BLEquipItemView();
    BLEquipItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getSprItem();
    undefined4 getLabCanEquip();
    undefined4 getSprAdd();
    undefined4 getssp_UpgraceTitleBG();
    undefined4 getLabUpgrace();
    undefined4 getPageControlStars();
    undefined4 getLabStar();
    void onEnter();
    void onExit();
    bool init();
};
