#pragma once
// BLOnSaleItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLOnSaleItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onInfo(cocos2d::CCObject*, unsigned int);
    ~BLOnSaleItemPresenter();
    BLOnSaleItemPresenter();
    undefined4 create();
    void initWithView(BLOnSaleItemView*);
    void onEnter();
    void onExit();
    void onBuy(cocos2d::CCObject*, unsigned int);
    void initWithData(OnSaleItem *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x60?96 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[96];
};
