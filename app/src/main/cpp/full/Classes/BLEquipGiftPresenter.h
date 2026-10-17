#pragma once
// BLEquipGiftPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEquipGiftPresenter : public cocos2d::CCObject {
public:
    GiftItemData* getGiftItemData() const;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfColumn(BLGridView*);
    ~BLEquipGiftPresenter();
    undefined8 onClose(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfGridItem(BLGridView*);
    void setGiftItemData(GiftItemData*);
    BLEquipGiftPresenter();
    undefined4 create(BLEquipGiftView*);
    void onExit();
    void onEnter();
    void initWithView(BLEquipGiftView*);
    void tick(float);
    undefined4 numOfRow(BLGridView*);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void touchItemAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void addItem();
    void onBuyComplete(cocos2d::CCObject*);
    void onGet(cocos2d::CCObject*, unsigned int);
    void onSMHCHCallback(cocos2d::CCObject*);
    void onDialyPack();
    void onWeekPack();
    void initWithData(GiftItemData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};
