#pragma once
// BLTreasureBossView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureBossView : public cocos2d::CCLayer {
public:
    ~BLTreasureBossView();
    BLTreasureBossView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnPlay();
    undefined4 getBtnRelease();
    undefined4 getBtnReLife();
    undefined4 getBtnReStart();
    undefined4 getBtnClose();
    undefined4 getBtnRefresh();
    undefined4 getLabeAttrack();
    undefined4 getLabeName();
    undefined4 getSpHero();
    void onExit();
    void onEnter();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x130?304 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[304];
};
