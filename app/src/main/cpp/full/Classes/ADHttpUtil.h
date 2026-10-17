#pragma once
// ADHttpUtil
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class ADHttpUtil : public cocos2d::CCObject {
public:
    int getRewardNumber() const;
    void setRewardNumber(int);
    ~ADHttpUtil();
    ADHttpUtil();
    int getInstance();
    undefined8 setRewardDate(std::vector<ADDate, std::allocator<ADDate>> *);
    int getRewardDate() const;
    void getADDate();
    void saveUserADDate();
    void onSaveUserADDateCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetADDateCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x24?36 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[36];
};
