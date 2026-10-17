#pragma once
// BLMissionRewardInfoPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMissionRewardInfoPresenter : public cocos2d::CCObject {
public:
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    int numOfCellItem(BLTableView*);
    undefined4 sizeOfCellItem(BLTableView*);
    void onBtnClose(cocos2d::CCObject*, unsigned int);
    void nodeOfCellItemAtIndex(BLTableView*, cocos2d::CCNode*, int);
    void initWithView(BLMissionRewardInfoView*);
    void onEnter();
    void onExit();
    void onBtnAccept(cocos2d::CCObject*, unsigned int);
    ~BLMissionRewardInfoPresenter();
    BLMissionRewardInfoPresenter();
    undefined4 create();
    void updateWithData(std::vector<CostItemData*, std::allocator<CostItemData*>>&, bool);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x38?56 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[56];
};
