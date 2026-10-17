#pragma once
// BLReChargeDialog
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLReChargeDialog : public cocos2d::CCLayer {
public:
    ~BLReChargeDialog();
    BLReChargeDialog();
    int * create();
    undefined4 getBackGround();
    undefined4 getTableViewReCharge();
    undefined4 getTabBg();
    undefined4 getLabTitle();
    undefined4 getBtnClose();
    void onBtnClick(cocos2d::CCObject*, unsigned int);
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x130?304 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[304];
};
