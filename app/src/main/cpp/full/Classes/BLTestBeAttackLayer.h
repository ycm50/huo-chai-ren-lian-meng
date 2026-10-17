#pragma once
// BLTestBeAttackLayer
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTestBeAttackLayer : public cocos2d::CCLayer {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onBeAttackCallBack(cocos2d::CCObject*, unsigned int);
    ~BLTestBeAttackLayer();
    void onTestSelectCallBack(cocos2d::CCObject*, unsigned int);
    BLTestBeAttackLayer();
    void creaTestBeAttackLayer();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x10c?268 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[268];
};
