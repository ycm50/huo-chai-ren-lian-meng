#pragma once
// BLWinView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLWinView : public cocos2d::CCLayer {
public:
    ~BLWinView();
    BLWinView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getBtnQuit();
    undefined4 getLabQuit();
    undefined4 getBtnAgain();
    undefined4 getBtnNextMission();
    undefined4 getLabAgain();
    undefined4 getLabNext();
    undefined4 getLabExp();
    undefined4 getLabCopper();
    undefined4 getLabDiamond1();
    undefined4 ScrollviewItems();
    undefined4 getssp_BlackAlpha();
    undefined4 getSprDiamond1();
    undefined4 getOne();
    undefined4 getdown();
    undefined4 getLabItems();
    undefined4 getLabPass();
    undefined4 getLabDiamond();
    undefined4 getSprDiamond();
    undefined4 getSprSprStar1();
    undefined4 getSprSprStar2();
    undefined4 getSprSprStar3();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x168?360 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[360];
};
