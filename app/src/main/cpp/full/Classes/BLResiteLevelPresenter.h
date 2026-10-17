#pragma once
// BLResiteLevelPresenter
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLResiteLevelPresenter : public cocos2d::CCObject {
public:
    ~BLResiteLevelPresenter();
    void onCloseClick(cocos2d::CCObject*, unsigned int);
    void onLevelClick(cocos2d::CCObject*, unsigned int);
    BLResiteLevelPresenter();
    undefined4 create();
    void initWithView(BLResiteLevelView*);
    void onExit();
    void onEnter();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x18?24 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[24];
};
