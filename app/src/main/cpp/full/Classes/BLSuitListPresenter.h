#pragma once
// BLSuitListPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitListPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    int getIndex() const;
    void setIndex(int);
    cocos2d::CCArray* getArrayBackItems() const;
    void setArrayBackItems(cocos2d::CCArray*);
    void touchItemAtIndex(BLTableView*, int);
    void tick(float);
    ~BLSuitListPresenter();
    void numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLSuitListPresenter();
    undefined4 create(BLSuitListView*);
    void onExit();
    void onEnter();
    undefined4 initWithView(BLSuitListView*);
    undefined8 initSuitList();
    void initPageIndex();
    void onPageChange(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};
