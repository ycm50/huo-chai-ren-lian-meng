#pragma once
// BLOnSaleView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLOnSaleView : public cocos2d::CCLayer {
public:
    ~BLOnSaleView();
    BLOnSaleView();
    void initUI();
    undefined4 getPresenter();
    undefined4 getListButton();
    undefined4 getTableView();
    undefined4 getBtnClose();
    void initListButton(std::vector<EnumOnSaleType, std::allocator<EnumOnSaleType>>&);
    bool init();
    void onEnter();
    void onExit();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x118?280 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[280];
};
