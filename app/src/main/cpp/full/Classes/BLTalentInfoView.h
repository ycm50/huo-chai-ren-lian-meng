#pragma once
// BLTalentInfoView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentInfoView : public cocos2d::CCLayer {
public:
    ~BLTalentInfoView();
    BLTalentInfoView();
    void initView();
    undefined4 getPresenter();
    undefined4 getSprItem();
    undefined4 getLabItemName();
    undefined4 getLabNum();
    undefined4 getBtnClose();
    undefined4 getTableView();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x140?320 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[320];
};
