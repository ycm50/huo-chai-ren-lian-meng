#pragma once
// BLRankRewardItemPresenter
// 基类: cocos2d::CCNode
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRankRewardItemPresenter : public cocos2d::CCNode {
public:
    void onExit();
    ~BLRankRewardItemPresenter();
    void onGet(cocos2d::CCObject*, unsigned int);
    void tick(float);
    void onEnter();
    BLRankRewardItemPresenter();
    undefined4 create(BLRankRewardItemView*);
    void initWithView(BLRankRewardItemView*);
    void initWith(int);
    void onGetReward();
    void onGetRewardFail();

public:
    /* HW_SIZE_PAD (R94): ?????? 0xf8?248 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[248];
};
