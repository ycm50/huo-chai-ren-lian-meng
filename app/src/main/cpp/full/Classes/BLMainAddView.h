#pragma once
// BLMainAddView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAddView : public cocos2d::CCLayer {
public:
    ~BLMainAddView();
    BLMainAddView();
    int * create();
    undefined4 getPresenter();
    void initGiftChangWan();
    undefined4 getBtnChangwan();
    undefined4 getBtnZhuanshu();
    undefined4 getLayer_zsgift();
    void initGiftZhuanShu();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x118?280 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[280];
};
