#pragma once
// BLSignedItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSignedItemView : public cocos2d::CCLayer {
public:
    ~BLSignedItemView();
    BLSignedItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getLabName();
    undefined4 getSprIcon();
    undefined4 getSprIconMeng();
    undefined4 getSprSelect();
    undefined4 getIconBtn();
    undefined4 getLabNum();
    undefined4 getSpDebris();
    undefined4 getSpStar();
    undefined4 getLabeStarNum();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x134?308 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[308];
};
