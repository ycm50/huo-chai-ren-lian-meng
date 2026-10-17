#pragma once
// BLReChargeView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLReChargeView : public cocos2d::CCLayer {
public:
    ~BLReChargeView();
    BLReChargeView();
    int * create();
    undefined4 getPresenter();
    undefined4 getTableViewReCharge();
    undefined4 getBtnClose();
    undefined4 getBtbSanPay();
    undefined4 getBtnDuanPay();
    undefined4 getBtnExchange();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x120?288 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[288];
};
