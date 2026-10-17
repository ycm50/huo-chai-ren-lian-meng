#pragma once
// ChallengeTicketPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ChallengeTicketPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~ChallengeTicketPresenter();
    void onCancelClick(cocos2d::CCObject*, unsigned int);
    void onBuyFail();
    void onClick100(cocos2d::CCObject*, unsigned int);
    void onClick300(cocos2d::CCObject*, unsigned int);
    void onClick500(cocos2d::CCObject*, unsigned int);
    void onBuySucceed();
    ChallengeTicketPresenter();
    void onEnter();
    void onExit();
    undefined4 create(ChallengeTicketView*);
    void initWithView(ChallengeTicketView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
