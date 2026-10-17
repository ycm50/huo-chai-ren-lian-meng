#pragma once
// BLSevenDayEquipGiftPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSevenDayEquipGiftPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfColumn(BLGridView*);
    undefined4 numOfRow(BLGridView*);
    void tick(float);
    ~BLSevenDayEquipGiftPresenter();
    void onClose(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfGridItem(BLGridView*);
    BLSevenDayEquipGiftPresenter();
    undefined4 create(BLSevenDayEquipGiftView*);
    void onExit();
    void onEnter();
    void initSeventDayGiftData();
    void initWithView(BLSevenDayEquipGiftView*);
    void hasGetGiftToday();
    int * createGetBtn();
    void createHasGetLbl();
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void touchItemAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void onGetGift(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};
