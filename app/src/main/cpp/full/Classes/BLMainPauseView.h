#pragma once
// BLMainPauseView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainPauseView : public cocos2d::CCLayer {
public:
    void showFanKuiNum();
    void hideFanKuiNum();
    ~BLMainPauseView();
    BLMainPauseView();
    int * create();
    undefined4 getPresenter();
    void getChangeFanuiNum();
    void onPauseFanKui();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getBtnMusic();
    undefined4 getLabMusic();
    undefined4 getBtnSound();
    undefined4 getLabSound();
    undefined4 getBtnDuiHuan();
    undefined4 getBtnFanKui();
    undefined4 getBtnGongGao();
    undefined4 getFankuiTips();
    undefined4 getBtnClose();
    undefined4 getBtnAccount();
    undefined4 getLabAccount();
    undefined4 getBtnSaveData();
    undefined4 getLabSaveData();
    undefined4 getLabTip();
    undefined4 getLabDevice();
    undefined4 getLabValue();
    undefined4 getSpDemond();
    undefined4 getBtnGLSB();
    undefined4 getLabGLSB();
    undefined4 getBtnYJBD();
    undefined4 getLabelYJBD();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x170?368 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[368];
};
