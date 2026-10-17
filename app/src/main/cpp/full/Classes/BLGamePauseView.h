#pragma once
// BLGamePauseView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGamePauseView : public cocos2d::CCLayer {
public:
    ~BLGamePauseView();
    BLGamePauseView();
    int * create();
    undefined4 getPresenter();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getBtnQuit();
    undefined4 getLabQuit();
    undefined4 getBtnGoOn();
    undefined4 getLabGoOn();
    undefined4 getBtnMusic();
    undefined4 getLabMusic();
    undefined4 getBtnSound();
    undefined4 getLabSound();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};
