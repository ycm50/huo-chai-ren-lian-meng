#pragma once
// BLFailedView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFailedView : public cocos2d::CCLayer {
public:
    ~BLFailedView();
    BLFailedView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getSprBlackBG();
    undefined4 getBtnQuit();
    undefined4 getLabQuit();
    undefined4 getBtnRelife();
    undefined4 getLabRelife();
    undefined4 getBtnGetHero();
    undefined4 getBtnEquip();
    undefined4 getBtnStreng();
    undefined4 getBtnSkill();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x148?328 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[328];
};
