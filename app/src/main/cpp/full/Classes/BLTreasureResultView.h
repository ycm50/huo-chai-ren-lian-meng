#pragma once
// BLTreasureResultView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureResultView : public cocos2d::CCLayer {
public:
    ~BLTreasureResultView();
    BLTreasureResultView();
    int * create();
    undefined4 getPresenter();
    undefined4 getSpWin();
    undefined4 getSpFail();
    undefined4 getBtnSure();
    undefined4 getLabeContent();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x120?288 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[288];
};
