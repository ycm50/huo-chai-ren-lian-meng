#pragma once
// BLMineSnatchBuyNumPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMineSnatchBuyNumPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMineSnatchBuyNumPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLMineSnatchBuyNumPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLMineSnatchBuyNumView*);
    void onBtnOK(cocos2d::CCObject*, unsigned int);
    void initWithView(BLMineSnatchBuyNumView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
