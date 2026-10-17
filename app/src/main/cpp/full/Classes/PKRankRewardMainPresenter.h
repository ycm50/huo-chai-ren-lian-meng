#pragma once
// PKRankRewardMainPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class PKRankRewardMainPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    undefined4 numOfCellItem(BLTableView*);
    void initComplete(BLTableView*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    ~PKRankRewardMainPresenter();
    undefined4 sizeOfCellItem(BLTableView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onClose(cocos2d::CCObject*, unsigned int);
    void tick(float);
    PKRankRewardMainPresenter();
    undefined4 create(PKRankRewardMainView*);
    void onEnter();
    void onExit();
    void initWithView(PKRankRewardMainView*);
    void onRefreshRankInfo();
    void onGetReward();
    void onGetRewardFail();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x28?40 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[40];
};
