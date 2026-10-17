#pragma once
// BLFurnaceView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFurnaceView : public cocos2d::CCLayer {
public:
    ~BLFurnaceView();
    BLFurnaceView();
    int * create();
    undefined4 getPresenter();
    void initFurnaceBreakNode();
    void initFurnaceExchangeNode();
    undefined4 getBtnClose();
    void showBreakNode();
    void showExchangeNode();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x15c?348 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[348];
};
