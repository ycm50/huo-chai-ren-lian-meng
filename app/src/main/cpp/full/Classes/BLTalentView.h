#pragma once
// BLTalentView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentView : public cocos2d::CCLayer {
public:
    ~BLTalentView();
    BLTalentView();
    undefined4 getPresenter();
    undefined4 getBtnClose();
    undefined4 getListBtn();
    undefined4 getUpInfoView();
    undefined4 getDownInfoView();
    undefined4 getLabVipTips();
    undefined4 getBtnVip();
    undefined4 getBtnActive();
    undefined4 getLabActiveFree();
    undefined4 getTextActive();
    undefined4 getLabActiveAlready();
    undefined4 getLabActiveAble();
    undefined4 getLimitView();
    void initView();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x140?320 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[320];
};
