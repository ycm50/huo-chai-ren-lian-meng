#pragma once
// BLGuideFunctionView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGuideFunctionView : public cocos2d::CCLayer {
public:
    ~BLGuideFunctionView();
    BLGuideFunctionView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBG();
    undefined4 getSmallBg();
    undefined4 getBtnClick();
    undefined4 getLabContent();
    undefined4 getLabBtn();
    undefined4 getSprimg_Role();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x128?296 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[296];
};
