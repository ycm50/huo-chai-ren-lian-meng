#pragma once
// BLPetListPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLPetListPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLPetListPresenter();
    int numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    BLPetListPresenter();
    undefined4 create();
    void initWithView(BLPetListView*);
    void onEnter();
    void onExit();
    void updateView();
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};
