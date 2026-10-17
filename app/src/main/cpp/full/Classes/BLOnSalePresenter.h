#pragma once
// BLOnSalePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLOnSalePresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onClose(cocos2d::CCObject*, unsigned int);
    undefined4 sizeOfCellItem(BLTableView*);
    void onEnter();
    void onExit();
    void setCurOnSaleType();
    void listButtonClickAtIndex(BLListButton*, int);
    void tick(float);
    void addItem(std::vector<int, std::allocator<int>> *);
    BLOnSalePresenter();
    undefined4 create();
    ~BLOnSalePresenter();
    void numOfCellItem(BLTableView*);
    void onBuySuccess(cocos2d::CCObject*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onRefreshData();
    undefined4 initWithView(BLOnSaleView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x4c?76 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[76];
};
