#pragma once
// BLSuitComposeListPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitComposeListPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    int numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void onEnter();
    void onExit();
    BLSuitComposeListPresenter();
    undefined4 create();
    ~BLSuitComposeListPresenter();
    void initNumData();
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    undefined4 getDefaultId();
    void initSuitData();
    void initAllItemData();
    void initWithView(BLSuitComposeListView*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void updateLists();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x5c?92 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[92];
};
