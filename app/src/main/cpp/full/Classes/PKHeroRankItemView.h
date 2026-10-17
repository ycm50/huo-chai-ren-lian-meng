#pragma once
// PKHeroRankItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKHeroRankItemView : public cocos2d::CCLayer {
public:
    ~PKHeroRankItemView();
    PKHeroRankItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getLblName();
    undefined4 getBtnShowDes();
    undefined4 getLblZhanLi();
    undefined4 getSprimg_icon();
    undefined4 getLblIcon();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x124?292 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[292];
};
