#pragma once
// BLTimeHeroPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTimeHeroPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLTimeHeroPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    BLTimeHeroPresenter();
    undefined4 create(BLTimeHeroView*);
    void onExit();
    void onEnter();
    void onChangeView(cocos2d::CCObject*);
    void addItem(std::vector<int, std::allocator<int>> *);
    void showView();
    void showTime();
    undefined4 initWithView(BLTimeHeroView*);
    void onChargeComplete(cocos2d::CCObject*);
    void onPay(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
