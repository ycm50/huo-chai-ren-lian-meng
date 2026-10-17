#pragma once
// BLOtherItemDataInfoDownView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLOtherItemDataInfoDownView : public cocos2d::CCLayer {
public:
    ~BLOtherItemDataInfoDownView();
    BLOtherItemDataInfoDownView();
    undefined4 getPresenter();
    undefined4 getNumBG();
    undefined4 getBtnSell();
    undefined4 getLabSell();
    undefined4 getBtnCompose();
    undefined4 getLabCompose();
    undefined4 getBtnReduce();
    undefined4 getBtnAdd();
    undefined4 getBtnMax();
    undefined4 getLabNum();
    undefined4 getLabReduce();
    undefined4 getLabAdd();
    undefined4 getLabMax();
    undefined4 getLine();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x140?320 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[320];
};
