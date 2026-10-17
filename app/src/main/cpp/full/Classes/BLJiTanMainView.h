#pragma once
// BLJiTanMainView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLJiTanMainView : public cocos2d::CCLayer {
public:
    ~BLJiTanMainView();
    BLJiTanMainView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getBtnHelp();
    undefined4 getBtnPayHero();
    undefined4 getBtnZhaoMuFree();
    undefined4 getBtnZhaoMuOne();
    undefined4 getBtnZhaoMuTen();
    undefined4 getLabelHeroName();
    undefined4 getLabelLuckValue();
    undefined4 getLabelTitle();
    undefined4 getSpHero();
    undefined4 getTableView();
    undefined4 getLabelHuoYan();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x13c?316 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[316];
};
