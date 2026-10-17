#pragma once
// BLMainAccoutCheckView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAccoutCheckView : public cocos2d::CCLayer {
public:
    ~BLMainAccoutCheckView();
    BLMainAccoutCheckView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTitle();
    undefined4 getBtnClose();
    undefined4 getBtnYes();
    undefined4 getBtnNo();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x128?296 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[296];
};
