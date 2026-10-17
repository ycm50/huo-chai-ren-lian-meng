#pragma once
// BLTreasureRecordPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureRecordPresenter : public cocos2d::CCObject {
public:
    ~BLTreasureRecordPresenter();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    BLTreasureRecordPresenter();
    undefined4 create();
    void initWithView(BLTreasureRecordView*);
    void onExit();
    void refreshRecord();
    void addItem(cocos2d::CCArray*);
    void updateItemPos();
    int * onReceiveMsgAddRecord();
    void onEnter();
    void onMovingEnd();
    int * addOneByOne();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x4c?76 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[76];
};
