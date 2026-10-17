#pragma once
// FestivalHttpUtil
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class FestivalHttpUtil : public cocos2d::CCObject {
public:
    void setStartTime(std::string *);
    void setEndTime(std::string *);
    void setFestivalID(std::string *);
    std::string getStartTime() const;
    std::string getEndTime() const;
    std::string getFestivalID() const;
    void getFestivalDate();
    int getRewardDate() const;
    ~FestivalHttpUtil();
    FestivalHttpUtil();
    int getInstance();
    void setRewardDate(std::vector<FestivalsDate, std::allocator<FestivalsDate>> *);
    undefined8 setUserBuyNumber(std::vector<int, std::allocator<int>> *);
    int getUserBuyNumber() const;
    void getBuyState(int);
    void onGetFestivalDateCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetBuyStateCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x38?56 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[56];
};
