#pragma once
// BLCampaignView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLCampaignView : public cocos2d::CCLayer {
public:
    ~BLCampaignView();
    BLCampaignView();
    int * create();
    undefined4 getPresenter();
    undefined4 getTableViewInfo();
    undefined4 getTableViewTotal();
    undefined4 getBtnClose();
    undefined4 getSpAD();
    undefined4 getLabADTime();
    undefined4 getLabDes();
    bool init();
    void onEnter();
    void onExit();
};
