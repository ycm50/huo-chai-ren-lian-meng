#pragma once
// BLMainAccountPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMainAccountPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMainAccountPresenter();
    void updateInfo();
    void onJieShao(cocos2d::CCObject*, unsigned int);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onZhuCeAccount(cocos2d::CCObject*, unsigned int);
    void onLogin(cocos2d::CCObject*, unsigned int);
    BLMainAccountPresenter();
    undefined4 create(BLMainAccoutView*);
    void onExit();
    void onEnter();
    void initWithView(BLMainAccoutView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
