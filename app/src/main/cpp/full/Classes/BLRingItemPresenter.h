#pragma once
// BLRingItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRingItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void onInfo(cocos2d::CCObject*, unsigned int);
    ~BLRingItemPresenter();
    BLRingItemPresenter();
    undefined4 create(BLRingItemView*);
    void onEnter();
    void onExit();
    undefined4 initWithView(BLRingItemView*);
    void updateData();
    void initWith(CircusPlayerinfo const&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x80?128 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[128];
};
