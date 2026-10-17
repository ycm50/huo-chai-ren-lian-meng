#pragma once
// JingJiShopItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class JingJiShopItemPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~JingJiShopItemPresenter();
    JingJiShopItemPresenter();
    void onEnter();
    void onExit();
    undefined4 create();
    void initWithView(JingJiShopItemView*);
    void tick(float);
    void initWithData(CircusShopItem&);
    void onBuy(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x5c?92 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[92];
};
