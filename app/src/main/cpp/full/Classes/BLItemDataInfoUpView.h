#pragma once
// BLItemDataInfoUpView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLItemDataInfoUpView : public cocos2d::CCLayer {
public:
    ~BLItemDataInfoUpView();
    BLItemDataInfoUpView();
    int * create();
    undefined4 getPresenter();
    undefined4 getTabBg();
    undefined4 getSprItem();
    undefined4 getSprDebris();
    undefined4 getLabItemName();
    undefined4 getLabNumTitle();
    undefined4 getLabPriceTitle();
    undefined4 getLabNum();
    undefined4 getLabPrice();
    undefined4 getLabTitle();
    undefined4 getLine();
    undefined4 getSprCoin();
    undefined4 getBtnClose();
    undefined4 getLabelStarName();
    undefined4 getLabelStarNum();
    undefined4 getSprStar();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x14c?332 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[332];
};
