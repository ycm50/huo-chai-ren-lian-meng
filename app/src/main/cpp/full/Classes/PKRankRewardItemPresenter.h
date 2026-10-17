#pragma once
// PKRankRewardItemPresenter
// 基类: cocos2d::CCNode
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKRankRewardItemPresenter : public cocos2d::CCNode {
public:
    void onEnter();
    void onExit();
    void tick(float);
    ~PKRankRewardItemPresenter();
    void onGetReward();
    PKRankRewardItemPresenter();
    undefined4 create(PKRankRewardItemView*);
    void initWithView(PKRankRewardItemView*);
    void initWith(int, int);
    void onGetRewardFail();
    void onGet(cocos2d::CCObject*, unsigned int);
    void onHttpReward(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x108?264 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[264];
};
