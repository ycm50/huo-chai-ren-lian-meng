#pragma once
// BLActivityItemView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLActivityItemView : public cocos2d::CCLayer {
public:
    ~BLActivityItemView();
    BLActivityItemView();
    int * create();
    void initTitle(ActivityData*);
    void addContent(ActivityItemData*);
    void contentShow();
    void updateUI(cocos2d::extension::CCControlButton*);
    undefined4 getPresenter();
    undefined4 getBtnShowDes();
    undefined4 getTips();
    undefined4 getArrow();
    undefined4 getlblSwitcher();
    undefined4 getContent();
    undefined4 getLblTitle();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x140?320 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[320];
};
