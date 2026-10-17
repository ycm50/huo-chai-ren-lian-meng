#pragma once
// BLTreasureItemListPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureItemListPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    undefined4 numOfColumn(BLGridView*);
    ~BLTreasureItemListPresenter();
    void onQuit(cocos2d::CCObject*, unsigned int);
    void onNextFlash();
    undefined4 sizeOfGridItem(BLGridView*);
    void numOfRow(BLGridView*);
    void onclose();
    void touchItemAtIndex(BLGridView*, int);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    BLTreasureItemListPresenter();
    undefined4 create(BLTreasureItemListView*);
    void onExit();
    void onEnter();
    void sortPackData(cocos2d::CCArray*);
    void inititems(cocos2d::CCArray*);
    void initWithView(BLTreasureItemListView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};
