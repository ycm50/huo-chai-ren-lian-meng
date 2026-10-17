#pragma once
// BLReChargeItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLReChargeItemView : public cocos2d::CCLayer {
public:
    ~BLReChargeItemView();
    BLReChargeItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getSprIcon();
    undefined4 getBtnBuy();
    undefined4 getLabBuy();
    undefined4 getLabItemName();
    undefined4 getLabPrice();
    undefined4 getLineUp();
    undefined4 getLineDown();
    undefined4 getLineRight();
    undefined4 getLineLeft();
    undefined4 getLabGive();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x134?308 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[308];
};
