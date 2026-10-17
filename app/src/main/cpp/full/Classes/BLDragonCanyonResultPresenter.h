#pragma once
// BLDragonCanyonResultPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLDragonCanyonResultPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    undefined4 numOfColumn(BLGridView*);
    ~BLDragonCanyonResultPresenter();
    void onQuit(cocos2d::CCObject*, unsigned int);
    void numOfRow(BLGridView*);
    undefined4 sizeOfGridItem(BLGridView*);
    void touchItemAtIndex(BLGridView*, int);
    BLDragonCanyonResultPresenter();
    undefined4 create(BLDragonCanyonResultView*);
    void onExit();
    void onEnter();
    void initWith(bool);
    void initData();
    void sortBackPackData();
    void onClickInfo(cocos2d::CCObject*, unsigned int);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void addItem(std::vector<int, std::allocator<int>> *);
    void initWithView(BLDragonCanyonResultView*);
    void onSuccessRewards();
    void netcallbacksave();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};
