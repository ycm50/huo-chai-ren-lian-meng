#pragma once
// BLTreasureView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureView : public cocos2d::CCLayer {
public:
    ~BLTreasureView();
    BLTreasureView();
    void initView();
    undefined4 getPresenter();
    undefined4 getMapView();
    undefined4 getDiceView();
    undefined4 getEffectView();
    undefined4 getMenuView();
    undefined4 getRecordView();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x120?288 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[288];
};
