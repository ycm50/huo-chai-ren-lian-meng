#pragma once
// BLReChargeItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLReChargeItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLReChargeItemPresenter();
    BLReChargeItemPresenter();
    undefined4 create(BLReChargeItemView*);
    void onExit();
    void onEnter();
    void initWithView(BLReChargeItemView*);
    void onBuy(cocos2d::CCObject*, unsigned int);
    void onBuyComplete(cocos2d::CCObject*);
    void initWithData(ReChargeItemData*);
    void addVirtualItem();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
