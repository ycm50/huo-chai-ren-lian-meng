#pragma once
// BLMineGainsView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMineGainsView : public cocos2d::CCLayer {
public:
    ~BLMineGainsView();
    BLMineGainsView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getLabGains();
    undefined4 getLabGains2();
    undefined4 getLabGainsNumber();
    undefined4 getLabGains2Number();
    undefined4 getMineItme1();
    undefined4 getMineItme2();
    undefined4 getBtnClose();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x134?308 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[308];
};
