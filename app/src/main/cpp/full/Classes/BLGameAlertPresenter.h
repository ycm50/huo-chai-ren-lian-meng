#pragma once
// BLGameAlertPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGameAlertPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLGameAlertPresenter();
    void onSure(cocos2d::CCObject*, unsigned int);
    void onCancle(cocos2d::CCObject*, unsigned int);
    BLGameAlertPresenter();
    undefined4 create(BLGameAlertView*);
    void onExit();
    void onEnter();
    void initWithView(BLGameAlertView*);
    void initWithRichData(cocos2d::CCArray*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
