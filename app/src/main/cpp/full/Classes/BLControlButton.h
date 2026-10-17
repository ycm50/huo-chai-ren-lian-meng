#pragma once
// BLControlButton
// 基类: cocos2d::extension::CCControlButton
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLControlButton : public cocos2d::extension::CCControlButton {
public:
    int * create();
    ~BLControlButton();
    void registerWithTouchDispatcher();
    void ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*);
    void ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*);
    BLControlButton();
    bool init();
    void onEnter();
    void onExit();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x198?408 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[408];
};
