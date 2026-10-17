#pragma once
// BLMoneyTreeWinResultPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMoneyTreeWinResultPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    int numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void onBtnClick(cocos2d::CCObject*, unsigned int);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    ~BLMoneyTreeWinResultPresenter();
    BLMoneyTreeWinResultPresenter();
    undefined4 create();
    void onExit();
    void updateWithData();
    void randomReward(std::vector<int, std::allocator<int>>&);
    int * getItem(int);
    void onEnter();
    void initReward();
    void initWithView(BLMoneyTreeWinResultView*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};
