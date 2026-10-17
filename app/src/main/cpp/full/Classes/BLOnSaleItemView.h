#pragma once
// BLOnSaleItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLOnSaleItemView : public cocos2d::CCLayer {
public:
    int * create();
    ~BLOnSaleItemView();
    BLOnSaleItemView();
    void initUI();
    undefined4 getPresenter();
    undefined4 getBtnInfo();
    undefined4 getBtnBuy();
    undefined4 getSprIcon();
    undefined4 getSpDebris();
    undefined4 getLabItemName();
    undefined4 getLabLimit();
    undefined4 getLabMonthLv();
    undefined4 getLabPrice();
    undefined4 getLabStar();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x144?324 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[324];
};
