#pragma once
// BLCardView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLCardView : public cocos2d::CCLayer {
public:
    ~BLCardView();
    BLCardView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getBtnJiHuo();
    undefined4 getLabeJiHuo();
    undefined4 getLabeLeftDays();
    undefined4 getLabeMony();
    undefined4 getLabGet();
    undefined4 getLabGetNum();
    undefined4 getLabTitle();
    undefined4 getSpDiamod();
    undefined4 getLabeLevel();
    undefined4 getScrollView();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x13c?316 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[316];
};
