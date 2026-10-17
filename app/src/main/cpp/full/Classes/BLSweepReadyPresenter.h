#pragma once
// BLSweepReadyPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSweepReadyPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLSweepReadyPresenter();
    void onQuit(cocos2d::CCObject*, unsigned int);
    BLSweepReadyPresenter();
    undefined4 create(BLSweepReadyView*);
    void onExit();
    void onEnter();
    void onSweepUpdate();
    undefined4 initWithView(BLSweepReadyView*);
    void onSweepTouch();
    undefined4 checkSweep(int);
    void onSweepOne(cocos2d::CCObject*, unsigned int);
    void onSweepFive(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
