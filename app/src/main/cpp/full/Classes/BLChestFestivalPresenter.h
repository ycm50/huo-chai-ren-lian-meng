#pragma once
// BLChestFestivalPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLChestFestivalPresenter : public cocos2d::CCObject {
public:
    cocos2d::CCArray* getArrayEquips() const;
    void setArrayEquips(cocos2d::CCArray*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void touchItemAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void tick(float);
    ~BLChestFestivalPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfGridItem(BLGridView*);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    BLChestFestivalPresenter();
    undefined4 create(BLChestFestivalView*);
    void onExit();
    void onEnter();
    void getEquipByStarAndQuity(int, int);
    void addItem(std::vector<int, std::allocator<int>> *);
    void initWithView(BLChestFestivalView*);
    int numOfColumn(BLGridView*);
    int numOfRow(BLGridView*);
    void buyAgain();
    void initWith();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};
