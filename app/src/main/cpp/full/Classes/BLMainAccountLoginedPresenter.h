#pragma once
// BLMainAccountLoginedPresenter
// 基类: UIObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"
#include "UIObject.h"


class BLMainAccountLoginedPresenter : public UIObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onQuite(cocos2d::CCObject*, unsigned int);
    ~BLMainAccountLoginedPresenter();
    BLMainAccountLoginedPresenter();
    undefined4 create(BLMainAccountLoginedView*);
    void onExit();
    void onEnter();
    void updateInfo();
    void initWithView(BLMainAccountLoginedView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};
