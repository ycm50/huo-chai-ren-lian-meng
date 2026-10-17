#pragma once
// BLSkillItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSkillItemView : public cocos2d::CCLayer {
public:
    ~BLSkillItemView();
    BLSkillItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 BtnUpgrace();
    undefined4 BtnUpgraceMAX();
    undefined4 getLabName();
    undefined4 getLabLV();
    undefined4 getLabCD();
    undefined4 getLabHurt();
    undefined4 getLineDown();
    undefined4 getLineUp();
    undefined4 getLineMiddle();
    undefined4 getLabMax();
    undefined4 getSprSkillIcon();
    undefined4 getLabUnLock();
    undefined4 getLabCDNext();
    undefined4 getLabHurtNext();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x148?328 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[328];
};
