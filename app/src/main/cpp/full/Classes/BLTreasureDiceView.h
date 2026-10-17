#pragma once
// BLTreasureDiceView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureDiceView : public cocos2d::CCLayer {
public:
    ~BLTreasureDiceView();
    BLTreasureDiceView();
    void initView();
    undefined4 getPresenter();
    undefined4 getBtnRestart();
    undefined4 getLabRestart();
    undefined4 getBtnGetReward();
    undefined4 getLabGetReward();
    undefined4 getLabRestartTimes();
    undefined4 getLabFreeIntro();
    undefined4 getLabFreeDiceTimes();
    undefined4 getLabSpecialDicePrice();
    undefined4 getSpDiamondIcon();
    undefined4 getBtnNormalDice();
    undefined4 getLabNormalDicePrice();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};
