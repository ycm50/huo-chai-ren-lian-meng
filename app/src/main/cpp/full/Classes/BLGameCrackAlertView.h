#pragma once
// BLGameCrackAlertView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGameCrackAlertView : public cocos2d::CCLayer {
public:
    ~BLGameCrackAlertView();
    BLGameCrackAlertView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getBtnSure();
    undefined4 getLabSure();
    undefined4 getLabTitle();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x124?292 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[292];
};
