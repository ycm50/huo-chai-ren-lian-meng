#pragma once
// BLLuckShopView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLLuckShopView : public cocos2d::CCLayer {
public:
    ~BLLuckShopView();
    BLLuckShopView();
    int * create();
    undefined4 getPresenter();
    undefined4 getListButton();
    undefined4 getGridViewItem();
    undefined4 getGridViewNum();
    undefined4 getScrollView();
    undefined4 getBtnClose();
    undefined4 getSpriteLeft();
    undefined4 getSpriteRight();
    undefined4 getlabLuckfen();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x130?304 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[304];
};
