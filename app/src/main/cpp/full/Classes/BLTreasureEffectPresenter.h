#pragma once
// BLTreasureEffectPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureEffectPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onDiceAnimateEnd();
    void initWithView(BLTreasureEffectView*);
    void onEnter();
    void onExit();
    BLTreasureEffectPresenter();
    undefined4 create();
    ~BLTreasureEffectPresenter();
    void startDiceAnimate(int);
    void onReceiveDiceMsg(cocos2d::CCObject*);
    void onReceiveSpecialDiceMsg(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};
