#pragma once
// BLMainGLSBPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainGLSBPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMainGLSBPresenter();
    void onNewEquip(cocos2d::CCObject*, unsigned int);
    void showOldEquip();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLMainGLSBPresenter();
    undefined4 create(BLMainGLSBView*);
    void onEnter();
    void onExit();
    undefined4 initWithView(BLMainGLSBView*);
    void onOldEquip(cocos2d::CCObject*, unsigned int);
    undefined8 showNewEquip();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
