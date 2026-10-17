#pragma once
// BLSuitUpgraceCostPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSuitUpgraceCostPresenter : public cocos2d::CCObject {
public:
    void onResetClick();
    ~BLSuitUpgraceCostPresenter();
    BLSuitUpgraceCostPresenter();
    undefined4 create();
    void initWithView(BLSuitUpgraceCostView*);
    void onEnter();
    void onExit();
    void removeItem(int, int);
    void onUpGrace(cocos2d::CCObject*, unsigned int);
    undefined4 initNumData(int, int);
    void initWithData(BackPackItemData*);
    void updateValue();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x20?32 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[32];
};
