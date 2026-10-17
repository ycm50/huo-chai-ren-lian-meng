#pragma once
// BLFundPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFundPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfCellItem(BLTableView*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void tick(float);
    ~BLFundPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLFundPresenter();
    undefined4 create(BLFundView*);
    undefined4 initWithView(BLFundView*);
    void onEnter();
    void onExit();
    void onChargeComplete(cocos2d::CCObject*);
    void onGetFund(cocos2d::CCObject*, unsigned int);
    void onFundBuy(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};
