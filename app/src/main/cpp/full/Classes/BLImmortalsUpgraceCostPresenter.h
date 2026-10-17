#pragma once
// BLImmortalsUpgraceCostPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLImmortalsUpgraceCostPresenter : public cocos2d::CCObject {
public:
    ~BLImmortalsUpgraceCostPresenter();
    BLImmortalsUpgraceCostPresenter();
    undefined4 create();
    void initWithView(BLImmortalsUpgraceCostView*);
    void onEnter();
    void onExit();
    void removeItem(int, int);
    void onUpgrace(cocos2d::CCObject*, unsigned int);
    void updateWithData(ImmortalsRoleItemData*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
