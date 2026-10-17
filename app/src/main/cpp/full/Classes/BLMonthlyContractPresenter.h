#pragma once
// BLMonthlyContractPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMonthlyContractPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    ~BLMonthlyContractPresenter();
    void listButtonClickAtIndex(BLListButton*, int);
    void onClose(cocos2d::CCObject*, unsigned int);
    void onHelp(cocos2d::CCObject*, unsigned int);
    void onXiangQing(cocos2d::CCObject*, unsigned int);
    BLMonthlyContractPresenter();
    void onEnter();
    void onExit();
    void onMonthlyPurchased(cocos2d::CCObject*);
    void refreshUI();
    void initWithView(BLMonthlyContractView*);
    int * create(BLMonthlyContractView*);
    void onMain(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
