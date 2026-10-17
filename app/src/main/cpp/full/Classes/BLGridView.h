#pragma once
// BLGridView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLGridView : public cocos2d::CCLayer {
public:
    int * create();
    BLGridViewDataSource* getDataSource() const;
    void setDataSource(BLGridViewDataSource*);
    BLGridViewDelegate* getDelegate() const;
    void setDelegate(BLGridViewDelegate*);
    cocos2d::CCArray* getArrayGridItems() const;
    void setArrayGridItems(cocos2d::CCArray*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLGridView();
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void addRow(float);
    BLGridView();
    undefined4 isTouchParentInside(cocos2d::CCTouch*);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setItemPartner(cocos2d::CCNode*);
    undefined8 reloadDataByTick();
    void reloadDataOneTick();
    void removeAllItems();
    void reloadData(bool, bool);
    bool init();
    void onEnter();
    void onExit();
};
