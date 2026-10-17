#pragma once
// BLEquipUpgraceItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLEquipUpgraceItemView : public cocos2d::CCLayer {
public:
    ~BLEquipUpgraceItemView();
    BLEquipUpgraceItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getSprItemIcon();
    undefined4 getssp_UpgraceTitleBG();
    undefined4 getLabUpgrace();
    undefined4 BtnUpgrace();
    undefined4 BtnUpgraceMAX();
    undefined4 UpgraceTitle();
    undefined4 getLabPro1();
    undefined4 getLabPro2();
    undefined4 getLabPro3();
    undefined4 getLabPro4();
    undefined4 getLineDown();
    undefined4 getLineUp();
    undefined4 getPageControlStars();
    undefined4 getLineMiddle();
    undefined4 getLabEquiped();
    undefined4 getLabMax();
    undefined4 getLabStar();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x154?340 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[340];
};
