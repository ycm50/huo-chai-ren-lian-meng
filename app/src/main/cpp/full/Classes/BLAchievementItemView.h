#pragma once
// BLAchievementItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLAchievementItemView : public cocos2d::CCLayer {
public:
    ~BLAchievementItemView();
    BLAchievementItemView();
    int * create();
    undefined4 getPresenter();
    undefined4 getSprBG();
    undefined4 getLabTitle();
    undefined4 getLabProgress();
    undefined4 getLabDes();
    undefined4 getLabReward();
    undefined4 getSprSprGeted();
    undefined4 getSprimg_icon_1();
    undefined4 getBtnGet();
    undefined4 getLabGet();
    undefined4 getLabDoing();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};
