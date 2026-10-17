#pragma once
// BLLivenessMissionPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLLivenessMissionPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    ~BLLivenessMissionPresenter();
    int numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    BLLivenessMissionPresenter();
    undefined4 create();
    void initWithView(BLLivenessMissionView*);
    void initWithData();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};
