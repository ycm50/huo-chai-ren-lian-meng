#pragma once
// BLQQCoinView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLQQCoinView : public cocos2d::CCLayer {
public:
    ~BLQQCoinView();
    BLQQCoinView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnclose();
    undefined4 getBtnGoLevel();
    undefined4 getBtnObtain();
    undefined4 getObtainLabel();
    undefined4 getGoLevelLabel();
    undefined4 getInputBox();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x124?292 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[292];
};
