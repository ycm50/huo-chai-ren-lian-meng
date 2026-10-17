#pragma once
// BLVipView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLVipView : public cocos2d::CCLayer {
public:
    ~BLVipView();
    BLVipView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getLabTitle();
    undefined4 getBtnGet();
    undefined4 getLabGet();
    undefined4 getSprSprTop();
    undefined4 getssp_bg_mid();
    undefined4 getLabDiamond();
    undefined4 getLabCopper();
    undefined4 getSprSprGet();
    undefined4 getLabSDJ();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};
