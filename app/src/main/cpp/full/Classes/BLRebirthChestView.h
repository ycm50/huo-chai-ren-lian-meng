#pragma once
// BLRebirthChestView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLRebirthChestView : public cocos2d::CCLayer {
public:
    ~BLRebirthChestView();
    BLRebirthChestView();
    int * create();
    undefined4 getPresenter();
    void setItems(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>>, int);
    undefined4 getBtnClose();
    int getBtnsItem();
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x13c?316 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[316];
};
