#pragma once
// BLBufferItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLBufferItemView : public cocos2d::CCLayer {
public:
    ~BLBufferItemView();
    BLBufferItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getLabAttack();
    undefined4 getLabDefense();
    undefined4 getLabLife();
    undefined4 getBtnAttack();
    undefined4 getBtnDefense();
    undefined4 getBtnLife();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x124?292 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[292];
};
