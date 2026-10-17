#pragma once
// BLFestivalPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFestivalPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLFestivalPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onClickInfo(cocos2d::CCObject*, unsigned int);
    void getDateFial();
    BLFestivalPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLFestivalView*);
    undefined4 initWithView(BLFestivalView*);
    void initScroView();
    void onGetReward(cocos2d::CCObject*, unsigned int);
    void BuySucceed();
    void updateView();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
