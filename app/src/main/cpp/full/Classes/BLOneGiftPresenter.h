#pragma once
// BLOneGiftPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLOneGiftPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLOneGiftPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onBuyComplete(cocos2d::CCObject*);
    void onGet(cocos2d::CCObject*, unsigned int);
    BLOneGiftPresenter();
    undefined4 create(BLOneGiftView*);
    void onExit();
    void onEnter();
    undefined4 initWithView(BLOneGiftView*);
    void addItem(std::vector<int, std::allocator<int>> *);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
