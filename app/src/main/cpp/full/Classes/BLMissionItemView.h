#pragma once
// BLMissionItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionItemView : public cocos2d::CCLayer {
public:
    ~BLMissionItemView();
    BLMissionItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnRole();
    undefined4 getBtnSweep();
    undefined4 getLabSweep();
    undefined4 getSprArrow();
    undefined4 getSprName();
    undefined4 getSprLock();
    undefined4 getLabTitle();
    undefined4 getLabDiamond();
    undefined4 getPageControlGrayStars();
    undefined4 getPageControlStars();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x134?308 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[308];
};
