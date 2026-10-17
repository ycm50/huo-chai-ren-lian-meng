#pragma once
// BLCampaignInfoItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLCampaignInfoItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLCampaignInfoItemPresenter();
    BLCampaignInfoItemPresenter();
    void onEnter();
    void onExit();
    undefined4 create();
    void initWithView(BLCampaignInfoItemView*);
    void updateInfo(CampaignChildInfo&);
    void setCampaignId(int, int, int);
    void onGetReward(cocos2d::CCObject*, unsigned int);
    void initWithData(CampaignInfo&, CampaignChildInfo&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};
