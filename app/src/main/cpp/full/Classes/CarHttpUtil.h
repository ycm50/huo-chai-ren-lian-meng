#pragma once
// CarHttpUtil
// 基类: cocos2d::CCObject
#include "bl_types.h"
#include "cocos2d.h"
#include "cocos-ext.h"
#include "BLForwards.h"
#include "BLDataForwards.h"


class CarHttpUtil : public cocos2d::CCObject {
public:
    int getSetIndex() const;
    void setSetIndex(int);
    int getChariotId() const;
    void setChariotId(int);
    int getCarID() const;
    void setCarID(int);
    int getIsBuyCAR1() const;
    void setIsBuyCAR1(int);
    int getIsBuyCAR2() const;
    void setIsBuyCAR2(int);
    int getIsBuyCAR3() const;
    void setIsBuyCAR3(int);
    void getCarData();
    undefined4 getUrlCarData();
    CarHttpUtil();
    int getInstance();
    ~CarHttpUtil();
    void setSpeedRoles(std::vector<std::string, std::allocator<std::string>>);
    void setLifeRoles(std::vector<std::string, std::allocator<std::string>>);
    void setDefenseRoles(std::vector<std::string, std::allocator<std::string>>);
    void setAttackRoles(std::vector<std::string, std::allocator<std::string>>);
    int getSpeedRoles() const;
    int getLifeRoles() const;
    int getDefenseRoles() const;
    int getAttackRoles() const;
    void getADDate();
    void saveUserADDate();
    void buyChariotNum();
    void onGetUserData();
    void saveUserData();
    void onGetUserDataCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void saveUserDataCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onSaveUserCarDateCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onBuyChariotNumCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetCarDateCallback(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);

public:
    /* HW_SIZE_PAD (R94): ?????? 0x5c?92 B??
       ???????????????????????sizeof ??????
       ?????**????**??? -> ?? -> ?????? >= ??????????????*/
    unsigned char _hw_pad[92];
};
