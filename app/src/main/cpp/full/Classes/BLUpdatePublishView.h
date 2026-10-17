#pragma once
// BLUpdatePublishView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLUpdatePublishView : public cocos2d::CCLayer {
public:
    ~BLUpdatePublishView();
    BLUpdatePublishView();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getScrollView();
    undefined4 getContainerLayer();
    undefined4 getLabDate();
    undefined4 getLabPlayTit();
    undefined4 getLabPlay();
    undefined4 getLabOptimizationTit();
    undefined4 getLabOptimization();
    undefined4 getLabBugTit();
    undefined4 getLabBug();
    undefined4 getBtnGame();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x140?320 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[320];
};
