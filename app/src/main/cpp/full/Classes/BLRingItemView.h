#pragma once
// BLRingItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRingItemView : public cocos2d::CCLayer {
public:
    int getIndex() const;
    void setIndex(int);
    ~BLRingItemView();
    BLRingItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getSprBG();
    undefined4 getSpNum();
    undefined4 getLabName();
    undefined4 getLabFight();
    undefined4 getBtnInfo();
    undefined4 getSprSel();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x128?296 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[296];
};
