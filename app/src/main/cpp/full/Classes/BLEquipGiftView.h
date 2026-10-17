#pragma once
// BLEquipGiftView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEquipGiftView : public cocos2d::CCLayer {
public:
    ~BLEquipGiftView();
    BLEquipGiftView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getTabBg();
    undefined4 getBtnClose();
    undefined4 getLabTitle();
    undefined4 getBtnGet();
    undefined4 getLabName();
    undefined4 getGridViewItemList();
    undefined4 getLabPrice();
    undefined4 getLabPriceNow();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x130?304 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[304];
};
