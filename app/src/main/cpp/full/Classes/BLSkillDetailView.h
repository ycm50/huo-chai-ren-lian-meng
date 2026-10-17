#pragma once
// BLSkillDetailView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLSkillDetailView : public cocos2d::CCLayer {
public:
    ~BLSkillDetailView();
    BLSkillDetailView();
    int * create();
    undefined4 getPresenter();
    undefined4 getBG();
    undefined4 getLineUp();
    undefined4 getLabLvTitle();
    undefined4 getLabHurtTitle();
    undefined4 getLabEffectTitle();
    undefined4 getLabCDTitle();
    undefined4 getLabNexLvTitle();
    undefined4 getLabNexHurtTitle();
    undefined4 getLabNextEffectTitle();
    undefined4 getLabNextCDTitle();
    undefined4 getLabLv();
    undefined4 getLabHurt();
    undefined4 getLabEffect();
    undefined4 getLabCD();
    undefined4 getLabNextLv();
    undefined4 getLabNextHurt();
    undefined4 getLabNextEffect();
    undefined4 getLabNextCD();
    undefined4 getLabDetail();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x15c?348 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[348];
};
