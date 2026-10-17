#pragma once
// BLImmortalsComposePresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLImmortalsComposePresenter : public cocos2d::CCObject {
public:
    void tick(float);
    ~BLImmortalsComposePresenter();
    int numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLImmortalsComposePresenter();
    void onEnter();
    void onExit();
    void resetUI();
    void initWithView(BLImmortalsComposeView*);
    int * create(BLImmortalsComposeView*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onComposeClick(cocos2d::CCObject*, unsigned int);
    void onItemClick(cocos2d::CCObject*, unsigned int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};
