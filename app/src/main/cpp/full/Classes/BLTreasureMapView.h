#pragma once
// BLTreasureMapView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureMapView : public cocos2d::CCLayer {
public:
    ~BLTreasureMapView();
    BLTreasureMapView();
    void initBgLayer();
    void initMapLayer();
    undefined8 initView();
    void initSpPointer();
    void initOnePiece();
    undefined4 getPresenter();
    undefined4 getScrollView();
    undefined4 getSpPointer();
    undefined4 getBtnOnePiece();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x120?288 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[288];
};
