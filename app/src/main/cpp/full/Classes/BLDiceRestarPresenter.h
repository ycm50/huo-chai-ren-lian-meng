#pragma once
// BLDiceRestarPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDiceRestarPresenter : public cocos2d::CCObject {
public:
    void tick(float);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onBtnOK(cocos2d::CCObject*, unsigned int);
    void onBtnNO(cocos2d::CCObject*, unsigned int);
    ~BLDiceRestarPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLDiceRestarPresenter();
    void onEnter();
    void onExit();
    undefined4 create(BLDiceRestarView*);
    void initWithView(BLDiceRestarView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
