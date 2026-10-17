#pragma once
// BLMonthlyContractView
// 基类: cocos2d::CCLayer
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLMonthlyContractView : public cocos2d::CCLayer {
public:
    ~BLMonthlyContractView();
    BLMonthlyContractView();
    int * create();
    undefined4 getPresenter();
    void refreshBg();
    void clearRewards();
    int * newBtn(std::string *);
    void refreshDay(std::vector<ItemData, std::allocator<ItemData>> *);
    void refreshMonth(std::vector<ItemData, std::allocator<ItemData>> *);
    void refreshLabMain();
    void refreshNow(std::vector<ItemData, std::allocator<ItemData>> *, std::vector<ItemData, std::allocator<ItemData>> *, int, int);
    void refresh(int);
    void onEnter();
    void onExit();
    bool init();

public:
    /* HW_SIZE_PAD (R94): ?????? 0x168?360 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[360];
};
