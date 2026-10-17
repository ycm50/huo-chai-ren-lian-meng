#pragma once
// BLTreasureMenuView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTreasureMenuView : public cocos2d::CCLayer {
public:
    ~BLTreasureMenuView();
    BLTreasureMenuView();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getBtnAbout();
    undefined4 getBtnHeroInfo();
    undefined4 getBtnRecieve();
    undefined4 getBtnJiantouTop();
    undefined4 getBtnJiantouDown();
    undefined4 getarrowup();
    undefined4 getarrowdown();
    void onUpdateVirtualItemData(cocos2d::CCObject*);
    void initView();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x134?308 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[308];
};
