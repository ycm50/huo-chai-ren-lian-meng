#pragma once
// BLTreasureGameResultPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureGameResultPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void tick(float);
    undefined4 numOfColumn(BLGridView*);
    void touchItemAtIndex(BLGridView*, int);
    undefined4 sizeOfGridItem(BLGridView*);
    void onQuit(cocos2d::CCObject*, unsigned int);
    void numOfRow(BLGridView*);
    void onExit();
    void onEnter();
    void sortPackallData(cocos2d::CCArray*);
    void initallitems(cocos2d::CCArray*);
    void sortPackbossData(cocos2d::CCArray*);
    void initbossitems(cocos2d::CCArray*);
    void updateview();
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void addItem(std::vector<int, std::allocator<int>> *);
    BLTreasureGameResultPresenter();
    undefined4 create(BLTreasureGameResultView*);
    ~BLTreasureGameResultPresenter();
    void initWithView(BLTreasureGameResultView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x4c?76 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[76];
};
