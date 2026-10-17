#pragma once
// ReChargeItemData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ReChargeItemData : public cocos2d::CCObject {
public:
    int getItemID() const;
    void setItemID(int);
    int getPrice() const;
    void setPrice(int);
    long long getNum() const;
    void setNum(long long);
    int getType() const;
    void setType(int);
    void setIcon(std::string);
    void setID(std::string);
    ~ReChargeItemData();
    std::string getIcon() const;
    std::string getID() const;
    ReChargeItemData();
    bool init();
    void initWith(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x38?56 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[56];
};
