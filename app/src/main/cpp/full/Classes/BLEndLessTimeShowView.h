#pragma once
// BLEndLessTimeShowView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEndLessTimeShowView : public cocos2d::CCLayer {
public:
    ~BLEndLessTimeShowView();
    BLEndLessTimeShowView();
    int * create();
    undefined4 getPresenter();
    undefined4 getLabelNum();
    undefined4 getLabelTip();
    undefined4 getBtnBack();
    undefined4 getBtnZheDie();
    undefined4 getSpBg();
    undefined4 getBtnReward1();
    undefined4 getBtnReward2();
    undefined4 getBtnReward3();
    undefined4 getLabelReward1();
    undefined4 getLabelReward2();
    undefined4 getLabelReward3();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};
