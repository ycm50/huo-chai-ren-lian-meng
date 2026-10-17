#pragma once
// BLMineCollectView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMineCollectView : public cocos2d::CCLayer {
public:
    ~BLMineCollectView();
    BLMineCollectView();
    int * create();
    undefined4 getPresenter();
    undefined4 getScrollView();
    undefined4 getBtnCoinFresh();
    undefined4 getBtnDimandFresh();
    undefined4 getLabeTip();
    void onExit();
    void onEnter();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x120?288 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[288];
};
