#pragma once
// BLChestItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLChestItemView : public cocos2d::CCLayer {
public:
    ~BLChestItemView();
    BLChestItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getLabName();
    undefined4 getLabDesc();
    undefined4 getBtnOne();
    undefined4 getLabOne();
    undefined4 getSprOneIcon();
    undefined4 getLabOneTitle();
    undefined4 getBtnTen();
    undefined4 getLabTen();
    undefined4 getLabTenTitle();
    undefined4 getSprTenIcon();
    undefined4 getSprIcon();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x13c?316 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[316];
};
