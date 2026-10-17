#pragma once
// BLUpgraceButtonView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLUpgraceButtonView : public cocos2d::CCLayer {
public:
    ~BLUpgraceButtonView();
    BLUpgraceButtonView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnUpgrace();
    undefined4 getLabPrice();
    undefined4 getSprCoin();
    undefined4 getLabUpgrace();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x120?288 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[288];
};
