#pragma once
// BLChestTenTimePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLChestTenTimePresenter : public cocos2d::CCObject {
public:
    ChestData* getChestData() const;
    cocos2d::CCArray* getArrayEquips() const;
    void setArrayEquips(cocos2d::CCArray*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfColumn(BLGridView*);
    undefined4 numOfRow(BLGridView*);
    void touchItemAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void tick(float);
    void setChestData(ChestData*);
    ~BLChestTenTimePresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfGridItem(BLGridView*);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    BLChestTenTimePresenter();
    undefined4 create(BLChestTenTimeView*);
    void onExit();
    void onEnter();
    void initWithView(BLChestTenTimeView*);
    undefined4 randomReward(int);
    void buyAgain();
    void initWith(ChestData*);
    void getEquipByStarAndQuity(int, int);
    void onBuyAgain(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};
