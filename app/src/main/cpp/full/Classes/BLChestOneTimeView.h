#pragma once
// BLChestOneTimeView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLChestOneTimeView : public cocos2d::CCLayer {
public:
    ~BLChestOneTimeView();
    BLChestOneTimeView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBG();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getBtnBuyAgain();
    undefined4 getLabCopper();
    undefined4 getSprCopperIcon();
    undefined4 getLabAgainTitle();
    undefined4 getBtnClose();
    undefined4 getLabSure();
    undefined4 RewardItem();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};
