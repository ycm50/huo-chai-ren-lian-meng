#pragma once
// BLDiceRewardView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDiceRewardView : public cocos2d::CCLayer {
public:
    ~BLDiceRewardView();
    BLDiceRewardView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnOK();
    undefined4 getBtnClose();
    undefined4 getLabTitle();
    undefined4 getLabBtnOK();
    undefined4 getSPBackGround();
    undefined4 getSPTabBg();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x124?292 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[292];
};
