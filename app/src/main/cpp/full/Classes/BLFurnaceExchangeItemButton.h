#pragma once
// BLFurnaceExchangeItemButton
// 基类: (无)
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class BLFurnaceExchangeItemButton {
public:
    ~BLFurnaceExchangeItemButton();
    int * create();
    void setName(std::string const&);
    void setCount(int);
    void setAlreadyBuy(bool);
    void setPrice(int);
    void setIcon(std::string const&);
    bool init();
};
