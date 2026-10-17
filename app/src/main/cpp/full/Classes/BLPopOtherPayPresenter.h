#pragma once
// BLPopOtherPayPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPopOtherPayPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLPopOtherPayPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onPay_duan(cocos2d::CCObject*, unsigned int);
    void onPay_other(cocos2d::CCObject*, unsigned int);
    BLPopOtherPayPresenter();
    undefined4 create(BLPopOtherPayView*);
    void onExit();
    void onEnter();
    void initWithView(BLPopOtherPayView*);
    void initWithRichData(cocos2d::CCArray*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
