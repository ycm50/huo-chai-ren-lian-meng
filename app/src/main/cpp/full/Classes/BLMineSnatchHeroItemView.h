#pragma once
// BLMineSnatchHeroItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMineSnatchHeroItemView : public cocos2d::CCLayer {
public:
    ~BLMineSnatchHeroItemView();
    BLMineSnatchHeroItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getLabName();
    undefined4 getPageControlStars();
    undefined4 getBtnRole();
    undefined4 getSprSelected();
    undefined4 getSprUnLockBG();
    undefined4 getSprDiamondIcon();
    undefined4 getLabDiamond();
    undefined4 getLabUnLock();
    undefined4 getLabCombat();
    undefined4 getSprQuestion();
    undefined4 getSprSprCombat();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};
