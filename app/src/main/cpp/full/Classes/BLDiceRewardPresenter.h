#pragma once
// BLDiceRewardPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDiceRewardPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLDiceRewardPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onBtnOK(cocos2d::CCObject*, unsigned int);
    BLDiceRewardPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLDiceRewardView*);
    void initWithView(BLDiceRewardView*);
    void initHeroIndex(int);
    void onItemClick(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
