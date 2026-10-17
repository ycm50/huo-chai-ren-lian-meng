#pragma once
// BLBackPackLayer
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLBackPackLayer : public cocos2d::CCLayer {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfColumn(BLGridView*);
    undefined4 sizeOfGridItem(BLGridView*);
    undefined4 numOfRow(BLGridView*);
    void onCloseClice(cocos2d::CCObject*, unsigned int);
    void onSell(cocos2d::CCObject*, unsigned int);
    void onArrange(cocos2d::CCObject*, unsigned int);
    BLBackPackLayer();
    ~BLBackPackLayer();
    void sortBackPackData();
    void listButtonClickAtIndex(BLListButton*, int);
    void touchItemAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void onSelectNextItem(cocos2d::CCObject*);
    void onBackPackUpdate(cocos2d::CCObject*);
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x154?340 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[340];
};
