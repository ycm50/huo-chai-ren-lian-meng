#pragma once
// BLCampaignPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLCampaignPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ~BLCampaignPresenter();
    void sizeOfCellItem(BLTableView*);
    void onRefreshImg();
    void onClose(cocos2d::CCObject*, unsigned int);
    void onListenRewardId(cocos2d::CCObject*);
    BLCampaignPresenter();
    undefined4 create();
    void onEnter();
    void onExit();
    void tick(float);
    void onClickItem(cocos2d::CCObject*, unsigned int);
    void addItem(std::vector<int, std::allocator<int>> *);
    int numOfCellItem(BLTableView*);
    void touchItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void freshenActivity();
    void onRefreshCampaign();
    undefined4 initWithView(BLCampaignView*);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void onGetRewardSuccess();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x30?48 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[48];
};
