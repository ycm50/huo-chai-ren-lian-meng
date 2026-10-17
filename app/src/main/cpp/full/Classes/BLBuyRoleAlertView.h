#pragma once
// BLBuyRoleAlertView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLBuyRoleAlertView : public cocos2d::CCLayer {
public:
    ~BLBuyRoleAlertView();
    BLBuyRoleAlertView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getBtnSure();
    undefined4 getBtnCancle();
    undefined4 getLabSure();
    undefined4 getLabTitle();
    undefined4 getLabCancle();
    undefined4 getBtnPlay();
    undefined4 getLabPlay();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x134?308 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[308];
};
