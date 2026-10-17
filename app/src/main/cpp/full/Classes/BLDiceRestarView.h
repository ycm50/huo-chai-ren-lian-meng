#pragma once
// BLDiceRestarView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDiceRestarView : public cocos2d::CCLayer {
public:
    ~BLDiceRestarView();
    BLDiceRestarView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnOK();
    undefined4 getBtnNO();
    undefined4 getBtnClose();
    undefined4 getLabTitle();
    undefined4 getLab_1();
    undefined4 getLab_2();
    undefined4 getLab_3();
    undefined4 getLabBtnOK();
    undefined4 getSPBackGround();
    undefined4 getSPTabBg();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};
