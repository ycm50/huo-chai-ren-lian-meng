#pragma once
// BLBluethRoomView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLBluethRoomView : public cocos2d::CCLayer {
public:
    ~BLBluethRoomView();
    BLBluethRoomView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getBtnCreate();
    undefined4 getBtnJoin();
    undefined4 getBtnClose();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x124?292 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[292];
};
