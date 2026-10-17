#pragma once
// BLArenaResultView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLArenaResultView : public cocos2d::CCLayer {
public:
    ~BLArenaResultView();
    BLArenaResultView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getSprSprWin();
    undefined4 getSprSprFaild();
    undefined4 getBtnSure();
    undefined4 getLabSure();
    undefined4 getSspBg();
    undefined4 getLabRankTitle();
    undefined4 getLabRewardTitle();
    undefined4 getLabRank();
    undefined4 getLabReward();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};
