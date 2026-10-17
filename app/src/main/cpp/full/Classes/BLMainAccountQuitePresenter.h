#pragma once
// BLMainAccountQuitePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAccountQuitePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onRight(cocos2d::CCObject*, unsigned int);
    void onLeft(cocos2d::CCObject*, unsigned int);
    void tick(float);
    ~BLMainAccountQuitePresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onOK(cocos2d::CCObject*, unsigned int);
    void onCancel(cocos2d::CCObject*, unsigned int);
    BLMainAccountQuitePresenter();
    undefined4 create(BLMainAccountQuiteView*);
    void onExit();
    void onEnter();
    void updateInfo();
    void initWithView(BLMainAccountQuiteView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
