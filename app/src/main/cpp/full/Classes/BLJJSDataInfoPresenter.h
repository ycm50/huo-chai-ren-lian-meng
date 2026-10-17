#pragma once
// BLJJSDataInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLJJSDataInfoPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    void onClose(cocos2d::CCObject*, unsigned int);
    ~BLJJSDataInfoPresenter();
    BLJJSDataInfoPresenter();
    undefined4 create(BLJJSDataInfoView*);
    void onExit();
    void onEnter();
    void initWithView(BLJJSDataInfoView*);
    void initWithItemData(CircusShopItem *);
    void onBuy(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x5c?92 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[92];
};
