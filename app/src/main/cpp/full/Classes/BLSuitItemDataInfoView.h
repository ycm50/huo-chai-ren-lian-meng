#pragma once
// BLSuitItemDataInfoView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitItemDataInfoView : public cocos2d::CCLayer {
public:
    ~BLSuitItemDataInfoView();
    BLSuitItemDataInfoView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getSprItem();
    undefined4 getSprLine();
    undefined4 getBtnUnequip();
    undefined4 getBtnClose();
    undefined4 getLabUnequip();
    undefined4 OtherItemInfoDown();
    undefined4 getLabItemName();
    undefined4 getLabNumTitle();
    undefined4 getLabNum();
    undefined4 getLabPriceTitle();
    undefined4 getLabPrice();
    undefined4 getLabGFSTitle();
    undefined4 getLabGFS();
    undefined4 getLabSuitTitle();
    undefined4 getLabSuit();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x14c?332 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[332];
};
