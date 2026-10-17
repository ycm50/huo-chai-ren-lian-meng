#pragma once
// BLItemDataInfoDownView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLItemDataInfoDownView : public cocos2d::CCLayer {
public:
    ~BLItemDataInfoDownView();
    BLItemDataInfoDownView();
    int * create();
    undefined4 getPresenter();
    void hideNumberBar();
    void adjustForFurnace();
    undefined4 getNumBG();
    undefined4 getBtnSell();
    undefined4 getLabSell();
    undefined4 getBtnUse();
    undefined4 getLabUse();
    undefined4 getBtnReduce();
    undefined4 getBtnAdd();
    undefined4 getBtnMax();
    undefined4 getLabNum();
    undefined4 getLabReduce();
    undefined4 getLabAdd();
    undefined4 getLabMax();
    undefined4 getLine();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x144?324 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[324];
};
