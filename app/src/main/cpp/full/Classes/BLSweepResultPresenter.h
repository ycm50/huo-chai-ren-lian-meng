#pragma once
// BLSweepResultPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSweepResultPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    undefined4 numOfColumn(BLGridView*);
    ~BLSweepResultPresenter();
    undefined4 sizeOfGridItem(BLGridView*);
    void onQuit(cocos2d::CCObject*, unsigned int);
    void numOfRow(BLGridView*);
    void touchItemAtIndex(BLGridView*, int);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    BLSweepResultPresenter();
    undefined4 create(BLSweepResultView*);
    void onEnter();
    void sortPackData(cocos2d::CCArray*);
    void inititems(cocos2d::CCArray*);
    void addItems(cocos2d::CCArray*);
    void onExit();
    void updateview();
    undefined4 initWithView(BLSweepResultView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};
