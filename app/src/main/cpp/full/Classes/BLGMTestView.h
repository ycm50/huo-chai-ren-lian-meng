#pragma once
// BLGMTestView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGMTestView : public cocos2d::CCLayer {
public:
    ~BLGMTestView();
    BLGMTestView();
    int * create();
    undefined4 getPresenter();
    void initlayermain();
    void initlayerunlockhero();
    void initlayerlvhero();
    void initlayerlevel();
    void initlayerequip();
    void initlayerupgrade();
    void initlayerskill();
    void initlayerother();
    void initlayerEndless();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x144?324 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[324];
};
