#pragma once
// BLCampaignInfoItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLCampaignInfoItemView : public cocos2d::CCLayer {
public:
    ~BLCampaignInfoItemView();
    BLCampaignInfoItemView();
    undefined4 getPresenter();
    undefined4 getLabIntroduce();
    undefined4 getRewardView();
    undefined4 getBtnGet();
    undefined4 getLabGet();
    undefined4 getLabRate();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x120?288 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[288];
};
