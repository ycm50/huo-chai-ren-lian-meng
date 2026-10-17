#pragma once
// BLExpDanView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLExpDanView : public cocos2d::CCLayer {
public:
    ~BLExpDanView();
    BLExpDanView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getSprBg();
    undefined4 getBtnClose();
    undefined4 getBtnUse();
    undefined4 getSpGuang();
    undefined4 getSpExpDan1_kuang();
    undefined4 getSpExpDan2_kuang();
    undefined4 getSpExpDan3_kuang();
    undefined4 getLabelNum1();
    undefined4 getLabelNum2();
    undefined4 getLabelNum3();
    undefined4 getBtnReduce();
    undefined4 getBtnAdd();
    undefined4 getBtnMax();
    undefined4 getLabNum();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x158?344 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[344];
};
