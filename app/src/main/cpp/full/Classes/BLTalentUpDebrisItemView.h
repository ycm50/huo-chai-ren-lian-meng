#pragma once
// BLTalentUpDebrisItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLTalentUpDebrisItemView : public cocos2d::CCLayer {
public:
    ~BLTalentUpDebrisItemView();
    BLTalentUpDebrisItemView();
    void initView();
    undefined4 getPresenter();
    undefined4 getSpIcon();
    undefined4 getBtn();
    undefined4 getLabCur();
    undefined4 getLabNeed();
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x11c?284 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[284];
};
