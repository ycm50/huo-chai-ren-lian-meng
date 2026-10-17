#pragma once
// BLTableView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTableView : public cocos2d::CCLayer {
public:
    int * create();
    BLTableViewDataSource* getDataSource() const;
    void setDataSource(BLTableViewDataSource*);
    BLTableViewDelegate* getDelegate() const;
    void setDelegate(BLTableViewDelegate*);
    bool getISNewPos() const;
    void setISNewPos(bool);
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 sizeOfGridItem(BLGridView*);
    void nodeOfGridViewAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void touchItemAtIndex(BLGridView*, cocos2d::CCNode*, int);
    void initComplete(BLGridView*);
    int getType();
    cocos2d::CCSize getViewSize();
    void setViewSize(cocos2d::CCSize);
    void onExit();
    void onEnter();
    ~BLTableView();
    void numOfColumn(BLGridView*);
    void numOfRow(BLGridView*);
    void setType(EnumTableViewType);
    bool init();
    BLTableView();
    void reloadData(bool, bool);
    bool isScrollMin();
    bool isScrollMax();
    void setCurrentIndex(int);
    int getCurrentIndex();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x134?308 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[308];
};
