#pragma once
// BLPracticeItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPracticeItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLPracticeItemPresenter();
    BLPracticeItemPresenter();
    undefined4 create(BLPracticeItemView*);
    void onEnter();
    void onExit();
    undefined4 initWithView(BLPracticeItemView*);
    void setviewaddinfo();
    void onAddHero(cocos2d::CCObject*, unsigned int);
    void onOpenHero(cocos2d::CCObject*, unsigned int);
    void setviewnullinfo();
    void onComplete(cocos2d::CCObject*, unsigned int);
    void setviewgooninfo();
    void setviewshow();
    void tick(float);
    void setitemid(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};
