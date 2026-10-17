#pragma once
// BLBackPackArrangeView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLBackPackArrangeView : public cocos2d::CCLayer {
public:
    ~BLBackPackArrangeView();
    BLBackPackArrangeView();
    void initView();
    undefined4 getPresenter();
    undefined4 getBtnSell();
    int getItemView();
    undefined4 getBtnClose();
    undefined4 getItemCounts();
    void getSelects(bool*);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x138?312 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[312];
};
