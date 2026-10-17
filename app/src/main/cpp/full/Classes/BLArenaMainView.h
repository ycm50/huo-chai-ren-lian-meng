#pragma once
// BLArenaMainView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLArenaMainView : public cocos2d::CCLayer {
public:
    cocos2d::CCArray* getArrayItem() const;
    void setArrayItem(cocos2d::CCArray*);
    ~BLArenaMainView();
    void onUpdateVirtualItemData(cocos2d::CCObject*);
    BLArenaMainView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getBtnShop();
    undefined4 getLabVs();
    undefined4 getbgJiFen();
    undefined4 getjifen();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x124?292 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[292];
};
