#pragma once
// BLRankRewardItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRankRewardItemView : public cocos2d::CCLayer {
public:
    ~BLRankRewardItemView();
    BLRankRewardItemView();
    int * create(bool);
    undefined4 getPresenter();
    undefined4 getBtnGet();
    undefined4 getLabGet();
    undefined4 getLabReward();
    undefined4 getLabNext();
    undefined4 getLabTime();
    undefined4 getSprRank();
    undefined4 getLabYesterdayRank();
    undefined4 getRankItem();
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
