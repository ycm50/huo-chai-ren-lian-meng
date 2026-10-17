#pragma once
// BLCommonCostItemPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLCommonCostItemPresenter : public cocos2d::CCObject {
public:
    ~BLCommonCostItemPresenter();
    void onBtnClick(cocos2d::CCObject*, unsigned int);
    BLCommonCostItemPresenter();
    undefined4 create();
    void initWithView(BLCommonCostItemView*);
    void onEnter();
    void onExit();
    void updateItemNum(int);
    void createNumText(int, int);
    void updateNum(int);
    void updateWithId(int);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x1c?28 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[28];
};
