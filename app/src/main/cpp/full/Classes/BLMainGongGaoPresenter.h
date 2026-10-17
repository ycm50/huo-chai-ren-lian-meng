#pragma once
// BLMainGongGaoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainGongGaoPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMainGongGaoPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onWinList(cocos2d::CCObject*, unsigned int);
    void onDoing(cocos2d::CCObject*, unsigned int*);
    BLMainGongGaoPresenter();
    undefined4 create(BLMainGongGaoView*);
    void onExit();
    void onEnter();
    void initWithView(BLMainGongGaoView*);
    void updateInfo();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
