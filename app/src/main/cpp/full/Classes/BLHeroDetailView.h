#pragma once
// BLHeroDetailView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLHeroDetailView : public cocos2d::CCLayer {
public:
    ~BLHeroDetailView();
    BLHeroDetailView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBackGround();
    undefined4 getLabAre();
    undefined4 getBtnClose();
    undefined4 getLabRank();
    undefined4 getLabeTitle();
    undefined4 getLabForce();
    void onExit();
    void onEnter();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x128?296 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[296];
};
