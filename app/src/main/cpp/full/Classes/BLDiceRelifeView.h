#pragma once
// BLDiceRelifeView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDiceRelifeView : public cocos2d::CCLayer {
public:
    ~BLDiceRelifeView();
    BLDiceRelifeView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnRelife();
    undefined4 getBtnRelease();
    undefined4 getBtnRestar();
    undefined4 getBtnClose();
    undefined4 getLabTitle();
    undefined4 getLab_1();
    undefined4 getLab_2();
    undefined4 getLab_3();
    undefined4 getLabBtnRelife();
    undefined4 getLabBtnRelease();
    undefined4 getSPBackGround();
    undefined4 getSPTabBg();
    undefined4 getSPZuanshi();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x144?324 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[324];
};
