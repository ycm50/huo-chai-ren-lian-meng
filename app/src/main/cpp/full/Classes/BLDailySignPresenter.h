#pragma once
// BLDailySignPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDailySignPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfCellItem(BLTableView*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    ~BLDailySignPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfCellItem(BLTableView*);
    void tick(float);
    BLDailySignPresenter();
    void onExit();
    void onEnter();
    void initWithView(BLDailySignView*);
    void onRight(cocos2d::CCObject*, unsigned int);
    void onLeft(cocos2d::CCObject*, unsigned int);
    void initDailySignData();
    undefined4 create(BLDailySignView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};
