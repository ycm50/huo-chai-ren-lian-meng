#pragma once
// BLMainAccountQuiteView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAccountQuiteView : public cocos2d::CCLayer {
public:
    ~BLMainAccountQuiteView();
    BLMainAccountQuiteView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getBtnOK();
    undefined4 getBtnCancel();
    undefined4 getBtnLeft();
    undefined4 getbtnRight();
    undefined4 Mission();
    undefined4 getPageControlMissions();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x148?328 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[328];
};
