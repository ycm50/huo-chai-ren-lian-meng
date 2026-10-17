#pragma once
// BLLivenessMissionItemRewardPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLLivenessMissionItemRewardPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onBtnInfo(cocos2d::CCObject*, unsigned int);
    ~BLLivenessMissionItemRewardPresenter();
    BLLivenessMissionItemRewardPresenter();
    undefined4 create();
    void initWithView(BLLivenessMissionItemRewardView*);
    void initWithData(RewardItemData*);
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
