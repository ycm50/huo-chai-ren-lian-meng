#pragma once
// BLExchangeGiftPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLExchangeGiftPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLExchangeGiftPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLExchangeGiftPresenter();
    undefined4 create(BLExchangeGiftView*);
    void onExit();
    void onEnter();
    void initWithView(BLExchangeGiftView*);
    void onBuyComplete(cocos2d::CCObject*);
    void addItem(std::vector<int, std::allocator<int>> *);
    void onRequestComplete(cocos2d::CCObject*, cocos2d::extension::CCHttpResponse*);
    void request();
    void onSure(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
