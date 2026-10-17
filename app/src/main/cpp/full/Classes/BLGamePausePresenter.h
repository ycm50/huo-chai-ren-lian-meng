#pragma once
// BLGamePausePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGamePausePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLGamePausePresenter();
    void onGoOn(cocos2d::CCObject*, unsigned int);
    void onQuit(cocos2d::CCObject*, unsigned int);
    BLGamePausePresenter();
    undefined4 create(BLGamePauseView*);
    void onExit();
    void onEnter();
    void updateInfo();
    void initWithView(BLGamePauseView*);
    void onMusic(cocos2d::CCObject*, unsigned int);
    void onSound(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
