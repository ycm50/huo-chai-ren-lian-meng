#pragma once
// BLMirrorShopPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMirrorShopPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLMirrorShopPresenter();
    void onSelectItem(cocos2d::CCObject*);
    int numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void onClickClose(cocos2d::CCObject*, unsigned int);
    undefined8 onUpdateCostNum();
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLMirrorShopPresenter();
    undefined4 create();
    undefined8 initWithView(BLMirrorShopView*);
    void onEnter();
    void onExit();
    void onBuyCallback(cocos2d::CCObject*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};
