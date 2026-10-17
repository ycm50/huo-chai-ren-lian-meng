#pragma once
// DailySignItemData
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class DailySignItemData : public cocos2d::CCObject {
public:
    int getItemNum() const;
    void setItemNum(int);
    int getItemId() const;
    void setItemId(int);
    int getDayId() const;
    void setDayId(int);
    void setName(std::string);
    void setIcon(std::string);
    void setPrice(std::string);
    ~DailySignItemData();
    std::string getName() const;
    std::string getIcon() const;
    std::string getPrice() const;
    DailySignItemData();
    bool init();
    void initWith(char**, int&);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x2c?44 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[44];
};
